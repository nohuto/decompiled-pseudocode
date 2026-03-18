/*
 * XREFs of ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800060B0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateSwapChains(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int updated; // eax
  unsigned int v8; // edi

  v6 = 0LL;
  while ( 1 )
  {
    updated = CDrawListBitmap::UpdateSwapChainRealization(a1 + 8 * (v6 + 2 * (v6 + 1)), a2, a3);
    v8 = updated;
    if ( updated < 0 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 2 )
      return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x50u);
  return v8;
}
