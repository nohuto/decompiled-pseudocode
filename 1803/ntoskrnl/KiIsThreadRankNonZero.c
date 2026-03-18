/*
 * XREFs of KiIsThreadRankNonZero @ 0x14003A860
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14003AD30 (KiDeferGroupSchedulingPreemption.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140081560 (KeQueryEffectiveBasePriorityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A8330 (KiCheckForEffectivePriorityChange.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400A8540 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400A87B0 (KiTransitionSchedulingGroupGeneration.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400C268C (KeUpdateThreadSchedulingProperties.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x1400F7480 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeQueryEffectivePriorityThread @ 0x14014A5B0 (KeQueryEffectivePriorityThread.c)
 *     KiUpdateThreadState @ 0x14024902C (KiUpdateThreadState.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14047B818 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int ThreadEffectiveRankNonZero; // r9d
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = CurrentPrcb->ScbOffset + v6;
    if ( v7 )
    {
      if ( a2 )
      {
        ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v7, 0, 0, 0LL);
      }
      else
      {
        do
        {
          ThreadEffectiveRankNonZero = (*(unsigned __int8 *)(v7 + 112) >> 3) & 1;
          if ( ThreadEffectiveRankNonZero )
            break;
          v7 = *(_QWORD *)(v7 + 408);
        }
        while ( v7 );
      }
    }
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  return ThreadEffectiveRankNonZero != 0;
}
