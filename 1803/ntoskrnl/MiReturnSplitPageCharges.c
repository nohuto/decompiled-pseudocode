/*
 * XREFs of MiReturnSplitPageCharges @ 0x140186104
 * Callers:
 *     MiJoinBitmapPages @ 0x14025B96C (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 */

void __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  MiReturnSystemCharges(a1, a2, a3);
}
