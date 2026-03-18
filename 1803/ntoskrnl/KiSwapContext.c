/*
 * XREFs of KiSwapContext @ 0x1401B1B40
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
