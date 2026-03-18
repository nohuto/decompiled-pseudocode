/*
 * XREFs of MiSplitBitmapPages @ 0x1400465B8
 * Callers:
 *     MiReadyNonPagedPoolExpansionForUse @ 0x140045DA4 (MiReadyNonPagedPoolExpansionForUse.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MiExtendDynamicBitMap @ 0x1401832A4 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1405F0044 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x14064A6CC (MiSplitLargePfnBitMap.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1408AE4F0 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r8
  int v7; // eax

  v3 = 9LL;
  if ( a1 != 14 )
    v3 = a1;
  v5 = 288LL;
  if ( (((_DWORD)v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)v3 > 0xF || (v7 = 41216, !_bittest(&v7, v3)) )
    {
      if ( KeGetCurrentIrql() <= 1u )
        v5 = 289LL;
    }
  }
  else
  {
    v5 = 304LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5,
           v3);
}
