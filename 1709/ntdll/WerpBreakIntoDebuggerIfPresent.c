/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DD564
 * Callers:
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A2C30 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DD790 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess();
  }
}
