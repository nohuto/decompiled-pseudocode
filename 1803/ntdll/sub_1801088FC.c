/*
 * XREFs of sub_1801088FC @ 0x1801088FC
 * Callers:
 *     sub_18002CB04 @ 0x18002CB04 (sub_18002CB04.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1801088FC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
