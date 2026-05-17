/*
 * XREFs of sub_1800FE43C @ 0x1800FE43C
 * Callers:
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FE43C()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
