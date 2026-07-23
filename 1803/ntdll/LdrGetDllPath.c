/*
 * XREFs of LdrGetDllPath @ 0x180025080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return sub_1800250A4(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
