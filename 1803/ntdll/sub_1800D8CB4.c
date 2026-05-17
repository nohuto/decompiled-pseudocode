/*
 * XREFs of sub_1800D8CB4 @ 0x1800D8CB4
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D640 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180082DB0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800D8CB4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
