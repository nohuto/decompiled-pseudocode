/*
 * XREFs of ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013FB40
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180140054 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800368FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180143D60 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRectBase<2>::Add(__int64 a1, float *a2)
{
  char result; // al
  unsigned int v5; // r14d
  unsigned int v6; // esi
  unsigned int v7; // r9d
  _BYTE *v8; // r10
  _OWORD *v9; // rbp
  float *v10; // rdx
  float *v11; // rcx
  float *v12; // r11
  double v13; // xmm0_8
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16[6]; // [rsp+20h] [rbp-18h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  if ( !result )
  {
    v5 = -1;
    v6 = -1;
    CMergedRectBase<2>::Optimize(a1, 0LL);
    v7 = 0;
    v8 = (_BYTE *)(a1 + 32);
    v9 = (_OWORD *)a1;
    do
    {
      if ( *v8 )
      {
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(a1 + 16LL * v7), a2) )
          goto LABEL_13;
        if ( *(_DWORD *)(a1 + 40) == 2 )
        {
          *(_OWORD *)v16 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v16, v10);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v16);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v12);
          v13 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          if ( v15 > (float)(v14 - *(float *)&v13) )
            v5 = v7;
        }
      }
      else
      {
        v6 = v7;
      }
      ++v7;
      ++v8;
      ++v9;
    }
    while ( v7 < 2 );
    if ( v6 != -1 )
    {
      result = 2 * v6;
      *(_OWORD *)(a1 + 16LL * v6) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 32) = 1;
      ++*(_DWORD *)(a1 + 36);
      ++*(_DWORD *)(a1 + 40);
      return result;
    }
    v10 = a2;
    v11 = (float *)(a1 + 16LL * v5);
LABEL_13:
    result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, v10);
    ++*(_DWORD *)(a1 + 36);
  }
  return result;
}
