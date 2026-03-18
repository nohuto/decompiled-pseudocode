/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00A6EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

unsigned int DxgkGetMaximumAdapterCount(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GetMaximumAdapterCount(Global);
}
