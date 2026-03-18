/*
 * XREFs of NtSaveKey @ 0x1406ECF5C
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
