/*
 * XREFs of sub_180108884 @ 0x180108884
 * Callers:
 *     TpSetPoolMinThreads @ 0x180056420 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180108884(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]

  v6 = a1;
  v5 = 7207;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v2 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0xCu, Fields);
}
