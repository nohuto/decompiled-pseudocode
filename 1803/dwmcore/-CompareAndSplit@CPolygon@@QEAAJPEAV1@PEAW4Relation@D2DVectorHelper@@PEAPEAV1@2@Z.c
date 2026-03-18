/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801AE6E0
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801AE688 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801AF480 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801AFE64 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x1801C6EF4 (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180207BFC (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  _BYTE *v5; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  int v12; // ebx
  int v13; // r13d
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int64 Transpose; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rdx
  int v25; // r8d
  struct D2D_VECTOR_4F v26; // xmm0
  int v27; // r14d
  int v28; // esi
  struct D2D_VECTOR_4F v29; // xmm6
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  struct D2D_VECTOR_4F v34; // xmm7
  int v35; // eax
  int v36; // r8d
  unsigned int v37; // r9d
  unsigned int v38; // r10d
  int v39; // r11d
  const __m128i *v40; // rax
  int v41; // r11d
  unsigned int v42; // edi
  unsigned int v43; // r8d
  __m128i v44; // xmm0
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // eax
  int v60; // eax
  const __m128i *v61; // rax
  unsigned int v62; // r8d
  __m128i v63; // xmm0
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  unsigned int v68; // r8d
  unsigned int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  unsigned int v73; // r8d
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rcx
  int v81; // eax
  unsigned int v82; // r8d
  unsigned int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  int v86; // eax
  unsigned int v87; // edx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  unsigned int v91; // r8d
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  int v95; // eax
  unsigned int v96; // edx
  unsigned int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  unsigned int v100; // r8d
  unsigned int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  int v104; // eax
  int v105; // r9d
  unsigned int v106; // ecx
  int v107; // eax
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rax
  struct D2D_VECTOR_4F *v112; // [rsp+28h] [rbp-E0h]
  unsigned int v113; // [rsp+28h] [rbp-E0h]
  unsigned int v114; // [rsp+30h] [rbp-D8h]
  int v115; // [rsp+38h] [rbp-D0h]
  int v116; // [rsp+40h] [rbp-C8h]
  __int64 v117; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v118; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v119; // [rsp+58h] [rbp-B0h]
  unsigned int v120; // [rsp+5Ch] [rbp-ACh]
  unsigned int v121; // [rsp+60h] [rbp-A8h]
  unsigned int v122; // [rsp+64h] [rbp-A4h]
  unsigned int v123; // [rsp+68h] [rbp-A0h]
  unsigned int v124; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v125; // [rsp+70h] [rbp-98h]
  unsigned int v126; // [rsp+74h] [rbp-94h]
  unsigned int v127; // [rsp+78h] [rbp-90h]
  unsigned int v128; // [rsp+7Ch] [rbp-8Ch]
  int v129; // [rsp+80h] [rbp-88h]
  int v130; // [rsp+84h] [rbp-84h]
  unsigned int v131; // [rsp+88h] [rbp-80h]
  unsigned int v132; // [rsp+8Ch] [rbp-7Ch]
  struct D2D_VECTOR_4F v133; // [rsp+90h] [rbp-78h] BYREF
  int v134; // [rsp+A0h] [rbp-68h]
  struct CPolygon **v135; // [rsp+A8h] [rbp-60h]
  struct CPolygon **v136; // [rsp+B0h] [rbp-58h]
  __int128 v137; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v138; // [rsp+C8h] [rbp-40h]
  __int128 v139; // [rsp+D8h] [rbp-30h]
  __int128 v140; // [rsp+E8h] [rbp-20h]
  int v141; // [rsp+F8h] [rbp-10h]
  struct D2D_VECTOR_4F v142; // [rsp+108h] [rbp+0h] BYREF
  __int128 v143; // [rsp+118h] [rbp+10h]
  __int128 v144; // [rsp+128h] [rbp+20h]
  __int128 v145; // [rsp+138h] [rbp+30h]
  int v146; // [rsp+148h] [rbp+40h]
  struct D2D_VECTOR_4F v147; // [rsp+158h] [rbp+50h] BYREF
  int v148; // [rsp+168h] [rbp+60h]
  char v149[16]; // [rsp+170h] [rbp+68h] BYREF
  char v150[72]; // [rsp+180h] [rbp+78h] BYREF
  struct D2D_VECTOR_4F v151; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128i v152; // [rsp+1D8h] [rbp+D0h] BYREF
  int v153; // [rsp+1E8h] [rbp+E0h]
  struct D2D_VECTOR_4F v154; // [rsp+1F0h] [rbp+E8h] BYREF
  int v155; // [rsp+200h] [rbp+F8h]
  struct D2D_VECTOR_4F v156; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v157[2]; // [rsp+218h] [rbp+110h] BYREF
  int v158; // [rsp+228h] [rbp+120h]
  __int64 v159; // [rsp+22Ch] [rbp+124h]
  _BYTE v160[128]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v161[2]; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v162; // [rsp+2C8h] [rbp+1C0h]
  __int64 v163; // [rsp+2CCh] [rbp+1C4h]
  _BYTE v164[128]; // [rsp+2D8h] [rbp+1D0h] BYREF

  v135 = a4;
  *a4 = 0LL;
  v157[1] = v160;
  v5 = v160;
  v115 = 0;
  v136 = a5;
  v161[0] = v164;
  v157[0] = v160;
  *a5 = 0LL;
  v9 = *((_OWORD *)a2 + 9);
  v161[1] = v164;
  v10 = *((_OWORD *)a2 + 10);
  v11 = *((_DWORD *)a2 + 52);
  v12 = 0;
  v137 = v9;
  v13 = 0;
  v14 = *((_OWORD *)a2 + 11);
  v158 = 6;
  v138 = v10;
  v15 = *((_OWORD *)a2 + 12);
  v159 = 6LL;
  v139 = v14;
  v140 = v15;
  v162 = 6;
  v163 = 6LL;
  v141 = v11;
  v146 = 0;
  v117 = 0LL;
  v118 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v137, (__int64)a2, a3) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v137, (struct CMILMatrix *)&v137);
    v5 = (_BYTE *)v157[0];
  }
  else
  {
    v137 = _xmm;
    LOWORD(v141) = 32085;
    v138 = _xmm;
    v139 = _xmm;
    v140 = _xmm;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v137, v16, v17) )
  {
    Transpose = CMILMatrix::GetTranspose(&v137, v150);
    v19 = HIDWORD(v159);
    v5 = (_BYTE *)v157[0];
    v21 = *(_OWORD *)(Transpose + 16);
    v142 = *(struct D2D_VECTOR_4F *)Transpose;
    v22 = *(_OWORD *)(Transpose + 32);
    v143 = v21;
    v23 = *(_OWORD *)(Transpose + 48);
    LODWORD(Transpose) = *(_DWORD *)(Transpose + 64);
    v144 = v22;
    v145 = v23;
    v146 = Transpose;
  }
  else
  {
    v142 = (struct D2D_VECTOR_4F)_xmm;
    LOWORD(v146) = 32085;
    v143 = _xmm;
    v144 = _xmm;
    v145 = _xmm;
  }
  v151 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v156 = v151;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v151,
    v18,
    (const struct D2DVector4 *)&v156,
    v19,
    (const struct D2DMatrix *)&v142,
    v114);
  v24 = *((_QWORD *)a2 + 2);
  v25 = *((_DWORD *)a2 + 10);
  v156 = v151;
  v26 = *(struct D2D_VECTOR_4F *)(v24 + 20LL * (unsigned int)(v25 - 2));
  v27 = *(_DWORD *)(v24 + 20LL * (unsigned int)(v25 - 2) + 16);
  v134 = v27;
  v133 = v26;
  v154 = *(struct D2D_VECTOR_4F *)(v24 + 20LL * (unsigned int)(v25 - 1));
  v28 = *(_DWORD *)(v24 + 20LL * (unsigned int)(v25 - 1) + 16);
  v29 = v154;
  v155 = v28;
  D2DVectorHelper::ClassifyPoint(&v151.x, &v133.x);
  D2DVectorHelper::ClassifyPoint(&v151.x, &v154.x);
  v30 = 0LL;
  v116 = 0;
  if ( !v31 )
    goto LABEL_162;
  while ( 1 )
  {
    v32 = *((_QWORD *)a2 + 2);
    v33 = 5 * v30;
    v34 = *(struct D2D_VECTOR_4F *)(v32 + 4 * v33);
    v130 = *(_DWORD *)(v32 + 4 * v33 + 16);
    v147 = v34;
    v148 = v130;
    v35 = D2DVectorHelper::ClassifyPoint(&v151.x, &v147.x);
    v129 = v35;
    if ( v36 != 1 )
    {
      if ( v36 == 2 )
      {
        if ( v39 == 1 )
        {
          v61 = (const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                   (D2DVectorHelper *)v149,
                                   &v151,
                                   &v133,
                                   &v154,
                                   v112);
          v42 = 20;
          v62 = v120;
          v63 = _mm_loadu_si128(v61);
          v153 = 0;
          v64 = HIDWORD(v159) + 1;
          v152 = v63;
          if ( (unsigned int)(HIDWORD(v159) + 1) >= HIDWORD(v159) )
            v62 = HIDWORD(v159) + 1;
          v12 = v64 < HIDWORD(v159) ? 0x80070216 : 0;
          v120 = v62;
          if ( v64 < HIDWORD(v159) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v62 > (unsigned int)v159 )
          {
            v67 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 0x14u, 1, &v152);
            v12 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0xC0u);
          }
          else
          {
            v65 = 5LL * HIDWORD(v159);
            v66 = v157[0];
            *(__m128i *)(v157[0] + 4 * v65) = v63;
            *(_DWORD *)(v66 + 4 * v65 + 16) = v153;
            HIDWORD(v159) = v62;
          }
          if ( v12 < 0 )
          {
            v113 = 295;
            goto LABEL_136;
          }
          v68 = v121;
          v153 = v27;
          v69 = HIDWORD(v163) + 1;
          if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
            v68 = HIDWORD(v163) + 1;
          v12 = v69 < HIDWORD(v163) ? 0x80070216 : 0;
          v121 = v68;
          if ( v69 < HIDWORD(v163) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v68 > (unsigned int)v163 )
          {
            v72 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, 0x14u, 1, &v152);
            v12 = v72;
            if ( v72 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0xC0u);
          }
          else
          {
            v70 = 5LL * HIDWORD(v163);
            v71 = v161[0];
            *(__m128i *)(v161[0] + 4 * v70) = v152;
            *(_DWORD *)(v71 + 4 * v70 + 16) = v153;
            HIDWORD(v163) = v68;
          }
          if ( v12 < 0 )
          {
            v113 = 298;
            goto LABEL_136;
          }
          v29 = v154;
        }
        v73 = v122;
        v74 = HIDWORD(v163) + 1;
        if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
          v73 = HIDWORD(v163) + 1;
        v12 = v74 < HIDWORD(v163) ? 0x80070216 : 0;
        v122 = v73;
        if ( v74 < HIDWORD(v163) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
        }
        else if ( v73 > (unsigned int)v163 )
        {
          v77 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, 0x14u, 1, &v154);
          v12 = v77;
          if ( v77 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0xC0u);
        }
        else
        {
          v75 = 5LL * HIDWORD(v163);
          v76 = v161[0];
          *(struct D2D_VECTOR_4F *)(v161[0] + 4 * v75) = v29;
          *(_DWORD *)(v76 + 4 * v75 + 16) = v155;
          HIDWORD(v163) = v73;
        }
        if ( v12 < 0 )
        {
          v113 = 304;
LABEL_139:
          v105 = v12;
LABEL_140:
          v106 = 20;
LABEL_137:
          MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0, v105, v113);
          goto LABEL_163;
        }
        ++v13;
      }
      else
      {
        v152 = (__m128i)v29;
        if ( v39 == 1 )
        {
          if ( v35 == 2 )
          {
            v153 = 0;
            v78 = v37 + 1;
            v79 = v123;
            if ( v37 + 1 >= v37 )
              v79 = v37 + 1;
            v12 = v78 < v37 ? 0x80070216 : 0;
            v123 = v79;
            if ( v78 < v37 )
            {
              v42 = 20;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
            }
            else if ( v79 > v38 )
            {
              v42 = 20;
              v81 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 0x14u, 1, &v152);
              v12 = v81;
              if ( v81 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0xC0u);
            }
            else
            {
              v80 = 5LL * v37;
              *(struct D2D_VECTOR_4F *)&v5[4 * v80] = v29;
              *(_DWORD *)&v5[4 * v80 + 16] = v153;
              v42 = 20;
              HIDWORD(v159) = v79;
            }
            if ( v12 < 0 )
            {
              v113 = 322;
LABEL_136:
              v105 = v12;
              v106 = v42;
              goto LABEL_137;
            }
            v82 = v124;
            v153 = v155;
            v83 = HIDWORD(v163) + 1;
            if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
              v82 = HIDWORD(v163) + 1;
            v12 = v83 < HIDWORD(v163) ? 0x80070216 : 0;
            v124 = v82;
            if ( v83 < HIDWORD(v163) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
            }
            else if ( v82 > (unsigned int)v163 )
            {
              v86 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, 0x14u, 1, &v152);
              v12 = v86;
              if ( v86 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0xC0u);
            }
            else
            {
              v84 = 5LL * HIDWORD(v163);
              v85 = v161[0];
              *(__m128i *)(v161[0] + 4 * v84) = v152;
              *(_DWORD *)(v85 + 4 * v84 + 16) = v153;
              HIDWORD(v163) = v82;
            }
            if ( v12 < 0 )
            {
              v113 = 325;
              goto LABEL_136;
            }
            goto LABEL_131;
          }
        }
        else if ( v39 == 2 && v35 == 1 )
        {
          v87 = v125;
          v88 = v37 + 1;
          v153 = v28;
          if ( v37 + 1 >= v37 )
            v87 = v37 + 1;
          v12 = v88 < v37 ? 0x80070216 : 0;
          v125 = v87;
          if ( v88 < v37 )
          {
            v42 = 20;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v87 > v38 )
          {
            v42 = 20;
            v90 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 0x14u, 1, &v152);
            v12 = v90;
            if ( v90 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v90, 0xC0u);
          }
          else
          {
            v89 = 5LL * v37;
            *(struct D2D_VECTOR_4F *)&v5[4 * v89] = v29;
            *(_DWORD *)&v5[4 * v89 + 16] = v153;
            v42 = 20;
            HIDWORD(v159) = v87;
          }
          if ( v12 < 0 )
          {
            v113 = 333;
            goto LABEL_136;
          }
          v153 = 0;
          v91 = v126;
          v92 = HIDWORD(v163) + 1;
          if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
            v91 = HIDWORD(v163) + 1;
          v12 = v92 < HIDWORD(v163) ? 0x80070216 : 0;
          v126 = v91;
          if ( v92 < HIDWORD(v163) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v91 > (unsigned int)v163 )
          {
            v95 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, 0x14u, 1, &v152);
            v12 = v95;
            if ( v95 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0xC0u);
          }
          else
          {
            v93 = 5LL * HIDWORD(v163);
            v94 = v161[0];
            *(__m128i *)(v161[0] + 4 * v93) = v152;
            *(_DWORD *)(v94 + 4 * v93 + 16) = v153;
            HIDWORD(v163) = v91;
          }
          if ( v12 < 0 )
          {
            v113 = 336;
            goto LABEL_136;
          }
          goto LABEL_131;
        }
        v96 = v127;
        v97 = v37 + 1;
        if ( v37 + 1 >= v37 )
          v96 = v37 + 1;
        v12 = v97 < v37 ? 0x80070216 : 0;
        v127 = v96;
        if ( v97 < v37 )
        {
          v42 = 20;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
        }
        else if ( v96 > v38 )
        {
          v42 = 20;
          v99 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 0x14u, 1, &v154);
          v12 = v99;
          if ( v99 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0xC0u);
        }
        else
        {
          v98 = 5LL * v37;
          *(struct D2D_VECTOR_4F *)&v5[4 * v98] = v29;
          *(_DWORD *)&v5[4 * v98 + 16] = v155;
          v42 = 20;
          HIDWORD(v159) = v96;
        }
        if ( v12 < 0 )
        {
          v113 = 340;
          goto LABEL_136;
        }
        v100 = v128;
        v101 = HIDWORD(v163) + 1;
        if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
          v100 = HIDWORD(v163) + 1;
        v12 = v101 < HIDWORD(v163) ? 0x80070216 : 0;
        v128 = v100;
        if ( v101 < HIDWORD(v163) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
        }
        else if ( v100 > (unsigned int)v163 )
        {
          v104 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, 0x14u, 1, &v154);
          v12 = v104;
          if ( v104 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v104, 0xC0u);
        }
        else
        {
          v102 = 5LL * HIDWORD(v163);
          v103 = v161[0];
          *(struct D2D_VECTOR_4F *)(v161[0] + 4 * v102) = v154;
          *(_DWORD *)(v103 + 4 * v102 + 16) = v155;
          HIDWORD(v163) = v100;
        }
        if ( v12 < 0 )
        {
          v113 = 341;
          goto LABEL_136;
        }
      }
LABEL_131:
      v60 = v115;
      v57 = HIDWORD(v159);
      goto LABEL_132;
    }
    if ( v39 == 2 )
    {
      v40 = (const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                               (D2DVectorHelper *)&v156,
                               &v151,
                               &v133,
                               &v154,
                               v112);
      v42 = v41 + 18;
      v43 = v131;
      v44 = _mm_loadu_si128(v40);
      v45 = HIDWORD(v159) + 1;
      v153 = v27;
      v152 = v44;
      if ( (unsigned int)(HIDWORD(v159) + 1) >= HIDWORD(v159) )
        v43 = HIDWORD(v159) + 1;
      v12 = v45 < HIDWORD(v159) ? 0x80070216 : 0;
      v131 = v43;
      if ( v45 < HIDWORD(v159) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v12, 0xB5u);
      }
      else if ( v43 > (unsigned int)v159 )
      {
        v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, v42, 1, &v152);
        v12 = v48;
        if ( v48 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v48, 0xC0u);
      }
      else
      {
        v46 = 5LL * HIDWORD(v159);
        v47 = v157[0];
        *(__m128i *)(v157[0] + 4 * v46) = v44;
        *(_DWORD *)(v47 + 4 * v46 + 16) = v153;
        HIDWORD(v159) = v43;
      }
      if ( v12 < 0 )
      {
        v113 = 270;
        goto LABEL_136;
      }
      v153 = 0;
      v49 = v132;
      v50 = HIDWORD(v163) + 1;
      if ( (unsigned int)(HIDWORD(v163) + 1) >= HIDWORD(v163) )
        v49 = HIDWORD(v163) + 1;
      v12 = v50 < HIDWORD(v163) ? 0x80070216 : 0;
      v132 = v49;
      if ( v50 < HIDWORD(v163) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v12, 0xB5u);
      }
      else if ( v49 > (unsigned int)v163 )
      {
        v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v161, v42, 1, &v152);
        v12 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v53, 0xC0u);
      }
      else
      {
        v51 = 5LL * HIDWORD(v163);
        v52 = v161[0];
        *(__m128i *)(v161[0] + 4 * v51) = v152;
        *(_DWORD *)(v52 + 4 * v51 + 16) = v153;
        HIDWORD(v163) = v49;
      }
      if ( v12 < 0 )
      {
        v113 = 273;
        goto LABEL_136;
      }
      v37 = HIDWORD(v159);
      v38 = v159;
      v5 = (_BYTE *)v157[0];
      v29 = v154;
    }
    v54 = v119;
    v55 = v37 + 1;
    if ( v37 + 1 >= v37 )
      v54 = v37 + 1;
    v12 = v55 < v37 ? 0x80070216 : 0;
    v119 = v54;
    if ( v55 < v37 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
LABEL_37:
      v57 = HIDWORD(v159);
      goto LABEL_38;
    }
    if ( v54 > v38 )
    {
      v59 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v157, 0x14u, 1, &v154);
      v12 = v59;
      if ( v59 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC0u);
      goto LABEL_37;
    }
    v56 = v37;
    v57 = v54;
    v58 = 5 * v56;
    *(struct D2D_VECTOR_4F *)&v5[4 * v58] = v29;
    *(_DWORD *)&v5[4 * v58 + 16] = v155;
    HIDWORD(v159) = v54;
LABEL_38:
    if ( v12 < 0 )
    {
      v113 = 278;
      goto LABEL_139;
    }
    v60 = ++v115;
LABEL_132:
    v27 = v155;
    v29 = v34;
    v30 = (unsigned int)(v116 + 1);
    v28 = v130;
    v133 = v154;
    v134 = v155;
    v154 = v34;
    v155 = v130;
    v116 = v30;
    if ( (unsigned int)v30 >= *((_DWORD *)a2 + 10) )
      break;
    v5 = (_BYTE *)v157[0];
  }
  if ( !v60 )
  {
    if ( v13 )
      goto LABEL_150;
LABEL_162:
    *(_DWORD *)a3 = 0;
    goto LABEL_163;
  }
  if ( !v13 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_163;
  }
LABEL_150:
  if ( v60 )
  {
    *(_DWORD *)a3 = 3;
    v107 = CPolygon::Create(v157, a2, &v117, v57);
    v12 = v107;
    if ( v107 < 0 )
    {
      v113 = 375;
    }
    else
    {
      v107 = CPolygon::Create(v161, a2, &v118, v108);
      v12 = v107;
      if ( v107 >= 0 )
      {
        v109 = v117;
        v117 = 0LL;
        *v135 = (struct CPolygon *)v109;
        v110 = v118;
        v118 = 0LL;
        *v136 = (struct CPolygon *)v110;
        goto LABEL_163;
      }
      v113 = 376;
    }
    v105 = v107;
    goto LABEL_140;
  }
  *(_DWORD *)a3 = 2;
LABEL_163:
  ReleaseInterface<CD3DSurface>(&v117);
  ReleaseInterface<CD3DSurface>(&v118);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v161);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v157);
  return (unsigned int)v12;
}
