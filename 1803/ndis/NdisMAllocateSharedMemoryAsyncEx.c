/*
 * XREFs of NdisMAllocateSharedMemoryAsyncEx @ 0x1C00620E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMAllocateSharedMemoryAsync @ 0x1C0061F80 (NdisMAllocateSharedMemoryAsync.c)
 */

NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsyncEx(
        NDIS_HANDLE MiniportDmaHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  return NdisMAllocateSharedMemoryAsync(MiniportDmaHandle, Length, Cached, Context);
}
