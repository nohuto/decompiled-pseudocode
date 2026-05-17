/*
 * XREFs of sub_180105A78 @ 0x180105A78
 * Callers:
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_180105A78()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
