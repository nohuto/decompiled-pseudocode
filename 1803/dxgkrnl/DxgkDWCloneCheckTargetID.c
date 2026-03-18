/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C01C73A0
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C01F415C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  DXGGLOBAL::GetGlobal(a1);
  return (v1 & 0xFF000000) == 0;
}
