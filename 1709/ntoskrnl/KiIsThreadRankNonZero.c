/*
 * XREFs of KiIsThreadRankNonZero @ 0x1400AB970
 * Callers:
 *     KeQueryEffectiveBasePriorityThread @ 0x14000865C (KeQueryEffectiveBasePriorityThread.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14008AB70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400AA5D0 (KiDeferGroupSchedulingPreemption.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400D231C (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400D269C (KeUpdateThreadSchedulingProperties.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeQueryEffectivePriorityThread @ 0x140202830 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14042516C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
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
