/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140097F50
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14001505C (MiUnlockFlushMdl.c)
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiReferencePfBackedSection @ 0x140118534 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A480 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
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
