/*
 * XREFs of ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FF80 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180164750 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18001FFE8 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800200A0 (-CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800201CC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 */

__int64 __fastcall CHwndBitmap::DrawWorker(
        CHwndBitmap *this,
        char a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4,
        __int64 a5,
        __int64 a6,
        CDrawListCache *a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rdx
  bool v11; // r8
  int v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // eax

  v7 = 0;
  if ( a2 )
  {
    v16 = CContent::DrawAsDrawList((CHwndBitmap *)((char *)this + 16), a3, a4, a6, a7);
    v7 = v16;
    if ( v16 >= 0 )
      return v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x148u);
  }
  else if ( CHwndBitmap::CanUseCVI(this, a3) )
  {
    v15 = CDrawingContext::DrawCommandListBitmapRepresentation(
            a3,
            (struct CCommandListBitmapRepresentation *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
            0LL);
    v7 = v15;
    if ( v15 >= 0 )
      return v7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x14Cu);
  }
  if ( CHwndBitmap::IsValidVisual(this) )
  {
    v12 = CHwndBitmap::EnsureVisualTree((CVisual **)this, v10, v11);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x158u);
    }
    else
    {
      v13 = CDrawingContext::DrawVisual(
              (struct CComposition **)a3,
              *((struct CVisual **)this + 59),
              *((_BYTE *)this + 488));
      v7 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x15Du);
    }
  }
  return v7;
}
