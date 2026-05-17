/*
 * XREFs of sub_180048C9C @ 0x180048C9C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 *     sub_1800D7E44 @ 0x1800D7E44 (sub_1800D7E44.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_180048C9C(__int64 a1)
{
  int InformationProcess; // eax
  unsigned int v2; // ecx
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]

  InformationProcess = ZwQueryInformationProcess(a1, 0LL, v4);
  v2 = v5;
  if ( InformationProcess < 0 )
    return 0;
  return v2;
}
