/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x180086144
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18008780C (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180046766 (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800858AC (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x180085974 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x180085A0C (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
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
  __int64 v8; // r14
  int v9; // ebx
  __int64 *v10; // r10
  int v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r13d
  float v16; // xmm13_4
  float v17; // xmm14_4
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  float v23; // xmm5_4
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  double v28; // xmm0_8
  int v29; // eax
  unsigned int v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rdx
  float v33; // eax
  __m128 v34; // xmm7
  float v35; // xmm9_4
  float v36; // eax
  __m128 v37; // xmm4
  float v38; // xmm5_4
  float v39; // xmm6_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float *v45; // rax
  __int64 v46; // rcx
  float v47; // xmm2_4
  unsigned int v48; // r14d
  int v49; // ecx
  __int64 v50; // r13
  __int64 v51; // rsi
  float v52; // eax
  __m128 v53; // xmm14
  __m128 v54; // xmm7
  float v55; // xmm11_4
  float v56; // xmm13_4
  float v57; // xmm12_4
  float v58; // eax
  float v59; // xmm9_4
  float v60; // xmm8_4
  float v61; // xmm15_4
  float v62; // xmm10_4
  float v63; // xmm6_4
  char v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  float v67; // eax
  float v68; // xmm0_4
  __m128 v69; // xmm1
  float v70; // xmm6_4
  __m128 v71; // xmm0
  _QWORD *v72; // rsi
  __int64 v73; // r10
  __int64 v74; // rcx
  unsigned int v75; // eax
  unsigned int v76; // edx
  int v77; // eax
  int v78; // ecx
  __int64 v79; // rsi
  __int64 v80; // rdx
  int *v81; // r9
  unsigned int v82; // ecx
  unsigned int v83; // r8d
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  __int64 v87; // r14
  __int64 v88; // rdx
  int *v89; // r9
  unsigned int v90; // ecx
  unsigned int v91; // r8d
  int v92; // eax
  int v93; // r9d
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  char v96; // [rsp+38h] [rbp-D0h]
  char v97; // [rsp+39h] [rbp-CFh]
  int v98; // [rsp+3Ch] [rbp-CCh]
  int v99; // [rsp+40h] [rbp-C8h]
  int v100; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v101; // [rsp+48h] [rbp-C0h] BYREF
  float v102; // [rsp+4Ch] [rbp-BCh]
  __int64 v103; // [rsp+50h] [rbp-B8h]
  _QWORD *v104; // [rsp+58h] [rbp-B0h]
  unsigned int v105; // [rsp+60h] [rbp-A8h]
  float v106; // [rsp+64h] [rbp-A4h]
  unsigned int v107; // [rsp+68h] [rbp-A0h]
  unsigned int v108; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v109; // [rsp+70h] [rbp-98h]
  unsigned int v110; // [rsp+74h] [rbp-94h]
  unsigned int v111; // [rsp+78h] [rbp-90h]
  unsigned int v112; // [rsp+7Ch] [rbp-8Ch]
  __int64 v113; // [rsp+80h] [rbp-88h]
  float v114; // [rsp+88h] [rbp-80h]
  __int64 v115; // [rsp+90h] [rbp-78h]
  int *v116; // [rsp+98h] [rbp-70h]
  __int64 v117; // [rsp+A0h] [rbp-68h]
  __int128 v118; // [rsp+A8h] [rbp-60h] BYREF
  int v119; // [rsp+B8h] [rbp-50h]
  int v120; // [rsp+BCh] [rbp-4Ch]
  int v121; // [rsp+C0h] [rbp-48h]
  __int64 v122; // [rsp+C8h] [rbp-40h]
  __int64 *v123; // [rsp+D8h] [rbp-30h]
  float v124; // [rsp+E8h] [rbp-20h]
  float v125; // [rsp+F8h] [rbp-10h]
  float v126; // [rsp+108h] [rbp+0h]
  float v127; // [rsp+118h] [rbp+10h]
  float v128; // [rsp+128h] [rbp+20h]
  float v129; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v130; // [rsp+134h] [rbp+2Ch]
  __int64 v131; // [rsp+140h] [rbp+38h]
  float v132; // [rsp+148h] [rbp+40h]
  __int64 v133; // [rsp+150h] [rbp+48h]
  __int64 v134; // [rsp+160h] [rbp+58h]
  float v135; // [rsp+168h] [rbp+60h]
  __int64 v136; // [rsp+170h] [rbp+68h]
  float v137; // [rsp+178h] [rbp+70h]
  unsigned __int64 v138; // [rsp+180h] [rbp+78h] BYREF
  float v139; // [rsp+188h] [rbp+80h]
  double v140[2]; // [rsp+190h] [rbp+88h] BYREF
  int v141; // [rsp+1A0h] [rbp+98h] BYREF
  int v142; // [rsp+1A4h] [rbp+9Ch]
  int v143; // [rsp+1A8h] [rbp+A0h]
  int v144; // [rsp+1ACh] [rbp+A4h]
  int v145; // [rsp+1B0h] [rbp+A8h]
  int v146; // [rsp+1B4h] [rbp+ACh]
  unsigned __int64 v147; // [rsp+1B8h] [rbp+B0h] BYREF
  float v148; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v149; // [rsp+1C4h] [rbp+BCh]
  float v150; // [rsp+1CCh] [rbp+C4h]
  _QWORD v151[4]; // [rsp+1D0h] [rbp+C8h] BYREF

  v7 = *(__m128 *)&a1;
  v8 = a7;
  v9 = 0;
  v119 = 0;
  v10 = (__int64 *)a2;
  v120 = 0;
  v11 = 0;
  v12 = 0;
  v117 = a5;
  v13 = a3[3] - a3[1];
  v112 = LODWORD(a1);
  v123 = (__int64 *)a2;
  v14 = *(_DWORD *)(a2 + 24);
  v104 = a4;
  v116 = a3;
  v103 = a7;
  v111 = v14;
  v105 = v14 - 1;
  v121 = 0;
  v98 = -1;
  v15 = -1;
  v99 = -1;
  v16 = (float)v13 / (float)(int)(v14 - 1);
  v102 = v16;
  v118 = 0LL;
  if ( !v14 )
    goto LABEL_87;
  v17 = FLOAT_1_1920929eN7;
  v18 = 0LL;
  v115 = 0LL;
  while ( 1 )
  {
    v19 = *v10;
    v20 = *((unsigned int *)a4 + 6);
    v21 = v7;
    v22 = v7;
    v23 = v7.m128_f32[0] * *(float *)(v18 + *v10 + 24);
    v21.m128_f32[0] = v7.m128_f32[0] * *(float *)(v18 + *v10 + 16);
    v22.m128_f32[0] = v7.m128_f32[0] * *(float *)(v18 + *v10 + 20);
    v24 = v21;
    v24.m128_f32[0] = v21.m128_f32[0] + *(float *)(v18 + *v10 + 4);
    v25 = v22;
    v25.m128_f32[0] = v22.m128_f32[0] + *(float *)(v18 + *v10 + 8);
    v124 = v23 + *(float *)(v18 + *v10 + 12);
    v148 = v124;
    v147 = _mm_unpacklo_ps(v24, v25).m128_u64[0];
    v26 = (__m128)*(unsigned int *)(v18 + v19 + 4);
    v27 = (__m128)*(unsigned int *)(v18 + v19 + 8);
    v26.m128_f32[0] = v26.m128_f32[0] - v21.m128_f32[0];
    v27.m128_f32[0] = v27.m128_f32[0] - v22.m128_f32[0];
    v125 = *(float *)(v18 + v19 + 12) - v23;
    v149 = _mm_unpacklo_ps(v26, v27).m128_u64[0];
    v28 = (double)*a3;
    v150 = v125;
    *(double *)v151 = v28;
    v27.m128_f32[0] = (float)((float)(int)v12 * v16) + (float)a3[1];
    *(double *)&v151[2] = (double)a3[2];
    *(double *)&v151[1] = v27.m128_f32[0];
    *(double *)&v151[3] = v27.m128_f32[0];
    v29 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a4, &v147, 2u);
    v9 = v29;
    if ( v29 < 0 )
    {
      v95 = 237;
      goto LABEL_85;
    }
    v29 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v117, v151, 2u);
    v9 = v29;
    if ( v29 < 0 )
    {
      v95 = 238;
      goto LABEL_85;
    }
    v100 = 255;
    v29 = DynArray<unsigned long,0>::AddAndSet(v8, 2u, &v100);
    v9 = v29;
    if ( v29 < 0 )
    {
      v95 = 239;
      goto LABEL_85;
    }
    if ( v12 )
      break;
LABEL_74:
    ++v12;
    v18 = v115 + 28;
    v115 += 28LL;
    if ( v12 >= v111 )
      goto LABEL_87;
    v7 = (__m128)v112;
    a3 = v116;
    a4 = v104;
    v10 = v123;
  }
  v97 = 0;
  v30 = v12 - 1;
  v31 = *v104;
  if ( v15 >= 0 )
    v30 = v15;
  v133 = *(_QWORD *)(v31 + 12 * v20);
  v122 = *(_QWORD *)(v31 + 12LL * (unsigned int)(v20 + 1));
  v32 = (unsigned int)v20 + 2 * (v30 - v12);
  v33 = *(float *)(v31 + 12 * v32 + 8);
  v134 = *(_QWORD *)(v31 + 12 * v32);
  v34 = (__m128)HIDWORD(v134);
  v135 = v33;
  v35 = v33;
  v36 = *(float *)(v31 + 12LL * (unsigned int)(v32 + 1) + 8);
  v113 = *(_QWORD *)(v31 + 12LL * (unsigned int)(v32 + 1));
  v37 = (__m128)(unsigned int)v113;
  v37.m128_f32[0] = *(float *)&v113 - *(float *)&v134;
  v38 = *((float *)&v113 + 1) - *((float *)&v134 + 1);
  v114 = v36;
  v39 = (float)((float)(*(float *)&v113 - *(float *)&v134) * (float)(*((float *)&v122 + 1) - *((float *)&v133 + 1)))
      - (float)((float)(*((float *)&v113 + 1) - *((float *)&v134 + 1)) * (float)(*(float *)&v122 - *(float *)&v133));
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm) > v17 )
  {
    v40 = (float)((float)((float)(*((float *)&v134 + 1) - *((float *)&v133 + 1))
                        * (float)(*(float *)&v122 - *(float *)&v133))
                - (float)((float)(*(float *)&v134 - *(float *)&v133)
                        * (float)(*((float *)&v122 + 1) - *((float *)&v133 + 1))))
        / v39;
    v41 = (float)((float)((float)(*((float *)&v134 + 1) - *((float *)&v133 + 1)) * v37.m128_f32[0])
                - (float)(v38 * (float)(*(float *)&v134 - *(float *)&v133)))
        / v39;
    if ( v40 > v17 && v40 < 0.99999988 && v41 > v17 && v41 < 0.99999988 )
    {
      v37.m128_f32[0] = (float)(v37.m128_f32[0] * v40) + *(float *)&v134;
      v34.m128_f32[0] = *((float *)&v134 + 1) + (float)(v38 * v40);
      v138 = _mm_unpacklo_ps(v37, v34).m128_u64[0];
      v126 = v35 + (float)((float)(v36 - v135) * v40);
      v139 = v126;
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v118, &v138, 1u);
      v15 = v30;
      v11 = v121;
      v97 = 1;
      v98 = v30;
      if ( v12 != v105 )
      {
LABEL_73:
        v8 = v103;
        goto LABEL_74;
      }
    }
  }
  if ( v15 < 0 )
  {
LABEL_57:
    if ( !v97 )
    {
      v85 = v99;
      v86 = v20 - 2;
      if ( v99 > 0 )
      {
        v99 = -1;
        v86 = v85;
      }
      if ( v15 >= 0 )
      {
        v15 = -1;
        v99 = v20;
        v98 = -1;
      }
      v142 = v86;
      v143 = v86 + 1;
      v87 = 0LL;
      v144 = v86 + 1;
      v145 = v20 + 1;
      v141 = v20;
      v146 = v20;
      while ( 1 )
      {
        v88 = *(unsigned int *)(a6 + 24);
        v89 = &v141 + v87;
        v90 = v88 + 1;
        v91 = v88 + 1;
        if ( (int)v88 + 1 < (unsigned int)v88 )
          v91 = v110;
        v9 = v90 < (unsigned int)v88 ? 0x80070216 : 0;
        v110 = v91;
        if ( v90 >= (unsigned int)v88 )
        {
          if ( v91 > *(_DWORD *)(a6 + 20) )
          {
            v92 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v89);
            v9 = v92;
            if ( v92 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0xC0u);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a6 + 4 * v88) = *v89;
            *(_DWORD *)(a6 + 24) = v91;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
        }
        if ( v9 < 0 )
          break;
        v87 = (unsigned int)(v87 + 1);
        if ( (unsigned int)v87 >= 6 )
          goto LABEL_73;
      }
      v95 = 381;
      goto LABEL_77;
    }
    goto LABEL_73;
  }
  v42 = 0.0;
  v130 = 0LL;
  v43 = 0.0;
  v44 = 0.0;
  v129 = 0.0;
  v96 = 0;
  if ( v11 )
  {
    v45 = (float *)(v118 + 8);
    v46 = (unsigned int)v11;
    do
    {
      v42 = v42 + *(v45 - 2);
      v44 = v44 + *(v45 - 1);
      v43 = v43 + *v45;
      v45 += 3;
      v129 = v42;
      v130 = __PAIR64__(LODWORD(v43), LODWORD(v44));
      --v46;
    }
    while ( v46 );
  }
  v121 = 0;
  v47 = 1.0 / (float)v11;
  v129 = v47 * v42;
  *(float *)&v130 = v44 * v47;
  *((float *)&v130 + 1) = v43 * v47;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v118, 0xCu);
  v48 = v15;
  if ( v15 >= v12 )
  {
LABEL_56:
    v11 = v121;
    goto LABEL_57;
  }
  v49 = 2 * v12;
  while ( 1 )
  {
    v50 = (unsigned int)v20 + 2 * v48 - v49;
    v54 = (__m128)LODWORD(v129);
    v107 = v108;
    v51 = *v104;
    v52 = *(float *)(*v104 + 12 * v50 + 8);
    v131 = *(_QWORD *)(*v104 + 12 * v50);
    v53 = (__m128)HIDWORD(v131);
    v54.m128_f32[0] = v129 - *(float *)&v131;
    v132 = v52;
    v55 = *(float *)&v130 - *((float *)&v131 + 1);
    v56 = v52;
    v57 = *((float *)&v130 + 1) - v52;
    v58 = *(float *)(v51 + 12LL * (unsigned int)(v50 + 1) + 8);
    v136 = *(_QWORD *)(v51 + 12LL * (unsigned int)(v50 + 1));
    v59 = *(float *)&v130 - *((float *)&v136 + 1);
    v106 = *(float *)&v136;
    v60 = v129 - *(float *)&v136;
    v101 = HIDWORD(v136);
    v137 = v58;
    v61 = v58;
    v62 = *((float *)&v130 + 1) - v58;
    *(float *)&v100 = sqrtf_0(
                        (float)((float)((float)(*((float *)&v136 + 1) - *((float *)&v131 + 1))
                                      * (float)(*((float *)&v136 + 1) - *((float *)&v131 + 1)))
                              + (float)((float)(*(float *)&v136 - *(float *)&v131)
                                      * (float)(*(float *)&v136 - *(float *)&v131)))
                      + (float)((float)(v58 - v56) * (float)(v58 - v56)));
    v63 = *(float *)&v100
        / sqrtf_0((float)((float)(v54.m128_f32[0] * v54.m128_f32[0]) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v48 == v98 )
    {
      if ( v63 <= 2.0 )
      {
        v96 = 1;
LABEL_27:
        v54.m128_f32[0] = (float)(v54.m128_f32[0] * v63) + *(float *)&v131;
        v65 = 2 * (v48 - v12) + 1;
        v53.m128_f32[0] = v53.m128_f32[0] + (float)(v55 * v63);
        v66 = 3LL * (unsigned int)(v20 + v65);
        *(_QWORD *)(v51 + 12LL * (unsigned int)(v20 + v65)) = _mm_unpacklo_ps(v54, v53).m128_u64[0];
        v127 = v56 + (float)(v57 * v63);
        v67 = v127;
        goto LABEL_29;
      }
      v64 = 0;
      v96 = 0;
    }
    else
    {
      v64 = v96;
    }
    if ( v64 )
      goto LABEL_27;
    v68 = sqrtf_0((float)((float)(v59 * v59) + (float)(v60 * v60)) + (float)(v62 * v62));
    v69 = (__m128)v101;
    v70 = *(float *)&v100 / v68;
    v66 = 3LL * ((unsigned int)v20 + 2 * (v48 - v12));
    v71 = (__m128)LODWORD(v106);
    v71.m128_f32[0] = v106 + (float)(v60 * v70);
    v69.m128_f32[0] = *(float *)&v101 + (float)(v59 * v70);
    *(_QWORD *)(v51 + 12LL * ((unsigned int)v20 + 2 * (v48 - v12))) = _mm_unpacklo_ps(v71, v69).m128_u64[0];
    v128 = v61 + (float)(v62 * v70);
    v67 = v128;
    v63 = v70 / (float)(v70 - 1.0);
LABEL_29:
    *(float *)(v51 + 4 * v66 + 8) = v67;
    if ( v48 < v12 - 1 )
      break;
    v16 = v102;
LABEL_54:
    ++v48;
    v49 = 2 * v12;
    if ( v48 >= v12 )
    {
      v17 = FLOAT_1_1920929eN7;
      v15 = v98;
      goto LABEL_56;
    }
  }
  v72 = v104;
  v29 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)v104, &v129, 1u);
  v9 = v29;
  if ( v29 < 0 )
  {
    v95 = 337;
    goto LABEL_85;
  }
  v16 = v102;
  v140[0] = (float)((float)((float)(v116[2] - *v116) / v63) + (float)*v116);
  v140[1] = (float)((float)((float)((float)(int)v48 * v102) + (float)v116[1]) + (float)(v102 * 0.5));
  v29 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v117, v140, 1u);
  v9 = v29;
  if ( v29 < 0 )
  {
    v95 = 340;
LABEL_85:
    v93 = v29;
    goto LABEL_86;
  }
  v73 = v103;
  v101 = 255;
  v74 = *(unsigned int *)(v103 + 24);
  v75 = v74 + 1;
  v76 = v74 + 1;
  if ( (int)v74 + 1 < (unsigned int)v74 )
    v76 = v107;
  v9 = v75 < (unsigned int)v74 ? 0x80070216 : 0;
  v108 = v76;
  if ( v75 >= (unsigned int)v74 )
  {
    if ( v76 > *(_DWORD *)(v103 + 20) )
    {
      v77 = DynArrayImpl<0>::AddMultipleAndSet(v103, 4u, 1, &v101);
      v9 = v77;
      if ( v77 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0xC0u);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v103 + 4 * v74) = 255;
      *(_DWORD *)(v73 + 24) = v76;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  if ( v9 < 0 )
  {
    v95 = 341;
  }
  else
  {
    v78 = *((_DWORD *)v72 + 6) - 1;
    v142 = v50 + 2;
    v141 = v50;
    v144 = v50 + 1;
    v79 = 0LL;
    v143 = v78;
    v145 = v50 + 3;
    v146 = v78;
    while ( 1 )
    {
      v80 = *(unsigned int *)(a6 + 24);
      v81 = &v141 + v79;
      v82 = v80 + 1;
      v83 = v80 + 1;
      if ( (int)v80 + 1 < (unsigned int)v80 )
        v83 = v109;
      v9 = v82 < (unsigned int)v80 ? 0x80070216 : 0;
      v109 = v83;
      if ( v82 >= (unsigned int)v80 )
      {
        if ( v83 > *(_DWORD *)(a6 + 20) )
        {
          v84 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v81);
          v9 = v84;
          if ( v84 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0xC0u);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4 * v80) = *v81;
          *(_DWORD *)(a6 + 24) = v83;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
      }
      if ( v9 < 0 )
        break;
      v79 = (unsigned int)(v79 + 1);
      if ( (unsigned int)v79 >= 6 )
        goto LABEL_54;
    }
    v95 = 353;
  }
LABEL_77:
  v93 = v9;
LABEL_86:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, v95);
LABEL_87:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v118);
  return (unsigned int)v9;
}
