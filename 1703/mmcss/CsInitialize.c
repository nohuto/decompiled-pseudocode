/*
 * XREFs of CsInitialize @ 0x1C000D050
 * Callers:
 *     GsDriverEntry @ 0x1C000D010 (GsDriverEntry.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0004628 (WPP_SF_D.c)
 *     WPP_SF_d @ 0x1C00048B4 (WPP_SF_d.c)
 *     WppInitKm @ 0x1C000B8D0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000B940 (WppLoadTracingSupport.c)
 *     CiDispatchInitialize @ 0x1C000D160 (CiDispatchInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000D200 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000D300 (CiConfigInitialize.c)
 *     CiSystemInitialize @ 0x1C000DC70 (CiSystemInitialize.c)
 */

__int64 __fastcall CsInitialize(__int64 a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // r8
  NTSTATUS ThreadNotifyRoutine; // ebx
  __int64 result; // rax
  __int64 Timer_high; // rdx

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
  v2 = EtwRegister(&MMCSS_ETW_PROVIDER, (PETWENABLECALLBACK)CiLogControlCallback, 0LL, &CiLoggerContext);
  ThreadNotifyRoutine = v2;
  if ( v2 < 0 )
  {
    Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (Timer_high & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice, Timer_high, v3, v2);
    return (unsigned int)ThreadNotifyRoutine;
  }
  result = CiSystemInitialize();
  if ( (int)result >= 0 )
  {
    result = CiConfigInitialize();
    if ( (int)result >= 0 )
    {
      ThreadNotifyRoutine = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
      if ( ThreadNotifyRoutine < 0 )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          WPP_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xAu,
            (__int64)&WPP_891be88a029732f2742d53d2e7317bcb_Traceguids,
            ThreadNotifyRoutine);
      }
      else
      {
        CiThreadCallbackRegistered = 1;
      }
      if ( ThreadNotifyRoutine >= 0 )
      {
        result = CiSchedulerInitialize();
        if ( (int)result >= 0 )
          return CiDispatchInitialize(a1);
        return result;
      }
      return (unsigned int)ThreadNotifyRoutine;
    }
  }
  return result;
}
