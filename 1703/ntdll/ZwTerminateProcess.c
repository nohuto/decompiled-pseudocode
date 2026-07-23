/*
 * XREFs of ZwTerminateProcess @ 0x1800A5880
 * Callers:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     RtlUserThreadStart @ 0x180050C20 (RtlUserThreadStart.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006F334 @ 0x18006F334 (sub_18006F334.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_180095B20 @ 0x180095B20 (sub_180095B20.c)
 *     sub_180095ED0 @ 0x180095ED0 (sub_180095ED0.c)
 *     __report_gsfailure @ 0x180095EF0 (__report_gsfailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DE274 @ 0x1800DE274 (sub_1800DE274.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     sub_180105950 @ 0x180105950 (sub_180105950.c)
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
