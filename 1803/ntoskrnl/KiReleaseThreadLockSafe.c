/*
 * XREFs of KiReleaseThreadLockSafe @ 0x14002F8F0
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1400025D8 (KeTryToFreezeThreadStack.c)
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140041320 (KiFlushQueueApc.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140041D0C (KiAcquireReleaseThreadLock.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140060CB0 (KeQueryBasePriorityThread.c)
 *     KeAlertThreadByThreadId @ 0x140062644 (KeAlertThreadByThreadId.c)
 *     KiSetPriorityFloor @ 0x140064D80 (KiSetPriorityFloor.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x14006B340 (KiProcessPendingForegroundBoosts.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiClearPriorityFloor @ 0x1400BA210 (KiClearPriorityFloor.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x1400C38C0 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 *     KiSwitchPriQueue @ 0x1400CEB28 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x1400D1320 (KeQueryAffinityThread.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeTestAlertThread @ 0x140132520 (KeTestAlertThread.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1401815B8 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KeQueryActualAffinityThread @ 0x14023FDEC (KeQueryActualAffinityThread.c)
 *     KeEnumerateQueueApc @ 0x140245830 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140245940 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x14024689C (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140247B84 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x140247E70 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 *     KiMonitorCacheErrata @ 0x140249BD0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14024A2D8 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x14024C570 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiReleaseThreadLockSafe(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v3; // edx

  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  result = (__int64)CurrentPrcb->SchedulerAssist;
  if ( result )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v3 = *(_DWORD *)(result + 20) - 1;
      *(_DWORD *)(result + 20) = v3;
      if ( !v3 && !*(_BYTE *)(result + 25) && !*(_BYTE *)(result + 27) )
        return KiPerformUnboostKick(CurrentPrcb);
    }
  }
  return result;
}
