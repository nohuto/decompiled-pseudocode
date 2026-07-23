/*
 * XREFs of ZwResumeProcess @ 0x1401806E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResumeProcess(HANDLE ProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
