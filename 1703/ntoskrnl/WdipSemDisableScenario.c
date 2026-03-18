/*
 * XREFs of WdipSemDisableScenario @ 0x140467560
 * Callers:
 *     WdipStartEndScenario @ 0x1404674F4 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1404676B0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x14046777C (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14046788C (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140467910 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemDisableContextProviders @ 0x140468410 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140468690 (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x14057D1E4 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x140705958 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407062E8 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_15;
  }
  if ( !WdipSemEnabled )
    goto LABEL_14;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v5 = 1;
    goto LABEL_8;
  }
  v10 = WdipSemMarkInstanceForDeletion(a3);
  v4 = v10;
  if ( !v10 )
  {
LABEL_14:
    LoggerIds = -1073741823;
    goto LABEL_15;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v10 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_15;
  WdipSemDisableContextProviders(v4, 0LL);
LABEL_8:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
      WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v4);
    WdipSemDeleteTransitionalInstance(v4);
    goto LABEL_12;
  }
LABEL_15:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemActivateInstance(v4);
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
