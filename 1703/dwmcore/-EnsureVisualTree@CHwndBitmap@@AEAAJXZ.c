/*
 * XREFs of ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18001FFE8
 * Callers:
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180020170 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureVisualTree(CVisual **this, __int64 a2, bool a3)
{
  unsigned int v3; // ebx
  int VisualTree; // eax

  v3 = 0;
  if ( !this[60] )
  {
    VisualTree = CVisual::GetVisualTree(this[59], this + 60, a3);
    v3 = VisualTree;
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x1C3u);
  }
  return v3;
}
