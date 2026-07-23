/*
 * XREFs of NtTerminateThread @ 0x1800A0B20
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     EtwpCreateEtwThread @ 0x180064500 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800DD4C0 (WerReportExceptionWorker.c)
 *     RtlAssert @ 0x1800EA280 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
