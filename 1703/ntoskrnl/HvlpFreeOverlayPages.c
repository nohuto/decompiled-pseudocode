/*
 * XREFs of HvlpFreeOverlayPages @ 0x140136B90
 * Callers:
 *     HvlInitializeProcessor @ 0x1405A7BC0 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140687628 (HvlDeleteProcessor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
