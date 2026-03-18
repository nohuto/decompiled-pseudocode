/*
 * XREFs of ZwQueryInformationProcess @ 0x14017E260
 * Callers:
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ProcessInformationClass, ProcessInformation);
}
