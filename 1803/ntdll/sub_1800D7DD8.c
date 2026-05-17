/*
 * XREFs of sub_1800D7DD8 @ 0x1800D7DD8
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 */

__int64 __fastcall sub_1800D7DD8(__int64 a1)
{
  if ( a1 )
    return ZwSetInformationProcess();
  else
    return 3221225711LL;
}
