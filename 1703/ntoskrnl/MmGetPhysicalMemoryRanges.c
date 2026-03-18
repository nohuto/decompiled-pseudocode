/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140440820
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1400251A8 (PfpMemoryRangesQuery.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401661AC (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1401F0144 (IoFillDumpHeader.c)
 * Callees:
 *     <none>
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
