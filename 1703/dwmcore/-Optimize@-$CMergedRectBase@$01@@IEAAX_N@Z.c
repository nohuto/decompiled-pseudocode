/*
 * XREFs of ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180151BAC
 * Callers:
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014E69C (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetRects@?$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180150DE4 (-GetRects@-$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006FED4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x1801520D4 (-SwapExisting@-$CMergedRectBase@$01@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<2>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // rbx
  char v5; // di
  float *v6; // rcx
  double v7; // xmm0_8
  float v8; // xmm4_4
  unsigned int v9; // r8d
  _BYTE *v10; // r9
  float *v11; // rdx
  __int64 v12; // r9
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
        if ( *(_BYTE *)(v4 + v2 + 32) )
        {
          v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v2 + 16LL * (unsigned int)v4);
          if ( *(float *)&v7 > v8 )
            v3 = v4;
          v9 = v4 + 1;
          if ( (unsigned int)(v4 + 1) < 2 )
          {
            v10 = (_BYTE *)(v9 + v2 + 32);
            while ( !*v10
                 || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v6,
                       (float *)(v2 + 16LL * v9)) )
            {
              ++v9;
              ++v10;
              if ( v9 >= 2 )
                goto LABEL_15;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, v11);
            *(_BYTE *)(v12 + v2 + 32) = 0;
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
