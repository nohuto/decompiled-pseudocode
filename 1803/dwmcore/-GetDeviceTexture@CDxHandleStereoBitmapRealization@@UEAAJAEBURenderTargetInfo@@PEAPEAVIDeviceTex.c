/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800780D4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1802151A0 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        CDxHandleStereoBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char v6; // di
  CD2DBitmap **v7; // r10
  int v8; // eax
  unsigned int v9; // ebx
  int DeviceTextureInternal; // eax

  v6 = CDxHandleStereoBitmapRealization::UseLeftBitmap((char *)this - 144, *((unsigned int *)a2 + 3));
  v8 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x60u);
  }
  else
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(
                              (CDxHandleStereoBitmapRealization *)((char *)this
                                                                 + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE60uLL)
                                                                 + 272),
                              a2,
                              a3);
    v9 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTextureInternal, 0x61u);
  }
  return v9;
}
