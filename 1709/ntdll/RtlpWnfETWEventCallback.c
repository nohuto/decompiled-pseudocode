/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800DDC7C
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000C060 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventCallback(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-21h] BYREF
  __int16 v10; // [rsp+36h] [rbp-1Bh]
  __int64 v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int v17; // [rsp+78h] [rbp+27h]

  v10 = 3362;
  v11 = a1;
  v16 = a6;
  v17 = a7;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  v15 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x20402u, 0x2Cu, Fields);
}
