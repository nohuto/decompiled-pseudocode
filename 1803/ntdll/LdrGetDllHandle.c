/*
 * XREFs of LdrGetDllHandle @ 0x180041CF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 */

NTSTATUS __cdecl LdrGetDllHandle(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  return LdrGetDllHandleEx(1u, DllPath, DllCharacteristics, DllName, DllHandle);
}
