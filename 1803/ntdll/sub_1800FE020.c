/*
 * XREFs of sub_1800FE020 @ 0x1800FE020
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800FE020(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 UserModeGlobalLogger; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v7; // [rsp+26h] [rbp-52h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]

  v8 = a1;
  v9 = a3;
  v10 = a2;
  v11 = a4;
  v7 = 4129;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x1Cu, Fields);
}
