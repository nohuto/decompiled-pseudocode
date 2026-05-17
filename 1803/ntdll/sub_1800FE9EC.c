/*
 * XREFs of sub_1800FE9EC @ 0x1800FE9EC
 * Callers:
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FE9EC()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
