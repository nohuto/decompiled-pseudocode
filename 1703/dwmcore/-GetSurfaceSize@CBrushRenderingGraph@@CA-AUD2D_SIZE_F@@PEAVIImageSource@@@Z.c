/*
 * XREFs of ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001BCA4 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801800A0 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z @ 0x1800164B0 (-GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z.c)
 *     ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180016750 (-GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_F __fastcall CBrushRenderingGraph::GetSurfaceSize(struct IImageSource *this)
{
  __int64 (__fastcall *v2)(CRenderTargetImageSource *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  void (__fastcall *v4)(CRenderTargetBitmap *__hidden, unsigned int *, unsigned int *); // rax
  __m128 v5; // xmm7
  __m128 v6; // xmm6
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+18h] BYREF
  CRenderTargetBitmap *v10; // [rsp+60h] [rbp+20h] BYREF

  v10 = 0LL;
  v8 = 0;
  v9 = 0;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v10);
  v2 = *(__int64 (__fastcall **)(CRenderTargetImageSource *__hidden, struct IBitmapRealization **))(*(_QWORD *)this
                                                                                                  + 72LL);
  if ( v2 == CRenderTargetImageSource::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CRenderTargetImageSource::GetCurrentRenderingRealization(this, &v10);
  else
    CurrentRenderingRealization = v2(this, &v10);
  if ( CurrentRenderingRealization >= 0 )
  {
    v4 = *(void (__fastcall **)(CRenderTargetBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v10 + 24LL);
    if ( v4 == CRenderTargetBitmap::GetSize )
      CRenderTargetBitmap::GetSize(v10, &v8, &v9);
    else
      v4(v10, &v8, &v9);
  }
  v5 = 0LL;
  v6 = 0LL;
  v5.m128_f32[0] = (float)(int)v8;
  v6.m128_f32[0] = (float)(int)v9;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v10);
  return (struct D2D_SIZE_F)_mm_unpacklo_ps(v5, v6).m128_u64[0];
}
