/*
 * XREFs of sub_180108884 @ 0x180108884
 * Callers:
 *     TpSetPoolMinThreads @ 0x180056420 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_180108884()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
