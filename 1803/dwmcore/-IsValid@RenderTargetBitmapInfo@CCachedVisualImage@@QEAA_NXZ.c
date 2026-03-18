/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x1800B67C0
 * Callers:
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C3A0 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C420 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800B48C4 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800B49F0 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180088C74 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18008A400 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008A998 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  int v2; // ebx
  CRenderTargetBitmap *v3; // rcx
  int DeviceInfo; // eax
  __int64 v5; // rcx
  int v6; // eax
  CRenderTargetBitmap *v7; // rcx
  __int64 (*v8)(void); // rax
  char IsHardwareProtected; // al
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = -2147467259;
  v3 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    v11 = 0;
    DeviceInfo = CRenderTargetBitmap::GetDeviceInfo(v3, &v12, (struct DisplayId *)&v11);
    v2 = DeviceInfo;
    if ( DeviceInfo < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceInfo, 0x280u);
    }
    else
    {
      v6 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(v5, *(_QWORD *)&v12, v11);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x283u);
      }
      else
      {
        v7 = (CRenderTargetBitmap *)(*((_QWORD *)this + 1) + 144LL);
        v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 104LL);
        if ( (char *)v8 == (char *)CRenderTargetBitmap::IsHardwareProtected )
          IsHardwareProtected = CRenderTargetBitmap::IsHardwareProtected(v7);
        else
          IsHardwareProtected = v8();
        if ( CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, v12) != IsHardwareProtected )
          v2 = -2147467259;
      }
    }
  }
  return v2 == 0;
}
