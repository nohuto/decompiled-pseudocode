/*
 * XREFs of PiPnpRtlInit @ 0x1405C620C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     _PnpCtxOpenMachine @ 0x1405C4AF8 (_PnpCtxOpenMachine.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x1405C632C (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x1405C6358 (PiDrvDbInit.c)
 */

int __fastcall PiPnpRtlInit(unsigned int a1)
{
  int result; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]

  if ( a1 )
    return PiDrvDbInit(a1);
  qword_140383578 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  result = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( result >= 0 )
  {
    result = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( result >= 0 )
    {
      result = PnpCtxOpenMachine(v4, v3, v5, 0, v11, v12, &PiPnpRtlCtx);
      if ( result >= 0 )
      {
        result = PnpCtxSetNtPlugPlayRoutine(v6, a1 + 1, PiPnpRtlGetDeviceNtPropertyRoutine);
        if ( result >= 0 )
        {
          result = PnpCtxSetNtPlugPlayRoutine(v7, a1 + 2, PiPnpRtlGetDeviceStatus);
          if ( result >= 0 )
          {
            result = PnpCtxSetNtPlugPlayRoutine(v8, a1 + 3, PiPnpRtlGetDeviceRelatedDeviceRoutine);
            if ( result >= 0 )
            {
              result = PnpCtxSetNtPlugPlayRoutine(v9, a1 + 4, PiPnpRtlGetDeviceRelationsList);
              if ( result >= 0 )
              {
                result = PnpCtxSetNtPlugPlayRoutine(v10, a1 + 5, PiPnpRtlGetDeviceInterfaceEnabled);
                if ( result >= 0 )
                {
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 312LL),
                    (__int64)PiPnpRtlObjectActionCallback);
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 328LL),
                    (__int64)PiPnpRtlCmActionCallback);
                  _InterlockedExchange64(
                    (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 320LL),
                    (__int64)PiPnpRtlObjectEventCallback);
                  return PiDrvDbInit(a1);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
