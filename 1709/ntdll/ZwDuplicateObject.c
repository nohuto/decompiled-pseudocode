/*
 * XREFs of ZwDuplicateObject @ 0x1800A0840
 * Callers:
 *     TppPoolUpdateTrimmedWorker @ 0x18000A49C (TppPoolUpdateTrimmedWorker.c)
 *     TppIsWorkerThread @ 0x18000A7A4 (TppIsWorkerThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     PsspWalkHandleTable @ 0x18005AA18 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18005D2A4 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x18008F448 (RtlpWow64OpenThreadProcess.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800F36E0 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010B890 (PssNtFreeRemoteSnapshot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  NTSTATUS result; // eax

  result = 60;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
