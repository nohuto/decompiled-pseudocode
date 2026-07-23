/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800DD7D0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x1800A0440 (NtSetInformationProcess.c)
 */

NTSTATUS __fastcall WerpSetProcessFaultInformation(void *a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = 0LL;
  if ( !a1 )
    return -1073741585;
  ProcessInformation = 1LL;
  return NtSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
