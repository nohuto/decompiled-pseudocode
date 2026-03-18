/*
 * XREFs of NtSaveKey @ 0x140688C70
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
