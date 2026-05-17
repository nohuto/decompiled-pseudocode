/*
 * XREFs of sub_1800FFFA8 @ 0x1800FFFA8
 * Callers:
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800FFFA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
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
