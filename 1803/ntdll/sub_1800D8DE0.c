/*
 * XREFs of sub_1800D8DE0 @ 0x1800D8DE0
 * Callers:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800D8DE0()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
