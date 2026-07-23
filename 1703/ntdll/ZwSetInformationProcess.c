/*
 * XREFs of ZwSetInformationProcess @ 0x1800A5680
 * Callers:
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180085920 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008ED40 (RtlSetProcessIsCritical.c)
 *     sub_1800DB71C @ 0x1800DB71C (sub_1800DB71C.c)
 *     sub_1800DE578 @ 0x1800DE578 (sub_1800DE578.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
