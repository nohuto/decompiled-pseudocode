/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B4370
 * Callers:
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A1B0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CRenderTargetBitmap *v7; // rcx
  __int64 (__fastcall *v8)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmapInfo((__int64)this - 136, *(_QWORD *)a2, *((_DWORD *)a2 + 2), &v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 1871;
    v11 = v5;
    goto LABEL_12;
  }
  if ( !v13 )
  {
    v6 = -2003292287;
    v12 = 1875;
LABEL_10:
    v11 = v6;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v12);
    return v6;
  }
  v7 = (CRenderTargetBitmap *)(*(_QWORD *)(v13 + 8) + 144LL);
  v8 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v7 + 144LL);
  if ( v8 == CRenderTargetBitmap::GetDeviceTexture )
    DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v7, a2, a3);
  else
    DeviceTexture = v8(v7, a2, a3);
  v6 = DeviceTexture;
  if ( DeviceTexture < 0 )
  {
    v12 = 1880;
    goto LABEL_10;
  }
  return v6;
}
