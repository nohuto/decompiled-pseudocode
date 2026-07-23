/*
 * XREFs of sub_180001FD0 @ 0x180001FD0
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180028360 @ 0x180028360 (sub_180028360.c)
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     sub_180075FE0 @ 0x180075FE0 (sub_180075FE0.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_180108E80 @ 0x180108E80 (sub_180108E80.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180001FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7202;
  v13 = a5;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x402u, 0x28u, Fields);
}
