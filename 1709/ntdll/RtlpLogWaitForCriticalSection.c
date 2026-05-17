/*
 * XREFs of RtlpLogWaitForCriticalSection @ 0x1800E6A44
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpLogWaitForCriticalSection()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
