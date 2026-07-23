/*
 * XREFs of ZwSetInformationProcess @ 0x1401A7840
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x140575C08 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1405B9D40 (RtlCreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x1408C254C (StartFirstUserProcess.c)
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
