/*
 * XREFs of ZwQueryInformationProcess @ 0x14017DBE0
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
