/*
 * XREFs of sub_1800039E8 @ 0x1800039E8
 * Callers:
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800039E8(__int64 a1, __int64 a2, int a3)
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
    v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v3 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 0x14u, Fields);
}
