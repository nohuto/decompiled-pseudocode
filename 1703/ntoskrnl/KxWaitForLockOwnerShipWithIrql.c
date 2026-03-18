/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x14011C530
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
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14025C3A0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14025C49C (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned int v5; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*a3);
    *a3 = CurrentIrql;
    _enable();
  }
  v5 = 0;
  do
  {
    if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v5);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v5;
}
