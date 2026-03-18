/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800688E0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800635A0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180069C50 (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x1800B2C38 (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(float **this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v2; // r14
  CMegaRect *v3; // rsi
  float *v4; // r15
  float *v5; // rdi
  int v6; // eax
  _DWORD *v7; // r8
  __int64 v8; // rbx
  int v9; // eax
  int v10; // r12d
  _DWORD *v11; // r8
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // r10
  _DWORD *v15; // r8
  char *v16; // r10
  __int64 v17; // r9
  FastRegion::Internal::CRgnData *v18; // rcx
  __int64 v19; // r9
  int v20; // r11d
  _DWORD *v21; // rbx
  int v22; // edx
  _DWORD *v23; // r15
  __int64 v24; // rax
  int v25; // r15d
  int v26; // ebx
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r13d
  __int64 v30; // r13
  void **v31; // rbx
  int v32; // edx
  __int16 v33; // r9
  __int64 v34; // r10
  __int64 v35; // r15
  float *v36; // r12
  float *v37; // r13
  __m128 v38; // xmm10
  float v39; // xmm9_4
  float v40; // xmm1_4
  __int16 v41; // bx
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r8
  _DWORD *v46; // r8
  __int64 v47; // rax
  __int64 v48; // r9
  _DWORD *v49; // r9
  float *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  float v53; // xmm5_4
  float v54; // xmm6_4
  float *v55; // rax
  float *v56; // rdx
  float v57; // xmm8_4
  float v58; // xmm13_4
  char *v59; // r14
  __int64 v60; // r10
  __int64 v61; // r11
  char *v62; // rbx
  char *v63; // rsi
  float v64; // xmm4_4
  float v65; // xmm2_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // xmm4_4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm0_4
  float v72; // xmm2_4
  float v73; // xmm6_4
  unsigned int v74; // ecx
  float *v75; // r8
  __int64 v76; // rax
  float v77; // xmm8_4
  float v78; // xmm7_4
  float v79; // xmm13_4
  char *v80; // r14
  float v81; // xmm14_4
  __int64 v82; // r10
  float *v83; // r8
  __int64 v84; // r11
  char *v85; // rbx
  char *v86; // rsi
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  float v91; // xmm2_4
  float v92; // xmm7_4
  unsigned int v93; // r10d
  __int64 v94; // rcx
  char *v95; // r8
  __int64 v96; // rax
  char *v97; // r9
  __int64 v98; // rax
  float v99; // xmm13_4
  float *v100; // rcx
  __int64 v101; // r14
  float v102; // xmm8_4
  float v103; // xmm14_4
  __int64 v104; // r11
  char *v105; // rbx
  char *v106; // rsi
  char *v107; // rdx
  float v108; // xmm6_4
  float v109; // xmm7_4
  float v110; // xmm6_4
  float v111; // xmm7_4
  float v112; // xmm7_4
  float v113; // xmm8_4
  unsigned int v114; // r10d
  __int64 v115; // rcx
  char *v116; // r8
  __int64 v117; // rax
  char *v118; // r9
  __int64 v119; // rax
  float v120; // xmm9_4
  float v121; // xmm11_4
  float *v122; // rcx
  __int64 v123; // rbx
  float v124; // xmm6_4
  float v125; // xmm7_4
  __int64 v126; // r11
  char *v127; // rdx
  char *v128; // r14
  char *v129; // rsi
  float v130; // xmm3_4
  float v131; // xmm1_4
  float v132; // xmm5_4
  float v133; // xmm2_4
  float v134; // xmm3_4
  float v135; // xmm1_4
  float v136; // xmm3_4
  float v137; // xmm1_4
  float v138; // xmm11_4
  float v139; // xmm3_4
  bool v140; // zf
  float v141; // xmm2_4
  __int64 v142; // rcx
  float v143; // xmm0_4
  float v144; // xmm1_4
  float v145; // xmm0_4
  unsigned int v146; // ebx
  unsigned int v147; // r14d
  __int64 v148; // rax
  __int64 v149; // rcx
  char v150; // r15
  void *Src; // r12
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 *v154; // r14
  void (__fastcall ***v155)(_QWORD, __int64); // rbx
  void (__fastcall ***v156)(_QWORD, __int64); // r15
  __int64 *v157; // rsi
  void (__fastcall ***v158)(_QWORD, __int64); // rcx
  __int64 v160; // [rsp+50h] [rbp-B0h] BYREF
  int v161; // [rsp+58h] [rbp-A8h]
  __int64 v162; // [rsp+60h] [rbp-A0h]
  int v163; // [rsp+68h] [rbp-98h]
  int v164; // [rsp+6Ch] [rbp-94h]
  char *v165; // [rsp+70h] [rbp-90h]
  char *v166; // [rsp+78h] [rbp-88h]
  char *v167; // [rsp+80h] [rbp-80h]
  int v168; // [rsp+88h] [rbp-78h]
  __int64 v169[2]; // [rsp+90h] [rbp-70h] BYREF
  CMegaRect *v170; // [rsp+A0h] [rbp-60h]
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v171; // [rsp+A8h] [rbp-58h]
  float *v172; // [rsp+B0h] [rbp-50h]
  void **v173; // [rsp+B8h] [rbp-48h]
  unsigned int v174; // [rsp+C0h] [rbp-40h]
  __int64 v175; // [rsp+C8h] [rbp-38h]
  __int64 v176; // [rsp+D0h] [rbp-30h]
  __int64 v177; // [rsp+D8h] [rbp-28h]
  __int64 v178; // [rsp+E0h] [rbp-20h]
  __int64 v179; // [rsp+E8h] [rbp-18h]
  __int64 v180; // [rsp+F0h] [rbp-10h]
  int v181[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v182; // [rsp+100h] [rbp+0h]
  unsigned int v183; // [rsp+104h] [rbp+4h]
  int v184[2]; // [rsp+108h] [rbp+8h] BYREF
  int v185; // [rsp+110h] [rbp+10h]
  unsigned int v186; // [rsp+114h] [rbp+14h]
  _DWORD *v187; // [rsp+118h] [rbp+18h] BYREF
  __int128 v188; // [rsp+120h] [rbp+20h]
  char *v189; // [rsp+130h] [rbp+30h]
  int v190; // [rsp+138h] [rbp+38h]
  int v191; // [rsp+13Ch] [rbp+3Ch]
  __int64 v192; // [rsp+148h] [rbp+48h]
  __int64 v193; // [rsp+150h] [rbp+50h]
  __int64 v194; // [rsp+158h] [rbp+58h]
  __int64 v195; // [rsp+160h] [rbp+60h]
  __int64 v196; // [rsp+168h] [rbp+68h]
  __int64 v197; // [rsp+170h] [rbp+70h]
  __m128 v198; // [rsp+178h] [rbp+78h]
  unsigned __int64 v199; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v200; // [rsp+190h] [rbp+90h]

  v2 = a2;
  v171 = a2;
  v170 = (CMegaRect *)this;
  v3 = (CMegaRect *)this;
  *((_DWORD *)a2 + 6) = 0;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 22) = 0;
  *((_DWORD *)a2 + 30) = 0;
  v4 = this[1];
  v5 = this[2];
  v173 = (void **)((char *)a2 + 96);
  v6 = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 6) = 0;
  v7 = *(_DWORD **)v4;
  v168 = 8 * v6 + 16;
  v164 = v168;
  if ( *v7 )
    v8 = (8LL * (*v7 - 1) + (int)v7[2 * *v7 + 2] - (__int64)(int)v7[4]) >> 3;
  else
    LODWORD(v8) = 0;
  v9 = DynArrayImpl<0>::Grow((__int64)a2, 0x10u, v8, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1A7u);
  else
    *((_DWORD *)v2 + 6) += v8;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x145u);
    return (unsigned int)v10;
  }
  v11 = *(_DWORD **)v4;
  v12 = 0;
  v187 = v11;
  v13 = *v11;
  if ( *v11 )
  {
    v14 = (int)v11[4];
    v15 = v11 + 3;
    v16 = (char *)v15 + v14;
    v17 = (int)v15[3] - (_QWORD)v16;
    v18 = (FastRegion::Internal::CRgnData *)(v13 - 1);
    *((_QWORD *)&v188 + 1) = v15;
    v189 = v16;
    v19 = ((__int64)v15 + v17 + 8) >> 3;
    v20 = 0;
    v190 = 0;
    v21 = &v15[2 * (_QWORD)v18];
    *(_QWORD *)&v188 = v21;
    v191 = v19;
    if ( (int)v19 > 0 )
      goto LABEL_8;
    FastRegion::Internal::CRgnData::StepIterator(v18, (struct FastRegion::CRegion::Iterator *)&v187);
  }
  else
  {
    v188 = 0LL;
  }
  v15 = (_DWORD *)*((_QWORD *)&v188 + 1);
  v21 = (_DWORD *)v188;
  v16 = v189;
  v20 = v190;
  LODWORD(v19) = v191;
LABEL_8:
  while ( v15 < v21 )
  {
    v22 = 2 * v20;
    HIDWORD(v169[0]) = *v15;
    v23 = v15 + 2;
    ++v20;
    HIDWORD(v169[1]) = v15[2];
    LODWORD(v169[0]) = *(_DWORD *)&v16[4 * v22];
    LODWORD(v169[1]) = *(_DWORD *)&v16[4 * v22 + 4];
    *(_OWORD *)(*(_QWORD *)v2 + 16LL * v12) = *(_OWORD *)v169;
    if ( v20 >= (int)v19 )
    {
      while ( 1 )
      {
        v15 = v23;
        v24 = (int)v23[3];
        v16 = (char *)v23 + (int)v23[1];
        v23 += 2;
        LODWORD(v19) = ((__int64)v23 + v24 - (__int64)v16) >> 3;
        if ( (_DWORD)v19 )
          break;
        if ( v15 >= v21 )
          goto LABEL_12;
      }
      v20 = 0;
    }
LABEL_12:
    ++v12;
  }
  v25 = *((_DWORD *)v2 + 6);
  LODWORD(v160) = v25;
  v174 = 4 * v25;
  v26 = v164 * 4 * v25;
  v10 = DynArrayImpl<0>::Grow((__int64)v2 + 32, 1u, v26, 0, 0LL);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x149u);
    return (unsigned int)v10;
  }
  v27 = *((_QWORD *)v2 + 4);
  *((_DWORD *)v2 + 14) = v26;
  v180 = v27;
  v28 = DynArrayImpl<0>::Grow((__int64)v2 + 64, 1u, v26, 0, 0LL);
  v29 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x14Eu);
    return v29;
  }
  v30 = *((_QWORD *)v2 + 8);
  *((_DWORD *)v2 + 22) = v26;
  v31 = (void **)((char *)v2 + 96);
  v169[0] = v30;
  v10 = DynArrayImpl<0>::Grow((__int64)v2 + 96, 2u, 6 * v25, 0, 0LL);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x153u);
    return (unsigned int)v10;
  }
  v32 = 0;
  v163 = 0;
  if ( v25 )
  {
    v33 = 0;
    v34 = 0LL;
    v35 = (__int64)v5 + v168;
    v162 = (__int64)v5 + 2 * v168;
    v161 = 0;
    v172 = (float *)((char *)v5 + 3 * v168);
    v178 = 0LL;
    v36 = (float *)(v30 + v164 + 8LL);
    v199 = (unsigned int)(4 * v164);
    v175 = -8LL - v164;
    v196 = 2 * v164 - (__int64)v164;
    v37 = (float *)(v164 + v180 + 8);
    *(_QWORD *)v181 = 3 * v164 - (__int64)v164;
    v197 = v196;
    *(_QWORD *)v184 = *(_QWORD *)v181;
    v192 = -4LL - v164;
    v194 = v192;
    v193 = -(__int64)v164;
    v176 = 4LL - v164;
    v177 = v175;
    v195 = v176;
    v179 = (unsigned int)v160;
    do
    {
      v38 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(v34 + *(_QWORD *)v2))), (__m128)_xmm);
      v198 = v38;
      v39 = _mm_shuffle_ps(v38, v38, 170).m128_f32[0];
      if ( v39 <= v38.m128_f32[0] || v38.m128_f32[3] <= v38.m128_f32[1] )
        v40 = 0.0;
      else
        v40 = (float)(v39 - v38.m128_f32[0]) * (float)(v38.m128_f32[3] - v38.m128_f32[1]);
      LOWORD(v160) = v33;
      v163 += (int)v40;
      DynArray<unsigned short,0>::AddMultipleAndSet(v31, &v160, 1LL);
      LOWORD(v160) = v161 + 1;
      DynArray<unsigned short,0>::AddMultipleAndSet(v31, &v160, 1LL);
      v41 = v161 + 3;
      LOWORD(v160) = v161 + 3;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v2 + 96, &v160, 1LL);
      LOWORD(v160) = v161;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v2 + 96, &v160, 1LL);
      LOWORD(v160) = v41;
      v31 = (void **)((char *)v2 + 96);
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v2 + 96, &v160, 1LL);
      LOWORD(v160) = v161 + 2;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v2 + 96, &v160, 1LL);
      v42 = *((_DWORD *)v3 + 6);
      v43 = v193;
      v44 = v176;
      v45 = v175;
      *(float *)((char *)v37 + v192) = v38.m128_f32[1];
      v46 = (_DWORD *)((char *)v37 + v45);
      *(float *)((char *)v37 + v43) = 1.0;
      *v46 = v38.m128_i32[0];
      *(float *)((char *)v37 + v44) = v5[3];
      v47 = v194;
      v48 = v177;
      *(float *)((char *)v36 + v43) = 0.0;
      v49 = (_DWORD *)((char *)v36 + v48);
      v50 = v172;
      *(float *)((char *)v36 + v47) = v38.m128_f32[1];
      v51 = v195;
      *v49 = v38.m128_i32[0];
      *(float *)((char *)v36 + v51) = 1.0;
      v52 = 0LL;
      v53 = (float)(v38.m128_f32[0] - *v5) / (float)(*v50 - *v5);
      v54 = (float)(v38.m128_f32[1] - v5[1]) / (float)(v50[1] - v5[1]);
      if ( v42 >= 2 )
      {
        v198.m128_u64[0] = v35 + 20;
        v55 = v50;
        v56 = (float *)(v35 + 20);
        v57 = 1.0 - v53;
        v165 = (char *)v55 - v35;
        v58 = 1.0 - v54;
        v59 = (char *)v55 - v35;
        v60 = (__int64)v5 - v35;
        v166 = (char *)v46 - v35;
        v61 = v162 - v35;
        v62 = (char *)v46 - v35;
        v167 = (char *)v49 - v35;
        v63 = (char *)v49 - v35;
        v160 = ((v42 - 2) >> 1) + 1;
        v52 = (unsigned int)(2 * v160);
        do
        {
          v64 = (float)((float)(v53 * *v56) + (float)(v57 * *(float *)((char *)v56 + v60))) * v58;
          v65 = (float)((float)((float)(v57 * *(float *)((char *)v56 + v61 - 4))
                              + (float)(v53 * *(float *)&v59[(_QWORD)v56 - 4]))
                      * v54)
              + (float)((float)((float)(v53 * *(v56 - 1)) + (float)(v57 * *(float *)((char *)v56 + v60 - 4))) * v58);
          v66 = v54
              * (float)((float)(v53 * *(float *)((char *)v56 + (_QWORD)v59))
                      + (float)(v57 * *(float *)((char *)v56 + v61)));
          *(float *)&v62[(_QWORD)v56 - 4] = v65;
          v67 = v66 + v64;
          *(float *)&v62[(_QWORD)v56] = v67;
          *(float *)&v63[(_QWORD)v56] = v67;
          *(float *)&v63[(_QWORD)v56 - 4] = v65;
          v68 = (float)((float)(v53 * v56[2]) + (float)(v57 * *(float *)((char *)v56 + v60 + 8))) * v58;
          v69 = (float)(v53 * *(float *)&v59[(_QWORD)v56 + 8]) + (float)(v57 * *(float *)((char *)v56 + v61 + 8));
          v70 = (float)((float)((float)(v57 * *(float *)((char *)v56 + v61 + 4))
                              + (float)(v53 * *(float *)&v59[(_QWORD)v56 + 4]))
                      * v54)
              + (float)((float)((float)(v53 * v56[1]) + (float)(v57 * *(float *)((char *)v56 + v60 + 4))) * v58);
          *(float *)&v62[(_QWORD)v56 + 4] = v70;
          v71 = (float)(v54 * v69) + v68;
          *(float *)&v62[(_QWORD)v56 + 8] = v71;
          *(float *)&v63[(_QWORD)v56 + 4] = v70;
          *(float *)&v63[(_QWORD)v56 + 8] = v71;
          v56 += 4;
          --v160;
        }
        while ( v160 );
        v3 = v170;
        v2 = v171;
        v50 = v172;
        v31 = v173;
      }
      if ( (unsigned int)v52 < v42 )
      {
        v72 = (float)((float)((float)((float)(1.0 - v53) * *(float *)(v162 + 8 * v52 + 16))
                            + (float)(v53 * v50[2 * v52 + 4]))
                    * v54)
            + (float)((float)((float)(v53 * *(float *)(v35 + 8 * v52 + 16))
                            + (float)((float)(1.0 - v53) * v5[2 * v52 + 4]))
                    * (float)(1.0 - v54));
        v73 = (float)(v54
                    * (float)((float)(v53 * v50[2 * v52 + 5])
                            + (float)((float)(1.0 - v53) * *(float *)(v162 + 8 * v52 + 20))))
            + (float)((float)((float)(v53 * *(float *)(v35 + 8 * v52 + 20))
                            + (float)((float)(1.0 - v53) * v5[2 * v52 + 5]))
                    * (float)(1.0 - v54));
        *(float *)&v46[2 * v52 + 4] = v72;
        *(float *)&v46[2 * v52 + 5] = v73;
        *(float *)&v49[2 * v52 + 4] = v72;
        *(float *)&v49[2 * v52 + 5] = v73;
      }
      v74 = *((_DWORD *)v3 + 6);
      v75 = v37 - 2;
      *(v37 - 1) = v38.m128_f32[1];
      *(v37 - 2) = v39;
      *v37 = 1.0;
      v37[1] = v5[3];
      *(v36 - 1) = v38.m128_f32[1];
      *(v36 - 2) = v39;
      *v36 = 0.0;
      v36[1] = 1.0;
      v76 = 0LL;
      v77 = (float)(v39 - *v5) / (float)(*v50 - *v5);
      v78 = (float)(v38.m128_f32[1] - v5[1]) / (float)(v50[1] - v5[1]);
      if ( v74 >= 2 )
      {
        v165 = (char *)(v35 + 20);
        v79 = 1.0 - v77;
        v198.m128_u64[0] = (unsigned __int64)v50 - v35;
        v80 = (char *)v50 - v35;
        v81 = 1.0 - v78;
        v82 = (__int64)v5 - v35;
        v83 = (float *)(v35 + 20);
        v167 = (char *)v37 - v35 - 8;
        v84 = v162 - v35;
        v85 = v167;
        v166 = (char *)v36 - v35 - 8;
        v86 = v166;
        v160 = ((v74 - 2) >> 1) + 1;
        v76 = (unsigned int)(2 * v160);
        do
        {
          v87 = (float)(v78
                      * (float)((float)(v77 * *(float *)((char *)v83 + (_QWORD)v80 - 4))
                              + (float)(*(float *)((char *)v83 + v84 - 4) * v79)))
              + (float)((float)((float)(v77 * *(v83 - 1)) + (float)(*(float *)((char *)v83 + v82 - 4) * v79)) * v81);
          v88 = (float)(v78
                      * (float)((float)(v77 * *(float *)((char *)v83 + (_QWORD)v80))
                              + (float)(*(float *)((char *)v83 + v84) * v79)))
              + (float)((float)((float)(v77 * *v83) + (float)(*(float *)((char *)v83 + v82) * v79)) * v81);
          *(float *)((char *)v83 + (_QWORD)v85 - 4) = v87;
          *(float *)&v85[(_QWORD)v83] = v88;
          *(float *)((char *)v83 + (_QWORD)v86) = v88;
          *(float *)((char *)v83 + (_QWORD)v86 - 4) = v87;
          v89 = (float)(v78
                      * (float)((float)(v77 * *(float *)((char *)v83 + (_QWORD)v80 + 4))
                              + (float)(*(float *)((char *)v83 + v84 + 4) * v79)))
              + (float)((float)((float)(v77 * v83[1]) + (float)(*(float *)((char *)v83 + v82 + 4) * v79)) * v81);
          v90 = (float)(v78
                      * (float)((float)(v77 * *(float *)((char *)v83 + (_QWORD)v80 + 8))
                              + (float)(*(float *)((char *)v83 + v84 + 8) * v79)))
              + (float)((float)((float)(v77 * v83[2]) + (float)(*(float *)((char *)v83 + v82 + 8) * v79)) * v81);
          *(float *)((char *)v83 + (_QWORD)v85 + 4) = v89;
          *(float *)((char *)v83 + (_QWORD)v37 - v35) = v90;
          *(float *)((char *)v83 + (_QWORD)v86 + 4) = v89;
          *(float *)((char *)v83 + (_QWORD)v36 - v35) = v90;
          v83 += 4;
          --v160;
        }
        while ( v160 );
        v3 = v170;
        v75 = v37 - 2;
        v2 = v171;
        v31 = v173;
      }
      if ( (unsigned int)v76 < v74 )
      {
        v91 = (float)(v78
                    * (float)((float)(v77 * v50[2 * v76 + 4])
                            + (float)(*(float *)(v162 + 8 * v76 + 16) * (float)(1.0 - v77))))
            + (float)((float)((float)(v77 * *(float *)(v35 + 8 * v76 + 16))
                            + (float)(v5[2 * v76 + 4] * (float)(1.0 - v77)))
                    * (float)(1.0 - v78));
        v92 = (float)(v78
                    * (float)((float)(v77 * v50[2 * v76 + 5])
                            + (float)(*(float *)(v162 + 8 * v76 + 20) * (float)(1.0 - v77))))
            + (float)((float)((float)(v77 * *(float *)(v35 + 8 * v76 + 20))
                            + (float)(v5[2 * v76 + 5] * (float)(1.0 - v77)))
                    * (float)(1.0 - v78));
        v75[2 * v76 + 4] = v91;
        v75[2 * v76 + 5] = v92;
        v36[2 * v76 + 2] = v91;
        v36[2 * v76 + 3] = v92;
      }
      v93 = *((_DWORD *)v3 + 6);
      v94 = v196;
      *(float *)((char *)v37 + v196 - 8) = v38.m128_f32[0];
      v95 = (char *)v37 + v94;
      *(float *)((char *)v37 + v94 - 4) = v38.m128_f32[3];
      *(float *)((char *)v37 + v94) = 1.0;
      *(float *)((char *)v37 + v94 + 4) = v5[3];
      v96 = v197;
      *(float *)((char *)v36 + v197 - 8) = v38.m128_f32[0];
      v97 = (char *)v36 + v96;
      *(float *)((char *)v36 + v96 - 4) = v38.m128_f32[3];
      *(float *)((char *)v36 + v96) = 0.0;
      *(float *)((char *)v36 + v96 + 4) = 1.0;
      v98 = 0LL;
      v38.m128_f32[0] = (float)(v38.m128_f32[0] - *v5) / (float)(*v50 - *v5);
      v99 = (float)(v38.m128_f32[3] - v5[1]) / (float)(v50[1] - v5[1]);
      if ( v93 >= 2 )
      {
        v100 = (float *)(v35 + 20);
        v198.m128_u64[0] = v162 - v35;
        v101 = v162 - v35;
        v102 = 1.0 - v38.m128_f32[0];
        v103 = 1.0 - v99;
        v167 = (char *)v50 - v35;
        v104 = (__int64)v5 - v35;
        v105 = (char *)v50 - v35;
        v166 = &v95[-v35 - 8];
        v106 = v166;
        v165 = &v97[-v35 - 8];
        v107 = v165;
        v160 = ((v93 - 2) >> 1) + 1;
        v98 = (unsigned int)(2 * v160);
        do
        {
          v108 = (float)((float)((float)(*(float *)((char *)v100 + v104 - 4) * v102)
                               + (float)(*(v100 - 1) * v38.m128_f32[0]))
                       * v103)
               + (float)((float)((float)(*(float *)((char *)v100 + v101 - 4) * v102)
                               + (float)(*(float *)((char *)v100 + (_QWORD)v105 - 4) * v38.m128_f32[0]))
                       * v99);
          v109 = (float)((float)((float)(*(float *)((char *)v100 + v104) * v102) + (float)(*v100 * v38.m128_f32[0]))
                       * v103)
               + (float)((float)((float)(*(float *)((char *)v100 + v101) * v102)
                               + (float)(*(float *)((char *)v100 + (_QWORD)v105) * v38.m128_f32[0]))
                       * v99);
          *(float *)((char *)v100 + (_QWORD)v106 - 4) = v108;
          *(float *)((char *)v100 + (_QWORD)v106) = v109;
          *(float *)((char *)v100 + (_QWORD)v107 - 4) = v108;
          *(float *)((char *)v100 + (_QWORD)v107) = v109;
          v110 = (float)((float)((float)(*(float *)((char *)v100 + v104 + 4) * v102) + (float)(v100[1] * v38.m128_f32[0]))
                       * v103)
               + (float)((float)((float)(*(float *)((char *)v100 + v101 + 4) * v102)
                               + (float)(*(float *)((char *)v100 + (_QWORD)v105 + 4) * v38.m128_f32[0]))
                       * v99);
          v111 = (float)((float)((float)(*(float *)((char *)v100 + v104 + 8) * v102) + (float)(v100[2] * v38.m128_f32[0]))
                       * v103)
               + (float)((float)((float)(*(float *)((char *)v100 + v101 + 8) * v102)
                               + (float)(*(float *)((char *)v100 + (_QWORD)v105 + 8) * v38.m128_f32[0]))
                       * v99);
          *(float *)((char *)v100 + (_QWORD)v106 + 4) = v110;
          *(float *)&v95[(_QWORD)v100 - v35] = v111;
          *(float *)((char *)v100 + (_QWORD)v107 + 4) = v110;
          *(float *)&v97[(_QWORD)v100 - v35] = v111;
          v100 += 4;
          --v160;
        }
        while ( v160 );
        v3 = v170;
        v2 = v171;
        v50 = v172;
        v31 = v173;
      }
      if ( (unsigned int)v98 < v93 )
      {
        v112 = (float)((float)((float)(v5[2 * v98 + 4] * (float)(1.0 - v38.m128_f32[0]))
                             + (float)(*(float *)(v35 + 8 * v98 + 16) * v38.m128_f32[0]))
                     * (float)(1.0 - v99))
             + (float)((float)((float)(*(float *)(v162 + 8 * v98 + 16) * (float)(1.0 - v38.m128_f32[0]))
                             + (float)(v50[2 * v98 + 4] * v38.m128_f32[0]))
                     * v99);
        v113 = (float)((float)((float)(v5[2 * v98 + 5] * (float)(1.0 - v38.m128_f32[0]))
                             + (float)(*(float *)(v35 + 8 * v98 + 20) * v38.m128_f32[0]))
                     * (float)(1.0 - v99))
             + (float)((float)((float)(*(float *)(v162 + 8 * v98 + 20) * (float)(1.0 - v38.m128_f32[0]))
                             + (float)(v50[2 * v98 + 5] * v38.m128_f32[0]))
                     * v99);
        *(float *)&v95[8 * v98 + 8] = v112;
        *(float *)&v95[8 * v98 + 12] = v113;
        *(float *)&v97[8 * v98 + 8] = v112;
        *(float *)&v97[8 * v98 + 12] = v113;
      }
      v114 = *((_DWORD *)v3 + 6);
      v115 = *(_QWORD *)v181;
      *(float *)((char *)v37 + *(_QWORD *)v181 - 8) = v39;
      v116 = (char *)v37 + v115;
      *(float *)((char *)v37 + v115 - 4) = v38.m128_f32[3];
      *(float *)((char *)v37 + v115) = 1.0;
      *(float *)((char *)v37 + v115 + 4) = v5[3];
      v117 = *(_QWORD *)v184;
      *(float *)((char *)v36 + *(_QWORD *)v184 - 8) = v39;
      v118 = (char *)v36 + v117;
      *(float *)((char *)v36 + v117 - 4) = v38.m128_f32[3];
      *(float *)((char *)v36 + v117) = 0.0;
      *(float *)((char *)v36 + v117 + 4) = 1.0;
      v119 = 0LL;
      v120 = (float)(v39 - *v5) / (float)(*v50 - *v5);
      v121 = (float)(v38.m128_f32[3] - v5[1]) / (float)(v50[1] - v5[1]);
      if ( v114 >= 2 )
      {
        v122 = (float *)(v35 + 20);
        v198.m128_u64[0] = v162 - v35;
        v123 = v162 - v35;
        v124 = 1.0 - v120;
        v125 = 1.0 - v121;
        v167 = (char *)v50 - v35;
        v126 = (__int64)v5 - v35;
        v127 = (char *)v50 - v35;
        v166 = &v116[-v35 - 8];
        v128 = v166;
        v165 = &v118[-v35 - 8];
        v129 = v165;
        v160 = ((v114 - 2) >> 1) + 1;
        v119 = (unsigned int)(2 * v160);
        do
        {
          v130 = (float)(v121
                       * (float)((float)(v120 * *(float *)((char *)v122 + (_QWORD)v127 - 4))
                               + (float)(v124 * *(float *)((char *)v122 + v123 - 4))))
               + (float)(v125
                       * (float)((float)(v120 * *(v122 - 1)) + (float)(v124 * *(float *)((char *)v122 + v126 - 4))));
          v131 = (float)(v121
                       * (float)((float)(v120 * *(float *)((char *)v122 + (_QWORD)v127))
                               + (float)(v124 * *(float *)((char *)v122 + v123))))
               + (float)(v125 * (float)((float)(v120 * *v122) + (float)(v124 * *(float *)((char *)v122 + v126))));
          *(float *)((char *)v122 + (_QWORD)v128 - 4) = v130;
          *(float *)((char *)v122 + (_QWORD)v128) = v131;
          *(float *)((char *)v122 + (_QWORD)v129) = v131;
          *(float *)((char *)v122 + (_QWORD)v129 - 4) = v130;
          v132 = (float)(v120 * v122[2]) + (float)(v124 * *(float *)((char *)v122 + v126 + 8));
          v133 = (float)(v120 * *(float *)((char *)v122 + (_QWORD)v127 + 8))
               + (float)(v124 * *(float *)((char *)v122 + v123 + 8));
          v134 = (float)(v121
                       * (float)((float)(v120 * *(float *)((char *)v122 + (_QWORD)v127 + 4))
                               + (float)(v124 * *(float *)((char *)v122 + v123 + 4))))
               + (float)(v125 * (float)((float)(v120 * v122[1]) + (float)(v124 * *(float *)((char *)v122 + v126 + 4))));
          *(float *)((char *)v122 + (_QWORD)v128 + 4) = v134;
          v135 = (float)(v121 * v133) + (float)(v125 * v132);
          *(float *)&v116[(_QWORD)v122 - v35] = v135;
          *(float *)((char *)v122 + (_QWORD)v129 + 4) = v134;
          *(float *)&v118[(_QWORD)v122 - v35] = v135;
          v122 += 4;
          --v160;
        }
        while ( v160 );
        v2 = v171;
        v3 = v170;
        v50 = v172;
        v31 = (void **)((char *)v171 + 96);
      }
      if ( (unsigned int)v119 < v114 )
      {
        v136 = v121;
        v137 = 1.0 - v121;
        v138 = (float)(v121
                     * (float)((float)(v120 * v50[2 * v119 + 5])
                             + (float)((float)(1.0 - v120) * *(float *)(v162 + 8 * v119 + 20))))
             + (float)((float)(1.0 - v121)
                     * (float)((float)(v120 * *(float *)(v35 + 8 * v119 + 20))
                             + (float)((float)(1.0 - v120) * v5[2 * v119 + 5])));
        v139 = (float)(v136
                     * (float)((float)(v120 * v50[2 * v119 + 4])
                             + (float)((float)(1.0 - v120) * *(float *)(v162 + 8 * v119 + 16))))
             + (float)(v137
                     * (float)((float)(v120 * *(float *)(v35 + 8 * v119 + 16))
                             + (float)((float)(1.0 - v120) * v5[2 * v119 + 4])));
        *(float *)&v116[8 * v119 + 12] = v138;
        *(float *)&v116[8 * v119 + 8] = v139;
        *(float *)&v118[8 * v119 + 8] = v139;
        *(float *)&v118[8 * v119 + 12] = v138;
      }
      v34 = v178 + 16;
      v36 = (float *)((char *)v36 + v199);
      v33 = v161 + 4;
      v37 = (float *)((char *)v37 + v199);
      v140 = v179-- == 1;
      v178 += 16LL;
      v161 += 4;
    }
    while ( !v140 );
    v32 = v163;
    v30 = v169[0];
  }
  v141 = v5[1];
  v142 = 3 * v168;
  v143 = *(float *)((char *)v5 + v142);
  v144 = *(float *)((char *)v5 + v142 + 4);
  if ( v143 <= *v5 || v144 <= v141 )
    v145 = 0.0;
  else
    v145 = (float)(v143 - *v5) * (float)(v144 - v141);
  v146 = *((_DWORD *)v31 + 6);
  v147 = *((_DWORD *)v3 + 6);
  *(_QWORD *)v184 = v30;
  v200 = v146;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v145 - v32;
  v148 = *(_QWORD *)v3;
  v169[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  v149 = *(_QWORD *)(v148 + 56);
  *(_QWORD *)v181 = v180;
  v150 = *(_BYTE *)(v149 + 97);
  Src = *v173;
  v185 = v164;
  v182 = v164;
  v186 = v174;
  v183 = v174;
  v199 = __PAIR64__(v147, v174);
  if ( v174 > 0x10000 || v146 > 0x1FFFE )
  {
    LODWORD(v199) = 0;
    v200 = 0;
  }
  v152 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v199);
  if ( v152 )
  {
    CDrawListPrimitive::Initialize(v152, 1, (__int64)v181, v184, v147, Src, v146, (__int64)v169, v150);
    v153 = *(_QWORD *)v3;
    v10 = 0;
    v154 = (__int64 *)(*(_QWORD *)v3 + 56LL);
    v155 = (void (__fastcall ***)(_QWORD, __int64))v152;
    *(_OWORD *)((char *)v3 + 40) = *(_OWORD *)(*(_QWORD *)v3 + 72LL);
    *(_OWORD *)((char *)v3 + 56) = *(_OWORD *)(v153 + 88);
    *(_OWORD *)((char *)v3 + 72) = *(_OWORD *)(v153 + 104);
    *(_OWORD *)((char *)v3 + 88) = *(_OWORD *)(v153 + 120);
    *((_DWORD *)v3 + 26) = *(_DWORD *)(v153 + 136);
    *(_OWORD *)(v153 + 72) = CMILMatrix::Identity;
    *(_OWORD *)(v153 + 88) = xmmword_18026DE70;
    *(_OWORD *)(v153 + 104) = xmmword_18026DE80;
    *(_OWORD *)(v153 + 120) = xmmword_18026DE90;
    *(_DWORD *)(v153 + 136) = dword_18026DEA0;
    v156 = (void (__fastcall ***)(_QWORD, __int64))*v154;
    *v154 = 0LL;
    if ( v154 != v169 )
    {
      v155 = 0LL;
      *v154 = v152;
    }
    v157 = (__int64 *)((char *)v3 + 32);
    if ( v157 == v169 )
    {
      if ( v156 )
        (**v156)(v156, 1LL);
    }
    else
    {
      v158 = (void (__fastcall ***)(_QWORD, __int64))*v157;
      if ( v156 != (void (__fastcall ***)(_QWORD, __int64))*v157 )
      {
        if ( v158 )
          (**v158)(v158, 1LL);
        *v157 = (__int64)v156;
      }
    }
    if ( v155 )
      (**v155)(v155, 1LL);
    return (unsigned int)v10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19Du);
  return 2147942414LL;
}
