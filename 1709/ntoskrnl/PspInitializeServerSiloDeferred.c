/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1407153F0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1407154E4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     CmInitServerSiloState @ 0x1405BFC38 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1405E0210 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x1406A98F0 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x14071588C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140715BEC (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1407198B4 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
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
              || (inited = EtwInitializeSiloState(a1), inited < 0)
              || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
            {
              ServerSiloGlobals[272] = 4;
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
