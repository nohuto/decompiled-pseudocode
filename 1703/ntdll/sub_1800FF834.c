/*
 * XREFs of sub_1800FF834 @ 0x1800FF834
 * Callers:
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180072F9C @ 0x180072F9C (sub_180072F9C.c)
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800FF834(__int64 a1, __int64 a2, __int64 a3, int a4)
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
