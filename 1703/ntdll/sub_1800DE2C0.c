/*
 * XREFs of sub_1800DE2C0 @ 0x1800DE2C0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800DE2C0(_QWORD *a1)
{
  _QWORD v3[5]; // [rsp+38h] [rbp-30h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v3[0] = 0LL;
  v3[1] = 0LL;
  LODWORD(v3[2]) = 2;
  *(_OWORD *)&v3[3] = 0LL;
  return ZwCreateEvent();
}
