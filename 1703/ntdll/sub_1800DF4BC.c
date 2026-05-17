/*
 * XREFs of sub_1800DF4BC @ 0x1800DF4BC
 * Callers:
 *     sub_180019A2C @ 0x180019A2C (sub_180019A2C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800DF4BC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
