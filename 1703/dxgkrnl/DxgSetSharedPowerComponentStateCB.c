/*
 * XREFs of DxgSetSharedPowerComponentStateCB @ 0x1C0184E80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0196D24 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 */

__int64 __fastcall DxgSetSharedPowerComponentStateCB(DXGADAPTER *a1, void *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  unsigned int v5; // edi
  DXGGLOBAL *Global; // rax

  v4 = a4;
  v5 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, a3, a4);
  return DXGGLOBAL::SetSharedPowerComponentState(Global, a1, a2, v5, v4);
}
