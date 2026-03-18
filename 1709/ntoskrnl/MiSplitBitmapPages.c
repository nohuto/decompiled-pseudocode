/*
 * XREFs of MiSplitBitmapPages @ 0x1400F7414
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiExpandPagedPool @ 0x1400F7CD0 (MiExpandPagedPool.c)
 *     MiExtendDynamicBitMap @ 0x140157140 (MiExtendDynamicBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x1405B4EFC (MiSplitLargePfnBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1406E1024 (MiSplitMirrorBitMap.c)
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x14084A6C4 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  int v5; // r8d
  int v7; // eax

  v3 = 9;
  if ( a1 != 14 )
    v3 = a1;
  v5 = 32;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( v3 > 0xF || (v7 = 41216, !_bittest(&v7, v3)) )
    {
      if ( KeGetCurrentIrql() <= 1u )
        v5 = 33;
    }
  }
  else
  {
    v5 = 48;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5,
           v3);
}
