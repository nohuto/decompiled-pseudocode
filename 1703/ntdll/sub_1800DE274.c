/*
 * XREFs of sub_1800DE274 @ 0x1800DE274
 * Callers:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A7E10 (ZwRaiseException.c)
 *     sub_1800DE538 @ 0x1800DE538 (sub_1800DE538.c)
 */

void __fastcall sub_1800DE274(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)sub_1800DE538() )
  {
    do
      ZwRaiseException();
    while ( (unsigned int)sub_1800DE538() );
    ZwTerminateProcess();
  }
}
