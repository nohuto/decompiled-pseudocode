/*
 * XREFs of ZwTerminateThread @ 0x18009B520
 * Callers:
 *     EtwpCreateEtwThread @ 0x180006010 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800D79B0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
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
