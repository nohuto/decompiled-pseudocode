/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C011FB94
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C011F74C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx

  v4 = a1;
  DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  return ((g_IsMobileCore != 0 ? -268435456 : -16777216) & v4) == 0;
}
