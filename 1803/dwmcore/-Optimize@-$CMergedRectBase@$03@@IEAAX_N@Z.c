/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800BD788
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180049C00 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BD684 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__m128i *a1, char a2)
{
  __m128i *v2; // r9
  int v3; // r10d
  __m128i *v4; // r11
  __m128i *i; // rax
  float v6; // xmm4_4
  __int64 v7; // rbx
  char v8; // bp
  float v9; // xmm2_4
  float *m128i_i32; // rcx
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // eax
  unsigned int v15; // r8d
  __int8 *v16; // rdi
  __int64 v17; // rsi
  float *v18; // rdx
  unsigned int v19; // eax
  __int8 v20; // dl
  __m128i v21; // xmm1
  __m128i v22; // [rsp+20h] [rbp-28h]

  v2 = a1;
  if ( a2 || (a1[4].m128i_i8[4] & 0xF) == 0 )
  {
    v3 = 0;
    a1[4].m128i_i32[1] = 1;
    if ( a1[4].m128i_i32[2] > 1u )
    {
      v6 = 0.0;
      v4 = a1 + 4;
      v7 = 0LL;
      do
      {
        v8 = 0;
        v9 = v6;
        if ( v4->m128i_i8[v7] )
        {
          m128i_i32 = (float *)v2[(unsigned int)v7].m128i_i32;
          v11 = m128i_i32[2];
          if ( v11 <= *m128i_i32 || (v12 = m128i_i32[3], v12 <= m128i_i32[1]) )
            v13 = 0.0;
          else
            v13 = (float)(v12 - m128i_i32[1]) * (float)(v11 - *m128i_i32);
          if ( v13 > v6 )
            v6 = v13;
          v14 = v7;
          v15 = v7 + 1;
          if ( v13 <= v9 )
            v14 = v3;
          v3 = v14;
          if ( v15 < 4 )
          {
            v16 = &v2[4].m128i_i8[v15];
            while ( 1 )
            {
              if ( *v16 )
              {
                v17 = v15;
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       m128i_i32,
                       (float *)v2[v15].m128i_i32) )
                {
                  break;
                }
              }
              ++v15;
              ++v16;
              if ( v15 >= 4 )
                goto LABEL_22;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(m128i_i32, v18);
            v4->m128i_i8[v17] = 0;
            v8 = 1;
            --v2[4].m128i_i32[2];
          }
        }
LABEL_22:
        v19 = v7 + 1;
        v7 = 0LL;
        if ( !v8 )
          v7 = v19;
      }
      while ( (unsigned int)v7 < 4 );
    }
    else
    {
      if ( a1[4].m128i_i32[2] != 1 )
        return;
      v4 = a1 + 4;
      for ( i = a1 + 4; !i->m128i_i8[0]; i = (__m128i *)((char *)i + 1) )
      {
        if ( (unsigned int)++v3 >= 4 )
          return;
      }
    }
    if ( v3 )
    {
      v20 = v4->m128i_i8[0];
      if ( v4->m128i_i8[0] )
        v21 = _mm_loadu_si128(v2);
      else
        v21 = v22;
      *v2 = v2[v3];
      v4->m128i_i8[0] = 1;
      if ( v20 )
      {
        v2[v3] = v21;
        v2[4].m128i_i8[v3] = 1;
      }
      else
      {
        v2[4].m128i_i8[v3] = 0;
      }
    }
  }
}
