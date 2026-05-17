/*
 * XREFs of sub_1800FEAD4 @ 0x1800FEAD4
 * Callers:
 *     sub_1800ED51C @ 0x1800ED51C (sub_1800ED51C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

__int64 sub_1800FEAD4()
{
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
