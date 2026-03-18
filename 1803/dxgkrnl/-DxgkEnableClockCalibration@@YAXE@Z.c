/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C019DD00
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0030C20 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C019E14C (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 */

void __fastcall DxgkEnableClockCalibration(__int64 a1)
{
  unsigned __int8 v1; // bl
  DXGGLOBAL *Global; // rax

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableClockCalibration(Global, v1);
}
