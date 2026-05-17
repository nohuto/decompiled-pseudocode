/*
 * XREFs of sub_1800FE0A4 @ 0x1800FE0A4
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18007488C @ 0x18007488C (sub_18007488C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FE0A4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[4] = a1;
  HIWORD(v9[0]) = 4147;
  v9[5] = a2;
  v9[6] = a3;
  LODWORD(v9[7]) = a4;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
