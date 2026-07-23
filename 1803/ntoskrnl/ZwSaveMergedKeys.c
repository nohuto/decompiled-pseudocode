/*
 * XREFs of ZwSaveMergedKeys @ 0x1401AA440
 * Callers:
 *     NtSaveMergedKeys @ 0x1406ED214 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(HighPrecedenceKeyHandle);
}
