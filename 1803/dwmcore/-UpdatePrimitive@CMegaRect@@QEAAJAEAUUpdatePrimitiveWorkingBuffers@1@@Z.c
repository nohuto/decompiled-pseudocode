/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180010270
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x180016994 (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18008ACAC (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800AF3E0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x18013F804 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(
        FastRegion::Internal::CRgnData ***this,
        struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  CMegaRect *v2; // r14
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v3; // r15
  float *v4; // rdi
  int v5; // eax
  FastRegion::Internal::CRgnData **v6; // rsi
  FastRegion::Internal::CRgnData *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  int v15; // r11d
  char *v16; // rsi
  _DWORD *v17; // r10
  int v18; // esi
  int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // r13
  char *v24; // rbx
  int v25; // edx
  __int16 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rsi
  float *v29; // r12
  float *v30; // r13
  __m128 v31; // xmm9
  float v32; // xmm8_4
  float v33; // xmm1_4
  __int16 v34; // bx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // r10
  _DWORD *v40; // r10
  __int64 v41; // rax
  float *v42; // rdx
  __int64 v43; // rax
  float v44; // xmm6_4
  float v45; // xmm12_4
  float v46; // xmm13_4
  float v47; // xmm14_4
  __int64 v48; // r15
  float *v49; // rax
  float *v50; // rdx
  __int64 v51; // r11
  char *v52; // rbx
  char *v53; // r14
  char *v54; // r8
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm4_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  __int64 v61; // r8
  float v62; // xmm3_4
  float v63; // xmm5_4
  float v64; // xmm6_4
  float v65; // xmm2_4
  unsigned int v66; // ecx
  float *v67; // r9
  float *v68; // r10
  __int64 v69; // rax
  float v70; // xmm12_4
  float v71; // xmm13_4
  float v72; // xmm7_4
  float v73; // xmm14_4
  __int64 v74; // r11
  __int64 v75; // r15
  char *v76; // rbx
  char *v77; // r14
  char *v78; // rax
  float *v79; // r10
  char *v80; // r9
  float v81; // xmm2_4
  float v82; // xmm0_4
  float v83; // xmm5_4
  float v84; // xmm1_4
  float v85; // xmm2_4
  float v86; // xmm0_4
  float v87; // xmm2_4
  float v88; // xmm7_4
  unsigned int v89; // r10d
  __int64 v90; // r9
  char *v91; // rcx
  __int64 v92; // rax
  char *v93; // r9
  __int64 v94; // rax
  float v95; // xmm12_4
  float v96; // xmm13_4
  float *v97; // r11
  float v98; // xmm14_4
  __int64 v99; // r15
  __int64 v100; // rbx
  char *v101; // r14
  char *v102; // r8
  char *v103; // rdx
  float v104; // xmm6_4
  float v105; // xmm7_4
  float v106; // xmm6_4
  float v107; // xmm7_4
  float v108; // xmm6_4
  float v109; // xmm7_4
  unsigned int v110; // r10d
  __int64 v111; // r9
  char *v112; // rcx
  __int64 v113; // rax
  char *v114; // r9
  __int64 v115; // rax
  float v116; // xmm8_4
  float v117; // xmm6_4
  float v118; // xmm10_4
  float *v119; // r11
  float v120; // xmm7_4
  __int64 v121; // rax
  __int64 v122; // r8
  float *v123; // rax
  char *v124; // rdx
  char *v125; // rbx
  char *v126; // r15
  char *v127; // r14
  float v128; // xmm3_4
  float v129; // xmm1_4
  float v130; // xmm0_4
  float v131; // xmm1_4
  float v132; // xmm4_4
  float v133; // xmm2_4
  float v134; // xmm3_4
  float v135; // xmm1_4
  bool v136; // zf
  float v137; // xmm2_4
  __int64 v138; // rcx
  float v139; // xmm1_4
  float v140; // xmm0_4
  float v141; // xmm0_4
  unsigned int v142; // edi
  int v143; // esi
  void *Src; // r12
  __int64 v145; // rax
  __int64 v146; // rcx
  char v147; // r15
  int v148; // edx
  __int64 v149; // rbx
  __int64 v150; // rcx
  __int64 v151; // rdi
  char *v152; // rcx
  __int64 v153; // rax
  char *v154; // r14
  char *v155; // rcx
  __int64 v156; // rdx
  int v158; // edx
  _DWORD *v159; // r9
  __int64 v160; // r8
  float v161; // xmm2_4
  float v162; // xmm10_4
  int v163; // [rsp+40h] [rbp-C0h]
  __int64 v164; // [rsp+50h] [rbp-B0h] BYREF
  int v165; // [rsp+58h] [rbp-A8h]
  int v166; // [rsp+5Ch] [rbp-A4h]
  int v167; // [rsp+60h] [rbp-A0h]
  char *v168; // [rsp+68h] [rbp-98h]
  char *v169; // [rsp+70h] [rbp-90h]
  char *v170; // [rsp+78h] [rbp-88h]
  char *v171; // [rsp+80h] [rbp-80h]
  int v172; // [rsp+88h] [rbp-78h]
  __int64 v173; // [rsp+90h] [rbp-70h]
  CMegaRect *v174; // [rsp+98h] [rbp-68h]
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v175; // [rsp+A0h] [rbp-60h]
  float *v176; // [rsp+A8h] [rbp-58h]
  __int64 v177[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v178; // [rsp+C0h] [rbp-40h]
  __int64 v179; // [rsp+C8h] [rbp-38h]
  __int64 v180; // [rsp+D0h] [rbp-30h]
  __int64 v181; // [rsp+D8h] [rbp-28h]
  __int64 v182; // [rsp+E0h] [rbp-20h]
  __int64 v183; // [rsp+E8h] [rbp-18h]
  __int64 v184; // [rsp+F0h] [rbp-10h]
  int v185[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v186; // [rsp+100h] [rbp+0h]
  unsigned int v187; // [rsp+104h] [rbp+4h]
  int v188[2]; // [rsp+108h] [rbp+8h] BYREF
  int v189; // [rsp+110h] [rbp+10h]
  unsigned int v190; // [rsp+114h] [rbp+14h]
  __int64 v191; // [rsp+118h] [rbp+18h]
  char *v192; // [rsp+120h] [rbp+20h]
  __int64 v193; // [rsp+128h] [rbp+28h]
  __int64 v194; // [rsp+130h] [rbp+30h]
  __int64 v195; // [rsp+138h] [rbp+38h]
  __int64 v196; // [rsp+140h] [rbp+40h]
  __int64 v197; // [rsp+148h] [rbp+48h]
  char v198; // [rsp+150h] [rbp+50h] BYREF
  char v199[8]; // [rsp+158h] [rbp+58h] BYREF
  char v200[8]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v201; // [rsp+168h] [rbp+68h]
  _DWORD *v202; // [rsp+170h] [rbp+70h]
  char *v203; // [rsp+178h] [rbp+78h]
  int v204; // [rsp+180h] [rbp+80h]
  int v205; // [rsp+184h] [rbp+84h]
  __m128 v206; // [rsp+190h] [rbp+90h]
  unsigned __int64 v207; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v208; // [rsp+1A8h] [rbp+A8h]

  v174 = (CMegaRect *)this;
  *((_DWORD *)a2 + 6) = 0;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 22) = 0;
  v2 = (CMegaRect *)this;
  *((_DWORD *)a2 + 30) = 0;
  v3 = a2;
  v4 = (float *)this[2];
  v192 = (char *)a2 + 96;
  v5 = *((_DWORD *)this + 6);
  v6 = this[1];
  *((_DWORD *)a2 + 6) = 0;
  v175 = a2;
  v7 = *v6;
  v167 = 8 * v5 + 16;
  v172 = v167;
  if ( *(_DWORD *)v7 )
  {
    v8 = (__int64)v7 + 8 * *(_DWORD *)v7 + 4;
    v9 = (v8 + *(int *)(v8 + 4) - (__int64)*((int *)v7 + 4) - ((__int64)v7 + 12)) >> 3;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  v10 = DynArrayImpl<0>::Grow((_DWORD)v3, 16, v9, 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1A7u);
  else
    *((_DWORD *)v3 + 6) += v9;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x145u);
    return (unsigned int)v11;
  }
  v12 = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*v6, (struct FastRegion::CRegion::Iterator *)v200);
  LODWORD(v13) = v205;
  v14 = v201;
  v15 = v204;
  v16 = v203;
  v17 = v202;
  while ( (unsigned __int64)v17 < v14 )
  {
    v158 = 2 * v15;
    HIDWORD(v177[0]) = *v17;
    v159 = v17 + 2;
    ++v15;
    HIDWORD(v177[1]) = v17[2];
    LODWORD(v177[0]) = *(_DWORD *)&v16[4 * v158];
    LODWORD(v177[1]) = *(_DWORD *)&v16[4 * v158 + 4];
    *(_OWORD *)(*(_QWORD *)v3 + 16LL * v12) = *(_OWORD *)v177;
    if ( v15 >= (int)v13 )
    {
      while ( 1 )
      {
        v17 = v159;
        v160 = (int)v159[3];
        v16 = (char *)v159 + (int)v159[1];
        v159 += 2;
        v13 = ((__int64)v159 + v160 - (__int64)v16) >> 3;
        if ( (_DWORD)v13 )
          break;
        if ( (unsigned __int64)v17 >= v14 )
          goto LABEL_58;
      }
      v15 = 0;
    }
LABEL_58:
    ++v12;
  }
  v18 = *((_DWORD *)v3 + 6);
  LODWORD(v164) = v18;
  v178 = 4 * v18;
  v19 = v167 * 4 * v18;
  v11 = DynArrayImpl<0>::Grow((int)v3 + 32, 1, v19, 0, 0LL);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x149u);
    return (unsigned int)v11;
  }
  v20 = *((_QWORD *)v3 + 4);
  *((_DWORD *)v3 + 14) = v19;
  v184 = v20;
  v21 = DynArrayImpl<0>::Grow((int)v3 + 64, 1, v19, 0, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x14Eu);
    return v22;
  }
  v23 = *((_QWORD *)v3 + 8);
  *((_DWORD *)v3 + 22) = v19;
  v24 = (char *)v3 + 96;
  v177[0] = v23;
  v11 = DynArrayImpl<0>::Grow((int)v3 + 96, 2, 6 * v18, 0, 0LL);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x153u);
    return (unsigned int)v11;
  }
  v25 = 0;
  v166 = 0;
  if ( v18 )
  {
    v26 = 0;
    v27 = 0LL;
    v28 = (__int64)v4 + v172;
    v173 = (__int64)v4 + 2 * v172;
    v176 = (float *)((char *)v4 + 3 * v172);
    v207 = (unsigned int)(4 * v167);
    v179 = -8LL - v167;
    v29 = (float *)(v23 + v167 + 8LL);
    v193 = 2 * v167 - (__int64)v167;
    v30 = (float *)(v167 + v184 + 8);
    v165 = 0;
    v182 = 0LL;
    *(_QWORD *)v185 = 3 * v167 - (__int64)v167;
    v194 = v193;
    *(_QWORD *)v188 = *(_QWORD *)v185;
    v195 = -4LL - v167;
    v197 = v195;
    v196 = -(__int64)v167;
    v180 = 4LL - v167;
    v181 = v179;
    v191 = v180;
    v183 = (unsigned int)v164;
    do
    {
      v31 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(v27 + *(_QWORD *)v3))), (__m128)_xmm);
      v206 = v31;
      v32 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0];
      if ( v32 <= v31.m128_f32[0] || v31.m128_f32[3] <= v31.m128_f32[1] )
        v33 = 0.0;
      else
        v33 = (float)(v32 - v31.m128_f32[0]) * (float)(v31.m128_f32[3] - v31.m128_f32[1]);
      LOWORD(v164) = v26;
      v166 += (int)v33;
      DynArray<unsigned short,0>::AddMultipleAndSet(v24, &v164, 1LL);
      LOWORD(v164) = v165 + 1;
      DynArray<unsigned short,0>::AddMultipleAndSet(v24, &v164, 1LL);
      v34 = v165 + 3;
      LOWORD(v164) = v165 + 3;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v3 + 96, &v164, 1LL);
      LOWORD(v164) = v165;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v3 + 96, &v164, 1LL);
      LOWORD(v164) = v34;
      v24 = (char *)v3 + 96;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v3 + 96, &v164, 1LL);
      LOWORD(v164) = v165 + 2;
      DynArray<unsigned short,0>::AddMultipleAndSet((char *)v3 + 96, &v164, 1LL);
      v35 = *((_DWORD *)v2 + 6);
      v36 = v196;
      v37 = v180;
      v38 = (_DWORD *)((char *)v30 + v179);
      v39 = v181;
      *(float *)((char *)v30 + v195) = v31.m128_f32[1];
      v40 = (_DWORD *)((char *)v29 + v39);
      *(float *)((char *)v30 + v36) = 1.0;
      *v38 = v31.m128_i32[0];
      *(float *)((char *)v30 + v37) = v4[3];
      v41 = v197;
      *(float *)((char *)v29 + v36) = 0.0;
      v42 = v176;
      *v40 = v31.m128_i32[0];
      *(float *)((char *)v29 + v41) = v31.m128_f32[1];
      *(float *)((char *)v29 + v191) = 1.0;
      v43 = 0LL;
      v44 = (float)(v31.m128_f32[0] - *v4) / (float)(*v42 - *v4);
      v45 = (float)(v31.m128_f32[1] - v4[1]) / (float)(v42[1] - v4[1]);
      if ( v35 >= 2 )
      {
        v206.m128_u64[0] = v28 + 20;
        v46 = 1.0 - v44;
        v168 = (char *)(v173 - v28);
        v47 = 1.0 - v45;
        v48 = v173 - v28;
        v49 = v42;
        v50 = (float *)(v28 + 20);
        v169 = (char *)v49 - v28;
        v51 = (__int64)v4 - v28;
        v52 = (char *)v49 - v28;
        v170 = (char *)v38 - v28;
        v53 = (char *)v38 - v28;
        v171 = (char *)v40 - v28;
        v54 = (char *)v40 - v28;
        v164 = ((v35 - 2) >> 1) + 1;
        v43 = (unsigned int)(2 * v164);
        do
        {
          v55 = (float)(v45
                      * (float)((float)(*(float *)((char *)v50 + (_QWORD)v52 - 4) * v44)
                              + (float)(v46 * *(float *)((char *)v50 + v48 - 4))))
              + (float)(v47 * (float)((float)(v44 * *(v50 - 1)) + (float)(v46 * *(float *)((char *)v50 + v51 - 4))));
          v56 = (float)((float)((float)(v44 * *(float *)((char *)v50 + (_QWORD)v52))
                              + (float)(v46 * *(float *)((char *)v50 + v48)))
                      * v45)
              + (float)(v47 * (float)((float)(v44 * *v50) + (float)(v46 * *(float *)((char *)v50 + v51))));
          *(float *)&v53[(_QWORD)v50 - 4] = v55;
          *(float *)&v53[(_QWORD)v50] = v56;
          *(float *)((char *)v50 + (_QWORD)v54) = v56;
          *(float *)&v54[(_QWORD)v50 - 4] = v55;
          v57 = (float)(v44 * v50[2]) + (float)(v46 * *(float *)((char *)v50 + v51 + 8));
          v58 = (float)((float)(v44 * *(float *)((char *)v50 + (_QWORD)v52 + 8))
                      + (float)(v46 * *(float *)((char *)v50 + v48 + 8)))
              * v45;
          v59 = (float)(v45
                      * (float)((float)(*(float *)((char *)v50 + (_QWORD)v52 + 4) * v44)
                              + (float)(v46 * *(float *)((char *)v50 + v48 + 4))))
              + (float)(v47 * (float)((float)(v44 * v50[1]) + (float)(v46 * *(float *)((char *)v50 + v51 + 4))));
          *(float *)((char *)v50 + (_QWORD)v53 + 4) = v59;
          v60 = v58 + (float)(v47 * v57);
          *(float *)((char *)v50 + (_QWORD)v53 + 8) = v60;
          *(float *)((char *)v50 + (_QWORD)v54 + 4) = v59;
          *(float *)((char *)v50 + (_QWORD)v54 + 8) = v60;
          v50 += 4;
          --v164;
        }
        while ( v164 );
        v2 = v174;
        v3 = v175;
        v42 = v176;
        v24 = v192;
      }
      v61 = v173;
      if ( (unsigned int)v43 < v35 )
      {
        v62 = (float)(v44 * *(float *)(v28 + 8 * v43 + 16)) + (float)((float)(1.0 - v44) * v4[2 * v43 + 4]);
        v63 = (float)(v42[2 * v43 + 4] * v44) + (float)((float)(1.0 - v44) * *(float *)(v173 + 8 * v43 + 16));
        v64 = (float)((float)((float)(v44 * v42[2 * v43 + 5])
                            + (float)((float)(1.0 - v44) * *(float *)(v173 + 8 * v43 + 20)))
                    * v45)
            + (float)((float)(1.0 - v45)
                    * (float)((float)(v44 * *(float *)(v28 + 8 * v43 + 20))
                            + (float)((float)(1.0 - v44) * v4[2 * v43 + 5])));
        v65 = (float)(v45 * v63) + (float)((float)(1.0 - v45) * v62);
        *(float *)&v38[2 * v43 + 5] = v64;
        *(float *)&v38[2 * v43 + 4] = v65;
        *(float *)&v40[2 * v43 + 4] = v65;
        *(float *)&v40[2 * v43 + 5] = v64;
      }
      v66 = *((_DWORD *)v2 + 6);
      v67 = v30 - 2;
      *(v30 - 1) = v31.m128_f32[1];
      v68 = v29 - 2;
      *(v30 - 2) = v32;
      *v30 = 1.0;
      v30[1] = v4[3];
      v69 = 0LL;
      *(v29 - 1) = v31.m128_f32[1];
      *(v29 - 2) = v32;
      *v29 = 0.0;
      v29[1] = 1.0;
      v70 = (float)(v32 - *v4) / (float)(*v42 - *v4);
      v71 = 1.0 - v70;
      v72 = (float)(v31.m128_f32[1] - v4[1]) / (float)(v42[1] - v4[1]);
      if ( v66 >= 2 )
      {
        v168 = (char *)(v28 + 20);
        v73 = 1.0 - v72;
        v74 = (__int64)v4 - v28;
        v206.m128_u64[0] = v61 - v28;
        v75 = v61 - v28;
        v171 = (char *)v42 - v28;
        v76 = (char *)v42 - v28;
        v170 = (char *)v67 - v28;
        v77 = (char *)v67 - v28;
        v78 = (char *)v68 - v28;
        v79 = (float *)(v28 + 20);
        v169 = v78;
        v80 = v78;
        v164 = ((v66 - 2) >> 1) + 1;
        v69 = (unsigned int)(2 * v164);
        do
        {
          v81 = (float)(v72
                      * (float)((float)(*(float *)((char *)v79 + v75 - 4) * v71)
                              + (float)(*(float *)((char *)v79 + (_QWORD)v76 - 4) * v70)))
              + (float)((float)((float)(v70 * *(v79 - 1)) + (float)(*(float *)((char *)v79 + v74 - 4) * v71)) * v73);
          v82 = (float)(v72
                      * (float)((float)(v70 * *(float *)((char *)v79 + (_QWORD)v76))
                              + (float)(*(float *)((char *)v79 + v75) * v71)))
              + (float)((float)((float)(v70 * *v79) + (float)(*(float *)((char *)v79 + v74) * v71)) * v73);
          *(float *)((char *)v79 + (_QWORD)v77 - 4) = v81;
          *(float *)&v77[(_QWORD)v79] = v82;
          *(float *)((char *)v79 + (_QWORD)v80 - 4) = v81;
          *(float *)((char *)v79 + (_QWORD)v80) = v82;
          v83 = (float)((float)(v70 * v79[2]) + (float)(*(float *)((char *)v79 + v74 + 8) * v71)) * v73;
          v84 = (float)(v70 * *(float *)((char *)v79 + (_QWORD)v76 + 8))
              + (float)(*(float *)((char *)v79 + v75 + 8) * v71);
          v85 = (float)(v72
                      * (float)((float)(*(float *)((char *)v79 + v75 + 4) * v71)
                              + (float)(*(float *)((char *)v79 + (_QWORD)v76 + 4) * v70)))
              + (float)((float)((float)(v70 * v79[1]) + (float)(*(float *)((char *)v79 + v74 + 4) * v71)) * v73);
          *(float *)((char *)v79 + (_QWORD)v77 + 4) = v85;
          v86 = (float)(v72 * v84) + v83;
          *(float *)((char *)v79 + (_QWORD)v77 + 8) = v86;
          *(float *)((char *)v79 + (_QWORD)v80 + 4) = v85;
          *(float *)((char *)v79 + (_QWORD)v80 + 8) = v86;
          v79 += 4;
          --v164;
        }
        while ( v164 );
        v3 = v175;
        v67 = v30 - 2;
        v2 = v174;
        v68 = v29 - 2;
        v24 = (char *)v175 + 96;
      }
      if ( (unsigned int)v69 < v66 )
      {
        v87 = (float)(v72 * (float)((float)(v71 * *(float *)(v61 + 8 * v69 + 16)) + (float)(v42[2 * v69 + 4] * v70)))
            + (float)((float)((float)(v70 * *(float *)(v28 + 8 * v69 + 16)) + (float)(v71 * v4[2 * v69 + 4]))
                    * (float)(1.0 - v72));
        v88 = (float)(v72 * (float)((float)(v70 * v42[2 * v69 + 5]) + (float)(v71 * *(float *)(v61 + 8 * v69 + 20))))
            + (float)((float)((float)(v70 * *(float *)(v28 + 8 * v69 + 20)) + (float)(v71 * v4[2 * v69 + 5]))
                    * (float)(1.0 - v72));
        v67[2 * v69 + 4] = v87;
        v67[2 * v69 + 5] = v88;
        v68[2 * v69 + 4] = v87;
        v68[2 * v69 + 5] = v88;
      }
      v89 = *((_DWORD *)v2 + 6);
      v90 = v193;
      *(float *)((char *)v30 + v193 - 8) = v31.m128_f32[0];
      v91 = (char *)v30 + v90;
      *(float *)((char *)v30 + v90 - 4) = v31.m128_f32[3];
      *(float *)((char *)v30 + v90) = 1.0;
      *(float *)((char *)v30 + v90 + 4) = v4[3];
      v92 = v194;
      *(float *)((char *)v29 + v194 - 8) = v31.m128_f32[0];
      v93 = (char *)v29 + v92;
      *(_QWORD *)((char *)v29 + v92 - 4) = v31.m128_u32[3];
      *(float *)((char *)v29 + v92 + 4) = 1.0;
      v94 = 0LL;
      v31.m128_f32[0] = (float)(v31.m128_f32[0] - *v4) / (float)(*v42 - *v4);
      v95 = 1.0 - v31.m128_f32[0];
      v96 = (float)(v31.m128_f32[3] - v4[1]) / (float)(v42[1] - v4[1]);
      if ( v89 >= 2 )
      {
        v97 = (float *)(v28 + 20);
        v206.m128_u64[0] = (unsigned __int64)v4 - v28;
        v98 = 1.0 - v96;
        v99 = (__int64)v4 - v28;
        v171 = (char *)(v61 - v28);
        v100 = v61 - v28;
        v170 = (char *)v42 - v28;
        v101 = (char *)v42 - v28;
        v169 = &v91[-v28 - 8];
        v102 = v169;
        v168 = &v93[-v28 - 8];
        v103 = v168;
        v164 = ((v89 - 2) >> 1) + 1;
        v94 = (unsigned int)(2 * v164);
        do
        {
          v104 = (float)((float)((float)(*(float *)((char *)v97 + v99 - 4) * v95) + (float)(*(v97 - 1) * v31.m128_f32[0]))
                       * v98)
               + (float)((float)((float)(*(float *)((char *)v97 + v100 - 4) * v95)
                               + (float)(*(float *)((char *)v97 + (_QWORD)v101 - 4) * v31.m128_f32[0]))
                       * v96);
          v105 = (float)((float)((float)(*(float *)((char *)v97 + v99) * v95) + (float)(*v97 * v31.m128_f32[0])) * v98)
               + (float)((float)((float)(*(float *)((char *)v97 + v100) * v95)
                               + (float)(*(float *)((char *)v97 + (_QWORD)v101) * v31.m128_f32[0]))
                       * v96);
          *(float *)((char *)v97 + (_QWORD)v102 - 4) = v104;
          *(float *)((char *)v97 + (_QWORD)v102) = v105;
          *(float *)((char *)v97 + (_QWORD)v103 - 4) = v104;
          *(float *)((char *)v97 + (_QWORD)v103) = v105;
          v106 = (float)((float)((float)(*(float *)((char *)v97 + v99 + 4) * v95) + (float)(v97[1] * v31.m128_f32[0]))
                       * v98)
               + (float)((float)((float)(*(float *)((char *)v97 + v100 + 4) * v95)
                               + (float)(*(float *)((char *)v97 + (_QWORD)v101 + 4) * v31.m128_f32[0]))
                       * v96);
          v107 = (float)((float)((float)(*(float *)((char *)v97 + v99 + 8) * v95) + (float)(v97[2] * v31.m128_f32[0]))
                       * v98)
               + (float)((float)((float)(*(float *)((char *)v97 + v100 + 8) * v95)
                               + (float)(*(float *)((char *)v97 + (_QWORD)v101 + 8) * v31.m128_f32[0]))
                       * v96);
          *(float *)((char *)v97 + (_QWORD)v102 + 4) = v106;
          *(float *)&v91[(_QWORD)v97 - v28] = v107;
          *(float *)((char *)v97 + (_QWORD)v103 + 4) = v106;
          *(float *)&v93[(_QWORD)v97 - v28] = v107;
          v97 += 4;
          --v164;
        }
        while ( v164 );
        v3 = v175;
        v2 = v174;
        v42 = v176;
        v61 = v173;
        v24 = (char *)v175 + 96;
      }
      if ( (unsigned int)v94 < v89 )
      {
        v108 = (float)((float)((float)(*(float *)(v28 + 8 * v94 + 16) * v31.m128_f32[0]) + (float)(v95 * v4[2 * v94 + 4]))
                     * (float)(1.0 - v96))
             + (float)((float)((float)(*(float *)(v61 + 8 * v94 + 16) * v95)
                             + (float)(v42[2 * v94 + 4] * v31.m128_f32[0]))
                     * v96);
        v109 = (float)((float)((float)(v4[2 * v94 + 5] * v95) + (float)(*(float *)(v28 + 8 * v94 + 20) * v31.m128_f32[0]))
                     * (float)(1.0 - v96))
             + (float)((float)((float)(*(float *)(v61 + 8 * v94 + 20) * v95)
                             + (float)(v42[2 * v94 + 5] * v31.m128_f32[0]))
                     * v96);
        *(float *)&v91[8 * v94 + 8] = v108;
        *(float *)&v91[8 * v94 + 12] = v109;
        *(float *)&v93[8 * v94 + 8] = v108;
        *(float *)&v93[8 * v94 + 12] = v109;
      }
      v110 = *((_DWORD *)v2 + 6);
      v111 = *(_QWORD *)v185;
      *(float *)((char *)v30 + *(_QWORD *)v185 - 8) = v32;
      v112 = (char *)v30 + v111;
      *(float *)((char *)v30 + v111 - 4) = v31.m128_f32[3];
      *(float *)((char *)v30 + v111) = 1.0;
      *(float *)((char *)v30 + v111 + 4) = v4[3];
      v113 = *(_QWORD *)v188;
      *(float *)((char *)v29 + *(_QWORD *)v188 - 8) = v32;
      v114 = (char *)v29 + v113;
      *(float *)((char *)v29 + v113 - 4) = v31.m128_f32[3];
      *(float *)((char *)v29 + v113) = 0.0;
      *(float *)((char *)v29 + v113 + 4) = 1.0;
      v115 = 0LL;
      v116 = (float)(v32 - *v4) / (float)(*v42 - *v4);
      v117 = 1.0 - v116;
      v118 = (float)(v31.m128_f32[3] - v4[1]) / (float)(v42[1] - v4[1]);
      if ( v110 >= 2 )
      {
        v119 = (float *)(v28 + 20);
        v206.m128_u64[0] = (unsigned __int64)v4 - v28;
        v120 = 1.0 - v118;
        v121 = v61;
        v122 = (__int64)v4 - v28;
        v171 = (char *)(v121 - v28);
        v123 = v42;
        v124 = v171;
        v170 = (char *)v123 - v28;
        v125 = (char *)v123 - v28;
        v169 = &v112[-v28 - 8];
        v126 = v169;
        v168 = &v114[-v28 - 8];
        v127 = v168;
        v164 = ((v110 - 2) >> 1) + 1;
        v115 = (unsigned int)(2 * v164);
        do
        {
          v128 = (float)(v120
                       * (float)((float)(*(float *)((char *)v119 + v122 - 4) * v117) + (float)(*(v119 - 1) * v116)))
               + (float)(v118
                       * (float)((float)(v117 * *(float *)((char *)v119 + (_QWORD)v124 - 4))
                               + (float)(v116 * *(float *)((char *)v119 + (_QWORD)v125 - 4))));
          v129 = v118
               * (float)((float)(v116 * *(float *)((char *)v119 + (_QWORD)v125))
                       + (float)(v117 * *(float *)((char *)v119 + (_QWORD)v124)));
          v130 = v120 * (float)((float)(v116 * *v119) + (float)(*(float *)((char *)v119 + v122) * v117));
          *(float *)((char *)v119 + (_QWORD)v126 - 4) = v128;
          v131 = v129 + v130;
          *(float *)((char *)v119 + (_QWORD)v126) = v131;
          *(float *)((char *)v119 + (_QWORD)v127) = v131;
          *(float *)((char *)v119 + (_QWORD)v127 - 4) = v128;
          v132 = (float)(v116 * v119[2]) + (float)(*(float *)((char *)v119 + v122 + 8) * v117);
          v133 = (float)(v116 * *(float *)((char *)v119 + (_QWORD)v125 + 8))
               + (float)(v117 * *(float *)((char *)v119 + (_QWORD)v124 + 8));
          v134 = (float)(v120 * (float)((float)(*(float *)((char *)v119 + v122 + 4) * v117) + (float)(v119[1] * v116)))
               + (float)(v118
                       * (float)((float)(v117 * *(float *)((char *)v119 + (_QWORD)v124 + 4))
                               + (float)(v116 * *(float *)((char *)v119 + (_QWORD)v125 + 4))));
          *(float *)((char *)v119 + (_QWORD)v126 + 4) = v134;
          v135 = (float)(v118 * v133) + (float)(v120 * v132);
          *(float *)&v112[(_QWORD)v119 - v28] = v135;
          *(float *)((char *)v119 + (_QWORD)v127 + 4) = v134;
          *(float *)&v114[(_QWORD)v119 - v28] = v135;
          v119 += 4;
          --v164;
        }
        while ( v164 );
        v3 = v175;
        v2 = v174;
        v42 = v176;
        v61 = v173;
        v24 = (char *)v175 + 96;
      }
      if ( (unsigned int)v115 < v110 )
      {
        v161 = (float)((float)(1.0 - v118)
                     * (float)((float)(v4[2 * v115 + 4] * v117) + (float)(*(float *)(v28 + 8 * v115 + 16) * v116)))
             + (float)(v118
                     * (float)((float)(v117 * *(float *)(v61 + 8 * v115 + 16)) + (float)(v116 * v42[2 * v115 + 4])));
        v162 = (float)(v118
                     * (float)((float)(v117 * *(float *)(v61 + 8 * v115 + 20)) + (float)(v116 * v42[2 * v115 + 5])))
             + (float)((float)(1.0 - v118)
                     * (float)((float)(v4[2 * v115 + 5] * v117) + (float)(v116 * *(float *)(v28 + 8 * v115 + 20))));
        *(float *)&v112[8 * v115 + 8] = v161;
        *(float *)&v112[8 * v115 + 12] = v162;
        *(float *)&v114[8 * v115 + 8] = v161;
        *(float *)&v114[8 * v115 + 12] = v162;
      }
      v27 = v182 + 16;
      v29 = (float *)((char *)v29 + v207);
      v26 = v165 + 4;
      v30 = (float *)((char *)v30 + v207);
      v136 = v183-- == 1;
      v182 += 16LL;
      v165 += 4;
    }
    while ( !v136 );
    v25 = v166;
    v23 = v177[0];
  }
  v137 = v4[1];
  v138 = 3 * v172;
  v139 = *(float *)((char *)v4 + v138);
  v140 = *(float *)((char *)v4 + v138 + 4);
  if ( v139 <= *v4 || v140 <= v137 )
    v141 = 0.0;
  else
    v141 = (float)(v140 - v137) * (float)(v139 - *v4);
  v142 = *((_DWORD *)v24 + 6);
  v143 = *((_DWORD *)v2 + 6);
  Src = *(void **)v24;
  *(_QWORD *)v188 = v23;
  v208 = v142;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v141 - v25;
  v145 = *(_QWORD *)v2;
  v177[0] = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  v146 = *(_QWORD *)(v145 + 56);
  v189 = v167;
  *(_QWORD *)v185 = v184;
  v147 = *(_BYTE *)(v146 + 97);
  v190 = v178;
  v186 = v167;
  v187 = v178;
  v207 = __PAIR64__(v143, v178);
  if ( v178 > 0x10000 || v142 > 0x1FFFE )
  {
    LODWORD(v207) = 0;
    v208 = 0;
  }
  v149 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v207);
  if ( !v149 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19Du);
    return 2147942414LL;
  }
  LOBYTE(v163) = v147;
  LOBYTE(v148) = 1;
  CDrawListPrimitive::Initialize(v149, v148, (int)v185, (int)v188, v143, Src, v142, (__int64)v177, v163);
  v150 = *(_QWORD *)v2;
  v151 = v149;
  *(_OWORD *)((char *)v2 + 40) = *(_OWORD *)(*(_QWORD *)v2 + 72LL);
  *(_OWORD *)((char *)v2 + 56) = *(_OWORD *)(v150 + 88);
  *(_OWORD *)((char *)v2 + 72) = *(_OWORD *)(v150 + 104);
  *(_OWORD *)((char *)v2 + 88) = *(_OWORD *)(v150 + 120);
  *((_DWORD *)v2 + 26) = *(_DWORD *)(v150 + 136);
  *(_OWORD *)(v150 + 72) = CMILMatrix::Identity;
  *(_OWORD *)(v150 + 88) = xmmword_1802D52E0;
  *(_OWORD *)(v150 + 104) = xmmword_1802D52F0;
  *(_OWORD *)(v150 + 120) = xmmword_1802D5300;
  *(_DWORD *)(v150 + 136) = dword_1802D5310;
  v152 = (char *)(v150 + 56);
  v153 = *(_QWORD *)v152;
  *(_QWORD *)v152 = 0LL;
  if ( v152 != &v198 )
  {
    v151 = 0LL;
    *(_QWORD *)v152 = v149;
  }
  v154 = (char *)v2 + 32;
  v155 = v199;
  if ( v154 == v199 )
  {
    if ( !v153 )
      goto LABEL_52;
    v156 = v153;
LABEL_69:
    std::default_delete<CDrawListPrimitive>::operator()(v199, v156);
    goto LABEL_52;
  }
  v156 = *(_QWORD *)v154;
  *(_QWORD *)v154 = v153;
  if ( v156 )
    goto LABEL_69;
LABEL_52:
  if ( v151 )
    std::default_delete<CDrawListPrimitive>::operator()(v155, v151);
  return 0LL;
}
