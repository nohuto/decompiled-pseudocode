/*
 * XREFs of TppETWPoolClose @ 0x18010B020
 * Callers:
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
