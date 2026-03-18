/*
 * XREFs of WdipSemEnableScenario @ 0x140584544
 * Callers:
 *     WdipStartEndScenario @ 0x1404674F4 (WdipStartEndScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     WdipSemGetLoggerIds @ 0x14046777C (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14046788C (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140467910 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemEnableContextProviders @ 0x14057C9FC (WdipSemEnableContextProviders.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14057CBD0 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemActivateInstance @ 0x14057D1E4 (WdipSemActivateInstance.c)
 *     WdipSemQueryScenarioTable @ 0x140584690 (WdipSemQueryScenarioTable.c)
 *     WdipSemShutdown @ 0x140705958 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407062E8 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  _QWORD *v12; // rax
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_7;
  }
  if ( !WdipSemEnabled )
    goto LABEL_6;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v12 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v4 = v12;
      if ( v12 )
      {
        WdipSemEnableContextProviders((__int64)v12);
        goto LABEL_15;
      }
    }
LABEL_6:
    LoggerIds = -1073741823;
    goto LABEL_7;
  }
  v5 = 1;
LABEL_15:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START, (__int64)v4);
    WdipSemActivateInstance((__int64)v4);
    goto LABEL_11;
  }
LABEL_7:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, (_DWORD)a3, LoggerIds);
  if ( v4 )
    WdipSemDeleteTransitionalInstance(v4);
LABEL_11:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
