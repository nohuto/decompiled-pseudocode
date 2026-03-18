/*
 * XREFs of HvlpFreeOverlayPages @ 0x14000F4C0
 * Callers:
 *     HvlInitializeProcessor @ 0x1405B7BCC (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140118130 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
