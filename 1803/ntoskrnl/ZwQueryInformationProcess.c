/*
 * XREFs of ZwQueryInformationProcess @ 0x1401A77E0
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1402C5E00 (BiLogFileOwnerProcess.c)
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
