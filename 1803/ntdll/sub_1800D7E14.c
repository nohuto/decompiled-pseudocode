/*
 * XREFs of sub_1800D7E14 @ 0x1800D7E14
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 sub_1800D7E14()
{
  int InformationThread; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread();
  v1 = v3;
  if ( InformationThread < 0 )
    return 0;
  return v1;
}
