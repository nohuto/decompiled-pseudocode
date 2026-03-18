/*
 * XREFs of PfpMemoryRangesQuery @ 0x14000D6F0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     MmGetPhysicalMemoryRanges @ 0x140575450 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn PfpMemoryRangesQuery()
{
  MmGetPhysicalMemoryRanges();
}
