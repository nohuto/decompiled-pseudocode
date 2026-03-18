/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C011F17C
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  DXGGLOBAL::GetGlobal(a1);
  return ((g_IsMobileCore != 0 ? -268435456 : -16777216) & v1) == 0;
}
