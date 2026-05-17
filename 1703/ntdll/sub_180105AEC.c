/*
 * XREFs of sub_180105AEC @ 0x180105AEC
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 sub_180105AEC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
