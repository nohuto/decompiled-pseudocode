/*
 * XREFs of ZwTerminateJobObject @ 0x140180F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTerminateJobObject(HANDLE JobHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
