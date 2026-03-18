/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800735BC
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18012A814 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006FED4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007385C (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2, __int64 a3, _BYTE *a4)
{
  _UNKNOWN **v4; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  unsigned int v9; // r9d
  _BYTE *v10; // r10
  _OWORD *v11; // rsi
  float *v12; // rdx
  float *v13; // rcx
  __int64 v14; // r11
  double v15; // xmm0_8
  float v16; // xmm4_4
  float v17; // xmm5_4
  unsigned int v18; // r10d
  __int64 v19; // r11
  char v20; // si
  float *v21; // rcx
  double v22; // xmm0_8
  float v23; // xmm4_4
  unsigned int v24; // r8d
  float *v25; // rdx
  unsigned int v26; // eax
  _BYTE *v27; // rax
  float v29[6]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return (char)v4;
  v7 = -1;
  v8 = -1;
  if ( (*(_BYTE *)(a1 + 68) & 0xF) == 0 )
  {
    v18 = 0;
    *(_DWORD *)(a1 + 68) = 1;
    if ( *(_DWORD *)(a1 + 72) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 72) != 1 )
        goto LABEL_4;
      v27 = (_BYTE *)(a1 + 64);
      while ( !*v27 )
      {
        ++v18;
        ++v27;
        if ( v18 >= 4 )
          goto LABEL_4;
      }
    }
    else
    {
      v19 = 0LL;
      do
      {
        v20 = 0;
        if ( *(_BYTE *)(v19 + a1 + 64) )
        {
          v22 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a1 + 16LL * (unsigned int)v19);
          if ( *(float *)&v22 > v23 )
            v18 = v19;
          v24 = v19 + 1;
          if ( (unsigned int)(v19 + 1) < 4 )
          {
            a4 = (_BYTE *)(v24 + a1 + 64);
            while ( !*a4
                 || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v21,
                       (float *)(a1 + 16LL * v24)) )
            {
              ++v24;
              ++a4;
              if ( v24 >= 4 )
                goto LABEL_27;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v21, v25);
            a4[a1 + 64] = 0;
            v20 = 1;
            --*(_DWORD *)(a1 + 72);
          }
        }
LABEL_27:
        v26 = v19 + 1;
        v19 = 0LL;
        if ( !v20 )
          v19 = v26;
      }
      while ( (unsigned int)v19 < 4 );
    }
    if ( v18 )
      CMergedRectBase<4>::SwapExisting(a1, 0LL, v18, a4);
  }
LABEL_4:
  v9 = 0;
  v10 = (_BYTE *)(a1 + 64);
  v11 = (_OWORD *)a1;
  do
  {
    if ( *v10 )
    {
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(a1 + 16LL * v9), a2) )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 72) == 4 )
      {
        *(_OWORD *)v29 = *v11;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v29, v12);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v29);
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v14);
        v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)a2);
        if ( v17 > (float)(v16 - *(float *)&v15) )
          v7 = v9;
      }
    }
    else
    {
      v8 = v9;
    }
    ++v9;
    ++v10;
    ++v11;
  }
  while ( v9 < 4 );
  if ( v8 != -1 )
  {
    LOBYTE(v4) = 2 * v8;
    *(_OWORD *)(a1 + 16LL * v8) = *(_OWORD *)a2;
    *(_BYTE *)(v8 + a1 + 64) = 1;
    ++*(_DWORD *)(a1 + 68);
    ++*(_DWORD *)(a1 + 72);
    return (char)v4;
  }
  v12 = a2;
  v13 = (float *)(a1 + 16LL * v7);
LABEL_12:
  LOBYTE(v4) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v13, v12);
  ++*(_DWORD *)(a1 + 68);
  return (char)v4;
}
