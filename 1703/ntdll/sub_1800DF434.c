/*
 * XREFs of sub_1800DF434 @ 0x1800DF434
 * Callers:
 *     RtlPublishWnfStateData @ 0x180082250 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087FD0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800DF434()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
