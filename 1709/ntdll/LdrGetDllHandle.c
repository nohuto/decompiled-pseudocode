/*
 * XREFs of LdrGetDllHandle @ 0x1800358F0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
