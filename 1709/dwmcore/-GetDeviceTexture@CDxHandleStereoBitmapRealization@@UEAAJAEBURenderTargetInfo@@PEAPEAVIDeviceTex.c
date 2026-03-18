/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D3000
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A660 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801D2DC0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801D3270 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        CDxHandleStereoBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  CD2DBitmap **v9; // r10
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int DeviceTextureInternal; // eax

  v6 = CDxHandleStereoBitmapRealization::UseLeftBitmap((char *)this - 144, *((unsigned int *)a2 + 3));
  v10 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v9, v7, v8);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x60u);
  }
  else
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                              (CDxHandleStereoBitmapRealization *)((char *)this
                                                                 + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE60uLL)
                                                                 + 272),
                              a2,
                              a3);
    v11 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceTextureInternal, 0x61u);
  }
  return v11;
}
