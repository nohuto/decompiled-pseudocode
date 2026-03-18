/*
 * XREFs of CcNotifyWriteBehind @ 0x140157744
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1404850A8 (MiShutdownSystem.c)
 * Callees:
 *     CcForEachPartition @ 0x140004490 (CcForEachPartition.c)
 */

LONG_PTR CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
}
