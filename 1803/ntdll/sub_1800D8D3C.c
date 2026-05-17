/*
 * XREFs of sub_1800D8D3C @ 0x1800D8D3C
 * Callers:
 *     sub_18004983C @ 0x18004983C (sub_18004983C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800D8D3C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
