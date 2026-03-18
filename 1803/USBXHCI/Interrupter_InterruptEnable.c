/*
 * XREFs of Interrupter_InterruptEnable @ 0x1C0017A20
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C0016ADC (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0017E80 (Interrupter_WdfEvtInterruptEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  LODWORD(v6) = v2;
  WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), 4u, 9u, 0x25u, (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids, v6);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFF9 | 4;
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) = 200;
  _InterlockedOr(v5, 0);
  result = **(_DWORD **)(a1 + 24) | 2u;
  **(_DWORD **)(a1 + 24) = result;
  _InterlockedOr(v5, 0);
  return result;
}
