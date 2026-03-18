/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033400
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180054460 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180033118 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180033300 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x1800340C8 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 *     McTemplateU0qdffff @ 0x180136B6C (McTemplateU0qdffff.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801944B0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, __m128 *a4)
{
  unsigned int v4; // r15d
  _QWORD *v9; // r12
  float v10; // xmm11_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __m128 v18; // xmm7
  __m128 v19; // xmm7
  char *v20; // rbx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  bool v23; // dl
  float *v24; // r10
  float *v25; // rax
  float *v26; // rcx
  __int64 v27; // r8
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // r9
  unsigned int v37; // ebx
  unsigned int v38; // edx
  unsigned int v39; // edi
  char v40; // si
  unsigned int v41; // r8d
  int v42; // r11d
  float *v43; // rcx
  float *v44; // rax
  char *v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __m128 *v48; // rdx
  __int64 v49; // r9
  float v50; // xmm5_4
  float v51; // xmm2_4
  __int64 v52; // rax
  float v53; // xmm4_4
  float v54; // xmm1_4
  float *v55; // r11
  float *v56; // rcx
  __int64 v57; // rdx
  float v58; // xmm2_4
  char v59; // r8
  float v60; // xmm1_4
  float v61; // xmm2_4
  char v62; // r8
  float v63; // xmm1_4
  char v64; // dl
  float v65; // xmm2_4
  __int64 v66; // rcx
  __int64 v67; // rax
  float v68; // xmm1_4
  __int64 v69; // r8
  float *v70; // r10
  float *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // r11
  float v74; // xmm1_4
  char v75; // al
  float v76; // xmm2_4
  char v77; // al
  float v78; // xmm1_4
  char v79; // al
  float v80; // xmm2_4
  char v81; // al
  float v82; // xmm1_4
  char v83; // al
  float *v84; // rdx
  float *v85; // rcx
  __int64 v86; // rax
  float v87; // xmm1_4
  char v88; // r8
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm2_4
  __int64 v94; // rbx
  __int64 v95; // rcx
  char *v96; // rax
  __int64 v97; // rcx
  float v98; // xmm2_4
  float v99; // xmm1_4
  float v100; // xmm2_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  float v103; // xmm2_4
  _QWORD *v104; // rax
  __int64 v105; // rax
  int v106; // ecx
  _DWORD *v107; // r9
  __m128 X; // [rsp+40h] [rbp-59h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0
    && !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
  {
    McTemplateU0qdffff(
      v106,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v107,
      *v107,
      v107[1],
      v107[2],
      v107[3]);
  }
  X = *a4;
  if ( !*((_BYTE *)this + 2722) )
  {
    v10 = X.m128_f32[2];
    v11 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] )
      goto LABEL_170;
    v12 = X.m128_f32[3];
    v13 = X.m128_f32[1];
    if ( X.m128_f32[3] < X.m128_f32[1] )
      goto LABEL_170;
    if ( *((float *)this + 675) > X.m128_f32[0] )
      v11 = *((float *)this + 675);
    if ( *((float *)this + 676) > X.m128_f32[1] )
      v13 = *((float *)this + 676);
    if ( X.m128_f32[2] > *((float *)this + 677) )
      v10 = *((float *)this + 677);
    if ( X.m128_f32[3] > *((float *)this + 678) )
      v12 = *((float *)this + 678);
    if ( v10 <= v11 || v12 <= v13 )
      return v4;
    if ( *((_BYTE *)this + 2723) )
    {
LABEL_170:
      CDirtyRegion::SetFullDirty(this);
      return v4;
    }
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
    if ( v14 < 8388608.0 )
      v11 = (float)(int)floorf_0(v11);
    X.m128_f32[0] = v11;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
    if ( v15 < 8388608.0 )
      v13 = (float)(int)floorf_0(v13);
    X.m128_f32[1] = v13;
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
    if ( v16 < 8388608.0 )
      v10 = (float)(int)ceilf_0(v10);
    X.m128_f32[2] = v10;
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    if ( v17 < 8388608.0 )
      v12 = (float)(int)ceilf_0(v12);
    v18 = _mm_shuffle_ps(X, X, 147);
    v18.m128_f32[0] = v12;
    v19 = _mm_shuffle_ps(v18, v18, 57);
    X = v19;
    if ( a2 )
    {
      v20 = (char *)this + 1120;
      if ( *((_DWORD *)this + 672) == 32 )
      {
        v104 = HeapAlloc(WPF::g_processHeap, 0, 0x610uLL);
        v21 = v104;
        if ( !v104 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du);
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x200u);
          return v4;
        }
        memset_0(v104, 0, 0x610uLL);
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)(v21 + 2),
          48LL,
          32LL,
          COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        v105 = *(_QWORD *)v20;
        if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
          __fastfail(3u);
        *v21 = v105;
        v21[1] = v20;
        *(_QWORD *)(v105 + 8) = v21;
        *(_QWORD *)v20 = v21;
        *((_DWORD *)this + 672) = 0;
      }
      else
      {
        v21 = *(_QWORD **)v20;
      }
      v22 = *((unsigned int *)this + 672);
      *((_DWORD *)this + 672) = v22 + 1;
      v9 = &v21[6 * v22 + 2];
      v9[2] = a2;
      *((_BYTE *)v9 + 24) = a3;
      *(__m128 *)((char *)v9 + 28) = v19;
      v9[1] = 0LL;
      *v9 = 0LL;
    }
    v23 = v10 <= v11 || v12 <= v13;
    v24 = (float *)((char *)this + 796);
    v25 = (float *)((char *)this + 412);
    v26 = (float *)((char *)this + 796);
    v27 = 2LL;
    v28 = (float)(v10 - v11) * (float)(v12 - v13);
    v29 = (float)((float)(v10 - v11) * 0.5) + v11;
    v30 = (float)((float)(v12 - v13) * 0.5) + v13;
    do
    {
      v31 = 0.0;
      if ( *((_BYTE *)v25 + 8) )
      {
        if ( !v23 )
          v31 = FLOAT_3_4028235e38;
      }
      else if ( !v23 )
      {
        v90 = (float)((float)(*v25 - v30) * (float)(*v25 - v30))
            + (float)((float)(*(v25 - 1) - v29) * (float)(*(v25 - 1) - v29));
        if ( v90 != 0.0 )
          v31 = (float)(v28 + v25[1]) / v90;
      }
      *(v26 - 1) = v31;
      v32 = 0.0;
      if ( *((_BYTE *)v25 + 24) )
      {
        if ( !v23 )
          v32 = FLOAT_3_4028235e38;
      }
      else if ( !v23 )
      {
        v91 = (float)((float)(v25[4] - v30) * (float)(v25[4] - v30))
            + (float)((float)(v25[3] - v29) * (float)(v25[3] - v29));
        if ( v91 != 0.0 )
          v32 = (float)(v28 + v25[5]) / v91;
      }
      *v26 = v32;
      v33 = 0.0;
      if ( *((_BYTE *)v25 + 40) )
      {
        if ( !v23 )
          v33 = FLOAT_3_4028235e38;
      }
      else if ( !v23 )
      {
        v92 = (float)((float)(v25[8] - v30) * (float)(v25[8] - v30))
            + (float)((float)(v25[7] - v29) * (float)(v25[7] - v29));
        if ( v92 != 0.0 )
          v33 = (float)(v28 + v25[9]) / v92;
      }
      v26[1] = v33;
      v34 = 0.0;
      if ( *((_BYTE *)v25 + 56) )
      {
        if ( !v23 )
          v34 = FLOAT_3_4028235e38;
      }
      else if ( !v23 )
      {
        v93 = (float)((float)(v25[12] - v30) * (float)(v25[12] - v30))
            + (float)((float)(v25[11] - v29) * (float)(v25[11] - v29));
        if ( v93 != 0.0 )
          v34 = (float)(v28 + v25[13]) / v93;
      }
      v26[2] = v34;
      v25 += 16;
      v26 += 4;
      --v27;
    }
    while ( v27 );
    v35 = FLOAT_N1_0;
    v36 = 64LL;
    v37 = 0;
    v38 = 8;
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = 0;
      if ( v38 >= 4 )
      {
        v42 = 2;
        v43 = v24;
        do
        {
          if ( *(v43 - 1) > v35 )
          {
            v35 = *(v43 - 1);
            v37 = v38;
            v39 = v41;
            v40 = 1;
          }
          if ( *v43 > v35 )
          {
            v35 = *v43;
            v39 = v42 - 1;
            v37 = v38;
            v40 = 1;
          }
          if ( v43[1] > v35 )
          {
            v35 = v43[1];
            v37 = v38;
            v39 = v42;
            v40 = 1;
          }
          if ( v43[2] > v35 )
          {
            v35 = v43[2];
            v39 = v42 + 1;
            v37 = v38;
            v40 = 1;
          }
          v43 += 4;
          v41 += 4;
          v42 += 4;
        }
        while ( v41 < v38 - 3 );
      }
      if ( v41 < v38 )
      {
        v44 = (float *)((char *)this + 4 * v36 + 4 * v41 + 536);
        do
        {
          if ( *v44 > v35 )
          {
            v35 = *v44;
            v37 = v38;
            v39 = v41;
            v40 = 1;
          }
          ++v44;
          ++v41;
        }
        while ( v41 < v38 );
      }
      v24 -= 8;
      v36 -= 8LL;
      --v38;
    }
    while ( v38 );
    if ( !v40 )
      MilUnexpectedError(-2147467259, L"Invalid dirty region");
    if ( v37 == 8 )
    {
      v45 = (char *)this + 16 * v39;
      if ( v9 )
      {
        v46 = v45 + 280;
        v47 = *((_QWORD *)v45 + 35);
        if ( *(char **)(v47 + 8) != v45 + 280 )
          __fastfail(3u);
        *v9 = v47;
        v9[1] = v46;
        *(_QWORD *)(v47 + 8) = v9;
        *v46 = v9;
      }
      else
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v45 + 152, &X);
        v12 = X.m128_f32[3];
        v10 = X.m128_f32[2];
        v13 = X.m128_f32[1];
        v11 = X.m128_f32[0];
      }
      X.m128_u64[0] = __PAIR64__(LODWORD(v13), LODWORD(v11));
      X.m128_u64[1] = __PAIR64__(LODWORD(v12), LODWORD(v10));
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&X, v45 + 24);
      v50 = X.m128_f32[0];
      if ( X.m128_f32[2] > X.m128_f32[0] )
      {
        v51 = X.m128_f32[1];
        if ( X.m128_f32[3] > X.m128_f32[1]
          && (X.m128_f32[0] < v48->m128_f32[0]
           || X.m128_f32[1] < v48->m128_f32[1]
           || v48->m128_f32[2] < X.m128_f32[2]
           || v48->m128_f32[3] < X.m128_f32[3]) )
        {
          v52 = 0LL;
          v53 = X.m128_f32[2] - X.m128_f32[0];
          v54 = X.m128_f32[3] - X.m128_f32[1];
          *v48 = X;
          *(_BYTE *)(v49 + 420) = 0;
          *(float *)(v49 + 416) = v53 * v54;
          *(float *)(v49 + 408) = (float)(v53 * 0.5) + v50;
          *(float *)(v49 + 412) = (float)(v54 * 0.5) + v51;
          if ( v39 >= 2 )
          {
            v55 = (float *)((char *)this + 412);
            v56 = (float *)((char *)this + 32 * v39 + 540);
            v57 = ((v39 - 2) >> 1) + 1;
            v52 = (unsigned int)(2 * v57);
            do
            {
              v58 = 0.0;
              v59 = *(_BYTE *)(v49 + 420);
              if ( *((_BYTE *)v55 + 8) )
              {
                if ( !v59 )
                  v58 = FLOAT_3_4028235e38;
              }
              else if ( !v59 )
              {
                v60 = (float)((float)(*v55 - *(float *)(v49 + 412)) * (float)(*v55 - *(float *)(v49 + 412)))
                    + (float)((float)(*(v55 - 1) - *(float *)(v49 + 408)) * (float)(*(v55 - 1) - *(float *)(v49 + 408)));
                if ( v60 != 0.0 )
                  v58 = (float)(v55[1] + *(float *)(v49 + 416)) / v60;
              }
              *(v56 - 1) = v58;
              v61 = 0.0;
              v62 = *(_BYTE *)(v49 + 420);
              if ( *((_BYTE *)v55 + 24) )
              {
                if ( !v62 )
                  v61 = FLOAT_3_4028235e38;
              }
              else if ( !v62 )
              {
                v63 = (float)((float)(v55[4] - *(float *)(v49 + 412)) * (float)(v55[4] - *(float *)(v49 + 412)))
                    + (float)((float)(v55[3] - *(float *)(v49 + 408)) * (float)(v55[3] - *(float *)(v49 + 408)));
                if ( v63 != 0.0 )
                  v61 = (float)(v55[5] + *(float *)(v49 + 416)) / v63;
              }
              *v56 = v61;
              v55 += 8;
              v56 += 2;
              --v57;
            }
            while ( v57 );
          }
          if ( (unsigned int)v52 < v39 )
          {
            v64 = *(_BYTE *)(v49 + 420);
            v65 = 0.0;
            v66 = (unsigned int)v52;
            v67 = 2 * v52;
            if ( *((_BYTE *)this + 8 * v67 + 420) )
            {
              if ( !v64 )
                v65 = FLOAT_3_4028235e38;
            }
            else if ( !v64 )
            {
              v68 = (float)((float)(*((float *)this + 2 * v67 + 103) - *(float *)(v49 + 412))
                          * (float)(*((float *)this + 2 * v67 + 103) - *(float *)(v49 + 412)))
                  + (float)((float)(*((float *)this + 2 * v67 + 102) - *(float *)(v49 + 408))
                          * (float)(*((float *)this + 2 * v67 + 102) - *(float *)(v49 + 408)));
              if ( v68 != 0.0 )
                v65 = (float)(*((float *)this + 2 * v67 + 104) + *(float *)(v49 + 416)) / v68;
            }
            *((float *)this + 8 * v39 + v66 + 134) = v65;
          }
          v69 = v39 + 1;
          if ( (unsigned int)v69 < 8 )
          {
            if ( (unsigned int)(8 - v69) >= 5 )
            {
              v70 = (float *)((char *)this + 16 * (unsigned int)v69 + 412);
              v71 = (float *)((char *)this + 32 * v69 + 4 * v39 + 568);
              v72 = (3 - (int)v69) / 5u + 1;
              v73 = v72;
              v69 = v72 + (_DWORD)v69 + 4 * v72;
              do
              {
                v74 = 0.0;
                v75 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v70 + 8) )
                {
                  if ( !v75 )
                    v74 = FLOAT_3_4028235e38;
                }
                else if ( !v75 )
                {
                  v98 = (float)((float)(*v70 - *(float *)(v49 + 412)) * (float)(*v70 - *(float *)(v49 + 412)))
                      + (float)((float)(*(v70 - 1) - *(float *)(v49 + 408)) * (float)(*(v70 - 1) - *(float *)(v49 + 408)));
                  if ( v98 != 0.0 )
                    v74 = (float)(v70[1] + *(float *)(v49 + 416)) / v98;
                }
                *(v71 - 8) = v74;
                v76 = 0.0;
                v77 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v70 + 24) )
                {
                  if ( !v77 )
                    v76 = FLOAT_3_4028235e38;
                }
                else if ( !v77 )
                {
                  v99 = (float)((float)(v70[4] - *(float *)(v49 + 412)) * (float)(v70[4] - *(float *)(v49 + 412)))
                      + (float)((float)(v70[3] - *(float *)(v49 + 408)) * (float)(v70[3] - *(float *)(v49 + 408)));
                  if ( v99 != 0.0 )
                    v76 = (float)(v70[5] + *(float *)(v49 + 416)) / v99;
                }
                *v71 = v76;
                v78 = 0.0;
                v79 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v70 + 40) )
                {
                  if ( !v79 )
                    v78 = FLOAT_3_4028235e38;
                }
                else if ( !v79 )
                {
                  v100 = (float)((float)(v70[8] - *(float *)(v49 + 412)) * (float)(v70[8] - *(float *)(v49 + 412)))
                       + (float)((float)(v70[7] - *(float *)(v49 + 408)) * (float)(v70[7] - *(float *)(v49 + 408)));
                  if ( v100 != 0.0 )
                    v78 = (float)(v70[9] + *(float *)(v49 + 416)) / v100;
                }
                v71[8] = v78;
                v80 = 0.0;
                v81 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v70 + 56) )
                {
                  if ( !v81 )
                    v80 = FLOAT_3_4028235e38;
                }
                else if ( !v81 )
                {
                  v101 = (float)((float)(v70[12] - *(float *)(v49 + 412)) * (float)(v70[12] - *(float *)(v49 + 412)))
                       + (float)((float)(v70[11] - *(float *)(v49 + 408)) * (float)(v70[11] - *(float *)(v49 + 408)));
                  if ( v101 != 0.0 )
                    v80 = (float)(v70[13] + *(float *)(v49 + 416)) / v101;
                }
                v71[16] = v80;
                v82 = 0.0;
                v83 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v70 + 72) )
                {
                  if ( !v83 )
                    v82 = FLOAT_3_4028235e38;
                }
                else if ( !v83 )
                {
                  v102 = (float)((float)(v70[16] - *(float *)(v49 + 412)) * (float)(v70[16] - *(float *)(v49 + 412)))
                       + (float)((float)(v70[15] - *(float *)(v49 + 408)) * (float)(v70[15] - *(float *)(v49 + 408)));
                  if ( v102 != 0.0 )
                    v82 = (float)(v70[17] + *(float *)(v49 + 416)) / v102;
                }
                v71[24] = v82;
                v70 += 20;
                v71 += 40;
                --v73;
              }
              while ( v73 );
            }
            if ( (unsigned int)v69 < 8 )
            {
              v84 = (float *)((char *)this + 16 * (unsigned int)v69 + 412);
              v85 = (float *)((char *)this + 32 * v69 + 4 * v39 + 536);
              v86 = (unsigned int)(8 - v69);
              do
              {
                v87 = 0.0;
                v88 = *(_BYTE *)(v49 + 420);
                if ( *((_BYTE *)v84 + 8) )
                {
                  if ( !v88 )
                    v87 = FLOAT_3_4028235e38;
                }
                else if ( !v88 )
                {
                  v103 = (float)((float)(*v84 - *(float *)(v49 + 412)) * (float)(*v84 - *(float *)(v49 + 412)))
                       + (float)((float)(*(v84 - 1) - *(float *)(v49 + 408))
                               * (float)(*(v84 - 1) - *(float *)(v49 + 408)));
                  if ( v103 != 0.0 )
                    v87 = (float)(v84[1] + *(float *)(v49 + 416)) / v103;
                }
                *v85 = v87;
                v84 += 4;
                v85 += 8;
                --v86;
              }
              while ( v86 );
            }
          }
        }
      }
    }
    else
    {
      CDirtyRegion::Merge(this, v37, v39);
      v94 = 16LL * v39;
      *(__m128 *)((char *)this + v94 + 24) = v19;
      CDirtyRegion::CalcDirtyRegionCachedData(v95, &X, (char *)this + v94 + 408);
      CDirtyRegion::UpdateAcceleration(this, v39);
      if ( v9 )
      {
        v96 = (char *)this + v94 + 280;
        v97 = *(_QWORD *)v96;
        if ( *(char **)(*(_QWORD *)v96 + 8LL) != v96 )
          __fastfail(3u);
        *v9 = v97;
        v9[1] = v96;
        *(_QWORD *)(v97 + 8) = v9;
        *(_QWORD *)v96 = v9;
      }
      else
      {
        *(__m128 *)((char *)this + v94 + 152) = v19;
      }
    }
  }
  return v4;
}
