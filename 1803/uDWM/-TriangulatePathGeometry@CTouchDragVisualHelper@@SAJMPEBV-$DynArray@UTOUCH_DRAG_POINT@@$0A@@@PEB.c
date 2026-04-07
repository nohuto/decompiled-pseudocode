/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18008F204
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800908DC (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x18004B36C (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18008E9A8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18008EA70 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18008EB04 (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        double a1,
        __int64 a2,
        int *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm1
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 *v10; // r10
  int v11; // esi
  __int64 v12; // r14
  unsigned int v13; // edi
  int v14; // eax
  float v15; // xmm13_4
  int v16; // eax
  int v17; // r13d
  float v18; // xmm13_4
  float v19; // xmm14_4
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  float v25; // xmm5_4
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  double v30; // xmm0_8
  int v31; // eax
  unsigned int v32; // r14d
  __int64 v33; // r8
  __int64 v34; // rdx
  float v35; // eax
  __m128 v36; // xmm7
  float v37; // xmm9_4
  float v38; // eax
  float v39; // xmm5_4
  __m128 v40; // xmm4
  float v41; // xmm6_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float *v47; // rax
  __int64 v48; // rcx
  float v49; // xmm1_4
  unsigned int v50; // r14d
  int v51; // eax
  __int64 v52; // r13
  __int64 v53; // rsi
  float v54; // eax
  __m128 v55; // xmm13
  __m128 v56; // xmm14
  float v57; // xmm11_4
  float v58; // xmm12_4
  float v59; // xmm7_4
  float v60; // eax
  float v61; // xmm8_4
  float v62; // xmm9_4
  float v63; // xmm15_4
  float v64; // xmm10_4
  float v65; // xmm6_4
  char v66; // r8
  int v67; // eax
  float v68; // xmm7_4
  __int64 v69; // rdx
  float v70; // eax
  float v71; // xmm0_4
  __m128 v72; // xmm1
  float v73; // xmm6_4
  __m128 v74; // xmm0
  _QWORD *v75; // rsi
  unsigned int v76; // edx
  __int64 v77; // r10
  __int64 v78; // rcx
  unsigned int v79; // eax
  int v80; // eax
  int v81; // ecx
  __int64 v82; // rsi
  __int64 v83; // rcx
  unsigned int v84; // r8d
  int *v85; // r9
  unsigned int v86; // eax
  int v87; // eax
  int v88; // ecx
  int v89; // ecx
  __int64 v90; // r14
  __int64 v91; // rcx
  unsigned int v92; // r8d
  int *v93; // r9
  unsigned int v94; // eax
  int v95; // eax
  int v96; // r9d
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  char v99; // [rsp+38h] [rbp-D0h]
  char v100; // [rsp+39h] [rbp-CFh]
  int v101; // [rsp+3Ch] [rbp-CCh]
  int v102; // [rsp+40h] [rbp-C8h]
  int v103; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v104; // [rsp+48h] [rbp-C0h] BYREF
  float v105; // [rsp+4Ch] [rbp-BCh]
  __int64 v106; // [rsp+50h] [rbp-B8h]
  _QWORD *v107; // [rsp+58h] [rbp-B0h]
  unsigned int v108; // [rsp+60h] [rbp-A8h]
  float v109; // [rsp+64h] [rbp-A4h]
  unsigned int v110; // [rsp+68h] [rbp-A0h]
  unsigned int v111; // [rsp+6Ch] [rbp-9Ch]
  int v112; // [rsp+70h] [rbp-98h]
  unsigned int v113; // [rsp+74h] [rbp-94h]
  unsigned int v114; // [rsp+78h] [rbp-90h]
  unsigned int v115; // [rsp+7Ch] [rbp-8Ch]
  __int64 v116; // [rsp+80h] [rbp-88h]
  float v117; // [rsp+88h] [rbp-80h]
  __int64 v118; // [rsp+90h] [rbp-78h]
  int *v119; // [rsp+98h] [rbp-70h]
  __int64 v120; // [rsp+A0h] [rbp-68h]
  __int128 v121; // [rsp+A8h] [rbp-60h] BYREF
  int v122; // [rsp+B8h] [rbp-50h]
  int v123; // [rsp+BCh] [rbp-4Ch]
  int v124; // [rsp+C0h] [rbp-48h]
  __int64 v125; // [rsp+C8h] [rbp-40h]
  __int64 *v126; // [rsp+D8h] [rbp-30h]
  float v127; // [rsp+E8h] [rbp-20h]
  float v128; // [rsp+F8h] [rbp-10h]
  float v129; // [rsp+108h] [rbp+0h]
  float v130; // [rsp+118h] [rbp+10h]
  float v131; // [rsp+128h] [rbp+20h]
  unsigned __int64 v132; // [rsp+130h] [rbp+28h] BYREF
  float v133; // [rsp+138h] [rbp+30h]
  __int64 v134; // [rsp+140h] [rbp+38h]
  float v135; // [rsp+148h] [rbp+40h]
  __int64 v136; // [rsp+150h] [rbp+48h]
  __int64 v137; // [rsp+160h] [rbp+58h]
  float v138; // [rsp+168h] [rbp+60h]
  __int64 v139; // [rsp+170h] [rbp+68h]
  float v140; // [rsp+178h] [rbp+70h]
  unsigned __int64 v141; // [rsp+180h] [rbp+78h] BYREF
  float v142; // [rsp+188h] [rbp+80h]
  double v143[2]; // [rsp+190h] [rbp+88h] BYREF
  int v144; // [rsp+1A0h] [rbp+98h] BYREF
  int v145; // [rsp+1A4h] [rbp+9Ch]
  int v146; // [rsp+1A8h] [rbp+A0h]
  int v147; // [rsp+1ACh] [rbp+A4h]
  int v148; // [rsp+1B0h] [rbp+A8h]
  int v149; // [rsp+1B4h] [rbp+ACh]
  unsigned __int64 v150; // [rsp+1B8h] [rbp+B0h] BYREF
  float v151; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v152; // [rsp+1C4h] [rbp+BCh]
  float v153; // [rsp+1CCh] [rbp+C4h]
  _QWORD v154[4]; // [rsp+1D0h] [rbp+C8h] BYREF

  v7 = *(__m128 *)&a1;
  v8 = *(_DWORD *)(a2 + 24);
  v9 = 0;
  v122 = 0;
  v10 = (__int64 *)a2;
  v123 = 0;
  v11 = 0;
  v12 = a7;
  v13 = 0;
  v120 = a5;
  v14 = a3[3] - a3[1];
  v115 = LODWORD(a1);
  v126 = (__int64 *)a2;
  v107 = a4;
  v15 = (float)v14;
  v119 = a3;
  v106 = a7;
  v114 = v8;
  v108 = v8 - 1;
  v16 = -1;
  v124 = 0;
  v101 = -1;
  v17 = -1;
  v102 = -1;
  v18 = v15 / (float)(int)(v8 - 1);
  v105 = v18;
  v121 = 0LL;
  if ( !v8 )
    goto LABEL_89;
  v19 = FLOAT_1_1920929eN7;
  v20 = 0LL;
  v118 = 0LL;
  while ( 1 )
  {
    v21 = *v10;
    v22 = *((unsigned int *)a4 + 6);
    v23 = v7;
    v24 = v7;
    v112 = v16;
    v25 = v7.m128_f32[0] * *(float *)(v20 + v21 + 24);
    v23.m128_f32[0] = v7.m128_f32[0] * *(float *)(v20 + v21 + 16);
    v24.m128_f32[0] = v7.m128_f32[0] * *(float *)(v20 + v21 + 20);
    v26 = v23;
    v26.m128_f32[0] = v23.m128_f32[0] + *(float *)(v20 + v21 + 4);
    v27 = v24;
    v27.m128_f32[0] = v24.m128_f32[0] + *(float *)(v20 + v21 + 8);
    v127 = v25 + *(float *)(v20 + v21 + 12);
    v151 = v127;
    v150 = _mm_unpacklo_ps(v26, v27).m128_u64[0];
    v28 = (__m128)*(unsigned int *)(v20 + v21 + 4);
    v29 = (__m128)*(unsigned int *)(v20 + v21 + 8);
    v28.m128_f32[0] = v28.m128_f32[0] - v23.m128_f32[0];
    v29.m128_f32[0] = v29.m128_f32[0] - v24.m128_f32[0];
    v128 = *(float *)(v20 + v21 + 12) - v25;
    v152 = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    v30 = (double)*a3;
    v153 = v128;
    *(double *)v154 = v30;
    v29.m128_f32[0] = (float)((float)(int)v13 * v18) + (float)a3[1];
    *(double *)&v154[2] = (double)a3[2];
    *(double *)&v154[1] = v29.m128_f32[0];
    *(double *)&v154[3] = v29.m128_f32[0];
    v31 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a4, &v150, 2u);
    v9 = v31;
    if ( v31 < 0 )
    {
      v98 = 237;
      goto LABEL_87;
    }
    v31 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v120, v154, 2u);
    v9 = v31;
    if ( v31 < 0 )
    {
      v98 = 238;
      goto LABEL_87;
    }
    v103 = 255;
    v31 = DynArray<unsigned long,0>::AddAndSet(v12, 2u, &v103);
    v9 = v31;
    if ( v31 < 0 )
    {
      v98 = 239;
      goto LABEL_87;
    }
    if ( v13 )
      break;
LABEL_76:
    ++v13;
    v20 = v118 + 28;
    v118 += 28LL;
    if ( v13 >= v114 )
      goto LABEL_89;
    v7 = (__m128)v115;
    v16 = v102;
    a3 = v119;
    a4 = v107;
    v10 = v126;
  }
  v100 = 0;
  v32 = v13 - 1;
  v33 = *v107;
  if ( v17 >= 0 )
    v32 = v17;
  v136 = *(_QWORD *)(v33 + 12 * v22);
  v125 = *(_QWORD *)(v33 + 12LL * (unsigned int)(v22 + 1));
  v34 = (unsigned int)v22 + 2 * (v32 - v13);
  v35 = *(float *)(v33 + 12 * v34 + 8);
  v137 = *(_QWORD *)(v33 + 12 * v34);
  v36 = (__m128)(unsigned int)v137;
  v138 = v35;
  v37 = v35;
  v38 = *(float *)(v33 + 12LL * (unsigned int)(v34 + 1) + 8);
  v116 = *(_QWORD *)(v33 + 12LL * (unsigned int)(v34 + 1));
  v40 = (__m128)HIDWORD(v116);
  v39 = *(float *)&v116 - *(float *)&v137;
  v40.m128_f32[0] = *((float *)&v116 + 1) - *((float *)&v137 + 1);
  v117 = v38;
  v41 = (float)((float)(*((float *)&v125 + 1) - *((float *)&v136 + 1)) * (float)(*(float *)&v116 - *(float *)&v137))
      - (float)((float)(*(float *)&v125 - *(float *)&v136) * (float)(*((float *)&v116 + 1) - *((float *)&v137 + 1)));
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm) > v19 )
  {
    v42 = (float)((float)((float)(*((float *)&v137 + 1) - *((float *)&v136 + 1))
                        * (float)(*(float *)&v125 - *(float *)&v136))
                - (float)((float)(*(float *)&v137 - *(float *)&v136)
                        * (float)(*((float *)&v125 + 1) - *((float *)&v136 + 1))))
        / v41;
    v43 = (float)((float)((float)(*((float *)&v137 + 1) - *((float *)&v136 + 1)) * v39)
                - (float)((float)(*(float *)&v137 - *(float *)&v136) * v40.m128_f32[0]))
        / v41;
    if ( v42 > v19 && v42 < 0.99999988 && v43 > v19 && v43 < 0.99999988 )
    {
      v36.m128_f32[0] = *(float *)&v137 + (float)(v39 * v42);
      v40.m128_f32[0] = (float)(v40.m128_f32[0] * v42) + *((float *)&v137 + 1);
      v141 = _mm_unpacklo_ps(v36, v40).m128_u64[0];
      v129 = v37 + (float)((float)(v38 - v138) * v42);
      v142 = v129;
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v121, &v141, 1u);
      v17 = v32;
      v11 = v124;
      v100 = 1;
      v101 = v32;
      if ( v13 != v108 )
      {
LABEL_75:
        v12 = v106;
        goto LABEL_76;
      }
    }
  }
  if ( v17 < 0 )
  {
LABEL_57:
    if ( !v100 )
    {
      v88 = v102;
      if ( v102 > 0 )
        v88 = -1;
      v102 = v88;
      v89 = v112;
      if ( v112 <= 0 )
        v89 = v22 - 2;
      if ( v17 >= 0 )
      {
        v102 = v22;
        v17 = -1;
        v101 = -1;
      }
      v144 = v22;
      v146 = v89 + 1;
      v90 = 0LL;
      v147 = v89 + 1;
      v148 = v22 + 1;
      v145 = v89;
      v149 = v22;
      while ( 1 )
      {
        v91 = *(unsigned int *)(a6 + 24);
        v92 = v113;
        v93 = &v144 + v90;
        v94 = v91 + 1;
        if ( (int)v91 + 1 >= (unsigned int)v91 )
          v92 = v91 + 1;
        v9 = v94 < (unsigned int)v91 ? 0x80070216 : 0;
        v113 = v92;
        if ( v94 >= (unsigned int)v91 )
        {
          if ( v92 > *(_DWORD *)(a6 + 20) )
          {
            v95 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v93);
            v9 = v95;
            if ( v95 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v95, 0xC0u);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a6 + 4 * v91) = *v93;
            *(_DWORD *)(a6 + 24) = v92;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
        }
        if ( v9 < 0 )
          break;
        v90 = (unsigned int)(v90 + 1);
        if ( (unsigned int)v90 >= 6 )
          goto LABEL_75;
      }
      v98 = 381;
      goto LABEL_79;
    }
    goto LABEL_75;
  }
  v44 = 0.0;
  v132 = 0LL;
  v45 = 0.0;
  v46 = 0.0;
  v133 = 0.0;
  v99 = 0;
  if ( v11 )
  {
    v44 = v133;
    v47 = (float *)(v121 + 8);
    v48 = (unsigned int)v11;
    do
    {
      v46 = v46 + *(v47 - 2);
      v45 = v45 + *(v47 - 1);
      v44 = v44 + *v47;
      v47 += 3;
      v132 = __PAIR64__(LODWORD(v45), LODWORD(v46));
      v133 = v44;
      --v48;
    }
    while ( v48 );
  }
  v124 = 0;
  v49 = 1.0 / (float)v11;
  *(float *)&v132 = v46 * v49;
  *((float *)&v132 + 1) = v45 * v49;
  v133 = v49 * v44;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v121, 0xCu);
  v50 = v17;
  if ( v17 >= v13 )
  {
LABEL_56:
    v11 = v124;
    goto LABEL_57;
  }
  v51 = 2 * v13;
  while ( 1 )
  {
    v52 = (unsigned int)v22 + 2 * v50 - v51;
    v53 = *v107;
    v54 = *(float *)(*v107 + 12 * v52 + 8);
    v134 = *(_QWORD *)(*v107 + 12 * v52);
    v55 = (__m128)(unsigned int)v134;
    v56 = (__m128)HIDWORD(v134);
    v57 = *(float *)&v132 - *(float *)&v134;
    v135 = v54;
    v58 = *((float *)&v132 + 1) - *((float *)&v134 + 1);
    v59 = v133 - v54;
    v60 = *(float *)(v53 + 12LL * (unsigned int)(v52 + 1) + 8);
    v139 = *(_QWORD *)(v53 + 12LL * (unsigned int)(v52 + 1));
    v61 = *(float *)&v132 - *(float *)&v139;
    v109 = *(float *)&v139;
    v62 = *((float *)&v132 + 1) - *((float *)&v139 + 1);
    v104 = HIDWORD(v139);
    v140 = v60;
    v63 = v60;
    v64 = v133 - v60;
    *(float *)&v103 = sqrtf_0(
                        (float)((float)((float)(*(float *)&v139 - *(float *)&v134)
                                      * (float)(*(float *)&v139 - *(float *)&v134))
                              + (float)((float)(*((float *)&v139 + 1) - *((float *)&v134 + 1))
                                      * (float)(*((float *)&v139 + 1) - *((float *)&v134 + 1))))
                      + (float)((float)(v60 - v135) * (float)(v60 - v135)));
    v65 = *(float *)&v103 / sqrtf_0((float)((float)(v57 * v57) + (float)(v58 * v58)) + (float)(v59 * v59));
    if ( v50 == v101 )
    {
      if ( v65 <= 2.0 )
      {
        v99 = 1;
LABEL_27:
        v55.m128_f32[0] = v55.m128_f32[0] + (float)(v57 * v65);
        v67 = 2 * (v50 - v13) + 1;
        v56.m128_f32[0] = v56.m128_f32[0] + (float)(v58 * v65);
        v68 = (float)(v59 * v65) + v135;
        v69 = 3LL * (unsigned int)(v22 + v67);
        *(_QWORD *)(v53 + 12LL * (unsigned int)(v22 + v67)) = _mm_unpacklo_ps(v55, v56).m128_u64[0];
        v130 = v68;
        v70 = v68;
        goto LABEL_29;
      }
      v66 = 0;
      v99 = 0;
    }
    else
    {
      v66 = v99;
    }
    if ( v66 )
      goto LABEL_27;
    v71 = sqrtf_0((float)((float)(v61 * v61) + (float)(v62 * v62)) + (float)(v64 * v64));
    v72 = (__m128)v104;
    v73 = *(float *)&v103 / v71;
    v69 = 3LL * ((unsigned int)v22 + 2 * (v50 - v13));
    v74 = (__m128)LODWORD(v109);
    v74.m128_f32[0] = v109 + (float)(v61 * v73);
    v72.m128_f32[0] = *(float *)&v104 + (float)(v62 * v73);
    *(_QWORD *)(v53 + 12LL * ((unsigned int)v22 + 2 * (v50 - v13))) = _mm_unpacklo_ps(v74, v72).m128_u64[0];
    v131 = v63 + (float)(v64 * v73);
    v70 = v131;
    v65 = v73 / (float)(v73 - 1.0);
LABEL_29:
    *(float *)(v53 + 4 * v69 + 8) = v70;
    if ( v50 < v13 - 1 )
      break;
    v18 = v105;
LABEL_54:
    ++v50;
    v51 = 2 * v13;
    if ( v50 >= v13 )
    {
      v19 = FLOAT_1_1920929eN7;
      v17 = v101;
      goto LABEL_56;
    }
  }
  v75 = v107;
  v31 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)v107, &v132, 1u);
  v9 = v31;
  if ( v31 < 0 )
  {
    v98 = 337;
    goto LABEL_87;
  }
  v18 = v105;
  v143[0] = (float)((float)((float)(v119[2] - *v119) / v65) + (float)*v119);
  v143[1] = (float)((float)((float)((float)(int)v50 * v105) + (float)v119[1]) + (float)(v105 * 0.5));
  v31 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v120, v143, 1u);
  v9 = v31;
  if ( v31 < 0 )
  {
    v98 = 340;
LABEL_87:
    v96 = v31;
    goto LABEL_88;
  }
  v76 = v110;
  v77 = v106;
  v104 = 255;
  v78 = *(unsigned int *)(v106 + 24);
  v79 = v78 + 1;
  if ( (int)v78 + 1 >= (unsigned int)v78 )
    v76 = v78 + 1;
  v9 = v79 < (unsigned int)v78 ? 0x80070216 : 0;
  v110 = v76;
  if ( v79 >= (unsigned int)v78 )
  {
    if ( v76 > *(_DWORD *)(v106 + 20) )
    {
      v80 = DynArrayImpl<0>::AddMultipleAndSet(v106, 4, 1, &v104);
      v9 = v80;
      if ( v80 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v80, 0xC0u);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v106 + 4 * v78) = 255;
      *(_DWORD *)(v77 + 24) = v76;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
  }
  if ( v9 < 0 )
  {
    v98 = 341;
  }
  else
  {
    v81 = *((_DWORD *)v75 + 6) - 1;
    v145 = v52 + 2;
    v144 = v52;
    v147 = v52 + 1;
    v82 = 0LL;
    v146 = v81;
    v148 = v52 + 3;
    v149 = v81;
    while ( 1 )
    {
      v83 = *(unsigned int *)(a6 + 24);
      v84 = v111;
      v85 = &v144 + v82;
      v86 = v83 + 1;
      if ( (int)v83 + 1 >= (unsigned int)v83 )
        v84 = v83 + 1;
      v9 = v86 < (unsigned int)v83 ? 0x80070216 : 0;
      v111 = v84;
      if ( v86 >= (unsigned int)v83 )
      {
        if ( v84 > *(_DWORD *)(a6 + 20) )
        {
          v87 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v85);
          v9 = v87;
          if ( v87 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v87, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4 * v83) = *v85;
          *(_DWORD *)(a6 + 24) = v84;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
      }
      if ( v9 < 0 )
        break;
      v82 = (unsigned int)(v82 + 1);
      if ( (unsigned int)v82 >= 6 )
        goto LABEL_54;
    }
    v98 = 353;
  }
LABEL_79:
  v96 = v9;
LABEL_88:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v96, v98);
LABEL_89:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v121);
  return (unsigned int)v9;
}
