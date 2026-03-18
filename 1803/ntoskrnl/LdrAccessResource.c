/*
 * XREFs of LdrAccessResource @ 0x140639130
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1408BA80C (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData((unsigned __int64)BaseAddress, (unsigned __int64)ResourceDataEntry);
}
