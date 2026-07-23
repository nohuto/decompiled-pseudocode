/*
 * XREFs of ZwResumeProcess @ 0x140180D00
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
