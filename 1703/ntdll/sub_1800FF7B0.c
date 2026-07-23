/*
 * XREFs of sub_1800FF7B0 @ 0x1800FF7B0
 * Callers:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800FF7B0(__int64 a1, __int64 a2, __int64 a3, int a4)
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
