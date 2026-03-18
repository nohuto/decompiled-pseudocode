/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1400233A0
 * Callers:
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KiRequestTimer2Expiration @ 0x14002331C (KiRequestTimer2Expiration.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KiFlushQueuedDpcsWorker @ 0x1401148A0 (KiFlushQueuedDpcsWorker.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_6;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel )
  {
    CurrentPrcb->InterruptRequest = 1;
  }
  else
  {
LABEL_6:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
