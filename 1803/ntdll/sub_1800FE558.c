/*
 * XREFs of sub_1800FE558 @ 0x1800FE558
 * Callers:
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061E38 @ 0x180061E38 (sub_180061E38.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FE558(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x34uLL);
  v7[4] = a1;
  HIWORD(v7[0]) = 4154;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
