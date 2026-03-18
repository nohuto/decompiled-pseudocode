/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0
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
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1402BA2F0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1402BA428 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
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
