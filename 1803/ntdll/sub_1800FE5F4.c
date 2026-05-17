/*
 * XREFs of sub_1800FE5F4 @ 0x1800FE5F4
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FE5F4(__int64 a1, __int64 a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[4] = a1;
  HIWORD(v5[0]) = 4152;
  v5[5] = a2;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
