/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001DE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800913D8 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180091550 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180092A70 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     Template_qdffff @ 0x1801464EC (Template_qdffff.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180185D20 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, float *a4)
{
  unsigned int v4; // esi
  _QWORD *v9; // r12
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __m128 v18; // xmm8
  __m128 v19; // xmm8
  char *v20; // rdi
  _QWORD *v21; // r12
  __int64 v22; // rcx
  bool v23; // dl
  float *v24; // r10
  float *v25; // rax
  float *v26; // rcx
  __int64 v27; // r8
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // r9
  unsigned int v37; // edi
  unsigned int v38; // edx
  unsigned int v39; // r14d
  char v40; // r15
  unsigned int v41; // r8d
  int v42; // r11d
  float *v43; // rcx
  float *v44; // rax
  char *v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rcx
  float *v48; // rdx
  __int64 v49; // r9
  float v50; // xmm5_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  float *v54; // r11
  float *v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rdx
  float v58; // xmm2_4
  char v59; // al
  float v60; // xmm1_4
  float v61; // xmm2_4
  char v62; // al
  float v63; // xmm1_4
  char v64; // dl
  float v65; // xmm2_4
  float v66; // xmm0_4
  float v67; // xmm1_4
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
  unsigned int v89; // ebx
  __int64 v90; // rdi
  __int64 v91; // rcx
  char *v92; // rax
  __int64 v93; // rcx
  float v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm2_4
  float v98; // xmm2_4
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm2_4
  _QWORD *v105; // rax
  __int64 v106; // rax
  int v107; // ecx
  _DWORD *v108; // r9
  __m128 X; // [rsp+40h] [rbp-59h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0
    && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
  {
    Template_qdffff(
      v107,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v108,
      *v108,
      v108[1],
      v108[2],
      v108[3]);
  }
  X = *(__m128 *)a4;
  if ( *((_BYTE *)this + 2724) )
    return 0;
  v10 = X.m128_f32[2];
  v11 = X.m128_f32[0];
  if ( X.m128_f32[2] < X.m128_f32[0] )
    goto LABEL_160;
  v12 = X.m128_f32[3];
  v13 = X.m128_f32[1];
  if ( X.m128_f32[3] < X.m128_f32[1] )
    goto LABEL_160;
  if ( *((float *)this + 677) > X.m128_f32[0] )
    v11 = *((float *)this + 677);
  if ( *((float *)this + 678) > X.m128_f32[1] )
    v13 = *((float *)this + 678);
  if ( X.m128_f32[2] > *((float *)this + 679) )
    v10 = *((float *)this + 679);
  if ( X.m128_f32[3] > *((float *)this + 680) )
    v12 = *((float *)this + 680);
  if ( v10 <= v11 || v12 <= v13 )
    return 0;
  if ( *((_BYTE *)this + 2725) )
  {
LABEL_160:
    CDirtyRegion::SetFullDirty(this);
    return 0;
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
    v20 = (char *)this + 1128;
    if ( *((_DWORD *)this + 674) == 32 )
    {
      v105 = HeapAlloc(WPF::g_processHeap, 0, 0x610uLL);
      v21 = v105;
      if ( !v105 )
      {
        v89 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21Cu);
        return v89;
      }
      memset_0(v105, 0, 0x610uLL);
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v21 + 2),
        0x30uLL,
        0x20uLL,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v106 = *(_QWORD *)v20;
      if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
        __fastfail(3u);
      *v21 = v106;
      v21[1] = v20;
      *(_QWORD *)(v106 + 8) = v21;
      *(_QWORD *)v20 = v21;
      *((_DWORD *)this + 674) = 0;
    }
    else
    {
      v21 = *(_QWORD **)v20;
    }
    v22 = *((unsigned int *)this + 674);
    v9 = &v21[6 * v22 + 2];
    *((_DWORD *)this + 674) = v22 + 1;
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
      v95 = (float)((float)(*v25 - v30) * (float)(*v25 - v30))
          + (float)((float)(*(v25 - 1) - v29) * (float)(*(v25 - 1) - v29));
      if ( v95 != 0.0 )
        v31 = (float)(v28 + v25[1]) / v95;
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
      v96 = (float)((float)(v25[4] - v30) * (float)(v25[4] - v30))
          + (float)((float)(v25[3] - v29) * (float)(v25[3] - v29));
      if ( v96 != 0.0 )
        v32 = (float)(v28 + v25[5]) / v96;
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
      v97 = (float)((float)(v25[8] - v30) * (float)(v25[8] - v30))
          + (float)((float)(v25[7] - v29) * (float)(v25[7] - v29));
      if ( v97 != 0.0 )
        v33 = (float)(v28 + v25[9]) / v97;
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
      v98 = (float)((float)(v25[12] - v30) * (float)(v25[12] - v30))
          + (float)((float)(v25[11] - v29) * (float)(v25[11] - v29));
      if ( v98 != 0.0 )
        v34 = (float)(v28 + v25[13]) / v98;
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
    MilUnexpectedErrorWithAsimovEvent(-2147467259, L"Invalid dirty region");
  if ( v37 != 8 )
  {
    CDirtyRegion::Merge(this, v37, v39);
    v90 = 16LL * v39;
    *(__m128 *)((char *)this + v90 + 24) = v19;
    CDirtyRegion::CalcDirtyRegionCachedData(v91, &X, (char *)this + v90 + 408);
    CDirtyRegion::UpdateAcceleration(this, v39);
    if ( !v9 )
    {
      *(__m128 *)((char *)this + v90 + 152) = v19;
      return 0;
    }
    v92 = (char *)this + v90 + 280;
    v93 = *(_QWORD *)v92;
    if ( *(char **)(*(_QWORD *)v92 + 8LL) != v92 )
      __fastfail(3u);
    *v9 = v93;
    v9[1] = v92;
    *(_QWORD *)(v93 + 8) = v9;
    *(_QWORD *)v92 = v9;
    return 0;
  }
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
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v45 + 38, X.m128_f32);
    v12 = X.m128_f32[3];
    v10 = X.m128_f32[2];
    v13 = X.m128_f32[1];
    v11 = X.m128_f32[0];
  }
  X.m128_u64[0] = __PAIR64__(LODWORD(v13), LODWORD(v11));
  X.m128_u64[1] = __PAIR64__(LODWORD(v12), LODWORD(v10));
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(X.m128_f32, (float *)v45 + 6);
  v50 = X.m128_f32[0];
  if ( X.m128_f32[2] <= X.m128_f32[0] )
    return 0;
  v51 = X.m128_f32[1];
  if ( X.m128_f32[3] <= X.m128_f32[1]
    || X.m128_f32[0] >= *v48 && X.m128_f32[1] >= v48[1] && v48[2] >= X.m128_f32[2] && v48[3] >= X.m128_f32[3] )
  {
    return 0;
  }
  v52 = X.m128_f32[2] - X.m128_f32[0];
  v53 = X.m128_f32[3] - X.m128_f32[1];
  *(__m128 *)v48 = X;
  *(_BYTE *)(v49 + 420) = 0;
  *(float *)(v49 + 416) = v52 * v53;
  *(float *)(v49 + 408) = (float)(v52 * 0.5) + v50;
  *(float *)(v49 + 412) = (float)(v53 * 0.5) + v51;
  if ( v39 >= 2 )
  {
    v54 = (float *)((char *)this + 412);
    v55 = (float *)((char *)this + 32 * v39 + 540);
    v56 = ((v39 - 2) >> 1) + 1;
    v57 = v56;
    v4 = 2 * v56;
    do
    {
      v58 = 0.0;
      v59 = *(_BYTE *)(v49 + 420);
      if ( *((_BYTE *)v54 + 8) )
      {
        if ( !v59 )
          v58 = FLOAT_3_4028235e38;
      }
      else if ( !v59 )
      {
        v60 = (float)((float)(*v54 - *(float *)(v49 + 412)) * (float)(*v54 - *(float *)(v49 + 412)))
            + (float)((float)(*(v54 - 1) - *(float *)(v49 + 408)) * (float)(*(v54 - 1) - *(float *)(v49 + 408)));
        if ( v60 != 0.0 )
          v58 = (float)(v54[1] + *(float *)(v49 + 416)) / v60;
      }
      *(v55 - 1) = v58;
      v61 = 0.0;
      v62 = *(_BYTE *)(v49 + 420);
      if ( *((_BYTE *)v54 + 24) )
      {
        if ( !v62 )
          v61 = FLOAT_3_4028235e38;
      }
      else if ( !v62 )
      {
        v63 = (float)((float)(v54[4] - *(float *)(v49 + 412)) * (float)(v54[4] - *(float *)(v49 + 412)))
            + (float)((float)(v54[3] - *(float *)(v49 + 408)) * (float)(v54[3] - *(float *)(v49 + 408)));
        if ( v63 != 0.0 )
          v61 = (float)(v54[5] + *(float *)(v49 + 416)) / v63;
      }
      *v55 = v61;
      v54 += 8;
      v55 += 2;
      --v57;
    }
    while ( v57 );
  }
  if ( v4 < v39 )
  {
    v64 = *(_BYTE *)(v49 + 420);
    v65 = 0.0;
    if ( *((_BYTE *)this + 16 * v4 + 420) )
    {
      if ( !v64 )
        v65 = FLOAT_3_4028235e38;
    }
    else if ( !v64 )
    {
      v66 = *((float *)this + 4 * v4 + 102);
      v67 = *((float *)this + 4 * v4 + 103);
      v68 = (float)((float)(v67 - *(float *)(v49 + 412)) * (float)(v67 - *(float *)(v49 + 412)))
          + (float)((float)(v66 - *(float *)(v49 + 408)) * (float)(v66 - *(float *)(v49 + 408)));
      if ( v68 != 0.0 )
        v65 = (float)(*((float *)this + 4 * v4 + 104) + *(float *)(v49 + 416)) / v68;
    }
    *((float *)this + 8 * v39 + v4 + 134) = v65;
  }
  v69 = v39 + 1;
  if ( (unsigned int)v69 >= 8 )
    return 0;
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
        v99 = (float)((float)(*v70 - *(float *)(v49 + 412)) * (float)(*v70 - *(float *)(v49 + 412)))
            + (float)((float)(*(v70 - 1) - *(float *)(v49 + 408)) * (float)(*(v70 - 1) - *(float *)(v49 + 408)));
        if ( v99 != 0.0 )
          v74 = (float)(*(float *)(v49 + 416) + v70[1]) / v99;
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
        v100 = (float)((float)(v70[4] - *(float *)(v49 + 412)) * (float)(v70[4] - *(float *)(v49 + 412)))
             + (float)((float)(v70[3] - *(float *)(v49 + 408)) * (float)(v70[3] - *(float *)(v49 + 408)));
        if ( v100 != 0.0 )
          v76 = (float)(*(float *)(v49 + 416) + v70[5]) / v100;
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
        v101 = (float)((float)(v70[8] - *(float *)(v49 + 412)) * (float)(v70[8] - *(float *)(v49 + 412)))
             + (float)((float)(v70[7] - *(float *)(v49 + 408)) * (float)(v70[7] - *(float *)(v49 + 408)));
        if ( v101 != 0.0 )
          v78 = (float)(*(float *)(v49 + 416) + v70[9]) / v101;
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
        v102 = (float)((float)(v70[12] - *(float *)(v49 + 412)) * (float)(v70[12] - *(float *)(v49 + 412)))
             + (float)((float)(v70[11] - *(float *)(v49 + 408)) * (float)(v70[11] - *(float *)(v49 + 408)));
        if ( v102 != 0.0 )
          v80 = (float)(*(float *)(v49 + 416) + v70[13]) / v102;
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
        v103 = (float)((float)(v70[16] - *(float *)(v49 + 412)) * (float)(v70[16] - *(float *)(v49 + 412)))
             + (float)((float)(v70[15] - *(float *)(v49 + 408)) * (float)(v70[15] - *(float *)(v49 + 408)));
        if ( v103 != 0.0 )
          v82 = (float)(*(float *)(v49 + 416) + v70[17]) / v103;
      }
      v71[24] = v82;
      v70 += 20;
      v71 += 40;
      --v73;
    }
    while ( v73 );
  }
  if ( (unsigned int)v69 >= 8 )
    return 0;
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
      v104 = (float)((float)(*v84 - *(float *)(v49 + 412)) * (float)(*v84 - *(float *)(v49 + 412)))
           + (float)((float)(*(v84 - 1) - *(float *)(v49 + 408)) * (float)(*(v84 - 1) - *(float *)(v49 + 408)));
      if ( v104 != 0.0 )
        v87 = (float)(v84[1] + *(float *)(v49 + 416)) / v104;
    }
    *v85 = v87;
    v84 += 4;
    v85 += 8;
    --v86;
  }
  while ( v86 );
  return 0;
}
