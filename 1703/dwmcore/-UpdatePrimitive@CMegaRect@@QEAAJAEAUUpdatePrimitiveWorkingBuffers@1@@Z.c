/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180007210
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800BEDBC (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x180041B1C (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008BFD0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  char *v3; // rbx
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  int v7; // r12d
  FastRegion::Internal::CRgnData **v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // r13d
  unsigned int v12; // r10d
  FastRegion::Internal::CRgnData *v13; // rcx
  int v14; // r10d
  unsigned int v15; // esi
  int v16; // eax
  FastRegion::Internal::CRgnData **v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r8d
  __m128 v22; // xmm12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r10
  float *v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  _DWORD *v32; // rdx
  __m128 v33; // xmm9
  __m128 v34; // xmm10
  float v35; // xmm1_4
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // eax
  unsigned int v43; // r8d
  unsigned int v44; // eax
  unsigned int v45; // r9d
  unsigned int v46; // eax
  unsigned int v47; // r9d
  unsigned int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // r10
  unsigned __int64 *v51; // r9
  unsigned __int64 v52; // xmm0_8
  _DWORD *v53; // rcx
  unsigned __int64 *v54; // r10
  __int64 v55; // rax
  __int64 v56; // rax
  float v57; // xmm8_4
  float v58; // xmm11_4
  float v59; // xmm7_4
  unsigned __int64 *v60; // r12
  __int64 v61; // r15
  float v62; // xmm15_4
  __int64 v63; // r11
  char *v64; // rbx
  char *v65; // rcx
  char *v66; // rdx
  __m128 v67; // xmm6
  __m128 v68; // xmm4
  unsigned __int64 v69; // xmm0_8
  __m128 v70; // xmm6
  __m128 v71; // xmm4
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm5_4
  unsigned __int64 v75; // xmm0_8
  __m128 v76; // xmm7
  __m128 v77; // xmm5
  __m128 v78; // xmm0
  __m128 v79; // xmm1
  float v80; // xmm6_4
  unsigned int v81; // r8d
  _DWORD *v82; // r9
  _DWORD *v83; // r10
  unsigned __int64 v84; // xmm0_8
  __int64 v85; // rax
  __m128 v86; // xmm11
  float v87; // xmm13_4
  float v88; // xmm15_4
  unsigned __int64 *v89; // r12
  float v90; // xmm12_4
  __int64 v91; // r11
  __int64 v92; // r15
  char *v93; // rbx
  char *v94; // rcx
  char *v95; // rdx
  __m128 v96; // xmm7
  __m128 v97; // xmm6
  __m128 v98; // xmm8
  __m128 v99; // xmm1
  __m128 v100; // xmm0
  __m128 v101; // xmm7
  __m128 v102; // xmm6
  __m128 v103; // xmm1
  __int64 v104; // r11
  __m128 v105; // xmm8
  __m128 v106; // xmm7
  unsigned __int64 v107; // xmm5_8
  __m128 v108; // xmm0
  __m128 v109; // xmm1
  unsigned int v110; // r8d
  unsigned __int64 v111; // xmm0_8
  _DWORD *v112; // r9
  __int64 v113; // rax
  char *v114; // r10
  __int64 v115; // rax
  __m128 v116; // xmm11
  float v117; // xmm13_4
  unsigned __int64 *v118; // r12
  __int64 v119; // r15
  float v120; // xmm15_4
  __int64 v121; // r11
  char *v122; // rbx
  char *v123; // rcx
  char *v124; // rdx
  __m128 v125; // xmm8
  __m128 v126; // xmm1
  float v127; // xmm4_4
  float v128; // xmm2_4
  __m128 v129; // xmm1
  __m128 v130; // xmm0
  __m128 v131; // xmm8
  __m128 v132; // xmm1
  unsigned __int64 v133; // xmm5_8
  float v134; // xmm7_4
  __m128 v135; // xmm1
  __m128 v136; // xmm3
  __m128 v137; // xmm1
  __m128 v138; // xmm8
  __m128 v139; // xmm4
  unsigned __int64 v140; // xmm0_8
  unsigned int v141; // r8d
  unsigned __int64 v142; // xmm0_8
  _DWORD *v143; // r9
  __int64 v144; // rax
  char *v145; // r10
  __int64 v146; // rax
  float v147; // xmm10_4
  float v148; // xmm14_4
  float v149; // xmm7_4
  unsigned __int64 *v150; // r12
  __int64 v151; // rdx
  __m128 v152; // xmm8
  __int64 v153; // r11
  char *v154; // rcx
  char *v155; // r15
  char *v156; // rbx
  __m128 v157; // xmm0
  __m128 v158; // xmm1
  unsigned __int64 v159; // xmm6_8
  float v160; // xmm5_4
  float v161; // xmm4_4
  __m128 v162; // xmm0
  __m128 v163; // xmm1
  unsigned __int64 v164; // xmm7_8
  __m128 v165; // xmm5
  float v166; // xmm6_4
  __m128 v167; // xmm0
  __m128 v168; // xmm1
  __m128 v169; // xmm0
  bool v170; // zf
  float v171; // xmm2_4
  __int64 v172; // rcx
  float v173; // xmm0_4
  float v174; // xmm1_4
  float v175; // xmm0_4
  unsigned int v176; // esi
  void *Src; // r13
  int v178; // ebx
  __int64 v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // eax
  char v182; // r15
  int v183; // edx
  __int64 v184; // rdi
  __int64 v185; // rcx
  void (__fastcall ***v186)(_QWORD, __int64); // rbx
  __int64 *v187; // rsi
  void (__fastcall ***v188)(_QWORD, __int64); // r15
  __int64 *v189; // r14
  void (__fastcall ***v190)(_QWORD, __int64); // rcx
  int v192; // eax
  int v193; // eax
  int v194; // eax
  int v195; // eax
  int v196; // eax
  int v197; // eax
  int v198; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v199; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v200; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v201; // [rsp+60h] [rbp-A0h]
  __int64 v202; // [rsp+68h] [rbp-98h]
  unsigned __int64 v203; // [rsp+70h] [rbp-90h]
  unsigned int v204; // [rsp+78h] [rbp-88h]
  unsigned int v205; // [rsp+7Ch] [rbp-84h]
  char *v206; // [rsp+80h] [rbp-80h]
  char *v207; // [rsp+88h] [rbp-78h]
  char *v208; // [rsp+90h] [rbp-70h]
  __int64 v209; // [rsp+98h] [rbp-68h]
  __int64 v210[2]; // [rsp+A0h] [rbp-60h] BYREF
  char *v211; // [rsp+B0h] [rbp-50h]
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v212; // [rsp+B8h] [rbp-48h]
  FastRegion::Internal::CRgnData **v213; // [rsp+C0h] [rbp-40h]
  int v214; // [rsp+C8h] [rbp-38h]
  int v215; // [rsp+CCh] [rbp-34h]
  __int64 v216; // [rsp+D0h] [rbp-30h]
  __int64 v217; // [rsp+D8h] [rbp-28h]
  __int64 v218; // [rsp+E0h] [rbp-20h]
  int v219[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v220; // [rsp+F0h] [rbp-10h]
  int v221; // [rsp+F4h] [rbp-Ch]
  int v222[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v223; // [rsp+100h] [rbp+0h]
  int v224; // [rsp+104h] [rbp+4h]
  __int64 v225; // [rsp+108h] [rbp+8h]
  __int64 v226; // [rsp+110h] [rbp+10h]
  __int64 v227; // [rsp+118h] [rbp+18h]
  __int64 v228; // [rsp+120h] [rbp+20h]
  __int64 v229; // [rsp+128h] [rbp+28h]
  __int64 v230; // [rsp+130h] [rbp+30h]
  __int64 v231; // [rsp+138h] [rbp+38h]
  __int64 v232; // [rsp+140h] [rbp+40h]
  char v233[8]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v234; // [rsp+150h] [rbp+50h]
  _DWORD *v235; // [rsp+158h] [rbp+58h]
  __int64 v236; // [rsp+160h] [rbp+60h]
  int v237; // [rsp+168h] [rbp+68h]
  __m128 v238; // [rsp+178h] [rbp+78h]
  unsigned __int64 v239; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v240; // [rsp+190h] [rbp+90h]

  v212 = a2;
  v3 = (char *)a2 + 96;
  *((_DWORD *)a2 + 6) = 0;
  v4 = a2;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 22) = 0;
  *((_DWORD *)a2 + 30) = 0;
  v5 = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 2);
  v211 = (char *)a2 + 96;
  v7 = 8 * v5 + 16;
  v8 = (FastRegion::Internal::CRgnData **)*((_QWORD *)this + 1);
  *((_DWORD *)a2 + 6) = 0;
  v214 = v7;
  v213 = v8;
  if ( *(_DWORD *)*v8 )
    v9 = (8LL * (*(_DWORD *)*v8 - 1) + *((int *)*v8 + 2 * *(_DWORD *)*v8 + 2) - (__int64)*((int *)*v8 + 4)) >> 3;
  else
    LODWORD(v9) = 0;
  v10 = DynArrayImpl<0>::Grow((_DWORD)a2, 16, v9, 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1A7u);
  else
    *((_DWORD *)v4 + 6) += v9;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x145u);
    return (unsigned int)v11;
  }
  FastRegion::Internal::CRgnData::BeginIterator(*v213, (struct FastRegion::CRegion::Iterator *)v233);
  while ( (unsigned __int64)v235 < v234 )
  {
    HIDWORD(v210[0]) = *v235;
    HIDWORD(v210[1]) = v235[2];
    LODWORD(v210[0]) = *(_DWORD *)(v236 + 8LL * v237);
    LODWORD(v210[1]) = *(_DWORD *)(v236 + 4LL * (2 * v237 + 1));
    v13 = (FastRegion::Internal::CRgnData *)(2LL * v12);
    *(_OWORD *)(*(_QWORD *)v4 + 8LL * (_QWORD)v13) = *(_OWORD *)v210;
    FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v233);
    v12 = v14 + 1;
  }
  v15 = *((_DWORD *)v4 + 6);
  v205 = v15;
  v215 = 4 * v15;
  v16 = DynArrayImpl<0>::Grow((int)v4 + 32, 1, v7 * 4 * v15, 0, 0LL);
  v204 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x149u);
    return v204;
  }
  v17 = (FastRegion::Internal::CRgnData **)*((_QWORD *)v4 + 4);
  *((_DWORD *)v4 + 14) = v7 * 4 * v15;
  v213 = v17;
  v18 = DynArrayImpl<0>::Grow((int)v4 + 64, 1, v7 * 4 * v15, 0, 0LL);
  v204 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x14Eu);
    return v204;
  }
  v19 = *((_QWORD *)v4 + 8);
  *((_DWORD *)v4 + 22) = v7 * 4 * v15;
  v218 = v19;
  v20 = DynArrayImpl<0>::Grow((_DWORD)v3, 2, 6 * v15, 0, 0LL);
  v21 = 0;
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x153u);
    return (unsigned int)v11;
  }
  v22 = (__m128)LODWORD(FLOAT_1_0);
  if ( v15 )
  {
    v23 = v7;
    v24 = v7;
    v25 = v6 + 2 * v7;
    v210[0] = (unsigned int)(4 * v7);
    v26 = 0LL;
    v239 = v210[0];
    v27 = (float *)(v6 + 3 * v7);
    v209 = v7 + v218 + 12;
    v202 = (__int64)v213 + v7 + 12;
    v228 = 2 * v7 - (__int64)v7;
    v28 = v6 + v7;
    *(_QWORD *)v219 = 3 * v7 - (__int64)v7;
    v226 = -4LL - v7;
    v201 = v25;
    v204 = 0;
    v227 = -(__int64)v7;
    v216 = 0LL;
    v225 = -12LL - v7;
    v231 = v226;
    v229 = v228;
    v29 = 3 * v7;
    v30 = 0;
    *(_QWORD *)v222 = v29 - v23;
    v232 = -v23;
    v31 = -12 - v23;
    v32 = (_DWORD *)((char *)v213 + v24 + 12);
    v230 = v31;
    v217 = v205;
    while ( 1 )
    {
      v33 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(v26 + *(_QWORD *)v4))), (__m128)_xmm);
      v238 = v33;
      v34 = _mm_shuffle_ps(v33, v33, 170);
      if ( v34.m128_f32[0] <= v33.m128_f32[0] || v33.m128_f32[3] <= v33.m128_f32[1] )
        v35 = 0.0;
      else
        v35 = (float)(v34.m128_f32[0] - v33.m128_f32[0]) * (float)(v33.m128_f32[3] - v33.m128_f32[1]);
      v200 = v30;
      v36 = *((_DWORD *)v3 + 6);
      v205 = (int)v35 + v21;
      v37 = v36 + 1;
      if ( v36 + 1 < v36 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v37 <= *((_DWORD *)v3 + 5) )
        {
          *(_WORD *)(*(_QWORD *)v3 + 2LL * v36) = v30;
          *((_DWORD *)v3 + 6) = v37;
          goto LABEL_20;
        }
        v192 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v200);
        if ( v192 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v192, 0xC0u);
      }
      v32 = (_DWORD *)v202;
      v25 = v201;
LABEL_20:
      v38 = *((_DWORD *)v3 + 6);
      v200 = v30 + 1;
      v39 = v38 + 1;
      if ( v38 + 1 < v38 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v39 <= *((_DWORD *)v3 + 5) )
        {
          *(_WORD *)(*(_QWORD *)v3 + 2LL * v38) = v30 + 1;
          *((_DWORD *)v3 + 6) = v39;
          goto LABEL_23;
        }
        v193 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v200);
        if ( v193 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v193, 0xC0u);
      }
      v32 = (_DWORD *)v202;
      v25 = v201;
LABEL_23:
      v200 = v30 + 3;
      LOWORD(v199) = v30 + 3;
      v40 = *((_DWORD *)v3 + 6);
      v41 = v40 + 1;
      if ( v40 + 1 < v40 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v41 <= *((_DWORD *)v3 + 5) )
        {
          *(_WORD *)(*(_QWORD *)v3 + 2LL * v40) = v200;
          *((_DWORD *)v3 + 6) = v41;
          goto LABEL_26;
        }
        v194 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v199);
        if ( v194 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v194, 0xC0u);
      }
      v32 = (_DWORD *)v202;
      v25 = v201;
LABEL_26:
      v42 = *((_DWORD *)v3 + 6);
      LOWORD(v199) = v30;
      v43 = v42 + 1;
      if ( v42 + 1 < v42 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v43 <= *((_DWORD *)v3 + 5) )
        {
          *(_WORD *)(*(_QWORD *)v3 + 2LL * v42) = v30;
          *((_DWORD *)v3 + 6) = v43;
          goto LABEL_29;
        }
        v195 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v199);
        if ( v195 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v195, 0xC0u);
      }
      v32 = (_DWORD *)v202;
      v25 = v201;
LABEL_29:
      LOWORD(v199) = v200;
      v44 = *((_DWORD *)v3 + 6);
      v45 = v44 + 1;
      if ( v44 + 1 < v44 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v45 <= *((_DWORD *)v3 + 5) )
        {
          *(_WORD *)(*(_QWORD *)v3 + 2LL * v44) = v200;
          *((_DWORD *)v3 + 6) = v45;
          goto LABEL_32;
        }
        v196 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v199);
        if ( v196 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v196, 0xC0u);
      }
      v32 = (_DWORD *)v202;
      v25 = v201;
LABEL_32:
      v46 = *((_DWORD *)v3 + 6);
      LOWORD(v199) = v30 + 2;
      v47 = v46 + 1;
      if ( v46 + 1 < v46 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_106:
        v32 = (_DWORD *)v202;
        v25 = v201;
        goto LABEL_35;
      }
      if ( v47 > *((_DWORD *)v3 + 5) )
      {
        v197 = DynArrayImpl<0>::AddMultipleAndSet(v3, 2LL, 1LL, &v199);
        if ( v197 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v197, 0xC0u);
        goto LABEL_106;
      }
      *(_WORD *)(*(_QWORD *)v3 + 2LL * v46) = v30 + 2;
      *((_DWORD *)v3 + 6) = v47;
LABEL_35:
      v48 = *((_DWORD *)this + 6);
      v49 = v227;
      v50 = v230;
      v51 = (unsigned __int64 *)((char *)v32 + v225);
      *(_DWORD *)((char *)v32 + v226) = 1065353216;
      v52 = _mm_unpacklo_ps(v33, (__m128)v33.m128_u32[1]).m128_u64[0];
      *v51 = v52;
      *(_DWORD *)((char *)v32 + v49) = *(_DWORD *)(v6 + 12);
      v53 = (_DWORD *)v209;
      v54 = (unsigned __int64 *)(v209 + v50);
      *(_DWORD *)(v209 + v231) = 0;
      v55 = v232;
      *v54 = v52;
      *(_DWORD *)((char *)v53 + v55) = 1065353216;
      v56 = 0LL;
      v57 = (float)(v33.m128_f32[0] - *(float *)v6) / (float)(*v27 - *(float *)v6);
      v58 = (float)(v33.m128_f32[1] - *(float *)(v6 + 4)) / (float)(v27[1] - *(float *)(v6 + 4));
      if ( v48 >= 2 )
      {
        v238.m128_u64[0] = v28 + 16;
        v59 = v22.m128_f32[0] - v57;
        v60 = (unsigned __int64 *)(v28 + 16);
        v203 = v201 - v28;
        v61 = v201 - v28;
        v62 = v22.m128_f32[0] - v58;
        v63 = v6 - v28;
        v206 = (char *)v27 - v28;
        v64 = (char *)v27 - v28;
        v207 = (char *)v51 - v28;
        v65 = (char *)v51 - v28;
        v208 = (char *)v54 - v28;
        v66 = (char *)v54 - v28;
        v199 = ((v48 - 2) >> 1) + 1;
        v56 = (unsigned int)(2 * v199);
        do
        {
          v67 = (__m128)*(unsigned __int64 *)((char *)v60 + v63);
          v68 = _mm_shuffle_ps(v67, v67, 85);
          v67.m128_f32[0] = (float)((float)((float)(v67.m128_f32[0] * v59) + (float)(v57 * COERCE_FLOAT(*v60))) * v62)
                          + (float)((float)((float)(COERCE_FLOAT(*(unsigned __int64 *)((char *)v60 + v61)) * v59)
                                          + (float)(v57 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v60 + (_QWORD)v64))))
                                  * v58);
          v68.m128_f32[0] = (float)((float)((float)(v68.m128_f32[0] * v59)
                                          + (float)(v57 * _mm_shuffle_ps((__m128)*v60, (__m128)*v60, 85).m128_f32[0]))
                                  * v62)
                          + (float)((float)((float)(_mm_shuffle_ps(
                                                      (__m128)*(unsigned __int64 *)((char *)v60 + v61),
                                                      (__m128)*(unsigned __int64 *)((char *)v60 + v61),
                                                      85).m128_f32[0]
                                                  * v59)
                                          + (float)(v57
                                                  * _mm_shuffle_ps(
                                                      (__m128)*(unsigned __int64 *)((char *)v60 + (_QWORD)v64),
                                                      (__m128)*(unsigned __int64 *)((char *)v60 + (_QWORD)v64),
                                                      85).m128_f32[0]))
                                  * v58);
          v69 = _mm_unpacklo_ps(v67, v68).m128_u64[0];
          *(_QWORD *)&v65[(_QWORD)v60] = v69;
          *(unsigned __int64 *)((char *)v60 + (_QWORD)v66) = v69;
          v70 = (__m128)*(unsigned __int64 *)((char *)v60 + v63 + 8);
          v71 = _mm_shuffle_ps(v70, v70, 85);
          v71.m128_f32[0] = (float)(v71.m128_f32[0] * v59)
                          + (float)(v57 * _mm_shuffle_ps((__m128)v60[1], (__m128)v60[1], 85).m128_f32[0]);
          v70.m128_f32[0] = (float)((float)(v70.m128_f32[0] * v59) + (float)(v57 * COERCE_FLOAT(v60[1]))) * v62;
          v72 = _mm_shuffle_ps(
                  (__m128)*(unsigned __int64 *)((char *)v60 + v61 + 8),
                  (__m128)*(unsigned __int64 *)((char *)v60 + v61 + 8),
                  85).m128_f32[0];
          v73 = v57
              * _mm_shuffle_ps(
                  (__m128)*(unsigned __int64 *)((char *)v60 + (_QWORD)v64 + 8),
                  (__m128)*(unsigned __int64 *)((char *)v60 + (_QWORD)v64 + 8),
                  85).m128_f32[0];
          v74 = (float)((float)(COERCE_FLOAT(*(unsigned __int64 *)((char *)v60 + v61 + 8)) * v59)
                      + (float)(v57 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v60 + (_QWORD)v64 + 8))))
              * v58;
          v203 = *(unsigned __int64 *)((char *)v60 + (_QWORD)v64 + 8);
          v70.m128_f32[0] = v70.m128_f32[0] + v74;
          v71.m128_f32[0] = (float)(v71.m128_f32[0] * v62) + (float)((float)((float)(v72 * v59) + v73) * v58);
          v75 = _mm_unpacklo_ps(v70, v71).m128_u64[0];
          *(unsigned __int64 *)((char *)v60 + (_QWORD)v65 + 8) = v75;
          *(unsigned __int64 *)((char *)v60 + (_QWORD)v66 + 8) = v75;
          v60 += 2;
          --v199;
        }
        while ( v199 );
        v3 = v211;
        v4 = v212;
        v53 = (_DWORD *)v209;
        v32 = (_DWORD *)v202;
        v30 = v204;
        v25 = v201;
      }
      if ( (unsigned int)v56 < v48 )
      {
        v76 = (__m128)*(unsigned __int64 *)(v6 + 8 * v56 + 16);
        v77 = _mm_shuffle_ps(v76, v76, 85);
        v76.m128_f32[0] = (float)(v76.m128_f32[0] * (float)(v22.m128_f32[0] - v57))
                        + (float)(v57 * COERCE_FLOAT(*(_QWORD *)(v28 + 8 * v56 + 16)));
        v78 = (__m128)*(unsigned __int64 *)(v28 + 8 * v56 + 16);
        v79 = (__m128)*(unsigned __int64 *)(v25 + 8 * v56 + 16);
        v80 = (float)(v79.m128_f32[0] * (float)(v22.m128_f32[0] - v57))
            + (float)(v57 * COERCE_FLOAT(*(_QWORD *)&v27[2 * v56 + 4]));
        v203 = *(_QWORD *)&v27[2 * v56 + 4];
        v76.m128_f32[0] = (float)(v76.m128_f32[0] * (float)(v22.m128_f32[0] - v58)) + (float)(v80 * v58);
        v77.m128_f32[0] = (float)((float)((float)(v77.m128_f32[0] * (float)(v22.m128_f32[0] - v57))
                                        + (float)(v57 * _mm_shuffle_ps(v78, v78, 85).m128_f32[0]))
                                * (float)(v22.m128_f32[0] - v58))
                        + (float)((float)((float)(_mm_shuffle_ps(v79, v79, 85).m128_f32[0]
                                                * (float)(v22.m128_f32[0] - v57))
                                        + (float)(v57 * _mm_shuffle_ps((__m128)v203, (__m128)v203, 85).m128_f32[0]))
                                * v58);
        v78.m128_u64[0] = _mm_unpacklo_ps(v76, v77).m128_u64[0];
        v51[v56 + 2] = v78.m128_u64[0];
        v54[v56 + 2] = v78.m128_u64[0];
      }
      v81 = *((_DWORD *)this + 6);
      v82 = v32 - 3;
      *(v32 - 1) = 1065353216;
      v83 = v53 - 3;
      v86 = v34;
      v84 = _mm_unpacklo_ps(v34, (__m128)v33.m128_u32[1]).m128_u64[0];
      *(_QWORD *)(v32 - 3) = v84;
      *v32 = *(_DWORD *)(v6 + 12);
      v85 = 0LL;
      *(_QWORD *)(v53 - 3) = v84;
      *(v53 - 1) = 0;
      *v53 = 1065353216;
      v86.m128_f32[0] = (float)(v34.m128_f32[0] - *(float *)v6) / (float)(*v27 - *(float *)v6);
      v87 = (float)(v33.m128_f32[1] - *(float *)(v6 + 4)) / (float)(v27[1] - *(float *)(v6 + 4));
      if ( v81 >= 2 )
      {
        v199 = v28 + 16;
        v88 = v22.m128_f32[0] - v86.m128_f32[0];
        v89 = (unsigned __int64 *)(v28 + 16);
        v90 = v22.m128_f32[0] - v87;
        v238.m128_u64[0] = v201 - v28;
        v91 = v6 - v28;
        v92 = v201 - v28;
        v208 = (char *)v27 - v28;
        v93 = (char *)v27 - v28;
        v207 = (char *)v82 - v28;
        v94 = (char *)v82 - v28;
        v206 = (char *)v83 - v28;
        v95 = (char *)v83 - v28;
        v203 = ((v81 - 2) >> 1) + 1;
        v85 = (unsigned int)(2 * v203);
        do
        {
          v96 = v86;
          v97 = v86;
          v98 = v86;
          v99 = (__m128)*(unsigned __int64 *)((char *)v89 + v92);
          v96.m128_f32[0] = (float)((float)((float)(v86.m128_f32[0] * COERCE_FLOAT(*v89))
                                          + (float)(COERCE_FLOAT(*(unsigned __int64 *)((char *)v89 + v91)) * v88))
                                  * v90)
                          + (float)((float)((float)(v86.m128_f32[0]
                                                  * COERCE_FLOAT(*(unsigned __int64 *)((char *)v89 + (_QWORD)v93)))
                                          + (float)(v99.m128_f32[0] * v88))
                                  * v87);
          v100 = v96;
          v101 = v86;
          v97.m128_f32[0] = (float)((float)((float)(v86.m128_f32[0]
                                                  * _mm_shuffle_ps((__m128)*v89, (__m128)*v89, 85).m128_f32[0])
                                          + (float)(_mm_shuffle_ps(
                                                      (__m128)*(unsigned __int64 *)((char *)v89 + v91),
                                                      (__m128)*(unsigned __int64 *)((char *)v89 + v91),
                                                      85).m128_f32[0]
                                                  * v88))
                                  * v90)
                          + (float)((float)((float)(v86.m128_f32[0]
                                                  * _mm_shuffle_ps(
                                                      (__m128)*(unsigned __int64 *)((char *)v89 + (_QWORD)v93),
                                                      (__m128)*(unsigned __int64 *)((char *)v89 + (_QWORD)v93),
                                                      85).m128_f32[0])
                                          + (float)(_mm_shuffle_ps(v99, v99, 85).m128_f32[0] * v88))
                                  * v87);
          v100.m128_u64[0] = _mm_unpacklo_ps(v100, v97).m128_u64[0];
          *(_QWORD *)&v94[(_QWORD)v89] = v100.m128_u64[0];
          *(_QWORD *)&v95[(_QWORD)v89] = v100.m128_u64[0];
          v102 = (__m128)*(unsigned __int64 *)((char *)v89 + (_QWORD)v93 + 8);
          v103 = (__m128)*(unsigned __int64 *)((char *)v89 + v91 + 8);
          v98.m128_f32[0] = (float)(v86.m128_f32[0] * COERCE_FLOAT(v89[1])) + (float)(v103.m128_f32[0] * v88);
          v101.m128_f32[0] = (float)(v86.m128_f32[0] * _mm_shuffle_ps((__m128)v89[1], (__m128)v89[1], 85).m128_f32[0])
                           + (float)(_mm_shuffle_ps(v103, v103, 85).m128_f32[0] * v88);
          v103.m128_f32[0] = _mm_shuffle_ps(
                               (__m128)*(unsigned __int64 *)((char *)v89 + v92 + 8),
                               (__m128)*(unsigned __int64 *)((char *)v89 + v92 + 8),
                               85).m128_f32[0]
                           * v88;
          v199 = *(unsigned __int64 *)((char *)v89 + v92 + 8);
          v98.m128_f32[0] = (float)(v98.m128_f32[0] * v90)
                          + (float)((float)((float)(v86.m128_f32[0] * v102.m128_f32[0]) + (float)(*(float *)&v199 * v88))
                                  * v87);
          v101.m128_f32[0] = (float)(v101.m128_f32[0] * v90)
                           + (float)((float)((float)(v86.m128_f32[0] * _mm_shuffle_ps(v102, v102, 85).m128_f32[0])
                                           + v103.m128_f32[0])
                                   * v87);
          v100.m128_u64[0] = _mm_unpacklo_ps(v98, v101).m128_u64[0];
          *(unsigned __int64 *)((char *)v89 + (_QWORD)v94 + 8) = v100.m128_u64[0];
          *(unsigned __int64 *)((char *)v89 + (_QWORD)v95 + 8) = v100.m128_u64[0];
          v89 += 2;
          --v203;
        }
        while ( v203 );
        v22 = (__m128)LODWORD(FLOAT_1_0);
        v3 = v211;
        v4 = v212;
        v53 = (_DWORD *)v209;
        v32 = (_DWORD *)v202;
        v30 = v204;
      }
      v104 = v201;
      if ( (unsigned int)v85 < v81 )
      {
        v105 = v86;
        v106 = v86;
        v107 = *(_QWORD *)&v27[2 * v85 + 4];
        v105.m128_f32[0] = (float)(v86.m128_f32[0] * COERCE_FLOAT(*(_QWORD *)(v28 + 8 * v85 + 16)))
                         + (float)(COERCE_FLOAT(*(_QWORD *)(v6 + 8 * v85 + 16))
                                 * (float)(v22.m128_f32[0] - v86.m128_f32[0]));
        v108 = (__m128)*(unsigned __int64 *)(v28 + 8 * v85 + 16);
        v109 = (__m128)*(unsigned __int64 *)(v6 + 8 * v85 + 16);
        v199 = *(_QWORD *)(v201 + 8 * v85 + 16);
        v105.m128_f32[0] = (float)(v105.m128_f32[0] * (float)(v22.m128_f32[0] - v87))
                         + (float)((float)((float)(v86.m128_f32[0] * *(float *)&v107)
                                         + (float)(*(float *)&v199 * (float)(v22.m128_f32[0] - v86.m128_f32[0])))
                                 * v87);
        v106.m128_f32[0] = (float)((float)((float)(v86.m128_f32[0] * _mm_shuffle_ps(v108, v108, 85).m128_f32[0])
                                         + (float)(_mm_shuffle_ps(v109, v109, 85).m128_f32[0]
                                                 * (float)(v22.m128_f32[0] - v86.m128_f32[0])))
                                 * (float)(v22.m128_f32[0] - v87))
                         + (float)((float)((float)(v86.m128_f32[0]
                                                 * _mm_shuffle_ps((__m128)v107, (__m128)v107, 85).m128_f32[0])
                                         + (float)(_mm_shuffle_ps((__m128)v199, (__m128)v199, 85).m128_f32[0]
                                                 * (float)(v22.m128_f32[0] - v86.m128_f32[0])))
                                 * v87);
        v108.m128_u64[0] = _mm_unpacklo_ps(v105, v106).m128_u64[0];
        *(_QWORD *)&v82[2 * v85 + 4] = v108.m128_u64[0];
        *(_QWORD *)&v83[2 * v85 + 4] = v108.m128_u64[0];
      }
      v110 = *((_DWORD *)this + 6);
      v116 = (__m128)v33.m128_u32[3];
      v111 = _mm_unpacklo_ps(v33, (__m128)v33.m128_u32[3]).m128_u64[0];
      v112 = (_DWORD *)((char *)v32 + v228);
      *(_QWORD *)(v112 - 3) = v111;
      *(v112 - 1) = 1065353216;
      *v112 = *(_DWORD *)(v6 + 12);
      v113 = v229;
      *(_QWORD *)((char *)v53 + v229 - 12) = v111;
      v114 = (char *)v53 + v113;
      *(_DWORD *)((char *)v53 + v113 - 4) = 0;
      *(_DWORD *)((char *)v53 + v113) = 1065353216;
      v115 = 0LL;
      v33.m128_f32[0] = (float)(v33.m128_f32[0] - *(float *)v6) / (float)(*v27 - *(float *)v6);
      v116.m128_f32[0] = (float)(v33.m128_f32[3] - *(float *)(v6 + 4)) / (float)(v27[1] - *(float *)(v6 + 4));
      if ( v110 >= 2 )
      {
        v199 = v28 + 16;
        v117 = v22.m128_f32[0] - v33.m128_f32[0];
        v118 = (unsigned __int64 *)(v28 + 16);
        v238.m128_u64[0] = v201 - v28;
        v119 = v201 - v28;
        v120 = v22.m128_f32[0] - v116.m128_f32[0];
        v121 = v6 - v28;
        v208 = (char *)v27 - v28;
        v122 = (char *)v27 - v28;
        v207 = (char *)v112 - v28 - 12;
        v123 = v207;
        v206 = &v114[-v28 - 12];
        v124 = v206;
        v203 = ((v110 - 2) >> 1) + 1;
        v115 = (unsigned int)(2 * v203);
        do
        {
          v125 = v33;
          v126 = (__m128)*(unsigned __int64 *)((char *)v118 + v119);
          v127 = (float)(v33.m128_f32[0] * COERCE_FLOAT(*(unsigned __int64 *)((char *)v118 + (_QWORD)v122)))
               + (float)(v117 * v126.m128_f32[0]);
          v128 = v117 * _mm_shuffle_ps(v126, v126, 85).m128_f32[0];
          v129 = v116;
          v125.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] * COERCE_FLOAT(*v118))
                                           + (float)(v117 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v118 + v121))))
                                   * v120)
                           + (float)(v127 * v116.m128_f32[0]);
          v130 = v125;
          v131 = v33;
          v129.m128_f32[0] = (float)(v116.m128_f32[0]
                                   * (float)((float)(v33.m128_f32[0]
                                                   * _mm_shuffle_ps(
                                                       (__m128)*(unsigned __int64 *)((char *)v118 + (_QWORD)v122),
                                                       (__m128)*(unsigned __int64 *)((char *)v118 + (_QWORD)v122),
                                                       85).m128_f32[0])
                                           + v128))
                           + (float)((float)((float)(v33.m128_f32[0]
                                                   * _mm_shuffle_ps((__m128)*v118, (__m128)*v118, 85).m128_f32[0])
                                           + (float)(v117
                                                   * _mm_shuffle_ps(
                                                       (__m128)*(unsigned __int64 *)((char *)v118 + v121),
                                                       (__m128)*(unsigned __int64 *)((char *)v118 + v121),
                                                       85).m128_f32[0]))
                                   * v120);
          v130.m128_u64[0] = _mm_unpacklo_ps(v130, v129).m128_u64[0];
          *(_QWORD *)&v123[(_QWORD)v118] = v130.m128_u64[0];
          *(_QWORD *)&v124[(_QWORD)v118] = v130.m128_u64[0];
          v132 = (__m128)*(unsigned __int64 *)((char *)v118 + v121 + 8);
          v133 = *(unsigned __int64 *)((char *)v118 + (_QWORD)v122 + 8);
          v131.m128_f32[0] = (float)(v33.m128_f32[0] * COERCE_FLOAT(v118[1])) + (float)(v117 * v132.m128_f32[0]);
          v134 = (float)(v33.m128_f32[0] * _mm_shuffle_ps((__m128)v118[1], (__m128)v118[1], 85).m128_f32[0])
               + (float)(v117 * _mm_shuffle_ps(v132, v132, 85).m128_f32[0]);
          v199 = *(unsigned __int64 *)((char *)v118 + v119 + 8);
          v135 = v116;
          v131.m128_f32[0] = (float)(v131.m128_f32[0] * v120)
                           + (float)((float)((float)(v33.m128_f32[0] * *(float *)&v133) + (float)(v117 * *(float *)&v199))
                                   * v116.m128_f32[0]);
          v135.m128_f32[0] = (float)(v116.m128_f32[0]
                                   * (float)((float)(v33.m128_f32[0]
                                                   * _mm_shuffle_ps((__m128)v133, (__m128)v133, 85).m128_f32[0])
                                           + (float)(v117 * _mm_shuffle_ps((__m128)v199, (__m128)v199, 85).m128_f32[0])))
                           + (float)(v134 * v120);
          v130.m128_u64[0] = _mm_unpacklo_ps(v131, v135).m128_u64[0];
          *(_QWORD *)&v123[(_QWORD)v118 + 8] = v130.m128_u64[0];
          *(_QWORD *)&v124[(_QWORD)v118 + 8] = v130.m128_u64[0];
          v118 += 2;
          --v203;
        }
        while ( v203 );
        v3 = v211;
        v4 = v212;
        v53 = (_DWORD *)v209;
        v32 = (_DWORD *)v202;
        v30 = v204;
        v104 = v201;
      }
      if ( (unsigned int)v115 < v110 )
      {
        v136 = (__m128)*(unsigned __int64 *)(v6 + 8 * v115 + 16);
        v137 = (__m128)*(unsigned __int64 *)(v28 + 8 * v115 + 16);
        v138 = v33;
        v139 = (__m128)*(unsigned __int64 *)&v27[2 * v115 + 4];
        v199 = *(_QWORD *)(v104 + 8 * v115 + 16);
        v138.m128_f32[0] = (float)((float)((float)(v33.m128_f32[0] * v137.m128_f32[0])
                                         + (float)((float)(v22.m128_f32[0] - v33.m128_f32[0]) * v136.m128_f32[0]))
                                 * (float)(v22.m128_f32[0] - v116.m128_f32[0]))
                         + (float)((float)((float)(v33.m128_f32[0] * v139.m128_f32[0])
                                         + (float)((float)(v22.m128_f32[0] - v33.m128_f32[0]) * *(float *)&v199))
                                 * v116.m128_f32[0]);
        v116.m128_f32[0] = (float)(v116.m128_f32[0]
                                 * (float)((float)(v33.m128_f32[0] * _mm_shuffle_ps(v139, v139, 85).m128_f32[0])
                                         + (float)((float)(v22.m128_f32[0] - v33.m128_f32[0])
                                                 * _mm_shuffle_ps((__m128)v199, (__m128)v199, 85).m128_f32[0])))
                         + (float)((float)((float)(v33.m128_f32[0] * _mm_shuffle_ps(v137, v137, 85).m128_f32[0])
                                         + (float)((float)(v22.m128_f32[0] - v33.m128_f32[0])
                                                 * _mm_shuffle_ps(v136, v136, 85).m128_f32[0]))
                                 * (float)(v22.m128_f32[0] - v116.m128_f32[0]));
        v140 = _mm_unpacklo_ps(v138, v116).m128_u64[0];
        *(_QWORD *)&v112[2 * v115 + 1] = v140;
        *(_QWORD *)&v114[8 * v115 + 4] = v140;
      }
      v141 = *((_DWORD *)this + 6);
      v142 = _mm_unpacklo_ps(v34, (__m128)v33.m128_u32[3]).m128_u64[0];
      v143 = (_DWORD *)((char *)v32 + *(_QWORD *)v219);
      *(_QWORD *)(v143 - 3) = v142;
      *(v143 - 1) = 1065353216;
      *v143 = *(_DWORD *)(v6 + 12);
      v144 = *(_QWORD *)v222;
      *(_QWORD *)((char *)v53 + *(_QWORD *)v222 - 12) = v142;
      v145 = (char *)v53 + v144;
      *(_DWORD *)((char *)v53 + v144 - 4) = 0;
      *(_DWORD *)((char *)v53 + v144) = 1065353216;
      v146 = 0LL;
      v147 = (float)(v34.m128_f32[0] - *(float *)v6) / (float)(*v27 - *(float *)v6);
      v148 = (float)(v33.m128_f32[3] - *(float *)(v6 + 4)) / (float)(v27[1] - *(float *)(v6 + 4));
      if ( v141 >= 2 )
      {
        v199 = v28 + 16;
        v149 = v22.m128_f32[0] - v147;
        v150 = (unsigned __int64 *)(v28 + 16);
        v238.m128_u64[0] = v201 - v28;
        v152 = v22;
        v151 = v201 - v28;
        v152.m128_f32[0] = v22.m128_f32[0] - v148;
        v153 = v6 - v28;
        v208 = (char *)v27 - v28;
        v154 = (char *)v27 - v28;
        v207 = (char *)v143 - v28 - 12;
        v155 = v207;
        v206 = &v145[-v28 - 12];
        v156 = v206;
        v203 = ((v141 - 2) >> 1) + 1;
        v146 = (unsigned int)(2 * v203);
        do
        {
          v157 = v152;
          v158 = v152;
          v157.m128_f32[0] = (float)(v152.m128_f32[0]
                                   * (float)((float)(COERCE_FLOAT(*v150) * v147)
                                           + (float)(v149 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v150 + v153)))))
                           + (float)((float)((float)(COERCE_FLOAT(*(_QWORD *)&v154[(_QWORD)v150]) * v147)
                                           + (float)(v149 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v150 + v151))))
                                   * v148);
          v158.m128_f32[0] = (float)(v152.m128_f32[0]
                                   * (float)((float)(_mm_shuffle_ps((__m128)*v150, (__m128)*v150, 85).m128_f32[0] * v147)
                                           + (float)(v149
                                                   * _mm_shuffle_ps(
                                                       (__m128)*(unsigned __int64 *)((char *)v150 + v153),
                                                       (__m128)*(unsigned __int64 *)((char *)v150 + v153),
                                                       85).m128_f32[0])))
                           + (float)((float)((float)(_mm_shuffle_ps(
                                                       (__m128)*(unsigned __int64 *)&v154[(_QWORD)v150],
                                                       (__m128)*(unsigned __int64 *)&v154[(_QWORD)v150],
                                                       85).m128_f32[0]
                                                   * v147)
                                           + (float)(v149
                                                   * _mm_shuffle_ps(
                                                       (__m128)*(unsigned __int64 *)((char *)v150 + v151),
                                                       (__m128)*(unsigned __int64 *)((char *)v150 + v151),
                                                       85).m128_f32[0]))
                                   * v148);
          v157.m128_u64[0] = _mm_unpacklo_ps(v157, v158).m128_u64[0];
          *(_QWORD *)&v155[(_QWORD)v150] = v157.m128_u64[0];
          *(_QWORD *)&v156[(_QWORD)v150] = v157.m128_u64[0];
          v159 = *(_QWORD *)&v154[(_QWORD)v150 + 8];
          v160 = (float)(COERCE_FLOAT(v150[1]) * v147)
               + (float)(v149 * COERCE_FLOAT(*(unsigned __int64 *)((char *)v150 + v153 + 8)));
          v161 = (float)(_mm_shuffle_ps((__m128)v150[1], (__m128)v150[1], 85).m128_f32[0] * v147)
               + (float)(v149
                       * _mm_shuffle_ps(
                           (__m128)*(unsigned __int64 *)((char *)v150 + v153 + 8),
                           (__m128)*(unsigned __int64 *)((char *)v150 + v153 + 8),
                           85).m128_f32[0]);
          v199 = *(unsigned __int64 *)((char *)v150 + v151 + 8);
          v162 = v152;
          v163 = v152;
          v162.m128_f32[0] = (float)(v152.m128_f32[0] * v160)
                           + (float)((float)((float)(*(float *)&v159 * v147) + (float)(v149 * *(float *)&v199)) * v148);
          v163.m128_f32[0] = (float)(v152.m128_f32[0] * v161)
                           + (float)((float)((float)(_mm_shuffle_ps((__m128)v159, (__m128)v159, 85).m128_f32[0] * v147)
                                           + (float)(v149 * _mm_shuffle_ps((__m128)v199, (__m128)v199, 85).m128_f32[0]))
                                   * v148);
          v162.m128_u64[0] = _mm_unpacklo_ps(v162, v163).m128_u64[0];
          *(_QWORD *)&v155[(_QWORD)v150 + 8] = v162.m128_u64[0];
          *(_QWORD *)&v156[(_QWORD)v150 + 8] = v162.m128_u64[0];
          v150 += 2;
          --v203;
        }
        while ( v203 );
        v3 = v211;
        v4 = v212;
        v53 = (_DWORD *)v209;
        v32 = (_DWORD *)v202;
        v30 = v204;
        v104 = v201;
      }
      if ( (unsigned int)v146 < v141 )
      {
        v164 = *(_QWORD *)&v27[2 * v146 + 4];
        v165 = (__m128)*(unsigned __int64 *)(v28 + 8 * v146 + 16);
        v166 = (float)(COERCE_FLOAT(*(_QWORD *)(v28 + 8 * v146 + 16)) * v147)
             + (float)((float)(v22.m128_f32[0] - v147) * COERCE_FLOAT(*(_QWORD *)(v6 + 8 * v146 + 16)));
        v167 = (__m128)*(unsigned __int64 *)(v6 + 8 * v146 + 16);
        v165.m128_f32[0] = (float)(_mm_shuffle_ps(v165, v165, 85).m128_f32[0] * v147)
                         + (float)((float)(v22.m128_f32[0] - v147) * _mm_shuffle_ps(v167, v167, 85).m128_f32[0]);
        v168 = v22;
        v168.m128_f32[0] = v22.m128_f32[0] - v148;
        v199 = *(_QWORD *)(v104 + 8 * v146 + 16);
        v169 = v168;
        v169.m128_f32[0] = (float)((float)(v22.m128_f32[0] - v148) * v166)
                         + (float)((float)((float)(*(float *)&v164 * v147)
                                         + (float)((float)(v22.m128_f32[0] - v147) * *(float *)&v199))
                                 * v148);
        v168.m128_f32[0] = (float)((float)(v22.m128_f32[0] - v148) * v165.m128_f32[0])
                         + (float)((float)((float)(_mm_shuffle_ps((__m128)v164, (__m128)v164, 85).m128_f32[0] * v147)
                                         + (float)((float)(v22.m128_f32[0] - v147)
                                                 * _mm_shuffle_ps((__m128)v199, (__m128)v199, 85).m128_f32[0]))
                                 * v148);
        v169.m128_u64[0] = _mm_unpacklo_ps(v169, v168).m128_u64[0];
        *(_QWORD *)&v143[2 * v146 + 1] = v169.m128_u64[0];
        *(_QWORD *)&v145[8 * v146 + 4] = v169.m128_u64[0];
      }
      v30 += 4;
      v26 = v216 + 16;
      v32 = (_DWORD *)((char *)v32 + v210[0]);
      v170 = v217-- == 1;
      v25 = v201;
      v21 = v205;
      v216 += 16LL;
      v204 = v30;
      v209 = (__int64)v53 + v239;
      v202 = (__int64)v32;
      if ( v170 )
      {
        v7 = v214;
        break;
      }
    }
  }
  v171 = *(float *)(v6 + 4);
  v172 = 3 * v7;
  v173 = *(float *)(v172 + v6);
  v174 = *(float *)(v172 + v6 + 4);
  if ( v173 <= *(float *)v6 || v174 <= v171 )
    v175 = 0.0;
  else
    v175 = (float)(v173 - *(float *)v6) * (float)(v174 - v171);
  v176 = *((_DWORD *)v3 + 6);
  Src = *(void **)v3;
  v178 = *((_DWORD *)this + 6);
  v223 = v7;
  v220 = v7;
  v240 = v176;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v175 - v21;
  v179 = *(_QWORD *)this;
  v210[0] = _mm_unpacklo_ps(v22, v22).m128_u64[0];
  v180 = *(_QWORD *)(v179 + 56);
  *(_QWORD *)v222 = v218;
  v181 = v215;
  v182 = *(_BYTE *)(v180 + 97);
  *(_QWORD *)v219 = v213;
  v224 = v215;
  v221 = v215;
  v239 = __PAIR64__(v178, v215);
  if ( (v215 & 1) != 0 )
  {
    v181 = v215 - (v215 & 1) + 2;
    LODWORD(v239) = v181;
  }
  if ( v181 > 0x10000 || v176 > 0x1FFFE )
  {
    LODWORD(v239) = 0;
    v240 = 0;
  }
  v184 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v239);
  if ( v184 )
  {
    LOBYTE(v198) = v182;
    LOBYTE(v183) = 1;
    CDrawListPrimitive::Initialize(v184, v183, (int)v219, (int)v222, v178, Src, v176, (__int64)v210, v198);
    v185 = *(_QWORD *)this;
    v186 = (void (__fastcall ***)(_QWORD, __int64))v184;
    v187 = (__int64 *)(*(_QWORD *)this + 56LL);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)(*(_QWORD *)this + 72LL);
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)(v185 + 88);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)(v185 + 104);
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)(v185 + 120);
    *((_DWORD *)this + 26) = *(_DWORD *)(v185 + 136);
    *(_OWORD *)(v185 + 72) = CMILMatrix::Identity;
    *(_OWORD *)(v185 + 88) = xmmword_18023DAC0;
    *(_OWORD *)(v185 + 104) = xmmword_18023DAD0;
    *(_OWORD *)(v185 + 120) = xmmword_18023DAE0;
    *(_DWORD *)(v185 + 136) = dword_18023DAF0;
    v188 = (void (__fastcall ***)(_QWORD, __int64))*v187;
    *v187 = 0LL;
    if ( v187 != v210 )
    {
      v186 = 0LL;
      *v187 = v184;
    }
    v189 = (__int64 *)((char *)this + 32);
    if ( v189 == v210 )
    {
      if ( v188 )
        (**v188)(v188, 1LL);
    }
    else
    {
      v190 = (void (__fastcall ***)(_QWORD, __int64))*v189;
      if ( v188 != (void (__fastcall ***)(_QWORD, __int64))*v189 )
      {
        if ( v190 )
          (**v190)(v190, 1LL);
        *v189 = (__int64)v188;
      }
    }
    if ( v186 )
      (**v186)(v186, 1LL);
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19Du);
    return 2147942414LL;
  }
}
