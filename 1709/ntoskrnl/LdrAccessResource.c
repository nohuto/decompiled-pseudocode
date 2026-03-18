/*
 * XREFs of LdrAccessResource @ 0x1405BBF50
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140832F48 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140516204 (LdrpAccessResourceData.c)
 */

NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData(
           (unsigned __int64)BaseAddress,
           &ResourceDataEntry->OffsetToData,
           (unsigned __int64 *)Resource,
           Size);
}
