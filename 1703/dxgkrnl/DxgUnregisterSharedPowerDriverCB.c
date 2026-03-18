/*
 * XREFs of DxgUnregisterSharedPowerDriverCB @ 0x1C0184EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgUnregisterSharedPowerDriverCB(DXGADAPTER *a1, void *a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, a3, a4);
  return DXGGLOBAL::UnregisterSharedPowerDriver(Global, a1, a2);
}
