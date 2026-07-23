/*
 * XREFs of NtSetInformationThread @ 0x1800A0260
 * Callers:
 *     TppCritResetThread @ 0x18000A5D4 (TppCritResetThread.c)
 *     RtlpTpWaitCallback @ 0x18000B370 (RtlpTpWaitCallback.c)
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 *     RtlpTpTimerCallback @ 0x18000BD60 (RtlpTpTimerCallback.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x18000CF50 (RtlSetThreadWorkOnBehalfTicket.c)
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18000E770 (TppCallbackCheckThreadAfterCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     RtlpTpResumeImpersonation @ 0x180011788 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x18001197C (RtlpTpRevertCapture.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18006F5E0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007C340 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x180085270 (RtlReleasePrivilege.c)
 *     RtlpTpImpersonate @ 0x180088908 (RtlpTpImpersonate.c)
 *     RtlSetThreadIsCritical @ 0x18008BAE0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800CF210 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CF280 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DC650 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DD4C0 (WerReportExceptionWorker.c)
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F3898 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F3958 (RtlpDetachThreadFromUmsCompletionList.c)
 *     BaseGetNamedObjectDirectory @ 0x18010E86C (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  NTSTATUS result; // eax

  result = 13;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
