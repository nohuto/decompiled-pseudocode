/*
 * XREFs of MmMapLockedPages @ 0x14020F890
 * Callers:
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __stdcall MmMapLockedPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode)
{
  return MmMapLockedPagesSpecifyCache(MemoryDescriptorList, AccessMode, MmCached, 0LL, 1u, 0x20u);
}
