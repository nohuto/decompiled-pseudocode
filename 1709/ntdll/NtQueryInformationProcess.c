/*
 * XREFs of NtQueryInformationProcess @ 0x1800A03E0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     PsspDumpObject_Process @ 0x18005BD40 (PsspDumpObject_Process.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     PsspCaptureProcessInformation @ 0x18005CF50 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x18005D0E8 (PsspCaptureHandleTrace.c)
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 *     WerpGlobalFlagsForProcess @ 0x180076860 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x180076AAC (WerpProcessId.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180088CB0 (LdrpQueryInformationCurrentProcess.c)
 *     RtlSetProcessIsCritical @ 0x18008C700 (RtlSetProcessIsCritical.c)
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18008F3D0 (RtlWow64GetSharedInfoProcess.c)
 *     SetAssertBufferPtrinPeb @ 0x18008FCB8 (SetAssertBufferPtrinPeb.c)
 *     LdrpMapCleanModuleView @ 0x1800D69B4 (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlDecodeRemotePointer @ 0x1800DC6A0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DC710 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x1800DD790 (WerpIsDebugPortPresent.c)
 *     RtlpInitRandomExVector @ 0x1800FAC90 (RtlpInitRandomExVector.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800FF8E8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010281C (RtlpCreateExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
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
