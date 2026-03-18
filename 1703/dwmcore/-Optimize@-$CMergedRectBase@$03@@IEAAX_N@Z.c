/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800738D4
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800737D0 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006FED4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CMergedRectBase<4>::Optimize(__m128i *a1, char a2)
{
  __m128i *v2; // r10
  int v3; // r11d
  __m128i *i; // rax
  __int8 v5; // dl
  __m128i v6; // xmm1
  __int64 v7; // rbx
  char v8; // di
  float *v9; // rcx
  double v10; // xmm0_8
  float v11; // xmm4_4
  unsigned int v12; // r8d
  __int8 *v13; // r9
  float *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r9
  __m128i v17; // [rsp+20h] [rbp-28h]

  v2 = a1;
  if ( a2 || (a1[4].m128i_i8[4] & 0xF) == 0 )
  {
    v3 = 0;
    a1[4].m128i_i32[1] = 1;
    if ( a1[4].m128i_i32[2] > 1u )
    {
      v7 = 0LL;
      do
      {
        v8 = 0;
        if ( v2[4].m128i_i8[v7] )
        {
          v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)v2[(unsigned int)v7].m128i_i64);
          if ( *(float *)&v10 > v11 )
            v3 = v7;
          v12 = v7 + 1;
          if ( (unsigned int)(v7 + 1) < 4 )
          {
            v13 = &v2[4].m128i_i8[v12];
            while ( !*v13
                 || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v9,
                       (float *)v2[v12].m128i_i32) )
            {
              ++v12;
              ++v13;
              if ( v12 >= 4 )
                goto LABEL_23;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v9, v14);
            v2[4].m128i_i8[v16] = 0;
            v8 = 1;
            --v2[4].m128i_i32[2];
          }
        }
LABEL_23:
        v15 = v7 + 1;
        v7 = 0LL;
        if ( !v8 )
          v7 = v15;
      }
      while ( (unsigned int)v7 < 4 );
    }
    else
    {
      if ( a1[4].m128i_i32[2] != 1 )
        return;
      for ( i = a1 + 4; !i->m128i_i8[0]; i = (__m128i *)((char *)i + 1) )
      {
        if ( (unsigned int)++v3 >= 4 )
          return;
      }
    }
    if ( v3 )
    {
      v5 = v2[4].m128i_i8[0];
      if ( v5 )
        v6 = _mm_loadu_si128(v2);
      else
        v6 = v17;
      *v2 = v2[v3];
      v2[4].m128i_i8[0] = 1;
      if ( v5 )
      {
        v2[v3] = v6;
        v2[4].m128i_i8[v3] = 1;
      }
      else
      {
        v2[4].m128i_i8[v3] = 0;
      }
    }
  }
}
