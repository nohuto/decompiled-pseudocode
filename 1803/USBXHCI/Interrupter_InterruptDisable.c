/*
 * XREFs of Interrupter_InterruptDisable @ 0x1C00179C4
 * Callers:
 *     Interrupter_WdfEvtInterruptDisable @ 0x1C0017DF0 (Interrupter_WdfEvtInterruptDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_InterruptDisable(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v6) = v2;
  WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), 4u, 9u, 0x26u, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v6);
  *(_DWORD *)(a1 + 96) &= ~4u;
  result = **(_DWORD **)(a1 + 24) & 0xFFFFFFFD;
  **(_DWORD **)(a1 + 24) = result;
  _InterlockedOr(v5, 0);
  return result;
}
