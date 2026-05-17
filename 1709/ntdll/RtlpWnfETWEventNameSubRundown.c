/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DDD28
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x18000B87C (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
