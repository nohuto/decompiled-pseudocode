/*
 * XREFs of sub_1800DF3A8 @ 0x1800DF3A8
 * Callers:
 *     sub_1800129DC @ 0x1800129DC (sub_1800129DC.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800DF3A8()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
