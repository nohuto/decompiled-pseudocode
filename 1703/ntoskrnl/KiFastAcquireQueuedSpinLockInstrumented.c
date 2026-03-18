/*
 * XREFs of KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x14001BAA0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpConvertExclusiveToSharedLite @ 0x140025ACC (ExpConvertExclusiveToSharedLite.c)
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1400EF2B0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x14011AB70 (ExpReleaseResourceForThreadLite.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x14011C4D0 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     ExDisableResourceBoostLite @ 0x140135960 (ExDisableResourceBoostLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14025C3A0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14025C49C (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14025635C (PerfLogSpinLockAcquire.c)
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
