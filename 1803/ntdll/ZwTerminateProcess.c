/*
 * XREFs of ZwTerminateProcess @ 0x18009B040
 * Callers:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     RtlUserThreadStart @ 0x180073670 (RtlUserThreadStart.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_18008AD60 @ 0x18008AD60 (sub_18008AD60.c)
 *     sub_18008B110 @ 0x18008B110 (sub_18008B110.c)
 *     __report_gsfailure @ 0x18008B130 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D7B3C @ 0x1800D7B3C (sub_1800D7B3C.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     sub_180108760 @ 0x180108760 (sub_180108760.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 44;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
