/*
 * XREFs of ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B5AA0
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5A40 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B5A68 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800B5B2C (-CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B5C4C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        const struct CVisualTree **a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v14; // eax

  v10 = 0;
  if ( CHwndBitmap::CanUseCVI(this, (struct CDrawingContext *)a2) )
  {
    v14 = CContent::DrawAsDrawList((CComposition **)this, a2, a3, a4, a5, a6);
    v10 = v14;
    if ( v14 >= 0 )
      return v10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x116u);
  }
  if ( CHwndBitmap::IsValidVisual((CCompositionSurfaceBitmap *)((char *)this - 16)) )
  {
    v11 = CHwndBitmap::EnsureVisualTree((CVisual **)this - 2);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x121u);
    }
    else
    {
      v12 = CDrawingContext::DrawVisual(a2, *((struct CVisual **)this + 11), *((_BYTE *)this + 104));
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x126u);
    }
  }
  return v10;
}
