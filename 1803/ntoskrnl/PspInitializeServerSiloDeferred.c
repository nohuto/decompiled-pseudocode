/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x140779580
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x140779674 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     CmInitServerSiloState @ 0x1406203CC (CmInitServerSiloState.c)
 *     ObInitServerSilo @ 0x140620A04 (ObInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x140649280 (PspInitializeProtectedProcessParameters.c)
 *     DbgkInitializeServerSilo @ 0x14070E058 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140778C00 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140779254 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140779A1C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140779D80 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14077D614 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(__int64 a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  result = PspSiloInitializeUserSharedData();
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
