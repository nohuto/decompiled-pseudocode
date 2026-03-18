/*
 * XREFs of MiSplitBitmapPages @ 0x140127E80
 * Callers:
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x14016522C (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x14057AC10 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x1405BA8F4 (MiSplitLargePfnBitMap.c)
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1408163F0 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r8

  v3 = 9LL;
  if ( a1 != 15 )
    v3 = a1;
  v5 = 32LL;
  if ( (((_DWORD)v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (_DWORD)v3 != 8 && (_DWORD)v3 != 13 && KeGetCurrentIrql() <= 1u )
      v5 = 33LL;
  }
  else
  {
    v5 = 48LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5,
           v3);
}
