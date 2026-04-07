/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004A89C
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18008CA68 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x18004DE9C (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18006E3B8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006E47C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006E520 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        double a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm1
  __int64 v8; // r14
  int v9; // ebx
  __int64 *v10; // r10
  int v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r13d
  float v16; // xmm12_4
  __int64 v18; // rcx
  __int64 v19; // r12
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  float v22; // xmm5_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  unsigned __int64 v27; // xmm0_8
  __m128i v28; // xmm1
  double v29; // xmm0_8
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // r8
  __int64 v33; // rdx
  float v34; // eax
  float v35; // eax
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  unsigned int v45; // r14d
  int v46; // ecx
  int v47; // eax
  __int64 v48; // r14
  float *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rdx
  float v54; // eax
  char v55; // r8
  int v56; // ecx
  __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rsi
  float v60; // eax
  float v61; // xmm13_4
  float v62; // xmm14_4
  __m128 v63; // xmm8
  __m128 v64; // xmm9
  float v65; // xmm15_4
  float v66; // xmm7_4
  float v67; // eax
  __m128 v68; // xmm11
  __m128 v69; // xmm12
  float v70; // xmm10_4
  float v71; // xmm6_4
  int v72; // eax
  float v73; // xmm13_4
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm10_4
  _QWORD *v77; // rsi
  unsigned int v78; // edx
  __int64 v79; // r10
  __int64 v80; // rcx
  unsigned int v81; // eax
  int v82; // eax
  __int64 v83; // rcx
  unsigned int v84; // r8d
  int *v85; // r9
  unsigned int v86; // eax
  int v87; // eax
  __int64 v88; // rcx
  unsigned int v89; // r8d
  int *v90; // r9
  unsigned int v91; // eax
  int v92; // eax
  int v93; // r9d
  unsigned int v94; // [rsp+28h] [rbp-E0h]
  char v95; // [rsp+38h] [rbp-D0h]
  char v96; // [rsp+39h] [rbp-CFh]
  int v97; // [rsp+3Ch] [rbp-CCh] BYREF
  int v98; // [rsp+40h] [rbp-C8h]
  int v99; // [rsp+44h] [rbp-C4h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __int64 v101; // [rsp+50h] [rbp-B8h]
  _QWORD *v102; // [rsp+58h] [rbp-B0h]
  unsigned int v103; // [rsp+60h] [rbp-A8h]
  unsigned int v104; // [rsp+64h] [rbp-A4h]
  unsigned int v105; // [rsp+68h] [rbp-A0h]
  unsigned int v106; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v107; // [rsp+70h] [rbp-98h]
  unsigned int v108; // [rsp+74h] [rbp-94h]
  __int64 v109; // [rsp+78h] [rbp-90h]
  __int64 v110; // [rsp+80h] [rbp-88h]
  __int64 v111; // [rsp+88h] [rbp-80h]
  __int64 v112; // [rsp+90h] [rbp-78h]
  _DWORD *v113; // [rsp+98h] [rbp-70h]
  __int128 v114; // [rsp+A0h] [rbp-68h] BYREF
  int v115; // [rsp+B0h] [rbp-58h]
  int v116; // [rsp+B4h] [rbp-54h]
  int v117; // [rsp+B8h] [rbp-50h]
  __int64 v118; // [rsp+C0h] [rbp-48h]
  __int64 *v119; // [rsp+D0h] [rbp-38h]
  float v120; // [rsp+E0h] [rbp-28h]
  float v121; // [rsp+F0h] [rbp-18h]
  float v122; // [rsp+100h] [rbp-8h]
  float v123; // [rsp+110h] [rbp+8h]
  float v124; // [rsp+120h] [rbp+18h]
  float v125; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v126; // [rsp+12Ch] [rbp+24h]
  __int64 v127; // [rsp+138h] [rbp+30h]
  float v128; // [rsp+140h] [rbp+38h]
  __int64 v129; // [rsp+148h] [rbp+40h]
  __int64 v130; // [rsp+158h] [rbp+50h]
  float v131; // [rsp+160h] [rbp+58h]
  __int64 v132; // [rsp+168h] [rbp+60h]
  float v133; // [rsp+170h] [rbp+68h]
  unsigned __int64 v134; // [rsp+178h] [rbp+70h] BYREF
  float v135; // [rsp+180h] [rbp+78h]
  double v136[2]; // [rsp+188h] [rbp+80h] BYREF
  int v137; // [rsp+198h] [rbp+90h] BYREF
  int v138; // [rsp+19Ch] [rbp+94h]
  int v139; // [rsp+1A0h] [rbp+98h]
  int v140; // [rsp+1A4h] [rbp+9Ch]
  int v141; // [rsp+1A8h] [rbp+A0h]
  int v142; // [rsp+1ACh] [rbp+A4h]
  unsigned __int64 v143; // [rsp+1B0h] [rbp+A8h] BYREF
  float v144; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v145; // [rsp+1BCh] [rbp+B4h]
  float v146; // [rsp+1C4h] [rbp+BCh]
  _QWORD v147[4]; // [rsp+1C8h] [rbp+C0h] BYREF

  v7 = *(__m128 *)&a1;
  v8 = a7;
  v9 = 0;
  v115 = 0;
  v10 = (__int64 *)a2;
  v116 = 0;
  v11 = 0;
  v12 = 0;
  v111 = a5;
  v13 = a3[3] - a3[1];
  v108 = LODWORD(a1);
  v119 = (__int64 *)a2;
  v14 = *(_DWORD *)(a2 + 24);
  v102 = a4;
  v113 = a3;
  v101 = a7;
  v107 = v14;
  v103 = v14 - 1;
  v117 = 0;
  v98 = -1;
  v15 = -1;
  v99 = -1;
  v16 = (float)v13 / (float)(int)(v14 - 1);
  *(float *)&v100 = v16;
  v114 = 0LL;
  if ( !v14 )
    goto LABEL_2;
  v73 = FLOAT_1_1920929eN7;
  v51 = 0LL;
  v112 = 0LL;
  while ( 1 )
  {
    v18 = *v10;
    v19 = *((unsigned int *)a4 + 6);
    v20 = v7;
    v21 = v7;
    v22 = v7.m128_f32[0] * *(float *)(v51 + *v10 + 24);
    v20.m128_f32[0] = v7.m128_f32[0] * *(float *)(v51 + *v10 + 16);
    v21.m128_f32[0] = v7.m128_f32[0] * *(float *)(v51 + *v10 + 20);
    v23 = v20;
    v23.m128_f32[0] = v20.m128_f32[0] + *(float *)(v51 + *v10 + 4);
    v24 = v21;
    v24.m128_f32[0] = v21.m128_f32[0] + *(float *)(v51 + *v10 + 8);
    v120 = v22 + *(float *)(v51 + *v10 + 12);
    v144 = v120;
    v143 = _mm_unpacklo_ps(v23, v24).m128_u64[0];
    v25 = (__m128)*(unsigned int *)(v51 + v18 + 4);
    v25.m128_f32[0] = v25.m128_f32[0] - v20.m128_f32[0];
    v26 = (__m128)*(unsigned int *)(v51 + v18 + 8);
    v26.m128_f32[0] = v26.m128_f32[0] - v21.m128_f32[0];
    v121 = *(float *)(v51 + v18 + 12) - v22;
    v27 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
    v28 = _mm_cvtsi32_si128(a3[2]);
    v145 = v27;
    v29 = (double)(int)*a3;
    v146 = v121;
    *(double *)v147 = v29;
    v25.m128_f32[0] = (float)((float)(int)v12 * v16) + (float)(int)a3[1];
    v147[2] = *(_OWORD *)&_mm_cvtepi32_pd(v28);
    *(double *)&v147[1] = v25.m128_f32[0];
    *(double *)&v147[3] = v25.m128_f32[0];
    v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet(a4, &v143, 2LL);
    v9 = v30;
    if ( v30 < 0 )
    {
      v94 = 237;
      goto LABEL_86;
    }
    v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v111, v147, 2LL);
    v9 = v30;
    if ( v30 < 0 )
    {
      v94 = 238;
      goto LABEL_86;
    }
    v97 = 255;
    v30 = DynArray<unsigned long,0>::AddAndSet(v8, 2LL, &v97);
    v9 = v30;
    if ( v30 < 0 )
    {
      v94 = 239;
      goto LABEL_86;
    }
    if ( !v12 )
      goto LABEL_31;
    v96 = 0;
    v31 = v12 - 1;
    v32 = *v102;
    if ( v15 >= 0 )
      v31 = v15;
    v129 = *(_QWORD *)(v32 + 12 * v19);
    v118 = *(_QWORD *)(v32 + 12LL * (unsigned int)(v19 + 1));
    v33 = (unsigned int)v19 + 2 * (v31 - v12);
    v34 = *(float *)(v32 + 12 * v33 + 8);
    v130 = *(_QWORD *)(v32 + 12 * v33);
    v131 = v34;
    v35 = *(float *)(v32 + 12LL * (unsigned int)(v33 + 1) + 8);
    v109 = *(_QWORD *)(v32 + 12LL * (unsigned int)(v33 + 1));
    v36 = (__m128)(unsigned int)v109;
    v37 = (__m128)HIDWORD(v109);
    v36.m128_f32[0] = *(float *)&v109 - *(float *)&v130;
    v37.m128_f32[0] = *((float *)&v109 + 1) - *((float *)&v130 + 1);
    *(float *)&v110 = v35;
    v38 = (float)((float)(*(float *)&v109 - *(float *)&v130) * (float)(*((float *)&v118 + 1) - *((float *)&v129 + 1)))
        - (float)((float)(*((float *)&v109 + 1) - *((float *)&v130 + 1)) * (float)(*(float *)&v118 - *(float *)&v129));
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v38) & _xmm) <= v73 )
      break;
    v39 = (float)((float)((float)(*((float *)&v130 + 1) - *((float *)&v129 + 1))
                        * (float)(*(float *)&v118 - *(float *)&v129))
                - (float)((float)(*(float *)&v130 - *(float *)&v129)
                        * (float)(*((float *)&v118 + 1) - *((float *)&v129 + 1))))
        / v38;
    v40 = (float)((float)((float)(*((float *)&v130 + 1) - *((float *)&v129 + 1)) * v36.m128_f32[0])
                - (float)((float)(*(float *)&v130 - *(float *)&v129) * v37.m128_f32[0]))
        / v38;
    if ( v39 <= v73 )
      break;
    if ( v39 >= 0.99999988 )
      break;
    if ( v40 <= v73 )
      break;
    if ( v40 >= 0.99999988 )
      break;
    v36.m128_f32[0] = (float)(v36.m128_f32[0] * v39) + *(float *)&v130;
    v37.m128_f32[0] = (float)(v37.m128_f32[0] * v39) + *((float *)&v130 + 1);
    v134 = _mm_unpacklo_ps(v36, v37).m128_u64[0];
    v122 = (float)((float)(v35 - v131) * v39) + v131;
    v135 = v122;
    DynArray<MilPoint3F,0>::AddMultipleAndSet(&v114, &v134, 1LL);
    v15 = v31;
    v11 = v117;
    v96 = 1;
    v98 = v31;
    if ( v12 == v103 )
      break;
LABEL_30:
    v8 = v101;
LABEL_31:
    ++v12;
    v51 = v112 + 28;
    v112 += 28LL;
    if ( v12 >= v107 )
      goto LABEL_2;
    v7 = (__m128)v108;
    a3 = v113;
    a4 = v102;
    v10 = v119;
  }
  if ( v15 < 0 )
    goto LABEL_19;
  v41 = 0.0;
  v126 = 0LL;
  v42 = 0.0;
  v43 = 0.0;
  v125 = 0.0;
  v95 = 0;
  if ( v11 )
  {
    v49 = (float *)(v114 + 8);
    v50 = (unsigned int)v11;
    do
    {
      v41 = v41 + *(v49 - 2);
      v43 = v43 + *(v49 - 1);
      v42 = v42 + *v49;
      v49 += 3;
      v125 = v41;
      v126 = __PAIR64__(LODWORD(v42), LODWORD(v43));
      --v50;
    }
    while ( v50 );
  }
  v117 = 0;
  v44 = 1.0 / (float)v11;
  v125 = v44 * v41;
  *(float *)&v126 = v43 * v44;
  *((float *)&v126 + 1) = v42 * v44;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v114, 0xCu);
  v45 = v15;
  if ( v15 >= v12 )
  {
LABEL_18:
    v11 = v117;
LABEL_19:
    if ( !v96 )
    {
      v46 = v99;
      v47 = v19 - 2;
      if ( v99 > 0 )
      {
        v99 = -1;
        v47 = v46;
      }
      if ( v15 >= 0 )
      {
        v15 = -1;
        v99 = v19;
        v98 = -1;
      }
      v138 = v47;
      v139 = v47 + 1;
      v48 = 0LL;
      v140 = v47 + 1;
      v141 = v19 + 1;
      v137 = v19;
      v142 = v19;
      while ( 1 )
      {
        v88 = *(unsigned int *)(a6 + 24);
        v89 = v106;
        v90 = &v137 + v48;
        v91 = v88 + 1;
        if ( (int)v88 + 1 >= (unsigned int)v88 )
          v89 = v88 + 1;
        v9 = v91 < (unsigned int)v88 ? 0x80070216 : 0;
        v106 = v89;
        if ( v91 >= (unsigned int)v88 )
        {
          if ( v89 > *(_DWORD *)(a6 + 20) )
          {
            v92 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v90);
            v9 = v92;
            if ( v92 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0xC0u);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a6 + 4 * v88) = *v90;
            *(_DWORD *)(a6 + 24) = v89;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
        }
        if ( v9 < 0 )
          break;
        v48 = (unsigned int)(v48 + 1);
        if ( (unsigned int)v48 >= 6 )
          goto LABEL_30;
      }
      v94 = 381;
      goto LABEL_79;
    }
    goto LABEL_30;
  }
  v72 = 2 * v12;
  while ( 2 )
  {
    v68 = (__m128)LODWORD(v125);
    v69 = (__m128)(unsigned int)v126;
    v58 = (unsigned int)v19 + 2 * v45 - v72;
    v63 = (__m128)LODWORD(v125);
    v64 = (__m128)(unsigned int)v126;
    v59 = *v102;
    v60 = *(float *)(*v102 + 12 * v58 + 8);
    v132 = *(_QWORD *)(*v102 + 12 * v58);
    v61 = *(float *)&v132;
    v62 = *((float *)&v132 + 1);
    v63.m128_f32[0] = v125 - *(float *)&v132;
    v133 = v60;
    v64.m128_f32[0] = *(float *)&v126 - *((float *)&v132 + 1);
    v65 = v60;
    v66 = *((float *)&v126 + 1) - v60;
    v67 = *(float *)(v59 + 12LL * (unsigned int)(v58 + 1) + 8);
    v127 = *(_QWORD *)(v59 + 12LL * (unsigned int)(v58 + 1));
    v68.m128_f32[0] = v125 - *(float *)&v127;
    v69.m128_f32[0] = *(float *)&v126 - *((float *)&v127 + 1);
    v128 = v67;
    v70 = *((float *)&v126 + 1) - v67;
    *(float *)&v97 = sqrtf_0(
                       (float)((float)((float)(*((float *)&v127 + 1) - *((float *)&v132 + 1))
                                     * (float)(*((float *)&v127 + 1) - *((float *)&v132 + 1)))
                             + (float)((float)(*(float *)&v127 - *(float *)&v132)
                                     * (float)(*(float *)&v127 - *(float *)&v132)))
                     + (float)((float)(v67 - v65) * (float)(v67 - v65)));
    v71 = *(float *)&v97
        / sqrtf_0(
            (float)((float)(v64.m128_f32[0] * v64.m128_f32[0]) + (float)(v63.m128_f32[0] * v63.m128_f32[0]))
          + (float)(v66 * v66));
    if ( v45 == v98 )
    {
      if ( v71 > 2.0 )
      {
        v55 = 0;
        v95 = 0;
        goto LABEL_47;
      }
      v95 = 1;
      goto LABEL_35;
    }
    v55 = v95;
LABEL_47:
    if ( v55 )
    {
LABEL_35:
      v63.m128_f32[0] = (float)(v63.m128_f32[0] * v71) + v61;
      v52 = 2 * (v45 - v12) + 1;
      v64.m128_f32[0] = (float)(v64.m128_f32[0] * v71) + v62;
      v53 = 3LL * (unsigned int)(v19 + v52);
      *(_QWORD *)(v59 + 12LL * (unsigned int)(v19 + v52)) = _mm_unpacklo_ps(v63, v64).m128_u64[0];
      v123 = (float)(v66 * v71) + v65;
      v54 = v123;
      goto LABEL_49;
    }
    v74 = sqrtf_0(
            (float)((float)(v69.m128_f32[0] * v69.m128_f32[0]) + (float)(v68.m128_f32[0] * v68.m128_f32[0]))
          + (float)(v70 * v70));
    v75 = *(float *)&v97 / v74;
    v53 = 3LL * ((unsigned int)v19 + 2 * (v45 - v12));
    v68.m128_f32[0] = (float)(v68.m128_f32[0] * (float)(*(float *)&v97 / v74)) + *(float *)&v127;
    v69.m128_f32[0] = (float)(v69.m128_f32[0] * (float)(*(float *)&v97 / v74)) + *((float *)&v127 + 1);
    v76 = (float)(v70 * (float)(*(float *)&v97 / v74)) + v128;
    *(_QWORD *)(v59 + 12LL * ((unsigned int)v19 + 2 * (v45 - v12))) = _mm_unpacklo_ps(v68, v69).m128_u64[0];
    v124 = v76;
    v54 = v76;
    v71 = v75 / (float)(v75 - 1.0);
LABEL_49:
    *(float *)(v59 + 4 * v53 + 8) = v54;
    if ( v45 >= v12 - 1 )
    {
      v16 = *(float *)&v100;
LABEL_43:
      ++v45;
      v72 = 2 * v12;
      if ( v45 >= v12 )
      {
        v73 = FLOAT_1_1920929eN7;
        v15 = v98;
        goto LABEL_18;
      }
      continue;
    }
    break;
  }
  v77 = v102;
  v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet(v102, &v125, 1LL);
  v9 = v30;
  if ( v30 < 0 )
  {
    v94 = 337;
    goto LABEL_86;
  }
  v16 = *(float *)&v100;
  v136[0] = (float)((float)((float)(v113[2] - *v113) / v71) + (float)(int)*v113);
  v136[1] = (float)((float)((float)((float)(int)v45 * *(float *)&v100) + (float)(int)v113[1])
                  + (float)(*(float *)&v100 * 0.5));
  v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v111, v136, 1LL);
  v9 = v30;
  if ( v30 < 0 )
  {
    v94 = 340;
LABEL_86:
    v93 = v30;
    goto LABEL_87;
  }
  v78 = v104;
  v79 = v101;
  v97 = 255;
  v80 = *(unsigned int *)(v101 + 24);
  v81 = v80 + 1;
  if ( (int)v80 + 1 >= (unsigned int)v80 )
    v78 = v80 + 1;
  v9 = v81 < (unsigned int)v80 ? 0x80070216 : 0;
  v104 = v78;
  if ( v81 >= (unsigned int)v80 )
  {
    if ( v78 > *(_DWORD *)(v101 + 20) )
    {
      v82 = DynArrayImpl<0>::AddMultipleAndSet(v101, 4u, 1, &v97);
      v9 = v82;
      if ( v82 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0xC0u);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v101 + 4 * v80) = 255;
      *(_DWORD *)(v79 + 24) = v78;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
  }
  if ( v9 < 0 )
  {
    v94 = 341;
  }
  else
  {
    v56 = *((_DWORD *)v77 + 6) - 1;
    v138 = v58 + 2;
    v137 = v58;
    v140 = v58 + 1;
    v57 = 0LL;
    v139 = v56;
    v141 = v58 + 3;
    v142 = v56;
    while ( 1 )
    {
      v83 = *(unsigned int *)(a6 + 24);
      v84 = v105;
      v85 = &v137 + v57;
      v86 = v83 + 1;
      if ( (int)v83 + 1 >= (unsigned int)v83 )
        v84 = v83 + 1;
      v9 = v86 < (unsigned int)v83 ? 0x80070216 : 0;
      v105 = v84;
      if ( v86 >= (unsigned int)v83 )
      {
        if ( v84 > *(_DWORD *)(a6 + 20) )
        {
          v87 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v85);
          v9 = v87;
          if ( v87 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4 * v83) = *v85;
          *(_DWORD *)(a6 + 24) = v84;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
      }
      if ( v9 < 0 )
        break;
      v57 = (unsigned int)(v57 + 1);
      if ( (unsigned int)v57 >= 6 )
        goto LABEL_43;
    }
    v94 = 353;
  }
LABEL_79:
  v93 = v9;
LABEL_87:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, v94);
LABEL_2:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v114);
  return (unsigned int)v9;
}
