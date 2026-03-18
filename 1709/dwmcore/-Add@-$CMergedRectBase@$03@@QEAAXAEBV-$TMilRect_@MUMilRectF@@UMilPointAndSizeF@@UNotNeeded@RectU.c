/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098274
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800368FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180098178 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  _UNKNOWN **v2; // rax
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
  float v17[6]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = -1;
    v6 = -1;
    CMergedRectBase<4>::Optimize(a1, 0);
    v7 = 0;
    v8 = (_BYTE *)(a1 + 64);
    v9 = (_OWORD *)a1;
    do
    {
      if ( *v8 )
      {
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(a1 + 16LL * v7), a2) )
          goto LABEL_11;
        if ( *(_DWORD *)(a1 + 72) == 4 )
        {
          *(_OWORD *)v17 = *v9;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v17, v10);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v17);
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
    while ( v7 < 4 );
    if ( v6 != -1 )
    {
      LOBYTE(v2) = 2 * v6;
      *(_OWORD *)(a1 + 16LL * v6) = *(_OWORD *)a2;
      *(_BYTE *)(v6 + a1 + 64) = 1;
      ++*(_DWORD *)(a1 + 68);
      ++*(_DWORD *)(a1 + 72);
      return (char)v2;
    }
    v10 = a2;
    v11 = (float *)(a1 + 16LL * v5);
LABEL_11:
    LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, v10);
    ++*(_DWORD *)(a1 + 68);
  }
  return (char)v2;
}
