/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140575450
 * Callers:
 *     PfpMemoryRangesQuery @ 0x14000D6F0 (PfpMemoryRangesQuery.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014FA60 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1401F5874 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x140575470 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
