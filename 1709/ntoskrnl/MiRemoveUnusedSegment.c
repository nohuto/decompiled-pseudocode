/*
 * XREFs of MiRemoveUnusedSegment @ 0x1400A48A8
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14001F744 (MiPrepareSegmentForDeletion.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 *     MiCheckForControlAreaDeletion @ 0x14010AA68 (MiCheckForControlAreaDeletion.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14011C6D4 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferencePfBackedSection @ 0x14012AC34 (MiReferencePfBackedSection.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140211B84 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1400A4C8C (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  }
}
