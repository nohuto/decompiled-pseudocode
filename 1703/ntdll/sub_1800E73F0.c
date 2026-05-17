/*
 * XREFs of sub_1800E73F0 @ 0x1800E73F0
 * Callers:
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800E73F0()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
