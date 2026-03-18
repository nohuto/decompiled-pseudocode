/*
 * XREFs of CsInitialize @ 0x1C000C194
 * Callers:
 *     DriverEntry @ 0x1C000C320 (DriverEntry.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0001EA0 (WPP_SF_D.c)
 *     WppInitKm @ 0x1C000A0D0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000A160 (WppLoadTracingSupport.c)
 *     CiNdisThrottleInitialize @ 0x1C000C078 (CiNdisThrottleInitialize.c)
 *     CiDispatchInitialize @ 0x1C000C0B8 (CiDispatchInitialize.c)
 *     CiThreadInitialize @ 0x1C000C5C4 (CiThreadInitialize.c)
 *     CiConfigInitialize @ 0x1C000C620 (CiConfigInitialize.c)
 *     CiSystemInitialize @ 0x1C000D11C (CiSystemInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000D19C (CiSchedulerInitialize.c)
 */

__int64 __fastcall CsInitialize(struct _DRIVER_OBJECT *a1)
{
  __int64 v2; // rdx
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MmcssTrace;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = EtwRegister(&MMCSS_ETW_PROVIDER, (PETWENABLECALLBACK)CiLogControlCallback, 0LL, &CiLoggerContext);
  if ( v3 >= 0 )
  {
    v3 = CiSystemInitialize();
    if ( v3 >= 0 )
    {
      v3 = CiConfigInitialize();
      if ( v3 >= 0 )
      {
        v3 = CiThreadInitialize();
        if ( v3 >= 0 )
        {
          v6[3] = a1;
          v6[0] = 0x100010009LL;
          v6[1] = &CiKernelCalloutTable;
          v6[2] = &CiKernelInterface;
          v3 = ExRegisterExtension(&CiKernelExtensionRegistration, 0x10000LL, v6);
          if ( v3 >= 0 )
          {
            v3 = CiSchedulerInitialize();
            if ( v3 >= 0 )
              v3 = CiDispatchInitialize(a1);
          }
        }
      }
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice, v2, v4, v3);
    CiNdisThrottleInitialize();
    return (unsigned int)v3;
  }
  CiNdisThrottleInitialize();
  return (unsigned int)v3;
}
