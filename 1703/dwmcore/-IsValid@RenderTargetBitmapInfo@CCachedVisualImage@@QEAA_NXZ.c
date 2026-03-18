/*
 * XREFs of ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180046CD0
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180047ED0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180047FFC (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800484D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x180043400 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x180047470 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x1800475F0 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsValid(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  CRenderTargetBitmap *v5; // rcx
  int DeviceInfo; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  CRenderTargetBitmap *v10; // rcx
  __int64 (*v11)(void); // rax
  char IsHardwareProtected; // al
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  v14 = 0;
  DeviceInfo = CRenderTargetBitmap::GetDeviceInfo(v5, &v15, (struct DisplayId *)&v14, a4);
  v8 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceInfo, 0x281u);
  }
  else
  {
    v9 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(v7, *(_QWORD *)&v15, v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x284u);
    }
    else
    {
      v10 = (CRenderTargetBitmap *)(*((_QWORD *)this + 1) + 104LL);
      v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 128LL);
      if ( (char *)v11 == (char *)CRenderTargetBitmap::IsHardwareProtected )
        IsHardwareProtected = CRenderTargetBitmap::IsHardwareProtected(v10);
      else
        IsHardwareProtected = v11();
      if ( CD3DDeviceManager::HardwareProtectionRequired((CD3DDeviceManager *)&g_D3DDeviceManager, v15) != IsHardwareProtected )
        v8 = -2147467259;
    }
  }
  return v8 == 0;
}
