/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C01AA06C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00133D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C01AA394 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 */

void __fastcall DxgkEnableClockCalibration(__int64 a1)
{
  unsigned __int8 v1; // bl
  DXGGLOBAL *Global; // rax

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableClockCalibration(Global, v1);
}
