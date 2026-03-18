/*
 * XREFs of ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180046CD0 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x180135A84 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 */

char __fastcall CD3DDeviceManager::HardwareProtectionRequired(CD3DDeviceManager *this, struct _LUID a2)
{
  char v2; // bl
  struct _LUID v3; // rdx
  CD3DDeviceManager *v4; // rcx

  v2 = 0;
  if ( !CD3DDeviceManager::IsHardwareProtectionDisabled() )
    return (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(v4, v3) != 0;
  return v2;
}
