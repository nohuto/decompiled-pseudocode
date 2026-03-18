/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400F1580 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     ExDisableResourceBoostLite @ 0x1400F7AA0 (ExDisableResourceBoostLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14011BAE8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140285CC0 (ExpTryConvertSharedToExclusiveLite.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x140285DBC (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
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
