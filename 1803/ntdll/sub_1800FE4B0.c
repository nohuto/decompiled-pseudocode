/*
 * XREFs of sub_1800FE4B0 @ 0x1800FE4B0
 * Callers:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FE4B0()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
