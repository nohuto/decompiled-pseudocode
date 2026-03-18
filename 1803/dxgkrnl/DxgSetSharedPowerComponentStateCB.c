/*
 * XREFs of DxgSetSharedPowerComponentStateCB @ 0x1C0187A50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C01A1098 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 */

__int64 __fastcall DxgSetSharedPowerComponentStateCB(DXGADAPTER *a1, void *a2, unsigned int a3, unsigned __int8 a4)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  return DXGGLOBAL::SetSharedPowerComponentState(Global, a1, a2, a3, a4);
}
