/*
 * XREFs of ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180007D10
 * Callers:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x180008570 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017C73C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000D4F0 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetStockTransparentImageNoRef(CDrawingContext *this, struct IImageSource **a2)
{
  struct CRenderTargetImageSource **v3; // rax
  unsigned int v4; // ebx
  struct CRenderTargetImageSource **v5; // rsi
  struct CRenderTargetImageSource **v6; // rdi
  int v7; // eax
  int v8; // eax

  v3 = (struct CRenderTargetImageSource **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
  v4 = 0;
  v5 = v3;
  *a2 = 0LL;
  v6 = v3 + 108;
  if ( v3[108] )
    goto LABEL_4;
  v7 = CD3DDeviceLevel1::EnsureBlackBitmapTargets((CD3DDeviceLevel1 *)v3);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4EEu);
    return v4;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v6);
  v8 = CRenderTargetImageSource::Create(v5[107], 1, v6);
  v4 = v8;
  if ( v8 >= 0 )
LABEL_4:
    *a2 = *v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x4F2u);
  return v4;
}
