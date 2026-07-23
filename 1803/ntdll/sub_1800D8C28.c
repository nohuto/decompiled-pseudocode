/*
 * XREFs of sub_1800D8C28 @ 0x1800D8C28
 * Callers:
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800D8C28(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+28h] [rbp-40h] BYREF
  __int16 v5; // [rsp+2Eh] [rbp-3Ah]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 3364;
  v6 = a1;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[7];
  else
    v2 = 2147353486LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
