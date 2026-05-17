/*
 * XREFs of sub_180108970 @ 0x180108970
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180028238 @ 0x180028238 (sub_180028238.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_180108970()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
