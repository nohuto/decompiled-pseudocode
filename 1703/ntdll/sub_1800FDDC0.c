/*
 * XREFs of sub_1800FDDC0 @ 0x1800FDDC0
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800FDDC0(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 613;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
