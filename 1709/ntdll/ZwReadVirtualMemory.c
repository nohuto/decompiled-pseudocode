/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A08A0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x180017800 (RtlpQueryReadVirtualMemory.c)
 *     PsspCaptureImageInformation @ 0x18005AF9C (PsspCaptureImageInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18008F3D0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010B890 (PssNtFreeRemoteSnapshot.c)
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
