/*
 * XREFs of ZwSetInformationProcess @ 0x14017E2C0
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x140445374 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1405165A8 (RtlCreateUserStack.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ProcessInformationClass, ProcessInformation);
}
