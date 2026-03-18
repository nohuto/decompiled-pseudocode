/*
 * XREFs of ZwSaveKey @ 0x140180DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle, v2);
}
