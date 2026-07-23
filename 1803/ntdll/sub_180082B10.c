/*
 * XREFs of sub_180082B10 @ 0x180082B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800023A8 @ 0x1800023A8 (sub_1800023A8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

void __fastcall sub_180082B10(_DWORD *Instance, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8

  v3 = (__int64 *)(a2 - 200);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    sub_1800023A8(v3[18], a2, v3[10], v3[11], v3[13]);
  sub_18002C774(Instance, (__int64)v3, 0x102u);
}
