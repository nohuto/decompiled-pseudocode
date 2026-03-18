/*
 * XREFs of MiReturnSplitPageCharges @ 0x1401677FC
 * Callers:
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

ULONG_PTR *__fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  MiReturnCommit((__int64)&MiSystemPartition, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
