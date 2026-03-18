/*
 * XREFs of LdrAccessResource @ 0x1405BD870
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1408190C8 (FindBitmapResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData((unsigned __int64)BaseAddress, (unsigned __int64)ResourceDataEntry);
}
