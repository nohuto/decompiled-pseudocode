/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140060730
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiIdleSchedule @ 0x1400605A0 (KiIdleSchedule.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140060FE0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
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
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a1 + 23488);
  v7 = v6 + *(_QWORD *)(a2 + 72);
  v8 = v6 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a1 + 23488) = v5;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  v9 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( !v9 )
    KiEndThreadAccountingPeriod(a1, a2);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
