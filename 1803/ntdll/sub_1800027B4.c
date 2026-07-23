/*
 * XREFs of sub_1800027B4 @ 0x1800027B4
 * Callers:
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800027B4(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7214;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v1 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 8u, Fields);
}
