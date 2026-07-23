/*
 * XREFs of ZwSaveMergedKeys @ 0x140180800
 * Callers:
 *     NtSaveMergedKeys @ 0x140688F10 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
