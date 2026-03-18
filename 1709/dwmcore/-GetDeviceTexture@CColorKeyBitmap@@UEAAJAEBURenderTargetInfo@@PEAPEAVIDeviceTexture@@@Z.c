/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D16C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A660 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::GetDeviceTexture(
        CColorKeyBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  signed int DeviceTextureInternal; // eax
  unsigned int v4; // ebx

  DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal((CColorKeyBitmap *)((char *)this - 144), a2, a3);
  v4 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceTextureInternal, 0x85u);
  return v4;
}
