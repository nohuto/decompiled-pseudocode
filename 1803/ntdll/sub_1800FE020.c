/*
 * XREFs of sub_1800FE020 @ 0x1800FE020
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FE020()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
