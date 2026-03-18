/*
 * XREFs of ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5B68
 * Callers:
 *     ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001D0F0 (-HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5BF0 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800412BC (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B5C4C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CHwndBitmap::GetBoundsInternal(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  struct CVisualTree *v5; // rcx
  int Bounds; // eax
  float v8; // [rsp+30h] [rbp-30h] BYREF
  float v9; // [rsp+34h] [rbp-2Ch] BYREF
  float v10; // [rsp+38h] [rbp-28h] BYREF
  float v11[6]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)a1) && (v5 = *(struct CVisualTree **)(a1 + 112)) != 0LL )
  {
    Bounds = CVisualTree::GetBounds(v5, (__int64)v11);
    v4 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xA0u);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 120) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 104), &v9, &v8, &v10) )
      {
        v11[1] = v11[1] + COERCE_FLOAT(LODWORD(v8) ^ _xmm);
        v11[0] = v11[0] + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
        v11[3] = v11[3] + COERCE_FLOAT(LODWORD(v8) ^ _xmm);
        v11[2] = v11[2] + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
      }
      *(_OWORD *)a2 = *(_OWORD *)v11;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  return v4;
}
