/*
 * XREFs of ZwResumeThread @ 0x1800A5D40
 * Callers:
 *     EtwpCreateEtwThread @ 0x180052C90 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     RtlRemoteCall @ 0x1800F6C40 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
