/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180098178
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180098074 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098274 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800368FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180098100 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r9
  unsigned int v3; // r10d
  _BYTE *i; // rax
  __int64 v5; // r11
  char v6; // si
  float *v7; // rcx
  double v8; // xmm0_8
  float v9; // xmm4_4
  unsigned int v10; // r8d
  _BYTE *v11; // rbx
  __int64 v12; // rdi
  float *v13; // rdx
  unsigned int v14; // eax

  v2 = a1;
  if ( a2 || (*(_BYTE *)(a1 + 68) & 0xF) == 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 68) = 1;
    if ( *(_DWORD *)(a1 + 72) > 1u )
    {
      v5 = 0LL;
      do
      {
        v6 = 0;
        if ( *(_BYTE *)(v2 + v5 + 64) )
        {
          v8 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((float *)(v2 + 16LL * (unsigned int)v5));
          if ( *(float *)&v8 > v9 )
            v3 = v5;
          v10 = v5 + 1;
          if ( (unsigned int)(v5 + 1) < 4 )
          {
            v11 = (_BYTE *)(v10 + v2 + 64);
            while ( 1 )
            {
              if ( *v11 )
              {
                v12 = v10;
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v7,
                       (float *)(v2 + 16LL * v10)) )
                {
                  break;
                }
              }
              ++v10;
              ++v11;
              if ( v10 >= 4 )
                goto LABEL_21;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v7, v13);
            *(_BYTE *)(v12 + v2 + 64) = 0;
            v6 = 1;
            --*(_DWORD *)(v2 + 72);
          }
        }
LABEL_21:
        v14 = v5 + 1;
        v5 = 0LL;
        if ( !v6 )
          v5 = v14;
      }
      while ( (unsigned int)v5 < 4 );
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 1 )
        return;
      for ( i = (_BYTE *)(a1 + 64); !*i; ++i )
      {
        if ( ++v3 >= 4 )
          return;
      }
    }
    if ( v3 )
      CMergedRectBase<4>::SwapExisting(v2, 0, v3);
  }
}
