/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C019DD48
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0030C20 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C019E33C (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkEnableStablePowerState(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableStablePowerState(Global);
}
