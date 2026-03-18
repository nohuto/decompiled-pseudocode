/*
 * XREFs of IopGetPhysicalMemoryBlock @ 0x140183938
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14016E3B0 (IopLoadCrashdumpDriver.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140233E08 (IoUpdateDumpPhysicalRanges.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x14064DCD0 (MmGetPhysicalMemoryRanges.c)
 */

void __noreturn IopGetPhysicalMemoryBlock()
{
  MmGetPhysicalMemoryRanges();
}
