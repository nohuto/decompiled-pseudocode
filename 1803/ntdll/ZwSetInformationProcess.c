/*
 * XREFs of ZwSetInformationProcess @ 0x18009AE40
 * Callers:
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x18007A490 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008A860 (RtlSetProcessIsCritical.c)
 *     sub_1800D4EE8 @ 0x1800D4EE8 (sub_1800D4EE8.c)
 *     sub_1800D7DD8 @ 0x1800D7DD8 (sub_1800D7DD8.c)
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
