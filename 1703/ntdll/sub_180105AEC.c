/*
 * XREFs of sub_180105AEC @ 0x180105AEC
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180105AEC(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+26h] [rbp-52h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  unsigned int v13; // [rsp+4Ch] [rbp-2Ch]
  __int16 v14; // [rsp+50h] [rbp-28h]
  __int16 v15; // [rsp+52h] [rbp-26h]
  int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v10 = 7209;
  v11 = a1;
  v12 = v5;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  v16 = *(_DWORD *)(v6 + 4 * v5);
  v17 = *(_DWORD *)(v6 + 4LL * a3);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v7 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 0x1Cu, Fields);
}
