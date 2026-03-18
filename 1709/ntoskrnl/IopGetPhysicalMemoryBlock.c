/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x14014FA60
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014F920 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F6AF8 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x140575450 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
