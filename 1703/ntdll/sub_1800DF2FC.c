/*
 * XREFs of sub_1800DF2FC @ 0x1800DF2FC
 * Callers:
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_1800DF2FC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
