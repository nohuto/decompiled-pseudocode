/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180049C00 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180092BE0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DEA8 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18009E0C0 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18009E29C (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18009F10C (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     McTemplateU0qdffff @ 0x180159018 (McTemplateU0qdffff.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801CD680 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, const struct D2D_RECT_F *a4)
{
  unsigned int v4; // r15d
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  __m128 v20; // xmm7
  __m128 v21; // xmm7
  unsigned int v22; // edx
  char *v23; // rbx
  _QWORD *v24; // rdi
  bool v25; // dl
  float *v26; // r10
  float *v27; // rax
  float *v28; // rcx
  __int64 v29; // r8
  float v30; // xmm5_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  __int64 v38; // r9
  unsigned int v39; // esi
  unsigned int v40; // edi
  char v41; // r12
  unsigned int v42; // edx
  unsigned int v43; // r8d
  float *v44; // rax
  float v45; // xmm1_4
  float v46; // xmm2_4
  float v47; // xmm3_4
  unsigned int v48; // ecx
  unsigned int v49; // r11d
  float v50; // xmm4_4
  float v51; // xmm1_4
  bool v52; // cc
  unsigned int v53; // ebx
  float v54; // xmm1_4
  float v55; // xmm2_4
  unsigned int v56; // ecx
  bool v57; // cc
  unsigned int v58; // r11d
  float v59; // xmm1_4
  float v60; // xmm3_4
  unsigned int v61; // ebx
  float *v62; // r11
  float v63; // xmm1_4
  float v64; // xmm2_4
  float v65; // xmm3_4
  unsigned int v66; // eax
  unsigned int v67; // eax
  char *v68; // rbx
  __int64 *v69; // rax
  __int64 v70; // rcx
  __m128 *v71; // rdx
  __int64 v72; // r10
  float v73; // xmm5_4
  float v74; // xmm2_4
  float v75; // xmm4_4
  float v76; // xmm1_4
  unsigned int v77; // edx
  float *v78; // r8
  float *v79; // r9
  __int64 v80; // rax
  float v81; // xmm2_4
  char v82; // cl
  float v83; // xmm1_4
  float v84; // xmm3_4
  char v85; // cl
  float v86; // xmm1_4
  float v87; // xmm2_4
  char v88; // cl
  float v89; // xmm1_4
  float *v90; // r9
  float *v91; // r8
  __int64 v92; // rcx
  float v93; // xmm2_4
  char v94; // al
  float v95; // xmm1_4
  __int64 v96; // rdi
  float *v97; // r8
  float *v98; // rcx
  unsigned int v99; // edx
  __int64 v100; // r9
  float v101; // xmm1_4
  char v102; // al
  float v103; // xmm2_4
  char v104; // al
  float v105; // xmm1_4
  char v106; // al
  float v107; // xmm2_4
  char v108; // al
  float v109; // xmm1_4
  char v110; // al
  float *v111; // rdx
  float *v112; // rcx
  __int64 v113; // rax
  float v114; // xmm1_4
  char v115; // r8
  float v117; // xmm2_4
  float v118; // xmm1_4
  float v119; // xmm2_4
  float v120; // xmm2_4
  __int64 v121; // rcx
  char *v122; // rbx
  __int64 v123; // rax
  float v124; // xmm2_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm2_4
  float v129; // xmm2_4
  _QWORD *v130; // rax
  __int64 v131; // rax
  int v132; // ecx
  _DWORD *v133; // r9
  __m128 X; // [rsp+40h] [rbp-59h] BYREF
  __int64 v135; // [rsp+100h] [rbp+67h]

  v4 = 0;
  v135 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 && !IsEmpty(a4) )
    McTemplateU0qdffff(
      v132,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v133,
      *v133,
      v133[1],
      v133[2],
      v133[3]);
  X = *(__m128 *)a4;
  if ( !*((_BYTE *)this + 2883) )
  {
    v9 = X.m128_f32[2];
    v10 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] )
      goto LABEL_197;
    v11 = X.m128_f32[3];
    v12 = X.m128_f32[1];
    if ( X.m128_f32[3] < X.m128_f32[1] )
      goto LABEL_197;
    if ( *((float *)this + 715) > X.m128_f32[0] )
      v10 = *((float *)this + 715);
    v13 = X.m128_f32[1];
    if ( *((float *)this + 716) > X.m128_f32[1] )
    {
      v12 = *((float *)this + 716);
      v13 = v12;
    }
    v14 = X.m128_f32[2];
    if ( X.m128_f32[2] > *((float *)this + 717) )
    {
      v9 = *((float *)this + 717);
      v14 = v9;
    }
    v15 = X.m128_f32[3];
    if ( X.m128_f32[3] > *((float *)this + 718) )
    {
      v11 = *((float *)this + 718);
      v15 = v11;
    }
    if ( v14 <= v10 || v15 <= v13 || v14 <= v10 || v15 <= v12 )
      return v4;
    if ( *((_BYTE *)this + 2884) )
    {
LABEL_197:
      CDirtyRegion::SetFullDirty(this);
      return v4;
    }
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
    if ( v16 < 8388608.0 )
      v10 = (float)(int)floorf_0(v10);
    X.m128_f32[0] = v10;
    v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    if ( v17 < 8388608.0 )
      v12 = (float)(int)floorf_0(v12);
    X.m128_f32[1] = v12;
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v18 < 8388608.0 )
      v9 = (float)(int)ceilf_0(v9);
    X.m128_f32[2] = v9;
    v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
    if ( v19 < 8388608.0 )
      v11 = (float)(int)ceilf_0(v11);
    v20 = _mm_shuffle_ps(X, X, 147);
    v20.m128_f32[0] = v11;
    v21 = _mm_shuffle_ps(v20, v20, 57);
    X = v21;
    if ( a2 )
    {
      v22 = *((_DWORD *)this + 712);
      v23 = (char *)this + 1280;
      if ( v22 == 32 )
      {
        v130 = HeapAlloc(WPF::g_processHeap, 0, 0x610uLL);
        v24 = v130;
        if ( !v130 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du);
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x20Cu);
          return v4;
        }
        memset_0(v130, 0, 0x610uLL);
        v131 = *(_QWORD *)v23;
        if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
          __fastfail(3u);
        *v24 = v131;
        v22 = 0;
        v24[1] = v23;
        *(_QWORD *)(v131 + 8) = v24;
        *(_QWORD *)v23 = v24;
        *((_DWORD *)this + 712) = 0;
      }
      else
      {
        v24 = *(_QWORD **)v23;
      }
      *((_DWORD *)this + 712) = v22 + 1;
      v135 = (__int64)&v24[6 * v22 + 2];
      *(_QWORD *)(v135 + 16) = a2;
      *(_BYTE *)(v135 + 24) = a3;
      *(__m128 *)(v135 + 28) = v21;
      *(_QWORD *)(v135 + 8) = 0LL;
      *(_QWORD *)v135 = 0LL;
    }
    v25 = v9 <= v10 || v11 <= v12;
    v26 = (float *)((char *)this + 796);
    v27 = (float *)((char *)this + 412);
    v28 = (float *)((char *)this + 796);
    v29 = 2LL;
    v30 = (float)(v9 - v10) * (float)(v11 - v12);
    v31 = (float)((float)(v9 - v10) * 0.5) + v10;
    v32 = (float)((float)(v11 - v12) * 0.5) + v12;
    do
    {
      v33 = 0.0;
      if ( *((_BYTE *)v27 + 8) )
      {
        if ( !v25 )
          v33 = FLOAT_3_4028235e38;
      }
      else if ( !v25 )
      {
        v117 = (float)((float)(*v27 - v32) * (float)(*v27 - v32))
             + (float)((float)(*(v27 - 1) - v31) * (float)(*(v27 - 1) - v31));
        if ( v117 != 0.0 )
          v33 = (float)(v30 + v27[1]) / v117;
      }
      *(v28 - 1) = v33;
      v34 = 0.0;
      if ( *((_BYTE *)v27 + 24) )
      {
        if ( !v25 )
          v34 = FLOAT_3_4028235e38;
      }
      else if ( !v25 )
      {
        v118 = (float)((float)(v27[4] - v32) * (float)(v27[4] - v32))
             + (float)((float)(v27[3] - v31) * (float)(v27[3] - v31));
        if ( v118 != 0.0 )
          v34 = (float)(v30 + v27[5]) / v118;
      }
      *v28 = v34;
      v35 = 0.0;
      if ( *((_BYTE *)v27 + 40) )
      {
        if ( !v25 )
          v35 = FLOAT_3_4028235e38;
      }
      else if ( !v25 )
      {
        v119 = (float)((float)(v27[8] - v32) * (float)(v27[8] - v32))
             + (float)((float)(v27[7] - v31) * (float)(v27[7] - v31));
        if ( v119 != 0.0 )
          v35 = (float)(v30 + v27[9]) / v119;
      }
      v28[1] = v35;
      v36 = 0.0;
      if ( *((_BYTE *)v27 + 56) )
      {
        if ( !v25 )
          v36 = FLOAT_3_4028235e38;
      }
      else if ( !v25 )
      {
        v120 = (float)((float)(v27[12] - v32) * (float)(v27[12] - v32))
             + (float)((float)(v27[11] - v31) * (float)(v27[11] - v31));
        if ( v120 != 0.0 )
          v36 = (float)(v30 + v27[13]) / v120;
      }
      v28[2] = v36;
      v27 += 16;
      v28 += 4;
      --v29;
    }
    while ( v29 );
    v37 = FLOAT_N1_0;
    v38 = 64LL;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 8;
    do
    {
      v43 = 0;
      if ( v42 >= 4 )
      {
        v44 = v26;
        do
        {
          v45 = *(v44 - 1);
          v46 = v37;
          v47 = v37;
          if ( v45 > v37 )
          {
            v37 = *(v44 - 1);
            v41 = 1;
          }
          v48 = v43;
          v49 = v42;
          v50 = v37;
          if ( v45 <= v46 )
            v48 = v40;
          v52 = v45 <= v47;
          v51 = *v44;
          if ( v52 )
            v49 = v39;
          if ( v51 > v37 )
          {
            v37 = *v44;
            v41 = 1;
          }
          v52 = v51 <= v50;
          v53 = v43 + 1;
          v54 = v44[1];
          v55 = v37;
          if ( v52 )
            v53 = v48;
          v56 = v42;
          if ( v52 )
            v56 = v49;
          if ( v54 > v37 )
          {
            v37 = v44[1];
            v41 = 1;
          }
          v57 = v54 <= v55;
          v58 = v43 + 2;
          v59 = v44[2];
          v60 = v37;
          if ( v57 )
            v58 = v53;
          v61 = v42;
          if ( v57 )
            v61 = v56;
          if ( v59 > v37 )
          {
            v37 = v44[2];
            v41 = 1;
          }
          v40 = v43 + 3;
          v39 = v42;
          if ( v59 <= v60 )
          {
            v40 = v58;
            v39 = v61;
          }
          v44 += 4;
          v43 += 4;
        }
        while ( v43 < v42 - 3 );
      }
      if ( v43 < v42 )
      {
        v62 = (float *)((char *)this + 4 * v38 + 4 * v43 + 536);
        do
        {
          v63 = *v62;
          v64 = v37;
          v65 = v37;
          if ( *v62 > v37 )
          {
            v37 = *v62;
            v41 = 1;
          }
          v66 = v43;
          if ( v63 <= v64 )
            v66 = v40;
          v40 = v66;
          v67 = v42;
          if ( v63 <= v65 )
            v67 = v39;
          ++v62;
          ++v43;
          v39 = v67;
        }
        while ( v43 < v42 );
      }
      v26 -= 8;
      v38 -= 8LL;
      --v42;
    }
    while ( v42 );
    if ( !v41 )
      MilUnexpectedError(-2147467259, L"Invalid dirty region");
    v68 = (char *)this + 16 * v40;
    if ( v39 == 8 )
    {
      if ( v135 )
      {
        v69 = (__int64 *)(v68 + 280);
        v70 = *((_QWORD *)v68 + 35);
        if ( *(char **)(v70 + 8) != v68 + 280 )
          __fastfail(3u);
        *(_QWORD *)v135 = v70;
        *(_QWORD *)(v135 + 8) = v69;
        *(_QWORD *)(v70 + 8) = v135;
        *v69 = v135;
      }
      else
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v68 + 38, X.m128_f32);
        v11 = X.m128_f32[3];
        v9 = X.m128_f32[2];
        v12 = X.m128_f32[1];
        v10 = X.m128_f32[0];
      }
      X.m128_u64[0] = __PAIR64__(LODWORD(v12), LODWORD(v10));
      X.m128_u64[1] = __PAIR64__(LODWORD(v11), LODWORD(v9));
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(X.m128_f32, (float *)v68 + 6);
      v73 = X.m128_f32[0];
      if ( X.m128_f32[2] > X.m128_f32[0] )
      {
        v74 = X.m128_f32[1];
        if ( X.m128_f32[3] > X.m128_f32[1]
          && (X.m128_f32[0] < v71->m128_f32[0]
           || X.m128_f32[1] < v71->m128_f32[1]
           || v71->m128_f32[2] < X.m128_f32[2]
           || v71->m128_f32[3] < X.m128_f32[3]) )
        {
          v75 = X.m128_f32[2] - X.m128_f32[0];
          v76 = X.m128_f32[3] - X.m128_f32[1];
          *v71 = X;
          v68[420] = 0;
          v77 = 0;
          *((float *)v68 + 104) = v75 * v76;
          *((float *)v68 + 102) = (float)(v75 * 0.5) + v73;
          *((float *)v68 + 103) = (float)(v76 * 0.5) + v74;
          if ( v40 >= 3 )
          {
            v78 = (float *)((char *)this + 32 * v72 + 540);
            v79 = (float *)((char *)this + 412);
            v80 = (v40 - 3) / 3 + 1;
            v77 = 3 * v80;
            do
            {
              v81 = 0.0;
              v82 = v68[420];
              if ( *((_BYTE *)v79 + 8) )
              {
                if ( !v82 )
                  v81 = FLOAT_3_4028235e38;
              }
              else if ( !v82 )
              {
                v83 = (float)((float)(*v79 - *((float *)v68 + 103)) * (float)(*v79 - *((float *)v68 + 103)))
                    + (float)((float)(*(v79 - 1) - *((float *)v68 + 102)) * (float)(*(v79 - 1) - *((float *)v68 + 102)));
                if ( v83 != 0.0 )
                  v81 = (float)(v79[1] + *((float *)v68 + 104)) / v83;
              }
              *(v78 - 1) = v81;
              v84 = 0.0;
              v85 = v68[420];
              if ( *((_BYTE *)v79 + 24) )
              {
                if ( !v85 )
                  v84 = FLOAT_3_4028235e38;
              }
              else if ( !v85 )
              {
                v86 = (float)((float)(v79[4] - *((float *)v68 + 103)) * (float)(v79[4] - *((float *)v68 + 103)))
                    + (float)((float)(v79[3] - *((float *)v68 + 102)) * (float)(v79[3] - *((float *)v68 + 102)));
                if ( v86 != 0.0 )
                  v84 = (float)(v79[5] + *((float *)v68 + 104)) / v86;
              }
              *v78 = v84;
              v87 = 0.0;
              v88 = v68[420];
              if ( *((_BYTE *)v79 + 40) )
              {
                if ( !v88 )
                  v87 = FLOAT_3_4028235e38;
              }
              else if ( !v88 )
              {
                v89 = (float)((float)(v79[8] - *((float *)v68 + 103)) * (float)(v79[8] - *((float *)v68 + 103)))
                    + (float)((float)(v79[7] - *((float *)v68 + 102)) * (float)(v79[7] - *((float *)v68 + 102)));
                if ( v89 != 0.0 )
                  v87 = (float)(v79[9] + *((float *)v68 + 104)) / v89;
              }
              v78[1] = v87;
              v79 += 12;
              v78 += 3;
              --v80;
            }
            while ( v80 );
          }
          if ( v77 < v40 )
          {
            v90 = (float *)((char *)this + 32 * v72 + 4 * v77 + 536);
            v91 = (float *)((char *)this + 16 * v77 + 412);
            v92 = v40 - v77;
            do
            {
              v93 = 0.0;
              v94 = v68[420];
              if ( *((_BYTE *)v91 + 8) )
              {
                if ( !v94 )
                  v93 = FLOAT_3_4028235e38;
              }
              else if ( !v94 )
              {
                v95 = (float)((float)(*v91 - *((float *)v68 + 103)) * (float)(*v91 - *((float *)v68 + 103)))
                    + (float)((float)(*(v91 - 1) - *((float *)v68 + 102)) * (float)(*(v91 - 1) - *((float *)v68 + 102)));
                if ( v95 != 0.0 )
                  v93 = (float)(v91[1] + *((float *)v68 + 104)) / v95;
              }
              *v90 = v93;
              v91 += 4;
              ++v90;
              --v92;
            }
            while ( v92 );
          }
          v96 = v40 + 1;
          if ( (unsigned int)v96 < 8 )
          {
            if ( (unsigned int)(8 - v96) >= 5 )
            {
              v97 = (float *)((char *)this + 16 * (unsigned int)v96 + 412);
              v98 = (float *)((char *)this + 32 * v96 + 4 * v72 + 568);
              v99 = (3 - (int)v96) / 5u + 1;
              v100 = v99;
              v96 = v99 + (_DWORD)v96 + 4 * v99;
              do
              {
                v101 = 0.0;
                v102 = v68[420];
                if ( *((_BYTE *)v97 + 8) )
                {
                  if ( !v102 )
                    v101 = FLOAT_3_4028235e38;
                }
                else if ( !v102 )
                {
                  v124 = (float)((float)(*v97 - *((float *)v68 + 103)) * (float)(*v97 - *((float *)v68 + 103)))
                       + (float)((float)(*(v97 - 1) - *((float *)v68 + 102))
                               * (float)(*(v97 - 1) - *((float *)v68 + 102)));
                  if ( v124 != 0.0 )
                    v101 = (float)(v97[1] + *((float *)v68 + 104)) / v124;
                }
                *(v98 - 8) = v101;
                v103 = 0.0;
                v104 = v68[420];
                if ( *((_BYTE *)v97 + 24) )
                {
                  if ( !v104 )
                    v103 = FLOAT_3_4028235e38;
                }
                else if ( !v104 )
                {
                  v125 = (float)((float)(v97[4] - *((float *)v68 + 103)) * (float)(v97[4] - *((float *)v68 + 103)))
                       + (float)((float)(v97[3] - *((float *)v68 + 102)) * (float)(v97[3] - *((float *)v68 + 102)));
                  if ( v125 != 0.0 )
                    v103 = (float)(v97[5] + *((float *)v68 + 104)) / v125;
                }
                *v98 = v103;
                v105 = 0.0;
                v106 = v68[420];
                if ( *((_BYTE *)v97 + 40) )
                {
                  if ( !v106 )
                    v105 = FLOAT_3_4028235e38;
                }
                else if ( !v106 )
                {
                  v126 = (float)((float)(v97[8] - *((float *)v68 + 103)) * (float)(v97[8] - *((float *)v68 + 103)))
                       + (float)((float)(v97[7] - *((float *)v68 + 102)) * (float)(v97[7] - *((float *)v68 + 102)));
                  if ( v126 != 0.0 )
                    v105 = (float)(v97[9] + *((float *)v68 + 104)) / v126;
                }
                v98[8] = v105;
                v107 = 0.0;
                v108 = v68[420];
                if ( *((_BYTE *)v97 + 56) )
                {
                  if ( !v108 )
                    v107 = FLOAT_3_4028235e38;
                }
                else if ( !v108 )
                {
                  v127 = (float)((float)(v97[12] - *((float *)v68 + 103)) * (float)(v97[12] - *((float *)v68 + 103)))
                       + (float)((float)(v97[11] - *((float *)v68 + 102)) * (float)(v97[11] - *((float *)v68 + 102)));
                  if ( v127 != 0.0 )
                    v107 = (float)(v97[13] + *((float *)v68 + 104)) / v127;
                }
                v98[16] = v107;
                v109 = 0.0;
                v110 = v68[420];
                if ( *((_BYTE *)v97 + 72) )
                {
                  if ( !v110 )
                    v109 = FLOAT_3_4028235e38;
                }
                else if ( !v110 )
                {
                  v128 = (float)((float)(v97[16] - *((float *)v68 + 103)) * (float)(v97[16] - *((float *)v68 + 103)))
                       + (float)((float)(v97[15] - *((float *)v68 + 102)) * (float)(v97[15] - *((float *)v68 + 102)));
                  if ( v128 != 0.0 )
                    v109 = (float)(v97[17] + *((float *)v68 + 104)) / v128;
                }
                v98[24] = v109;
                v97 += 20;
                v98 += 40;
                --v100;
              }
              while ( v100 );
            }
            if ( (unsigned int)v96 < 8 )
            {
              v111 = (float *)((char *)this + 16 * (unsigned int)v96 + 412);
              v112 = (float *)((char *)this + 32 * v96 + 4 * v72 + 536);
              v113 = (unsigned int)(8 - v96);
              do
              {
                v114 = 0.0;
                v115 = v68[420];
                if ( *((_BYTE *)v111 + 8) )
                {
                  if ( !v115 )
                    v114 = FLOAT_3_4028235e38;
                }
                else if ( !v115 )
                {
                  v129 = (float)((float)(*v111 - *((float *)v68 + 103)) * (float)(*v111 - *((float *)v68 + 103)))
                       + (float)((float)(*(v111 - 1) - *((float *)v68 + 102))
                               * (float)(*(v111 - 1) - *((float *)v68 + 102)));
                  if ( v129 != 0.0 )
                    v114 = (float)(v111[1] + *((float *)v68 + 104)) / v129;
                }
                *v112 = v114;
                v111 += 4;
                v112 += 8;
                --v113;
              }
              while ( v113 );
            }
          }
        }
      }
    }
    else
    {
      CDirtyRegion::Merge(this, v39, v40);
      *(__m128 *)(v68 + 24) = v21;
      CDirtyRegion::CalcDirtyRegionCachedData(v121, &X, v68 + 408);
      CDirtyRegion::UpdateAcceleration(this, v40);
      if ( v135 )
      {
        v122 = v68 + 280;
        v123 = *(_QWORD *)v122;
        if ( *(char **)(*(_QWORD *)v122 + 8LL) != v122 )
          __fastfail(3u);
        *(_QWORD *)v135 = v123;
        *(_QWORD *)(v135 + 8) = v122;
        *(_QWORD *)(v123 + 8) = v135;
        *(_QWORD *)v122 = v135;
      }
      else
      {
        *(__m128 *)(v68 + 152) = v21;
      }
    }
  }
  return v4;
}
