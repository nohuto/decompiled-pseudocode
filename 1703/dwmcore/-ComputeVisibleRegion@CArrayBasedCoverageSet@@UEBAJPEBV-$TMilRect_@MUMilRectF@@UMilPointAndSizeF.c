/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18006F3D0
 * Callers:
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18009EF08 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 * Callees:
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18006F3A0 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18006FC50 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800C24E8 (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
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
  _BYTE *v7; // r13
  int v8; // r10d
  unsigned int *v9; // rdi
  float *v10; // r11
  __int64 v11; // r15
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  char v16; // si
  int v17; // r14d
  __int64 v18; // r8
  __int128 v19; // xmm0
  char v20; // r8
  unsigned int v21; // r12d
  __int64 v22; // rbx
  float v23; // xmm9_4
  float v24; // xmm11_4
  float v25; // xmm4_4
  float v26; // xmm10_4
  __int64 v27; // r15
  __int64 v28; // r13
  __int128 *v29; // rdi
  bool v30; // r14
  _OWORD **v31; // r9
  char v33; // al
  float v34; // xmm1_4
  __m128 v35; // xmm2
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  __int64 v42; // r8
  __int64 v43; // rsi
  unsigned int v44; // ebx
  int v45; // r12d
  __int128 *v46; // rdi
  char v47; // r10
  float v48; // xmm3_4
  __int64 v49; // r8
  float v50; // xmm2_4
  __int64 v51; // rdx
  __int64 v52; // rax
  _OWORD **v53; // rcx
  __int64 v54; // r8
  __int128 *v55; // rdx
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  __int64 v58; // r11
  __int128 v59; // xmm0
  float v60; // xmm1_4
  float v61; // xmm0_4
  __int64 v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // r8d
  unsigned int v66; // r9d
  char v67[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v68; // [rsp+3Ch] [rbp-CCh] BYREF
  char v69; // [rsp+40h] [rbp-C8h] BYREF
  char v70; // [rsp+41h] [rbp-C7h]
  __int128 v71; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+58h] [rbp-B0h]
  __int64 v73; // [rsp+60h] [rbp-A8h]
  unsigned int *v74; // [rsp+68h] [rbp-A0h]
  __int128 v75; // [rsp+70h] [rbp-98h] BYREF
  __int128 v76; // [rsp+80h] [rbp-88h] BYREF
  float v77; // [rsp+98h] [rbp-70h] BYREF
  float v78; // [rsp+9Ch] [rbp-6Ch]
  float v79; // [rsp+A0h] [rbp-68h]
  float v80; // [rsp+A4h] [rbp-64h]
  _OWORD v81[4]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v82[64]; // [rsp+E8h] [rbp-20h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a7;
  v10 = a2;
  v11 = a1;
  v70 = a4;
  *a5 = 0;
  *a7 = 0;
  v68 = a3;
  v73 = a1;
  *(_QWORD *)&v71 = a5;
  v72 = a6;
  v74 = a7;
  if ( !a3 )
    return 0LL;
  v12 = a2[2];
  v13 = *a2;
  if ( v12 <= *a2 )
    return 0LL;
  v14 = a2[3];
  v15 = a2[1];
  if ( v14 <= v15 )
    return 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 280) )
  {
    v62 = *(_QWORD *)(a1 + 256);
    do
    {
      v63 = v62 + 20 * v18;
      if ( *(_DWORD *)(v63 + 16) > v68 )
        break;
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v63, v10) )
      {
        v17 = *(_DWORD *)(v64 + 16);
        v16 = 1;
      }
      v18 = (unsigned int)(v65 + 1);
    }
    while ( (unsigned int)v18 < v66 );
    v8 = v68;
  }
  v19 = *(_OWORD *)v10;
  v20 = 0;
  v21 = 0;
  v67[0] = 0;
  v76 = v19;
  v22 = 0LL;
  v23 = 0.0;
  v24 = 0.0;
  v25 = (float)(v14 - v15) * (float)(v12 - v13);
  v26 = v25 * 0.69999999;
  if ( *(_DWORD *)(v11 + 48) )
  {
    v27 = *(_QWORD *)(v11 + 24);
    v28 = v73;
    do
    {
      v29 = (__int128 *)(v27 + 20 * v22);
      if ( *((_DWORD *)v29 + 4) >= v8 )
        break;
      if ( !v16 || *((_DWORD *)v29 + 4) > v17 )
      {
        v75 = *v29;
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v75) )
        {
          v33 = IntersectAndOptimize(
                  (unsigned int)&v77,
                  (unsigned int)&v76,
                  (unsigned int)&v75,
                  (unsigned int)&v69,
                  (__int64)v67);
          v20 = v67[0];
          if ( v33 )
          {
            if ( v67[0] )
              break;
            if ( v69 )
              v23 = v25
                  - (float)((float)(*((float *)&v76 + 2) - *(float *)&v76)
                          * (float)(*((float *)&v76 + 3) - *((float *)&v76 + 1)));
            v34 = (float)((float)(v79 - v77) * (float)(v80 - v78)) + v23;
            if ( v34 > v24 )
            {
              v21 = v22;
              v24 = (float)((float)(v79 - v77) * (float)(v80 - v78)) + v23;
              if ( v34 >= v26 )
              {
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(
                                        v27 + 20 * v22,
                                        &v76) )
                  break;
              }
            }
          }
          v8 = v68;
        }
      }
      v22 = (unsigned int)(v22 + 1);
    }
    while ( (unsigned int)v22 < *(_DWORD *)(v28 + 48) );
    v7 = (_BYTE *)v71;
    v11 = v73;
    v9 = v74;
  }
  v30 = (v13 != *(float *)&v76
      || v15 != *((float *)&v76 + 1)
      || v12 != *((float *)&v76 + 2)
      || v14 != *((float *)&v76 + 3))
     && (!(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v10)
      || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v76))
     && (!(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v58)
      || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v76));
  if ( v20 )
  {
    *v7 = 1;
    *v9 = 0;
  }
  else if ( v24 > (float)(v25 * 0.1) )
  {
    v35 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v11 + 24) + 20LL * v21));
    LODWORD(v36) = _mm_shuffle_ps(v35, v35, 85).m128_u32[0];
    LODWORD(v37) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
    LODWORD(v38) = _mm_shuffle_ps(v35, v35, 255).m128_u32[0];
    if ( *(float *)&v76 > v35.m128_f32[0] )
      v35.m128_i32[0] = v76;
    if ( *((float *)&v76 + 1) > v36 )
      v36 = *((float *)&v76 + 1);
    if ( v37 > *((float *)&v76 + 2) )
      v37 = *((float *)&v76 + 2);
    if ( v38 > *((float *)&v76 + 3) )
      v38 = *((float *)&v76 + 3);
    if ( v37 <= v35.m128_f32[0] || v38 <= v36 )
    {
      v38 = 0.0;
      v37 = 0.0;
      v36 = 0.0;
      v35.m128_i32[0] = 0;
    }
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35.m128_f32[0]) & _xmm);
    if ( v39 < 8388608.0 )
      v35.m128_f32[0] = (float)(int)ceilf_0(v35.m128_f32[0]);
    LODWORD(v71) = v35.m128_i32[0];
    v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36) & _xmm);
    if ( v40 < 8388608.0 )
      v36 = (float)(int)ceilf_0(v36);
    *((float *)&v71 + 1) = v36;
    v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v37) & _xmm);
    if ( v41 < 8388608.0 )
      v37 = (float)(int)floorf_0(v37);
    *((float *)&v71 + 2) = v37;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38) & _xmm) < 8388608.0 )
      v38 = (float)(int)floorf_0(v38);
    *((float *)&v71 + 3) = v38;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v71) )
    {
      LOBYTE(v42) = v70;
      v43 = (unsigned int)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                            &v76,
                            &v71,
                            v42,
                            v82);
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v81,
        0x10uLL,
        4uLL,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v44 = 0;
      if ( (_DWORD)v43 )
      {
        v45 = v68;
        v46 = (__int128 *)v82;
        do
        {
          v71 = *v46;
          CArrayBasedCoverageSet::IntersectsWithAntiOccluder(v11, (__int64)&v71, v45, &v68);
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v71) )
          {
            v48 = *((float *)&v71 + 1);
            v49 = 0LL;
            v50 = *((float *)&v71 + 3);
            if ( *(_DWORD *)(v11 + 48) )
            {
              v51 = *(_QWORD *)(v11 + 24);
              do
              {
                if ( *(_DWORD *)(v51 + 20 * v49 + 16) >= v45 )
                  break;
                if ( (!v47 || *(_DWORD *)(v51 + 20 * v49 + 16) > v68)
                  && *(float *)&v71 >= *(float *)(v51 + 20 * v49)
                  && *(float *)(v51 + 20 * v49 + 8) >= *((float *)&v71 + 2) )
                {
                  v60 = *(float *)(v51 + 20 * v49 + 4);
                  v61 = *(float *)(v51 + 20 * v49 + 12);
                  if ( v48 < v60 )
                  {
                    if ( v61 >= v50 && v50 > v60 )
                      v50 = *(float *)(v51 + 20 * v49 + 4);
                  }
                  else
                  {
                    if ( v61 >= v50 )
                      goto LABEL_60;
                    if ( v61 > v48 )
                      v48 = *(float *)(v51 + 20 * v49 + 12);
                  }
                }
                v49 = (unsigned int)(v49 + 1);
              }
              while ( (unsigned int)v49 < *(_DWORD *)(v11 + 48) );
            }
            v52 = v44++;
            v81[v52] = *v46;
          }
LABEL_60:
          ++v46;
          --v43;
        }
        while ( v43 );
      }
      v31 = (_OWORD **)v72;
      if ( v44 )
      {
        v53 = (_OWORD **)v72;
        v54 = v44;
        v55 = v81;
        do
        {
          v56 = *v53++;
          v57 = *v55++;
          *v56 = v57;
          --v54;
        }
        while ( v54 );
      }
      v9 = v74;
      *v7 = 1;
      *v9 = v44;
      goto LABEL_17;
    }
  }
  v31 = (_OWORD **)v72;
LABEL_17:
  if ( !*v7 && v30 )
  {
    v59 = v76;
    *v7 = 1;
    *v9 = 1;
    **v31 = v59;
  }
  return 0LL;
}
