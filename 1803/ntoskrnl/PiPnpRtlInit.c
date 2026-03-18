/*
 * XREFs of PiPnpRtlInit @ 0x140622640
 * Callers:
 *     PnpBootPhaseComplete @ 0x14062461C (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x1406227D4 (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x140622800 (PiDrvDbInit.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140623D78 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x140623FA8 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x1407E6DF4 (_PnpCtxRegisterMachineNode.c)
 */

__int64 __fastcall PiPnpRtlInit(unsigned int a1)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r9d
  int v14; // [rsp+50h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  Handle = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_1403C69F8 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  v2 = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( v2 >= 0 )
    {
      v2 = PnpCtxOpenMachine(v4, 0, v5, 0);
      if ( v2 >= 0 )
      {
        if ( (MEMORY[0xFFFFF780000002F0] & 0x400) == 0
          || (*(_QWORD *)&PiPnpRtlCtx ? (v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) : (v11 = 0LL),
              (int)SysCtxRegOpenKey(v11, 2147483650LL, (__int64)L"DEVICES", 0, 0x2000000u, (__int64)&Handle) < 0
           || (v2 = PnpCtxRegisterMachineNode(v12, (unsigned int)L"DEVICES", 2, v13, (__int64)Handle),
               ZwClose(Handle),
               v2 >= 0)) )
        {
          v2 = PiDrvDbEnumDriverStoreNodes(PiPnpRtlRegisterDriverMachineNodeCallback, &v14);
          if ( v2 >= 0 )
          {
            v2 = v14;
            if ( v14 >= 0 )
            {
              v2 = PnpCtxSetNtPlugPlayRoutine(v6, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
              if ( v2 >= 0 )
              {
                v2 = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
                if ( v2 >= 0 )
                {
                  v2 = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
                  if ( v2 >= 0 )
                  {
                    v2 = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
                    if ( v2 >= 0 )
                    {
                      v2 = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                      if ( v2 >= 0 )
                      {
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 488LL),
                          (__int64)PiPnpRtlObjectActionCallback);
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 504LL),
                          (__int64)PiPnpRtlCmActionCallback);
                        _InterlockedExchange64(
                          (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 496LL),
                          (__int64)PiPnpRtlObjectEventCallback);
                        return (unsigned int)PiDrvDbInit(a1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
