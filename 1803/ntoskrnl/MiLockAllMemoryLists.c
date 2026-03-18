/*
 * XREFs of MiLockAllMemoryLists @ 0x140156D6C
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x140156DFC (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions(MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CBD28);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CBD18);
}
