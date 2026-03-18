/*
 * XREFs of ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x180064460
 * Callers:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180064A50 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::IntersectsWithAntiOccluder(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // r11d
  __int64 v5; // r10
  unsigned __int8 v6; // bl
  __int64 v8; // rdi
  int v9; // esi
  _DWORD *v10; // r9
  int v11; // r10d
  unsigned int v12; // r11d

  v4 = *(_DWORD *)(a1 + 440);
  v5 = 0LL;
  v6 = 0;
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 416);
  do
  {
    v9 = *(_DWORD *)(v8 + 36 * v5 + 16);
    if ( v9 > a3 )
      break;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v8 + 36 * v5, a2) )
    {
      v6 = 1;
      *v10 = v9;
    }
    v5 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v5 < v12 );
  return v6;
}
