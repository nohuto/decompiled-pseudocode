/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140156DA4
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140156DFC (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBD18);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBD28);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
