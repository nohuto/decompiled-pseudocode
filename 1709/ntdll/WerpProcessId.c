/*
 * XREFs of WerpProcessId @ 0x180076AAC
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800765A0 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 *     WerpWaitForCrashReporting @ 0x1800DD83C (WerpWaitForCrashReporting.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 */

__int64 __fastcall WerpProcessId(void *a1)
{
  NTSTATUS InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
