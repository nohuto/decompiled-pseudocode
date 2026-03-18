/*
 * XREFs of ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5BF0
 * Callers:
 *     ?GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DDC30 (-GetBounds@CHwndBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190900 (-GetTransform@CHwndBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B5A68 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5B68 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B5C4C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CVisual **v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int BoundsInternal; // eax

  v4 = (CVisual **)(a1 - 8);
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 8)) && (v6 = CHwndBitmap::EnsureVisualTree(v4), v7 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x8Du);
  }
  else
  {
    BoundsInternal = CHwndBitmap::GetBoundsInternal((__int64)v4, a4);
    v7 = BoundsInternal;
    if ( BoundsInternal < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsInternal, 0x90u);
  }
  return v7;
}
