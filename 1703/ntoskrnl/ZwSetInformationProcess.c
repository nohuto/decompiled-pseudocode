/*
 * XREFs of ZwSetInformationProcess @ 0x14017E2C0
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x140445374 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1405165A8 (RtlCreateUserStack.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
