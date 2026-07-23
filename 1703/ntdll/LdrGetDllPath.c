/*
 * XREFs of LdrGetDllPath @ 0x18004CB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CBB4 @ 0x18004CBB4 (sub_18004CBB4.c)
 */

NTSTATUS __cdecl LdrGetDllPath(PCWSTR DllName, ULONG Flags, PWSTR *DllPath, PWSTR *SearchPaths)
{
  return sub_18004CBB4(DllName, 0LL, 0LL, (__int64)SearchPaths);
}
