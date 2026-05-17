/*
 * XREFs of sub_1800D8C28 @ 0x1800D8C28
 * Callers:
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800D8C28()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
