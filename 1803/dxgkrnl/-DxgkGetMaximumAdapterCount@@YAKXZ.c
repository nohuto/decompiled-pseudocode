/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C0165250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00F9DEC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  return DXGGLOBAL::GetMaximumAdapterCount(Global);
}
