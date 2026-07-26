/*
 * XREFs of NdisMAllocateSharedMemoryAsyncEx @ 0x1C00613C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NDIS_STATUS __stdcall NdisMAllocateSharedMemoryAsyncEx(
        NDIS_HANDLE MiniportDmaHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID Context)
{
  return NdisMAllocateSharedMemoryAsync(MiniportDmaHandle, Length, Cached, Context);
}
