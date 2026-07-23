/*
 * XREFs of ZwAssignProcessToJobObject @ 0x14017F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
