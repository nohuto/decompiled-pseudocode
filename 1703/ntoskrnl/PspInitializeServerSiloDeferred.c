/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1406DEF80
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1406DF064 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     CmInitServerSiloState @ 0x1405A37B0 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1405CC41C (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x1405CE6D4 (ObInitServerSilo.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1406DF40C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1406DF778 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1406E32E0 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(__int64 a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  result = PspSiloInitializeUserSharedData(a1);
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeSystemRootSymlink(a1);
    if ( (int)result >= 0 )
    {
      result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
      if ( (int)result >= 0 )
      {
        result = PspSiloLoadApiSets(a1);
        if ( (int)result >= 0 )
        {
          result = PspSiloInitializeIsMultiSessionSku(a1);
          if ( (int)result >= 0 )
          {
            inited = ObInitServerSilo(a1);
            if ( inited < 0
              || (inited = SeInitServerSilo(a1), inited < 0)
              || (inited = CmInitServerSiloState(a1), inited < 0)
              || (inited = EtwInitializeSiloState(a1), inited < 0) )
            {
              ServerSiloGlobals[264] = 4;
              PspDeleteExternalServerSiloState(a1);
            }
            else
            {
              inited = PspNotifyServerSiloCreation(a1);
              if ( inited >= 0 )
                return 0LL;
              PsTerminateServerSilo(a1);
            }
            return (unsigned int)inited;
          }
        }
      }
    }
  }
  return result;
}
