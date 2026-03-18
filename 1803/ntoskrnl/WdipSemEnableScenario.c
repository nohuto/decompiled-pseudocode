/*
 * XREFs of WdipSemEnableScenario @ 0x14060D740
 * Callers:
 *     WdipStartEndScenario @ 0x14060D6D4 (WdipStartEndScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14060C7D8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14060C924 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14060C9A8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemQueryScenarioTable @ 0x14060D888 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x14060D8F0 (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x14060D9FC (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProviders @ 0x14060DBCC (WdipSemEnableContextProviders.c)
 *     WdipSemShutdown @ 0x1407A13A0 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A1D30 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9

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
  if ( LoggerIds >= 0 )
  {
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v11 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v4 = v11;
      if ( v11 )
      {
        WdipSemEnableContextProviders(v11);
        goto LABEL_8;
      }
    }
LABEL_14:
    LoggerIds = -1073741823;
    goto LABEL_15;
  }
  v5 = 1;
LABEL_8:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START, (__int64)v4);
    WdipSemActivateInstance(v4);
    goto LABEL_12;
  }
LABEL_15:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemDeleteTransitionalInstance(v4);
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL, v12, v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL, v16, v17);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
