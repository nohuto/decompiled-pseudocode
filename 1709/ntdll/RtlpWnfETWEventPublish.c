/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DDDB4
 * Callers:
 *     RtlPublishWnfStateData @ 0x1800805E0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087280 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
