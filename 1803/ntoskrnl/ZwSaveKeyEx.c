/*
 * XREFs of ZwSaveKeyEx @ 0x1401AA420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle, *(_QWORD *)&Format);
}
