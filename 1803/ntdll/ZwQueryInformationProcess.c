/*
 * XREFs of ZwQueryInformationProcess @ 0x18009ADE0
 * Callers:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     sub_180043A08 @ 0x180043A08 (sub_180043A08.c)
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     sub_180048C9C @ 0x180048C9C (sub_180048C9C.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800856A0 (RtlWow64GetSharedInfoProcess.c)
 *     sub_1800897A0 @ 0x1800897A0 (sub_1800897A0.c)
 *     RtlSetProcessIsCritical @ 0x18008A860 (RtlSetProcessIsCritical.c)
 *     sub_1800D08FC @ 0x1800D08FC (sub_1800D08FC.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800D6720 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800D6790 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1800D7D98 @ 0x1800D7D98 (sub_1800D7D98.c)
 *     sub_1800D8020 @ 0x1800D8020 (sub_1800D8020.c)
 *     sub_1800F7760 @ 0x1800F7760 (sub_1800F7760.c)
 *     sub_1800FC374 @ 0x1800FC374 (sub_1800FC374.c)
 *     sub_1800FF1D0 @ 0x1800FF1D0 (sub_1800FF1D0.c)
 *     sub_180109F60 @ 0x180109F60 (sub_180109F60.c)
 *     sub_18010A2AC @ 0x18010A2AC (sub_18010A2AC.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010B0F0 @ 0x18010B0F0 (sub_18010B0F0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
