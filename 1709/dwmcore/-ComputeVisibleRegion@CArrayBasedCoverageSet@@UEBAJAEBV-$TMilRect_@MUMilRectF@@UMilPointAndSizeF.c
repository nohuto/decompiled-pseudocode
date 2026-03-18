/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180035DC0
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18003D5F8 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180036300 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18003698C (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036AA4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800B9854 (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        float *a2,
        unsigned int a3,
        char a4,
        _BYTE *a5,
        __int64 a6,
        unsigned int *a7)
{
  _BYTE *v7; // r14
  int v8; // r11d
  unsigned int *v9; // rdi
  float *v10; // rbx
  __int64 v11; // rsi
  float v12; // xmm5_4
  float v13; // xmm4_4
  char v14; // r15
  int v15; // r12d
  __int64 v16; // r8
  float v17; // xmm4_4
  float v18; // xmm5_4
  __int128 v19; // xmm0
  unsigned int v20; // r13d
  __int64 v21; // r11
  float v22; // xmm6_4
  float v23; // xmm7_4
  __int64 v24; // rsi
  __int64 v25; // r14
  int v26; // ebx
  __int128 *v27; // rdi
  bool v28; // r15
  float v29; // xmm4_4
  float v30; // xmm5_4
  char v31; // r10
  _OWORD **v32; // r9
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm1_4
  __m128 v37; // xmm2
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm6_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  __int64 v44; // r8
  __int64 v45; // rsi
  unsigned int v46; // ebx
  __int64 v47; // r15
  __int128 *v48; // rdi
  unsigned int v49; // r14d
  __int64 v50; // rax
  _OWORD **v51; // rcx
  __int64 v52; // r8
  __int128 *v53; // rdx
  _OWORD *v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm0
  __int64 v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // r8d
  unsigned int v61; // r9d
  char v62; // [rsp+30h] [rbp-D0h] BYREF
  bool v63; // [rsp+31h] [rbp-CFh] BYREF
  char v64; // [rsp+32h] [rbp-CEh]
  unsigned int v65; // [rsp+34h] [rbp-CCh]
  __int64 v66; // [rsp+38h] [rbp-C8h]
  __int64 v67; // [rsp+40h] [rbp-C0h]
  float *v68; // [rsp+48h] [rbp-B8h] BYREF
  float v69; // [rsp+50h] [rbp-B0h]
  float v70; // [rsp+54h] [rbp-ACh]
  _BYTE *v71; // [rsp+58h] [rbp-A8h]
  unsigned int *v72; // [rsp+60h] [rbp-A0h]
  __int128 v73; // [rsp+68h] [rbp-98h] BYREF
  __int128 v74; // [rsp+78h] [rbp-88h] BYREF
  float v75[6]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v76[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v77[64]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a7;
  v10 = a2;
  v11 = a1;
  v64 = a4;
  *a5 = 0;
  *a7 = 0;
  v65 = a3;
  v68 = a2;
  v67 = a1;
  v71 = a5;
  v66 = a6;
  v72 = a7;
  if ( !a3 )
    return 0LL;
  v12 = a2[2];
  if ( v12 <= *a2 )
    return 0LL;
  v13 = a2[3];
  if ( v13 <= a2[1] )
    return 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( *(_DWORD *)(a1 + 440) )
  {
    v57 = *(_QWORD *)(a1 + 416);
    do
    {
      v58 = v57 + 36 * v16;
      if ( *(_DWORD *)(v58 + 16) > v8 )
        break;
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v58, v10) )
      {
        v15 = *(_DWORD *)(v59 + 16);
        v14 = 1;
      }
      v16 = (unsigned int)(v60 + 1);
    }
    while ( (unsigned int)v16 < v61 );
  }
  v17 = v13 - v10[1];
  v18 = v12 - *v10;
  v19 = *(_OWORD *)v10;
  v20 = 0;
  v21 = 0LL;
  v62 = 0;
  v22 = 0.0;
  v74 = v19;
  v23 = (float)(v17 * v18) * 0.69999999;
  if ( *(_DWORD *)(v11 + 48) )
  {
    v24 = *(_QWORD *)(v11 + 24);
    v25 = v67;
    v26 = v65;
    do
    {
      v27 = (__int128 *)(v24 + 36 * v21);
      if ( *((_DWORD *)v27 + 4) >= v26 )
        break;
      if ( !v14 || *((_DWORD *)v27 + 4) > v15 )
      {
        v73 = *v27;
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v73) )
        {
          if ( (unsigned __int8)IntersectAndOptimize(
                                  (unsigned int)v75,
                                  (unsigned int)&v74,
                                  (unsigned int)&v73,
                                  (unsigned int)&v63,
                                  (__int64)&v62) )
          {
            if ( v62 )
              break;
            if ( v63 )
              v22 = v34
                  - (float)((float)(*((float *)&v74 + 2) - *(float *)&v74)
                          * (float)(*((float *)&v74 + 3) - *((float *)&v74 + 1)));
            v36 = (float)((float)(v75[2] - v75[0]) * (float)(v75[3] - v75[1])) + v22;
            if ( v36 > v35 )
            {
              v20 = v21;
              if ( v36 >= v23 )
              {
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v27, &v74) )
                  break;
              }
            }
          }
        }
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < *(_DWORD *)(v25 + 48) );
    v10 = v68;
    v7 = v71;
    v9 = v72;
    v11 = v67;
  }
  v28 = (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v10, &v74) == 0;
  v63 = v28;
  if ( v31 )
  {
    *v7 = 1;
    *v9 = 0;
  }
  else if ( v30 > (float)(v29 * 0.1) )
  {
    v37 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v11 + 24) + 36LL * v20));
    LODWORD(v38) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
    LODWORD(v39) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
    LODWORD(v40) = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
    if ( *(float *)&v74 > v37.m128_f32[0] )
      v37.m128_i32[0] = v74;
    if ( *((float *)&v74 + 1) > v38 )
      v38 = *((float *)&v74 + 1);
    if ( v39 > *((float *)&v74 + 2) )
      v39 = *((float *)&v74 + 2);
    if ( v40 > *((float *)&v74 + 3) )
      v40 = *((float *)&v74 + 3);
    if ( v39 <= v37.m128_f32[0] || v40 <= v38 )
    {
      v40 = 0.0;
      v39 = 0.0;
      v38 = 0.0;
      v37.m128_i32[0] = 0;
    }
    v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37.m128_f32[0]) & _xmm);
    if ( v41 < 8388608.0 )
      v37.m128_f32[0] = (float)(int)ceilf_0(v37.m128_f32[0]);
    LODWORD(v68) = v37.m128_i32[0];
    v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38) & _xmm);
    if ( v42 < 8388608.0 )
      v38 = (float)(int)ceilf_0(v38);
    *((float *)&v68 + 1) = v38;
    v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm);
    if ( v43 < 8388608.0 )
      v39 = (float)(int)floorf_0(v39);
    v69 = v39;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40) & _xmm) < 8388608.0 )
      v40 = (float)(int)floorf_0(v40);
    v70 = v40;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v68) )
    {
      LOBYTE(v44) = v64;
      v45 = (unsigned int)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                            v10,
                            &v68,
                            v44,
                            v77);
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v76,
        16LL,
        4LL,
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v46 = 0;
      if ( (_DWORD)v45 )
      {
        v47 = v67;
        v48 = (__int128 *)v77;
        v49 = v65;
        do
        {
          v73 = *v48;
          if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered(v47, &v73, v49) )
          {
            v50 = v46++;
            v76[v50] = *v48;
          }
          ++v48;
          --v45;
        }
        while ( v45 );
        v7 = v71;
        v28 = v63;
      }
      v32 = (_OWORD **)v66;
      if ( v46 )
      {
        v51 = (_OWORD **)v66;
        v52 = v46;
        v53 = v76;
        do
        {
          v54 = *v51++;
          v55 = *v53++;
          *v54 = v55;
          --v52;
        }
        while ( v52 );
      }
      v9 = v72;
      *v7 = 1;
      *v9 = v46;
      goto LABEL_12;
    }
  }
  v32 = (_OWORD **)v66;
LABEL_12:
  if ( !*v7 && v28 )
  {
    v56 = v74;
    *v7 = 1;
    *v9 = 1;
    **v32 = v56;
  }
  return 0LL;
}
