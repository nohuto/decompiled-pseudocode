/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0195428
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00122B8 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkDisableStablePowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  DXGGLOBAL::DisableStablePowerState(Global, v5, v6, v7);
}
