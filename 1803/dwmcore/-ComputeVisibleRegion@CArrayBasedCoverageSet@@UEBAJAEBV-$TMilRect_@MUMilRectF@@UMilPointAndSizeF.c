/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800644D0
 * Callers:
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 * Callees:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180064A50 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180064F30 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800C2528 (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        float *a2,
        int a3,
        char a4,
        _BYTE *a5,
        __int64 a6,
        unsigned int *a7)
{
  _BYTE *v7; // r14
  unsigned int *v9; // r12
  float v11; // xmm5_4
  float v12; // xmm4_4
  char v13; // r15
  int v14; // esi
  __int64 v15; // r8
  float v16; // xmm4_4
  float v17; // xmm5_4
  __int128 v18; // xmm0
  __int64 v19; // r11
  float v20; // xmm3_4
  float v21; // xmm6_4
  __int64 v22; // rdx
  int v23; // r14d
  __int64 v24; // rdi
  bool v25; // r15
  float v26; // xmm4_4
  float v27; // xmm5_4
  char v28; // r10
  _OWORD **v29; // r9
  __int64 v31; // r11
  int v32; // edi
  __int64 v33; // rcx
  char DoesIntersectUnsafe; // al
  int v35; // r8d
  unsigned int v36; // r9d
  int v37; // r10d
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm1_4
  __m128 v41; // xmm2
  float v42; // xmm6_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  __int64 v51; // r8
  __int64 v52; // rsi
  unsigned int v53; // ebx
  unsigned int v54; // r14d
  struct D2D_RECT_F *v55; // rdi
  __int64 v56; // rax
  _OWORD **v57; // rcx
  __int64 v58; // r8
  __int128 *v59; // rdx
  _OWORD *v60; // rax
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  char v63; // [rsp+30h] [rbp-D0h] BYREF
  bool v64; // [rsp+31h] [rbp-CFh] BYREF
  char v65; // [rsp+32h] [rbp-CEh]
  int v66; // [rsp+34h] [rbp-CCh]
  __int64 v67; // [rsp+38h] [rbp-C8h]
  struct D2D_RECT_F v68; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v69; // [rsp+50h] [rbp-B0h]
  struct D2D_RECT_F v70; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v71; // [rsp+68h] [rbp-98h] BYREF
  float v72[6]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v73[64]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v74[4]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = a5;
  v9 = a7;
  v65 = a4;
  *a5 = 0;
  *a7 = 0;
  v66 = a3;
  v69 = a5;
  v67 = a6;
  *(_QWORD *)&v68.left = a7;
  if ( !a3 )
    return 0LL;
  v11 = a2[2];
  if ( v11 <= *a2 )
    return 0LL;
  v12 = a2[3];
  if ( v12 <= a2[1] )
    return 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  if ( *(_DWORD *)(a1 + 440) )
  {
    v31 = *(_QWORD *)(a1 + 416);
    do
    {
      v32 = v14;
      v33 = v31 + 36 * v15;
      if ( *(_DWORD *)(v33 + 16) > v66 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v33, a2);
      v14 = v37;
      if ( DoesIntersectUnsafe )
        v13 = 1;
      v15 = (unsigned int)(v35 + 1);
      if ( !DoesIntersectUnsafe )
        v14 = v32;
    }
    while ( (unsigned int)v15 < v36 );
    v7 = v69;
    v9 = *(unsigned int **)&v68.left;
  }
  v16 = v12 - a2[1];
  v17 = v11 - *a2;
  v18 = *(_OWORD *)a2;
  v68.left = 0.0;
  v19 = 0LL;
  v63 = 0;
  v20 = 0.0;
  v71 = v18;
  v21 = (float)(v16 * v17) * 0.69999999;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v22 = *(_QWORD *)(a1 + 24);
    v23 = v66;
    do
    {
      v24 = v22 + 36 * v19;
      if ( *(_DWORD *)(v24 + 16) >= v23 )
        break;
      if ( !v13 || *(_DWORD *)(v24 + 16) > v14 )
      {
        v70 = *(struct D2D_RECT_F *)v24;
        if ( !IsEmpty(&v70) )
        {
          if ( (unsigned __int8)IntersectAndOptimize(
                                  (unsigned int)v72,
                                  (unsigned int)&v71,
                                  (unsigned int)&v70,
                                  (unsigned int)&v64,
                                  (__int64)&v63) )
          {
            if ( v63 )
              break;
            if ( v64 )
              v20 = v38
                  - (float)((float)(*((float *)&v71 + 2) - *(float *)&v71)
                          * (float)(*((float *)&v71 + 3) - *((float *)&v71 + 1)));
            v40 = (float)((float)(v72[2] - v72[0]) * (float)(v72[3] - v72[1])) + v20;
            if ( v40 > v39 )
            {
              LODWORD(v68.left) = v19;
              if ( v40 >= v21 )
              {
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v24, &v71) )
                  break;
              }
            }
          }
          v22 = *(_QWORD *)(a1 + 24);
        }
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < *(_DWORD *)(a1 + 48) );
    v7 = v69;
  }
  v25 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, &v71) == 0;
  v64 = v25;
  if ( v28 )
  {
    *v7 = 1;
    *v9 = 0;
  }
  else if ( v27 > (float)(v26 * 0.1) )
  {
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v73,
      0x10uLL,
      4uLL,
      (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v41 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 24) + 36LL * LODWORD(v68.left)));
    LODWORD(v42) = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
    LODWORD(v43) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
    LODWORD(v44) = _mm_shuffle_ps(v41, v41, 255).m128_u32[0];
    if ( *(float *)&v71 > v41.m128_f32[0] )
      v41.m128_i32[0] = v71;
    v45 = v42;
    if ( *((float *)&v71 + 1) > v42 )
    {
      v42 = *((float *)&v71 + 1);
      v45 = *((float *)&v71 + 1);
    }
    v46 = v43;
    if ( v43 > *((float *)&v71 + 2) )
    {
      v43 = *((float *)&v71 + 2);
      v46 = *((float *)&v71 + 2);
    }
    v47 = v44;
    if ( v44 > *((float *)&v71 + 3) )
    {
      v44 = *((float *)&v71 + 3);
      v47 = *((float *)&v71 + 3);
    }
    if ( v46 <= v41.m128_f32[0] || v47 <= v45 )
    {
      v44 = 0.0;
      v43 = 0.0;
      v42 = 0.0;
      v41.m128_i32[0] = 0;
    }
    v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41.m128_f32[0]) & _xmm);
    if ( v48 < 8388608.0 )
      v41.m128_f32[0] = (float)(int)ceilf_0(v41.m128_f32[0]);
    LODWORD(v68.left) = v41.m128_i32[0];
    v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm);
    if ( v49 < 8388608.0 )
      v42 = (float)(int)ceilf_0(v42);
    v68.top = v42;
    v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v43) & _xmm);
    if ( v50 < 8388608.0 )
      v43 = (float)(int)floorf_0(v43);
    v68.right = v43;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44) & _xmm) < 8388608.0 )
      v44 = (float)(int)floorf_0(v44);
    v68.bottom = v44;
    if ( !IsEmpty(&v68) )
    {
      LOBYTE(v51) = v65;
      v52 = (unsigned int)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                            a2,
                            &v68,
                            v51,
                            v73);
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v74,
        0x10uLL,
        4uLL,
        (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      v53 = 0;
      if ( (_DWORD)v52 )
      {
        v54 = v66;
        v55 = (struct D2D_RECT_F *)v73;
        do
        {
          v70 = *v55;
          if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered(a1, &v70, v54) )
          {
            v56 = v53++;
            v74[v56] = *v55;
          }
          ++v55;
          --v52;
        }
        while ( v52 );
        v7 = v69;
        v25 = v64;
        v29 = (_OWORD **)v67;
        if ( v53 )
        {
          v57 = (_OWORD **)v67;
          v58 = v53;
          v59 = v74;
          do
          {
            v60 = *v57++;
            v61 = *v59++;
            *v60 = v61;
            --v58;
          }
          while ( v58 );
        }
      }
      else
      {
        v29 = (_OWORD **)v67;
      }
      *v7 = 1;
      *v9 = v53;
      goto LABEL_12;
    }
  }
  v29 = (_OWORD **)v67;
LABEL_12:
  if ( !*v7 && v25 )
  {
    v62 = v71;
    *v7 = 1;
    *v9 = 1;
    **v29 = v62;
  }
  return 0LL;
}
