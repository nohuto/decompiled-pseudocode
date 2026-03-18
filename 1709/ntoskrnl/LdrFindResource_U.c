/*
 * XREFs of LdrFindResource_U @ 0x1405BBF70
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140832F48 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResource_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((char *)BaseAddress, (__int64 *)ResourceInfo, Level, 0, (char **)ResourceDataEntry);
}
