/*
 * XREFs of sub_1800E20B8 @ 0x1800E20B8
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800E20B8()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
