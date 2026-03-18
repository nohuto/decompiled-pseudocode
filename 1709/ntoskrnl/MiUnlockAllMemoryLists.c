/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14022B660
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x14021F6A8 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  return MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 0LL);
}
