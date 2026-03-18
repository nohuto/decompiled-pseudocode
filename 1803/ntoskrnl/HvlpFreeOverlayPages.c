/*
 * XREFs of HvlpFreeOverlayPages @ 0x140144CF0
 * Callers:
 *     HvlInitializeProcessor @ 0x14062B3A4 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1400C9790 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
