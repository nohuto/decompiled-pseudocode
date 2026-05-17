/*
 * XREFs of sub_180108770 @ 0x180108770
 * Callers:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_180055720 @ 0x180055720 (sub_180055720.c)
 *     TpWaitForIoCompletion @ 0x180082D50 (TpWaitForIoCompletion.c)
 *     sub_180108010 @ 0x180108010 (sub_180108010.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_180108770()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
