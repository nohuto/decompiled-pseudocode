/*
 * XREFs of TppETWTimerExpirationBegin @ 0x180001F04
 * Callers:
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 __fastcall TppETWTimerExpirationBegin(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE v3[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7214;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478LL;
  return NtTraceEvent(*(unsigned __int8 *)v1, 1026LL, 8LL, v3);
}
