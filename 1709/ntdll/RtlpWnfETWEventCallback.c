/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800DDC7C
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000C060 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
