/*
 * XREFs of sub_1800FEA60 @ 0x1800FEA60
 * Callers:
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FEA60()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
