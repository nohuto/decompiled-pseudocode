/*
 * XREFs of KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14005E960 (ExpReleaseResourceForThreadLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 *     ExReleaseResourceForThreadLite @ 0x1400AA7B0 (ExReleaseResourceForThreadLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1400BB3D8 (ExpConvertExclusiveToSharedLite.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400EAB60 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140100730 (ExpAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1401027C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExDisableResourceBoostLite @ 0x14014B7B0 (ExDisableResourceBoostLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1402BA2F0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1402BA428 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiFastAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, unsigned __int8 *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // ebp
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v9; // r14d
  _QWORD *v10; // rdx
  char v11; // si
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+68h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v15;
    v6 = 0;
    InterruptCount = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = (_QWORD *)_InterlockedExchange64(a2, a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = KxWaitForLockOwnerShipWithIrql(a1, v10, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
    v11 = 1;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v13, v13 - v9, v4, InterruptCount, 1);
  }
  return v11;
}
