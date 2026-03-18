/*
 * XREFs of MiBuildWakeList @ 0x1400A4908
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14001F744 (MiPrepareSegmentForDeletion.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiComputeDataFlushRange @ 0x1400A2450 (MiComputeDataFlushRange.c)
 *     MiUnlockFlushMdl @ 0x1400A5008 (MiUnlockFlushMdl.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140110588 (MiUnlockControlAreaSectionExtend.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14011C6D4 (MiReferenceControlAreaForCacheManager.c)
 *     MiReferencePfBackedSection @ 0x14012AC34 (MiReferencePfBackedSection.c)
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
