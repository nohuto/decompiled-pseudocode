/*
 * XREFs of ZwSetInformationThread @ 0x18009AC60
 * Callers:
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180025D40 (RtlSetThreadWorkOnBehalfTicket.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180028238 @ 0x180028238 (sub_180028238.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18006B870 (RtlClearThreadWorkOnBehalfTicket.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180075FE0 @ 0x180075FE0 (sub_180075FE0.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078E10 (RtlImpersonateSelfEx.c)
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     RtlReleasePrivilege @ 0x180080630 (RtlReleasePrivilege.c)
 *     sub_180080AE0 @ 0x180080AE0 (sub_180080AE0.c)
 *     RtlSetThreadIsCritical @ 0x180087630 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800C8B50 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800C8BC0 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800D66D0 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800D79B0 (WerReportExceptionWorker.c)
 *     sub_1800EFCD8 @ 0x1800EFCD8 (sub_1800EFCD8.c)
 *     sub_1800EFD98 @ 0x1800EFD98 (sub_1800EFD98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationThread(
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
