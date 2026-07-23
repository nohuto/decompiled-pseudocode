/*
 * XREFs of sub_1800042E8 @ 0x1800042E8
 * Callers:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800042E8(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v5; // [rsp+26h] [rbp-42h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  v6 = a1;
  v5 = 7211;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v2 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 0x10u, Fields);
}
