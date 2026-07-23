/*
 * XREFs of TppETWTimerSetNtTimer @ 0x180001D10
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x18000FCF0 (TppUpdateSubQueueTimer.c)
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall TppETWTimerSetNtTimer(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v6; // [rsp+26h] [rbp-42h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  v8 = a1;
  v6 = 7212;
  v7 = a2;
  v9 = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 0x14u, Fields);
}
