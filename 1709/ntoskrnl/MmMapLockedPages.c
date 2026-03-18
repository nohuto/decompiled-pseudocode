/*
 * XREFs of MmMapLockedPages @ 0x140216F40
 * Callers:
 *     ViFlushDoubleBuffer @ 0x1407ADA58 (ViFlushDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __stdcall MmMapLockedPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode)
{
  return MmMapLockedPagesSpecifyCache(MemoryDescriptorList, AccessMode, MmCached, 0LL, 1u, 0x20u);
}
