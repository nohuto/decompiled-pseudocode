/*
 * XREFs of sub_1800D7E14 @ 0x1800D7E14
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_1800D7E14(void *a1)
{
  NTSTATUS InformationThread; // eax
  unsigned int v2; // ecx
  _BYTE ThreadInformation[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationThread < 0 )
    return 0;
  return v2;
}
