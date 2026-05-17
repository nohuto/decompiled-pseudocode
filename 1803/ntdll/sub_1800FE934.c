/*
 * XREFs of sub_1800FE934 @ 0x1800FE934
 * Callers:
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FE934(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD v10[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x44uLL);
  v10[4] = a1;
  HIWORD(v10[0]) = 4149;
  LODWORD(v10[8]) = a5;
  v10[5] = a2;
  v10[6] = a3;
  v10[7] = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
