/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800DB500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return sub_180032DB4(DllHandle, (__int64)ResourceInfo, Level, 2u, (__int64)ResourceDirectory);
}
