/*
 * XREFs of ZwTerminateThread @ 0x1800A5D60
 * Callers:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x180052C90 (EtwpCreateEtwThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
