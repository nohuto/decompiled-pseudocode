/*
 * XREFs of LdrFindResource_U @ 0x1405BD880
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1408190C8 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResource_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)BaseAddress,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (unsigned int **)ResourceDataEntry);
}
