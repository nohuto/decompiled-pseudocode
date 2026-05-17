/*
 * XREFs of sub_1800FF7B0 @ 0x1800FF7B0
 * Callers:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800FF7B0()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
