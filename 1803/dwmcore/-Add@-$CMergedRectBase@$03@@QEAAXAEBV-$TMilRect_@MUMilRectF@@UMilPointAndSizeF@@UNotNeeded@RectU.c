/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD468
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18013C3C0 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800651AC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800BD710 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  unsigned int v6; // r9d
  _BYTE *v7; // r10
  _OWORD *v8; // rsi
  float *v9; // rdx
  float *v10; // rcx
  __int64 v11; // r11
  double v12; // xmm0_8
  float v13; // xmm4_4
  float v14; // xmm5_4
  unsigned int v15; // r9d
  float v16; // xmm4_4
  __int64 v17; // r10
  char v18; // r14
  float v19; // xmm2_4
  float *v20; // rcx
  unsigned int v21; // r9d
  double v22; // xmm0_8
  unsigned int v23; // eax
  unsigned int v24; // r8d
  _BYTE *v25; // r11
  __int64 v26; // rsi
  float *v27; // rdx
  unsigned int v28; // eax
  _BYTE *v29; // rax
  float v30[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return;
  v4 = -1;
  v5 = -1;
  if ( (*(_BYTE *)(a1 + 68) & 0xF) == 0 )
  {
    v15 = 0;
    *(_DWORD *)(a1 + 68) = 1;
    if ( *(_DWORD *)(a1 + 72) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 72) != 1 )
        goto LABEL_4;
      v29 = (_BYTE *)(a1 + 64);
      while ( !*v29 )
      {
        ++v15;
        ++v29;
        if ( v15 >= 4 )
          goto LABEL_4;
      }
    }
    else
    {
      v16 = 0.0;
      v17 = 0LL;
      do
      {
        v18 = 0;
        v19 = v16;
        if ( *(_BYTE *)(a1 + v17 + 64) )
        {
          v22 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a1 + 16LL * (unsigned int)v17);
          if ( *(float *)&v22 > v16 )
            v16 = *(float *)&v22;
          v23 = v17;
          v24 = v17 + 1;
          if ( *(float *)&v22 <= v19 )
            v23 = v21;
          v15 = v23;
          if ( v24 < 4 )
          {
            v25 = (_BYTE *)(v24 + a1 + 64);
            while ( 1 )
            {
              if ( *v25 )
              {
                v26 = v24;
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v20,
                       (float *)(a1 + 16LL * v24)) )
                {
                  break;
                }
              }
              ++v24;
              ++v25;
              if ( v24 >= 4 )
                goto LABEL_29;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v20, v27);
            *(_BYTE *)(v26 + a1 + 64) = 0;
            v18 = 1;
            --*(_DWORD *)(a1 + 72);
          }
        }
LABEL_29:
        v28 = v17 + 1;
        v17 = 0LL;
        if ( !v18 )
          v17 = v28;
      }
      while ( (unsigned int)v17 < 4 );
    }
    if ( v15 )
      CMergedRectBase<4>::SwapExisting(a1, 0LL, v15);
  }
LABEL_4:
  v6 = 0;
  v7 = (_BYTE *)(a1 + 64);
  v8 = (_OWORD *)a1;
  do
  {
    if ( *v7 )
    {
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(a1 + 16LL * v6), a2) )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 72) == 4 )
      {
        *(_OWORD *)v30 = *v8;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v30, v9);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v30);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v11);
        v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)a2);
        if ( v14 > (float)(v13 - *(float *)&v12) )
          v4 = v6;
      }
    }
    else
    {
      v5 = v6;
    }
    ++v6;
    ++v7;
    ++v8;
  }
  while ( v6 < 4 );
  if ( v5 != -1 )
  {
    *(_OWORD *)(a1 + 16LL * v5) = *(_OWORD *)a2;
    *(_BYTE *)(v5 + a1 + 64) = 1;
    ++*(_DWORD *)(a1 + 68);
    ++*(_DWORD *)(a1 + 72);
    return;
  }
  v9 = a2;
  v10 = (float *)(a1 + 16LL * v4);
LABEL_12:
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v10, v9);
  ++*(_DWORD *)(a1 + 68);
}
