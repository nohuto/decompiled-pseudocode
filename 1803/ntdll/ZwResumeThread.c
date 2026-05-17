/*
 * XREFs of ZwResumeThread @ 0x18009B500
 * Callers:
 *     EtwpCreateEtwThread @ 0x180006010 (EtwpCreateEtwThread.c)
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     WerReportExceptionWorker @ 0x1800D79B0 (WerReportExceptionWorker.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     RtlRemoteCall @ 0x1800F45B0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
