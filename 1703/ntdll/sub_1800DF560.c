/*
 * XREFs of sub_1800DF560 @ 0x1800DF560
 * Callers:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800DF560()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
