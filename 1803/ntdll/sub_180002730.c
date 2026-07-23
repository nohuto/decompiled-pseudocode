/*
 * XREFs of sub_180002730 @ 0x180002730
 * Callers:
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180002730(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v5; // [rsp+26h] [rbp-52h]
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v7 = a1;
  v5 = 7216;
  v6 = *(_QWORD *)(a2 + 328);
  v9 = *(_DWORD *)(a2 + 348);
  v10 = *(_DWORD *)(a2 + 344);
  v8 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v2 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x402u, 0x20u, Fields);
}
