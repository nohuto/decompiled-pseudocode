/*
 * XREFs of LdrFindResource_U @ 0x140639150
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1408BA80C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
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
