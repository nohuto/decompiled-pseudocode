/*
 * XREFs of MiRemoveUnusedSegment @ 0x1400E40E4
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14004B270 (MiPrepareSegmentForDeletion.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14005A3D8 (MiReferenceControlAreaForCacheManager.c)
 *     MiPreventControlAreaDeletion @ 0x1400832BC (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     MiCheckForControlAreaDeletion @ 0x140084944 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1400BCE70 (MiAttemptSectionDelete.c)
 *     MiComputeDataFlushRange @ 0x1400E4D20 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14024FFD8 (MiSetDeleteOnClose.c)
 * Callees:
 *     MiUnlinkUnusedControlArea @ 0x1400E4144 (MiUnlinkUnusedControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1280));
  }
}
