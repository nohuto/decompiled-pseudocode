/*
 * XREFs of MiReturnSplitPageCharges @ 0x14013907C
 * Callers:
 *     MiJoinBitmapPages @ 0x1402201F0 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
