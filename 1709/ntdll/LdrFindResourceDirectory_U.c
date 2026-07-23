/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800E05A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U(
           DllHandle,
           (__int64)ResourceInfo,
           *(__int64 *)&Level,
           2u,
           (__int64)ResourceDirectory);
}
