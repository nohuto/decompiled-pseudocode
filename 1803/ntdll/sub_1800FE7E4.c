/*
 * XREFs of sub_1800FE7E4 @ 0x1800FE7E4
 * Callers:
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FE7E4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4144;
  v9[5] = a2;
  v9[6] = a3;
  v9[7] = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
