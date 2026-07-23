/*
 * XREFs of ZwReadVirtualMemory @ 0x18009B2A0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_180077D70 @ 0x180077D70 (sub_180077D70.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800856A0 (RtlWow64GetSharedInfoProcess.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     PssNtFreeRemoteSnapshot @ 0x180109D00 (PssNtFreeRemoteSnapshot.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A710 @ 0x18010A710 (sub_18010A710.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
