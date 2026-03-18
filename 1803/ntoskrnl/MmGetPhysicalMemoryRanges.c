/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x14064DCD0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x140183938 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140232D74 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx @ 0x14064DCF0 (MmGetPhysicalMemoryRangesEx.c)
 */

PPHYSICAL_MEMORY_RANGE __noreturn MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx(0LL);
}
