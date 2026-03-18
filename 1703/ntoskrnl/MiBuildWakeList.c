/*
 * XREFs of MiBuildWakeList @ 0x140096DC4
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14005E290 (MiUnlockControlAreaSectionExtend.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x140098AEC (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiReferencePfBackedSection @ 0x140118534 (MiReferencePfBackedSection.c)
 *     MiPrepareSegmentForDeletion @ 0x1401191A4 (MiPrepareSegmentForDeletion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
