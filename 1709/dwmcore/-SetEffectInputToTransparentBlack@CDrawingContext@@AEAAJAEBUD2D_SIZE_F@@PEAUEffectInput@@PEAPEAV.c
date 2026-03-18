/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18013F1EC
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18013DB10 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3,
        struct IImageSource **a4)
{
  signed int StockTransparentImageNoRef; // eax
  unsigned int v8; // edi
  float *v9; // rcx
  struct IImageSource *v10; // rbx
  struct IImageSource *v12; // [rsp+30h] [rbp-18h] BYREF

  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(this, &v12);
  v8 = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, StockTransparentImageNoRef, 0xC71u);
  }
  else
  {
    v9 = (float *)((char *)a3 + 48);
    *((_BYTE *)a3 + 45) = 1;
    *(_OWORD *)((char *)a3 + 24) = 0LL;
    if ( a3 != (struct EffectInput *)-48LL )
    {
      *((_QWORD *)a3 + 7) = 0LL;
      *(_QWORD *)v9 = 1065353216LL;
      *((_QWORD *)a3 + 8) = 1065353216LL;
      *((_DWORD *)a3 + 20) = 1065353216;
      *((_QWORD *)a3 + 9) = 0LL;
    }
    *v9 = 1.0 / a2->width;
    *((float *)a3 + 16) = 1.0 / a2->height;
    *(_OWORD *)((char *)a3 + 84) = _xmm;
    v10 = v12;
    (*(void (__fastcall **)(struct IImageSource *, _QWORD))(*(_QWORD *)v12 + 8LL))(v12, 0LL);
    *a4 = v10;
  }
  return v8;
}
