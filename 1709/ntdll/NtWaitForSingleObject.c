/*
 * XREFs of NtWaitForSingleObject @ 0x1800A0140
 * Callers:
 *     WaitForWerSvc @ 0x180002734 (WaitForWerSvc.c)
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x180060E5C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopUmLogger @ 0x180062764 (EtwpStopUmLogger.c)
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     RtlWaitForWnfMetaNotification @ 0x18006D800 (RtlWaitForWnfMetaNotification.c)
 *     RtlAcquireResourceShared @ 0x18006E8E0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006EA20 (RtlAcquireResourceExclusive.c)
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D18F0 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 *     RtlReportSqmEscalation @ 0x1800DD180 (RtlReportSqmEscalation.c)
 *     LdrpResReadFile @ 0x1800E3164 (LdrpResReadFile.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F3350 (RtlDequeueUmsCompletionListItems.c)
 *     _ResReadFile @ 0x18011056C (_ResReadFile.c)
 *     _ResWaitForSingleObject @ 0x18011068C (_ResWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
