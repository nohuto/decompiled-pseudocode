/*
 * XREFs of ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateSwapChains(__int64 a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v6; // esi
  int updated; // eax

  v2 = 0;
  v3 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL);
  if ( v6 )
  {
    while ( 1 )
    {
      updated = CDrawListBitmap::UpdateSwapChainRealization((CCompositionSurfaceBitmap **)(a1 + 24 * (v3 + 1LL)), a2);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( ++v3 >= v6 )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xF0u);
  }
  return v2;
}
