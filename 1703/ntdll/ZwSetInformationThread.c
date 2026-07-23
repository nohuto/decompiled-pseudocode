/*
 * XREFs of ZwSetInformationThread @ 0x1800A54A0
 * Callers:
 *     sub_180011380 @ 0x180011380 (sub_180011380.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x180016B20 (RtlSetThreadWorkOnBehalfTicket.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180076D00 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007F940 (RtlImpersonateSelfEx.c)
 *     sub_1800865E8 @ 0x1800865E8 (sub_1800865E8.c)
 *     RtlReleasePrivilege @ 0x180087710 (RtlReleasePrivilege.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     RtlSetThreadIsCritical @ 0x18008E0F0 (RtlSetThreadIsCritical.c)
 *     RtlDisableThreadProfiling @ 0x1800D44B0 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800D4520 (RtlEnableThreadProfiling.c)
 *     RtlWow64SetThreadContext @ 0x1800DCF40 (RtlWow64SetThreadContext.c)
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 *     sub_1800F2C28 @ 0x1800F2C28 (sub_1800F2C28.c)
 *     sub_1800F2CE8 @ 0x1800F2CE8 (sub_1800F2CE8.c)
 *     sub_18010B930 @ 0x18010B930 (sub_18010B930.c)
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
