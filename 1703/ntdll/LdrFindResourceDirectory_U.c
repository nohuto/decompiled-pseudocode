/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800E1840
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return sub_180035838(DllHandle, (__int64)ResourceInfo, Level, 2u, (__int64)ResourceDirectory);
}
