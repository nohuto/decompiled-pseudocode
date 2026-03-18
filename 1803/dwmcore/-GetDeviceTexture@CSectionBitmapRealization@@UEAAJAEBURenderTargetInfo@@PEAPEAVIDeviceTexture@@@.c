/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180081740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800780D4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180081434 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rbp
  int v7; // eax
  unsigned int v8; // ebx
  int DeviceTextureInternal; // eax

  *a3 = 0LL;
  v3 = (CSectionBitmapRealization *)((char *)this - 144);
  v7 = CSectionBitmapRealization::EnsureBitmapCacheSource((CSectionBitmapRealization *)((char *)this - 144));
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, v7, 0xDDu);
  }
  else if ( *((_QWORD *)this + 36) )
  {
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, a3);
    v8 = DeviceTextureInternal;
    if ( DeviceTextureInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277D74, 1u, DeviceTextureInternal, 0xE2u);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v8;
}
