/*
 * XREFs of sub_180108810 @ 0x180108810
 * Callers:
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180108810(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+26h] [rbp-32h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = a1;
  v4 = 7206;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v1 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 8u, Fields);
}
