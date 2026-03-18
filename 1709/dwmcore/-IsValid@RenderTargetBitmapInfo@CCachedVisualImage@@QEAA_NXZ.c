/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008AE88
 * Callers:
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E010 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E090 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008E5F0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008E71C (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18001B188 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008B120 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18008B4A0 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  int v2; // ebx
  CRenderTargetBitmap *v3; // rcx
  signed int DeviceInfo; // eax
  __int64 v5; // rcx
  signed int v6; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceInfo, 0x28Au);
    }
    else
    {
      v6 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(v5, *(_QWORD *)&v12, v11);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x28Du);
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
