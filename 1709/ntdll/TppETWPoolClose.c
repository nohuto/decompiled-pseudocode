/*
 * XREFs of TppETWPoolClose @ 0x18010B020
 * Callers:
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWPoolClose(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7206;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 8u, Fields);
}
