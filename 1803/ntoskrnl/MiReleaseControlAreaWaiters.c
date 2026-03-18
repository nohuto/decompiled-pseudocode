/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x1400E3F24
 * Callers:
 *     MiReferenceControlAreaForCacheManager @ 0x14005A3D8 (MiReferenceControlAreaForCacheManager.c)
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     MiUnlockFlushMdl @ 0x1400B5F10 (MiUnlockFlushMdl.c)
 *     MiComputeDataFlushRange @ 0x1400E4D20 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x1401253B0 (MiReferenceControlArea.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x140150C04 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x14025B3B0 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
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
      result = KeSignalGate((__int64)(a1 + 2), 1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
