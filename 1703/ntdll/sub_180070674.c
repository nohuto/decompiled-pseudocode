/*
 * XREFs of sub_180070674 @ 0x180070674
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_180070674(__int64 a1)
{
  int InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = ZwQueryInformationProcess(a1, 0LL, v4, 48LL, 0LL);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
