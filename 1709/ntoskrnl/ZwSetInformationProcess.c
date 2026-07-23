/*
 * XREFs of ZwSetInformationProcess @ 0x14017DC40
 * Callers:
 *     RtlCreateUserStack @ 0x140508F24 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x14058D540 (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
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
