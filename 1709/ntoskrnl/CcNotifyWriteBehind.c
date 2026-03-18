/*
 * XREFs of CcNotifyWriteBehind @ 0x1401E051C
 * Callers:
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x14011BF90 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
