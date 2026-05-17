/*
 * XREFs of sub_1800D7B88 @ 0x1800D7B88
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800D7B88(_QWORD *a1)
{
  _OWORD v3[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  LODWORD(v3[0]) = 48;
  *((_QWORD *)&v3[0] + 1) = 0LL;
  DWORD2(v3[1]) = 2;
  *(_QWORD *)&v3[1] = 0LL;
  v3[2] = 0LL;
  return ZwCreateEvent();
}
