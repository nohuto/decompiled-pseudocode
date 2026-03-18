/*
 * XREFs of NtSaveKey @ 0x14065FCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
