/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008DE60
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008B210 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  CRenderTargetBitmap *v7; // rcx
  __int64 (__fastcall *v8)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  signed int DeviceTexture; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmapInfo((__int64)this - 136, *(_QWORD *)a2, *((_DWORD *)a2 + 2), &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x7B8u);
  }
  else if ( v11 )
  {
    v7 = (CRenderTargetBitmap *)(*(_QWORD *)(v11 + 8) + 144LL);
    v8 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v7 + 144LL);
    if ( v8 == CRenderTargetBitmap::GetDeviceTexture )
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v7, a2, a3);
    else
      DeviceTexture = v8(v7, a2, a3);
    v6 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceTexture, 0x7BFu);
  }
  return v6;
}
