/*
 * XREFs of ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x180035D50
 * Callers:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180036300 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::IntersectsWithAntiOccluder(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r11
  unsigned __int8 v6; // r10
  __int64 v8; // rdi
  _DWORD *v9; // r9
  int v10; // r11d
  int v11; // esi

  v4 = *(_DWORD *)(a1 + 440);
  v5 = 0LL;
  v6 = 0;
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 416);
  do
  {
    v11 = *(_DWORD *)(v8 + 36 * v5 + 16);
    if ( v11 > a3 )
      break;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v8 + 36 * v5, a2) )
    {
      v6 = 1;
      *v9 = v11;
    }
    v5 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v5 < v4 );
  return v6;
}
