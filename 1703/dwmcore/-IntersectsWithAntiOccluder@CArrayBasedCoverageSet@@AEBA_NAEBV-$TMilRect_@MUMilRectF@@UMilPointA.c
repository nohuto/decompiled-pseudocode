/*
 * XREFs of ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18006F3A0
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18006F3D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006F9F0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::IntersectsWithAntiOccluder(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned __int8 v6; // r10
  __int64 v8; // rsi
  int v9; // edi
  _DWORD *v10; // r9
  int v11; // r11d

  v4 = *(_DWORD *)(a1 + 280);
  v5 = 0LL;
  v6 = 0;
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 256);
  do
  {
    v9 = *(_DWORD *)(v8 + 20 * v5 + 16);
    if ( v9 > a3 )
      break;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v8 + 20 * v5, a2) )
    {
      v6 = 1;
      *v10 = v9;
    }
    v5 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v5 < v4 );
  return v6;
}
