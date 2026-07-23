/*
 * XREFs of sub_180003AB8 @ 0x180003AB8
 * Callers:
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180003AB8(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v6; // [rsp+26h] [rbp-62h]
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 v8; // [rsp+48h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  int v12; // [rsp+60h] [rbp-28h]

  v8 = a1;
  v6 = 7210;
  v7 = *(_QWORD *)(a2 + 328);
  v10 = *(_DWORD *)(a2 + 348);
  v11 = *(_DWORD *)(a2 + 344);
  v2 = (*(unsigned __int8 *)(a2 + 354) >> 1) & 1;
  v9 = a2;
  v12 = v2;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v3 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x24u, Fields);
}
