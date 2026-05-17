/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800FB1F0
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800FAE40 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FB26C (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
