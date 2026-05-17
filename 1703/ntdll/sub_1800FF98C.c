/*
 * XREFs of sub_1800FF98C @ 0x1800FF98C
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 __fastcall sub_1800FF98C(__int64 a1)
{
  sub_1800062F4(a1);
  return ZwTraceEvent();
}
