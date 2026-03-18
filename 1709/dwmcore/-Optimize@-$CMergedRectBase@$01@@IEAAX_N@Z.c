/*
 * XREFs of ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180143D60
 * Callers:
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013FB40 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180140054 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800368FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x180144878 (-SwapExisting@-$CMergedRectBase@$01@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<2>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  __int64 v4; // r11
  char v5; // si
  float *v6; // rcx
  double v7; // xmm0_8
  float v8; // xmm4_4
  unsigned int v9; // r8d
  _BYTE *v10; // rbx
  __int64 v11; // rdi
  float *v12; // rdx
  unsigned int v13; // eax
  _BYTE *i; // rax

  v2 = a1;
  if ( a2 || (*(_BYTE *)(a1 + 36) & 3) == 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 36) = 1;
    if ( *(_DWORD *)(a1 + 40) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 40) != 1 )
        return;
      for ( i = (_BYTE *)(a1 + 32); !*i; ++i )
      {
        if ( ++v3 >= 2 )
          return;
      }
    }
    else
    {
      v4 = 0LL;
      do
      {
        v5 = 0;
        if ( *(_BYTE *)(v2 + v4 + 32) )
        {
          v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((float *)(v2 + 16LL * (unsigned int)v4));
          if ( *(float *)&v7 > v8 )
            v3 = v4;
          v9 = v4 + 1;
          if ( (unsigned int)(v4 + 1) < 2 )
          {
            v10 = (_BYTE *)(v9 + v2 + 32);
            while ( 1 )
            {
              if ( *v10 )
              {
                v11 = v9;
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v6,
                       (float *)(v2 + 16LL * v9)) )
                {
                  break;
                }
              }
              ++v9;
              ++v10;
              if ( v9 >= 2 )
                goto LABEL_15;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, v12);
            *(_BYTE *)(v11 + v2 + 32) = 0;
            v5 = 1;
            --*(_DWORD *)(v2 + 40);
          }
        }
LABEL_15:
        v13 = v4 + 1;
        v4 = 0LL;
        if ( !v5 )
          v4 = v13;
      }
      while ( (unsigned int)v4 < 2 );
    }
    if ( v3 )
      CMergedRectBase<2>::SwapExisting(v2, 0LL, v3);
  }
}
