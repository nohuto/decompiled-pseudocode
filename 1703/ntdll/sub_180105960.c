/*
 * XREFs of sub_180105960 @ 0x180105960
 * Callers:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180073730 @ 0x180073730 (sub_180073730.c)
 *     TpWaitForIoCompletion @ 0x180087F70 (TpWaitForIoCompletion.c)
 *     sub_180105230 @ 0x180105230 (sub_180105230.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_180105960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v9; // [rsp+26h] [rbp-62h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]

  v14 = a5;
  v9 = 7204;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v15 = a6;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v6 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x403u, 0x2Cu, Fields);
}
