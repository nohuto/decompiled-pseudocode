/*
 * XREFs of LdrAccessResource @ 0x180038290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrAccessResource_0(DllHandle, ResourceDataEntry, ResourceBuffer, ResourceLength);
}
