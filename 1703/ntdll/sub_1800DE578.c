/*
 * XREFs of sub_1800DE578 @ 0x1800DE578
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

__int64 __fastcall sub_1800DE578(__int64 a1)
{
  if ( a1 )
    return ZwSetInformationProcess();
  else
    return 3221225711LL;
}
