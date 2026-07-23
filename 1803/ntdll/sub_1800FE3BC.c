/*
 * XREFs of sub_1800FE3BC @ 0x1800FE3BC
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800FE3BC(__int64 a1, __int64 a2, int a3)
{
  __int64 UserModeGlobalLogger; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v6; // [rsp+26h] [rbp-42h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  v7 = a1;
  v6 = 4132;
  v8 = a2;
  v9 = a3;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x14u, Fields);
}
