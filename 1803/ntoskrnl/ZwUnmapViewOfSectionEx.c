/*
 * XREFs of ZwUnmapViewOfSectionEx @ 0x1401AAD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
