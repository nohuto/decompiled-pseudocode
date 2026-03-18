/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C003D244
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0012DDC (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0042628 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  v2 = a2;
  v4 = (_QWORD *)WdLogNewEntry5_WdPower();
  v4[5] = 0LL;
  v4[3] = a1;
  v4[4] = v2;
  WdLogEvent5_WdPower(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_xq(v5, &Dxgk_DpiRequestDevicePowerIrp, v6, *(_QWORD *)(a1 + 3704), v2);
  result = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 24), 2u, (POWER_STATE)v2, 0LL, 0LL, 0LL);
  v10 = result;
  if ( result != 259 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    return WdLogEvent5_WdError(v11);
  }
  return result;
}
