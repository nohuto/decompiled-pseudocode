/*
 * XREFs of KiIsThreadRankNonZero @ 0x1401138D0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14001A410 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckForEffectivePriorityChange @ 0x14001D530 (KiCheckForEffectivePriorityChange.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x14002A0A0 (KeQueryEffectiveBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400428E0 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140043F10 (KiTransitionSchedulingGroupGeneration.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140120EB0 (KeUpdateThreadSchedulingProperties.c)
 *     KeQueryEffectivePriorityThread @ 0x140134B70 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
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
