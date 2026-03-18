/*
 * XREFs of WdipSemEnableScenario @ 0x1405AB884
 * Callers:
 *     WdipStartEndScenario @ 0x1405AB684 (WdipStartEndScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     WdipSemQueryScenarioTable @ 0x1405AB978 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x1405AB9D8 (WdipSemGetLoggerIds.c)
 *     WdipSemShutdown @ 0x14073ED7C (WdipSemShutdown.c)
 *     WdipSemActivateInstance @ 0x14073EE1C (WdipSemActivateInstance.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14073EEE8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14073F128 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemWriteSemActionsEvent @ 0x14073F9BC (WdipSemWriteSemActionsEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x14073FB9C (WdipSemWriteSemFailureEvent.c)
 *     WdipSemEnableContextProviders @ 0x1407400FC (WdipSemEnableContextProviders.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v12; // rax
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
  if ( LoggerIds < 0 )
  {
    v5 = 1;
    goto LABEL_17;
  }
  ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
  if ( !ScenarioTable || (v12 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3), (v4 = v12) == 0) )
  {
LABEL_6:
    LoggerIds = -1073741823;
    goto LABEL_7;
  }
  WdipSemEnableContextProviders(v12);
LABEL_17:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v4);
    WdipSemActivateInstance(v4);
    goto LABEL_11;
  }
LABEL_7:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemDeleteTransitionalInstance(v4);
LABEL_11:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
