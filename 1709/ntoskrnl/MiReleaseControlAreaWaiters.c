/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140067BC4
 * Callers:
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x1400A5008 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14011C6D4 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferencePfBackedSection @ 0x14012AC34 (MiReferencePfBackedSection.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14021FAB0 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiReleasePageFileSectionInfo @ 0x140226CE0 (MiReleasePageFileSectionInfo.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

__int64 __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate(a1 + 2, 1LL);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
