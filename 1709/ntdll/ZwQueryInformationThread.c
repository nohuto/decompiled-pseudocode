/*
 * XREFs of ZwQueryInformationThread @ 0x1800A0560
 * Callers:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     TppIsWorkerThread @ 0x18000A7A4 (TppIsWorkerThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     PsspDumpObject_Thread @ 0x18005B0D0 (PsspDumpObject_Thread.c)
 *     PsspSampleCounters @ 0x18005C73C (PsspSampleCounters.c)
 *     PsspDumpThread @ 0x18005CAA4 (PsspDumpThread.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x1800745A0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x1800815EC (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x18008BAE0 (RtlSetThreadIsCritical.c)
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x18008F448 (RtlpWow64OpenThreadProcess.c)
 *     RtlQueryThreadProfiling @ 0x1800CF380 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CFAF8 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2B9C (LdrpDoDebuggerBreak.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC360 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC390 (RtlWow64GetThreadSelectorEntry.c)
 *     WerpThreadId @ 0x1800DD80C (WerpThreadId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
