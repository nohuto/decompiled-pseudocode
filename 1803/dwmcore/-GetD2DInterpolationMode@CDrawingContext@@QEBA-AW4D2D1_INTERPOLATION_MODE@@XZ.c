/*
 * XREFs of ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800DAA44
 * Callers:
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180160D80 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetD2DInterpolationMode(CDrawingContext *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 63);
  result = 0LL;
  if ( v1 == 1 )
    return 1LL;
  if ( v1 <= 1 )
    return result;
  if ( v1 <= 3 )
    return 2LL;
  if ( v1 == 4 )
    return 3LL;
  if ( v1 != 5 )
  {
    if ( v1 != 6 )
      return result;
    return 3LL;
  }
  return 4LL;
}
