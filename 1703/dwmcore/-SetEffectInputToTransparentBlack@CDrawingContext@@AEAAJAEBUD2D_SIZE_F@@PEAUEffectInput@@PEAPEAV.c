/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18014E1C8
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18014C8C8 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3,
        struct IImageSource **a4)
{
  int StockTransparentImageNoRef; // eax
  unsigned int v8; // edi
  float *v9; // rcx
  struct IImageSource *v10; // rbx
  struct IImageSource *v12; // [rsp+30h] [rbp-18h] BYREF

  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(this, &v12);
  v8 = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, StockTransparentImageNoRef, 0xDCDu);
  }
  else
  {
    v9 = (float *)((char *)a3 + 32);
    *((_BYTE *)a3 + 29) = 1;
    *(_OWORD *)((char *)a3 + 8) = 0LL;
    if ( a3 != (struct EffectInput *)-32LL )
    {
      *((_QWORD *)a3 + 5) = 0LL;
      *(_QWORD *)v9 = 1065353216LL;
      *((_QWORD *)a3 + 6) = 1065353216LL;
      *((_DWORD *)a3 + 16) = 1065353216;
      *((_QWORD *)a3 + 7) = 0LL;
    }
    *v9 = 1.0 / a2->width;
    *((float *)a3 + 12) = 1.0 / a2->height;
    *(_OWORD *)((char *)a3 + 68) = _xmm;
    v10 = v12;
    (*(void (__fastcall **)(struct IImageSource *, _QWORD))(*(_QWORD *)v12 + 8LL))(v12, 0LL);
    *a4 = v10;
  }
  return v8;
}
