/*
 * XREFs of ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260
 * Callers:
 *     ?InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180041158 (-InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 * Callees:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001ED24 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18001ED6C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@CA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x18001FB48 (-CalcClippedRectEdgeFlags@CDrawListPrimitiveBuilder@@CA-AW4D2D1_EDGE_FLAGS@@W42@AEBV-$TMilRect_@.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z @ 0x18004009C (-AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180041464 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800414C0 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180041654 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180094010 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800940E0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BDD80 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C12E0 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AppendHWGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x18015B834 (-AppendHWGeometry@GeometrySink@CDrawListPrimitiveBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@.c)
 *     ?Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x18015BA64 (-Create@GeometrySink@CDrawListPrimitiveBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1801AE250 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801AE2EC (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::AppendHWPrimitive(
        CDrawListPrimitiveBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  unsigned int v4; // esi
  const struct PrimitiveGeometryDesc *v7; // r12
  FLOAT v9; // r15d
  int v10; // eax
  __int64 v11; // xmm1_8
  float v12; // xmm12_4
  _QWORD *v13; // rcx
  __m128 m11_low; // xmm11
  float v15; // xmm7_4
  __m128 v16; // xmm10
  __m128 m22_low; // xmm8
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  __m128 v21; // xmm10
  __m128 v22; // xmm10
  __m128 v23; // xmm10
  CRectanglesShape *v24; // r14
  float v25; // xmm7_4
  float v26; // xmm6_4
  float dy; // xmm9_4
  float dx; // xmm10_4
  float m22; // xmm11_4
  float m21; // xmm14_4
  float m12; // xmm15_4
  __m128 v32; // xmm8
  __m128 v33; // xmm13
  bool (__fastcall *v34)(CRectanglesShape *__hidden); // rax
  bool IsEmpty; // al
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // al
  unsigned int v39; // r12d
  unsigned int v40; // r15d
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // edx
  __int128 v45; // xmm0
  __int64 v46; // rax
  char *v47; // rcx
  bool (__fastcall *v48)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  void (__fastcall *v50)(CRectanglesShape *, struct D2D_RECT_F *, __int64); // rax
  int v51; // eax
  int v52; // ebx
  int appended; // eax
  unsigned int v54; // r11d
  __int64 v55; // r15
  __int64 v56; // r12
  float v57; // xmm6_4
  float v58; // xmm7_4
  int v59; // r10d
  unsigned int v60; // ebx
  float *v61; // rcx
  float *v62; // rdx
  __int64 v63; // rax
  float v64; // xmm5_4
  FLOAT v65; // xmm3_4
  float v66; // xmm4_4
  float v67; // xmm4_4
  float *v68; // r14
  float v69; // xmm3_4
  signed __int64 v70; // r13
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm8_4
  float v74; // xmm0_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  __m128 v81; // xmm7
  __m128 v82; // xmm8
  float v83; // xmm9_4
  float v84; // xmm10_4
  int v85; // edx
  __int64 v86; // rax
  __m128 v87; // xmm4
  __int64 v88; // rcx
  __m128 v89; // xmm2
  float v90; // xmm3_4
  __m128 v91; // xmm0
  __m128 v92; // xmm4
  __m128 v93; // xmm1
  float v94; // xmm3_4
  __int64 v95; // rdx
  __m128 v97; // xmm1
  unsigned int v98; // xmm0_4
  CCpuClip *v99; // rcx
  __m128 v100; // xmm0
  __m128 v101; // xmm1
  __m128 v102; // xmm0
  __m128 v103; // xmm1
  __m128 v104; // xmm1
  __m128 v105; // xmm1
  int v106; // eax
  CShape *v107; // rbx
  bool IsAxisAlignedRectangle; // al
  __int64 (__fastcall *v109)(CShape *, float *, __m128 *); // rax
  int TightBounds; // eax
  char v111; // r9
  __int64 v112; // rdx
  float *v113; // r9
  float v114; // xmm3_4
  float v115; // xmm6_4
  float v116; // xmm7_4
  __m128 v117; // xmm7
  __m128 v118; // xmm6
  float v119; // xmm5_4
  __m128 v120; // xmm6
  __m128 v121; // xmm6
  __m128 v122; // xmm6
  int v123; // eax
  int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  __int64 v127; // r9
  __int64 v128; // rcx
  __m128 v129; // xmm13
  __m128 v130; // xmm13
  __m128 v131; // xmm13
  int v132; // eax
  struct D2D_MATRIX_3X2_F *v133; // [rsp+28h] [rbp-E0h]
  struct D2D_MATRIX_3X2_F *v134; // [rsp+28h] [rbp-E0h]
  unsigned int v135; // [rsp+28h] [rbp-E0h]
  __int16 v136; // [rsp+48h] [rbp-C0h]
  float v137; // [rsp+4Ch] [rbp-BCh]
  float v138; // [rsp+4Ch] [rbp-BCh]
  struct D2D_MATRIX_3X2_F v139; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v140; // [rsp+68h] [rbp-A0h]
  void ***v141; // [rsp+70h] [rbp-98h] BYREF
  D2D1_MATRIX_3X2_F v142; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_MATRIX_3X2_F v143; // [rsp+90h] [rbp-78h] BYREF
  __m128 v144; // [rsp+A8h] [rbp-60h] BYREF
  float v145; // [rsp+B8h] [rbp-50h]
  float v146; // [rsp+BCh] [rbp-4Ch]
  float v147[10]; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v148; // [rsp+E8h] [rbp-20h]
  __m256i v149; // [rsp+F8h] [rbp-10h]
  _BYTE v150[20]; // [rsp+118h] [rbp+10h]
  CShape *v151; // [rsp+130h] [rbp+28h] BYREF
  struct D2D_RECT_F v152; // [rsp+138h] [rbp+30h]
  __m128 v153; // [rsp+150h] [rbp+48h]
  __m128 v154; // [rsp+168h] [rbp+60h] BYREF
  __m256i v155; // [rsp+178h] [rbp+70h]
  __int128 v156; // [rsp+198h] [rbp+90h]
  int v157; // [rsp+1A8h] [rbp+A0h]
  __m128 v158; // [rsp+1B8h] [rbp+B0h]
  __m128 v159; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned __int64 v160; // [rsp+1D8h] [rbp+D0h]
  char v161[40]; // [rsp+1E0h] [rbp+D8h] BYREF
  __int128 v162; // [rsp+208h] [rbp+100h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+218h] [rbp+110h] BYREF
  float v164; // [rsp+230h] [rbp+128h] BYREF
  FLOAT m11; // [rsp+234h] [rbp+12Ch]
  float v166; // [rsp+238h] [rbp+130h]
  float v167; // [rsp+23Ch] [rbp+134h]
  __m128 v168; // [rsp+248h] [rbp+140h] BYREF
  float v169; // [rsp+258h] [rbp+150h] BYREF
  float v170; // [rsp+25Ch] [rbp+154h]
  float v171; // [rsp+260h] [rbp+158h]
  float v172; // [rsp+264h] [rbp+15Ch]
  void **v173; // [rsp+268h] [rbp+160h] BYREF
  void *lpMem; // [rsp+270h] [rbp+168h] BYREF
  _BYTE *v175; // [rsp+278h] [rbp+170h]
  int v176; // [rsp+280h] [rbp+178h]
  __int64 v177; // [rsp+284h] [rbp+17Ch]
  _BYTE v178[16]; // [rsp+290h] [rbp+188h] BYREF
  __int64 v179; // [rsp+2A0h] [rbp+198h]
  struct D2D_RECT_F v180; // [rsp+2A8h] [rbp+1A0h] BYREF
  D2D1_MATRIX_3X2_F v181; // [rsp+2B8h] [rbp+1B0h] BYREF
  D2D1_MATRIX_3X2_F v182; // [rsp+2D0h] [rbp+1C8h] BYREF
  __int128 v183; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int128 v184; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v185; // [rsp+308h] [rbp+200h]
  void *v186; // [rsp+310h] [rbp+208h]
  unsigned int v187; // [rsp+318h] [rbp+210h]
  __int64 v188; // [rsp+320h] [rbp+218h]
  __int128 v189; // [rsp+328h] [rbp+220h] BYREF
  __int128 v190; // [rsp+338h] [rbp+230h]
  _BYTE v191[24]; // [rsp+348h] [rbp+240h]
  __int128 v192; // [rsp+360h] [rbp+258h] BYREF
  struct D2D_RECT_F v193; // [rsp+370h] [rbp+268h] BYREF
  void *v194; // [rsp+388h] [rbp+280h] BYREF
  _BYTE *v195; // [rsp+390h] [rbp+288h]
  int v196; // [rsp+398h] [rbp+290h]
  __int64 v197; // [rsp+39Ch] [rbp+294h]
  _BYTE v198[112]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v4 = *((_DWORD *)this + 586);
  v184 = 0uLL;
  v185 = 0LL;
  v188 = 0LL;
  v194 = v198;
  v195 = v198;
  v173 = &CRectanglesShape::`vftable';
  v7 = a2;
  lpMem = v178;
  v175 = v178;
  v9 = 0.0;
  v10 = *((_DWORD *)this + 3);
  *(_QWORD *)&v139.m[1][0] = a2;
  v187 = 0;
  v186 = 0LL;
  v196 = 2;
  v197 = 2LL;
  v141 = 0LL;
  v176 = 1;
  v177 = 1LL;
  v179 = 0LL;
  v136 = 0;
  if ( v10 != 1 )
    v9 = *((float *)a2 + 4);
  v139.m12 = v9;
  if ( v10 != 1 && (*((_BYTE *)a2 + 20) & 2) != 0 && *((_DWORD *)a2 + 4) )
    *((_BYTE *)this + 2465) = 1;
  if ( a4 )
  {
    v11 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v11;
    if ( !D2D1IsMatrixInvertible(&matrix) )
    {
      v52 = 0;
      goto LABEL_51;
    }
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  v12 = FLOAT_1_0;
  if ( !*((_BYTE *)this + 2464)
    || (v13 = (_QWORD *)*((_QWORD *)this + 2), !*v13) && !v13[2]
    || (v183 = *(_OWORD *)v7, (unsigned __int8)CCpuClip::FullyContains(v13, &v183, a4)) )
  {
    m11_low = (__m128)LODWORD(matrix.m11);
    v15 = *(float *)v7;
    v16 = (__m128)LODWORD(matrix.m11);
    m22_low = (__m128)LODWORD(matrix.m22);
    v18 = *((float *)v7 + 1);
    v19 = *((float *)v7 + 3) - v18;
    v20 = *((float *)v7 + 2) - *(float *)v7;
    HIDWORD(v177) = 0;
    v16.m128_f32[0] = (float)(matrix.m11 * v20) + (float)(matrix.m21 * 0.0);
    v21 = _mm_shuffle_ps(v16, v16, 225);
    v21.m128_f32[0] = (float)(v20 * matrix.m12) + (float)(matrix.m22 * 0.0);
    v22 = _mm_shuffle_ps(v21, v21, 198);
    v22.m128_f32[0] = (float)(matrix.m21 * v19) + (float)(matrix.m11 * 0.0);
    m11_low.m128_f32[0] = (float)((float)(matrix.m11 * v15) + (float)(matrix.m21 * v18)) + matrix.dx;
    v23 = _mm_shuffle_ps(v22, v22, 39);
    v162 = _xmm;
    v23.m128_f32[0] = (float)(matrix.m22 * v19) + (float)(matrix.m12 * 0.0);
    m22_low.m128_f32[0] = (float)((float)(matrix.m22 * v18) + (float)(matrix.m12 * v15)) + matrix.dy;
    v144 = _mm_shuffle_ps(v23, v23, 57);
    *(__m128 *)&v142.m11 = v144;
    *(_QWORD *)&v142.m[2][0] = _mm_unpacklo_ps(m11_low, m22_low).m128_u64[0];
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v179 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v179 + 16LL))(v179);
      v179 = 0LL;
    }
    v192 = _xmm;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      &v192,
      1LL);
    v24 = (CRectanglesShape *)&v173;
    v25 = *((float *)&v162 + 3);
    v26 = *((float *)&v162 + 2);
    dy = v142.dy;
    dx = v142.dx;
    m22 = v142.m22;
    m21 = v142.m21;
    m12 = v142.m12;
    v32.m128_i32[0] = LODWORD(v142.m11);
    v33 = (__m128)(unsigned int)v162;
    v139.m11 = *((FLOAT *)&v162 + 1);
    v139.dx = *((FLOAT *)&v162 + 3);
    v137 = *((float *)&v162 + 2);
    v141 = &v173;
    v140 = 12LL;
    goto LABEL_13;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&matrix,
          &v143,
          &v143.m12,
          &v142.m11,
          v133) )
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining((D2DMatrixHelper *)&matrix, &v143, &v143.m12, &v142.m11, v133);
  v97 = (__m128)LODWORD(v143.m11);
  v97.m128_f32[0] = v143.m11 * *(float *)v7;
  v157 = 0;
  *(float *)&v98 = v143.m11 * *((float *)v7 + 2);
  LODWORD(v162) = v97.m128_i32[0];
  v168 = v97;
  v25 = v143.m12 * *((float *)v7 + 3);
  v137 = *(float *)&v98;
  v139.m11 = v143.m12 * *((float *)v7 + 1);
  *(_QWORD *)((char *)&v162 + 4) = __PAIR64__(v98, LODWORD(v139.m11));
  v181 = v142;
  v139.dx = v25;
  *((float *)&v162 + 3) = v25;
  D2D1::Matrix3x2F::Invert(&v181);
  v99 = (CCpuClip *)*((_QWORD *)this + 2);
  *(_OWORD *)&v149.m256i_u64[1] = 0LL;
  v100 = (__m128)v148.m128_u64[0];
  *(_QWORD *)&v150[12] = 1065353216LL;
  *(_DWORD *)&v150[8] = 0;
  v100.m128_f32[0] = v181.m11;
  v149.m256i_i64[3] = 1065353216LL;
  v101 = *(__m128 *)v149.m256i_i8;
  v157 = 0;
  v102 = _mm_shuffle_ps(v100, v100, 225);
  v101.m128_f32[0] = v181.m21;
  v102.m128_f32[0] = v181.m12;
  v103 = _mm_shuffle_ps(v101, v101, 225);
  v103.m128_f32[0] = v181.m22;
  *(__m128 *)v149.m256i_i8 = _mm_shuffle_ps(v103, v103, 225);
  v155 = v149;
  v104 = *(__m128 *)v150;
  v148 = _mm_shuffle_ps(v102, v102, 225);
  v104.m128_f32[0] = v181.dx;
  v154 = v148;
  v105 = _mm_shuffle_ps(v104, v104, 225);
  v105.m128_f32[0] = v181.dy;
  *(__m128 *)v150 = _mm_shuffle_ps(v105, v105, 225);
  v156 = *(_OWORD *)v150;
  v106 = CCpuClip::ResolveClip(v99, &v151);
  v52 = v106;
  if ( v106 < 0 )
  {
    v135 = 932;
    goto LABEL_107;
  }
  v107 = v151;
  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v151);
  dy = v142.dy;
  dx = v142.dx;
  m22 = v142.m22;
  m21 = v142.m21;
  m12 = v142.m12;
  v32 = (__m128)LODWORD(v142.m11);
  if ( IsAxisAlignedRectangle && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v154) )
  {
    v109 = *(__int64 (__fastcall **)(CShape *, float *, __m128 *))(*(_QWORD *)v107 + 32LL);
    if ( (char *)v109 == (char *)CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds(v107, &v169, &v154);
    else
      TightBounds = v109(v107, &v169, &v154);
    v52 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x3ACu);
      goto LABEL_51;
    }
    v33 = v168;
    if ( (float)(v169 - v168.m128_f32[0]) > 0.0000011920929 )
    {
      v164 = v169;
      LOBYTE(v136) = 1;
    }
    else
    {
      v164 = v168.m128_f32[0];
    }
    if ( (float)(v170 - v139.m11) > 0.0000011920929 )
    {
      m11 = v170;
      LOBYTE(v136) = 1;
    }
    else
    {
      m11 = v139.m11;
    }
    v26 = v137;
    if ( (float)(v137 - v171) > 0.0000011920929 )
    {
      v166 = v171;
      LOBYTE(v136) = 1;
    }
    else
    {
      v166 = v137;
    }
    if ( (float)(v25 - v172) > 0.0000011920929 )
    {
      v167 = v172;
      LOBYTE(v136) = 1;
    }
    else
    {
      v167 = v25;
    }
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v173, (const struct MilRectF *)&v164);
    v111 = *((_BYTE *)this + 28);
    v24 = (CRectanglesShape *)&v173;
    v141 = &v173;
    LODWORD(v139.m12) = CDrawListPrimitiveBuilder::CalcClippedRectEdgeFlags(LODWORD(v9), (float *)&v162, &v169, v111);
    if ( LODWORD(v139.m12) != *((_DWORD *)v7 + 4) )
      LOBYTE(v136) = 1;
    v95 = 13LL;
    goto LABEL_80;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v173, (const struct MilRectF *)&v162);
  v106 = CShape::Combine(&v173, v112, v107, &v154, 1, &v141);
  v52 = v106;
  if ( v106 < 0 )
  {
    v135 = 1019;
LABEL_107:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, v135);
    goto LABEL_51;
  }
  v114 = *((float *)this + 1);
  v115 = FLOAT_1_0;
  v136 = 257;
  v116 = FLOAT_1_0;
  v143.m21 = FLOAT_1_0;
  v143.m22 = FLOAT_1_0;
  if ( v114 < 1.0 || *((float *)this + 2) < 1.0 )
  {
    v117 = (__m128)*((unsigned int *)this + 2);
    v118 = v32;
    v119 = 0.0 - (float)(*((float *)this + 2) * 0.0);
    v118.m128_f32[0] = (float)(v32.m128_f32[0] * v114) + (float)(m12 * 0.0);
    v120 = _mm_shuffle_ps(v118, v118, 225);
    v120.m128_f32[0] = (float)(*((float *)this + 2) * m12) + (float)(v32.m128_f32[0] * 0.0);
    v121 = _mm_shuffle_ps(v120, v120, 198);
    v121.m128_f32[0] = (float)(v114 * m21) + (float)(m22 * 0.0);
    v122 = _mm_shuffle_ps(v121, v121, 39);
    v122.m128_f32[0] = (float)(*((float *)this + 2) * m22) + (float)(m21 * 0.0);
    v138 = *((float *)this + 1) * dx;
    v144 = _mm_shuffle_ps(v122, v122, 57);
    v159 = v144;
    v117.m128_f32[0] = (float)((float)(v117.m128_f32[0] * dy) + (float)(dx * 0.0)) + v119;
    v160 = _mm_unpacklo_ps(
             (__m128)COERCE_UNSIGNED_INT((float)(v138 + (float)(dy * 0.0)) + (float)(0.0 - (float)(v114 * 0.0))),
             v117).m128_u64[0];
    D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v159, (struct D2D_MATRIX_3X2_F *)v143.m[1], &v143.m22, v113);
    v115 = v143.m21;
    v116 = v143.m22;
    v12 = FLOAT_1_0;
  }
  v24 = (CRectanglesShape *)v141;
  v123 = ((__int64 (__fastcall *)(void ***, __m128 *, _QWORD))(*v141)[4])(v141, &v168, 0LL);
  v52 = v123;
  if ( v123 >= 0 )
  {
    v95 = 14LL;
    v140 = 14LL;
    if ( (float)((float)(v168.m128_f32[2] - v168.m128_f32[0]) * v115) > 0.015625
      && (float)((float)(v168.m128_f32[3] - v168.m128_f32[1]) * v116) > 0.015625 )
    {
      v25 = *((float *)&v162 + 3);
      v26 = *((float *)&v162 + 2);
      v33 = (__m128)(unsigned int)v162;
      v139.dx = *((FLOAT *)&v162 + 3);
      v137 = *((float *)&v162 + 2);
      v139.m11 = *((FLOAT *)&v162 + 1);
LABEL_81:
      if ( !v24 )
        goto LABEL_47;
LABEL_13:
      v34 = *(bool (__fastcall **)(CRectanglesShape *__hidden))(*(_QWORD *)v24 + 16LL);
      if ( v34 == CRectanglesShape::IsEmpty )
        IsEmpty = CRectanglesShape::IsEmpty(v24);
      else
        IsEmpty = v34(v24);
      if ( !IsEmpty )
      {
        if ( a3 )
        {
          v38 = *((_BYTE *)a3 + 16);
          v184 = *(_OWORD *)a3;
          LOBYTE(v185) = v38;
          v182 = matrix;
          D2D1InvertMatrix(&v182);
          v39 = 0;
          v40 = HIDWORD(v197);
          v147[2] = 0.0;
          v147[5] = 0.0;
          v147[8] = 1.0;
          v147[0] = (float)(v182.m21 * m12) + (float)(v182.m11 * v32.m128_f32[0]);
          v147[1] = (float)(v32.m128_f32[0] * v182.m12) + (float)(v182.m22 * m12);
          v147[3] = (float)(v182.m11 * m21) + (float)(v182.m21 * m22);
          v147[6] = (float)((float)(v182.m11 * dx) + (float)(v182.m21 * dy)) + v182.dx;
          v147[4] = (float)(v182.m22 * m22) + (float)(v182.m12 * m21);
          for ( v147[7] = (float)((float)(v182.m22 * dy) + (float)(v182.m12 * dx)) + v182.dy;
                v39 < *((_DWORD *)a3 + 10);
                ++v39 )
          {
            v41 = *((_QWORD *)a3 + 4) + 52LL * (int)v39;
            memset_0(&v189, 0, 0x38uLL);
            v42 = *((_DWORD *)this + 613);
            v191[20] = _bittest(&v42, v39);
            *(_OWORD *)&v191[4] = *(_OWORD *)(v41 + 36);
            v43 = Matrix3x3::operator*(v147, v161, v41);
            v44 = v40 + 1;
            v45 = *(_OWORD *)v43;
            v189 = *(_OWORD *)v43;
            v190 = *(_OWORD *)(v43 + 16);
            *(_DWORD *)v191 = *(_DWORD *)(v43 + 32);
            if ( v40 + 1 < v40 )
            {
              v52 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
            }
            else
            {
              if ( v44 <= (unsigned int)v197 )
              {
                v46 = v40++;
                v47 = (char *)v194 + 56 * v46;
                *(_OWORD *)v47 = v45;
                *((_OWORD *)v47 + 1) = v190;
                *((_OWORD *)v47 + 2) = *(_OWORD *)v191;
                *((_QWORD *)v47 + 6) = *(_QWORD *)&v191[16];
                HIDWORD(v197) = v44;
                continue;
              }
              v124 = DynArrayImpl<0>::AddMultipleAndSet(&v194, 56LL, 1LL, &v189);
              v52 = v124;
              if ( v124 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0xC0u);
            }
            if ( v52 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x44Fu);
              goto LABEL_50;
            }
            v40 = HIDWORD(v197);
          }
          v25 = v139.dx;
          v26 = v137;
          v7 = *(const struct PrimitiveGeometryDesc **)&v139.m[1][0];
        }
        else
        {
          v40 = HIDWORD(v197);
          v184 = _xmm;
        }
        v186 = v194;
        v187 = v40;
        v48 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v24 + 40LL);
        if ( v48 == CRectanglesShape::IsRectangles )
          IsRectangles = CRectanglesShape::IsRectangles(v24, (unsigned int *)&v143.dx);
        else
          IsRectangles = v48(v24, (unsigned int *)&v143.dx);
        if ( IsRectangles && LODWORD(v143.dx) == 1 )
        {
          v50 = *(void (__fastcall **)(CRectanglesShape *, struct D2D_RECT_F *, __int64))(*(_QWORD *)v24 + 48LL);
          if ( (char *)v50 == (char *)CRectanglesShape::GetRectangles )
            CRectanglesShape::GetRectangles(v24, &v180, 1LL);
          else
            v50(v24, &v180, 1LL);
          v152 = v180;
          v193 = v180;
          v51 = Mesh::CreateRectangleMesh(
                  (struct Mesh::MeshGraph **)this + 14,
                  (const struct Mesh::ContentInfo *)&v184,
                  &v193,
                  LODWORD(v139.m12));
          v52 = v51;
          if ( v51 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x468u);
            goto LABEL_50;
          }
          if ( !v51 )
          {
            appended = CDrawListPrimitiveBuilder::AppendHWGeometry(
                         this,
                         *((_BYTE *)v7 + 20) & 1,
                         (*((_BYTE *)v7 + 20) & 2) != 0);
            v52 = appended;
            if ( appended < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x46Du);
              goto LABEL_50;
            }
          }
        }
        else
        {
          if ( !*((_QWORD *)this + 44) )
          {
            v125 = *((_QWORD *)this + 44);
            if ( v125 )
            {
              *((_QWORD *)this + 44) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
            }
            v126 = CDrawListPrimitiveBuilder::GeometrySink::Create(
                     this,
                     (struct CDrawListPrimitiveBuilder::GeometrySink **)this + 44);
            v52 = v126;
            if ( v126 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x474u);
              goto LABEL_50;
            }
          }
          v127 = *((unsigned int *)this + 3);
          v128 = *((_QWORD *)this + 44);
          v129 = _mm_shuffle_ps(v33, v33, 225);
          v129.m128_f32[0] = v139.m11;
          v130 = _mm_shuffle_ps(v129, v129, 198);
          v130.m128_f32[0] = v26;
          v131 = _mm_shuffle_ps(v130, v130, 39);
          v131.m128_f32[0] = v25;
          *(FLOAT *)&v133 = v139.m12;
          v153 = _mm_shuffle_ps(v131, v131, 57);
          v158 = v153;
          v132 = CDrawListPrimitiveBuilder::GeometrySink::AppendHWGeometry(v128, v24, &v184, v127);
          v52 = v132;
          if ( v132 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v132, 0x478u);
            goto LABEL_50;
          }
        }
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v142) )
        {
          if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
                  (D2DMatrixHelper *)&v142,
                  &v139,
                  &v139.m12,
                  v144.m128_f32,
                  v133) )
            D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
              (D2DMatrixHelper *)&v142,
              &v139,
              &v139.m12,
              v144.m128_f32,
              v134);
          v54 = v4;
          v55 = *((_QWORD *)this + 45);
          v56 = *((_QWORD *)this + 169);
          v36 = (unsigned int)(8 * *(_DWORD *)this + 16);
          if ( v4 < *((_DWORD *)this + 586) )
          {
            v57 = v139.m12;
            v58 = v139.m11;
            LODWORD(v37) = v4 * v36;
            v59 = v4 * v36;
            do
            {
              v60 = *(_DWORD *)this;
              v61 = (float *)(v55 + v59);
              v62 = (float *)(v56 + (int)v37);
              v63 = 0LL;
              v64 = *v61;
              v65 = v57 * v62[1];
              v66 = v61[1];
              v139.dx = v58 * *v62;
              v139.dy = v65;
              v67 = (float)(v66 - v62[1]) + v65;
              *v61 = v139.dx + (float)(v64 - *v62);
              v61[1] = v67;
              if ( v60 >= 2 )
              {
                v68 = v61 + 4;
                v69 = v12 / v58;
                *(_QWORD *)&v139.m[1][0] = ((v60 - 2) >> 1) + 1;
                v70 = (char *)v62 - (char *)v61;
                v63 = (unsigned int)(2 * LODWORD(v139.m21));
                v71 = v12 / v57;
                v72 = v12 - (float)(v12 / v58);
                v73 = v12 - (float)(v12 / v57);
                do
                {
                  v74 = v71 * v68[1];
                  *v68 = (float)(v72 * *(float *)((char *)v68 + v70)) + (float)(v69 * *v68);
                  v75 = (float)(v73 * *(float *)((char *)v68 + v70 + 4)) + v74;
                  v76 = v69 * v68[2];
                  v68[1] = v75;
                  v77 = (float)(v72 * *(float *)((char *)v68 + v70 + 8)) + v76;
                  v78 = v71 * v68[3];
                  v68[2] = v77;
                  v68[3] = (float)(v73 * *(float *)((char *)v68 + v70 + 12)) + v78;
                  v68 += 4;
                  --*(_QWORD *)&v139.m[1][0];
                }
                while ( *(_QWORD *)&v139.m[1][0] );
              }
              if ( (unsigned int)v63 < v60 )
              {
                v61[2 * v63 + 4] = (float)((float)(v12 - (float)(v12 / v58)) * v62[2 * v63 + 4])
                                 + (float)((float)(v12 / v58) * v61[2 * v63 + 4]);
                v61[2 * v63 + 5] = (float)((float)(v12 - (float)(v12 / v57)) * v62[2 * v63 + 5])
                                 + (float)((float)(v12 / v57) * v61[2 * v63 + 5]);
              }
              ++v54;
              v59 += v36;
              *(_QWORD *)v62 = *(_QWORD *)&v139.m[2][0];
              v37 = (unsigned int)(v36 + v37);
            }
            while ( v54 < *((_DWORD *)this + 586) );
            if ( v4 < *((_DWORD *)this + 586) )
            {
              v79 = v146;
              v80 = v145;
              v81 = (__m128)v144.m128_u32[3];
              v82 = (__m128)v144.m128_u32[2];
              v83 = v144.m128_f32[1];
              v84 = v144.m128_f32[0];
              v85 = v4 * v36;
              LODWORD(v37) = v4 * v36;
              do
              {
                v86 = (int)v37;
                v87 = v82;
                v88 = v85;
                v89 = v81;
                ++v4;
                v37 = (unsigned int)(v36 + v37);
                v85 += v36;
                *(_QWORD *)&v139.m[1][0] = *(_QWORD *)(v86 + v55);
                v90 = _mm_shuffle_ps(
                        (__m128)*(unsigned __int64 *)&v139.m[1][0],
                        (__m128)*(unsigned __int64 *)&v139.m[1][0],
                        85).m128_f32[0];
                v87.m128_f32[0] = (float)((float)(v82.m128_f32[0] * v90) + (float)(v84 * v139.m21)) + v80;
                v89.m128_f32[0] = (float)((float)(v81.m128_f32[0] * v90) + (float)(v83 * v139.m21)) + v79;
                v91 = v87;
                v92 = v82;
                *(_QWORD *)(v86 + v55) = _mm_unpacklo_ps(v91, v89).m128_u64[0];
                *(_QWORD *)&v139.m[1][0] = *(_QWORD *)(v88 + v56);
                v93 = v81;
                v94 = _mm_shuffle_ps(
                        (__m128)*(unsigned __int64 *)&v139.m[1][0],
                        (__m128)*(unsigned __int64 *)&v139.m[1][0],
                        85).m128_f32[0];
                v92.m128_f32[0] = (float)((float)(v82.m128_f32[0] * v94) + (float)(v139.m21 * v84)) + v80;
                v93.m128_f32[0] = (float)((float)(v81.m128_f32[0] * v94) + (float)(v83 * v139.m21)) + v79;
                *(_QWORD *)(v88 + v56) = _mm_unpacklo_ps(v92, v93).m128_u64[0];
              }
              while ( v4 < *((_DWORD *)this + 586) );
            }
          }
        }
      }
      v95 = v140;
LABEL_47:
      ++*((_DWORD *)this + 612);
      if ( (_BYTE)v136 )
      {
        if ( **((_QWORD **)this + 2) )
          ++*((_DWORD *)this + 26);
      }
      else
      {
        v95 = 12LL;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + v95, 1u);
      v24 = (CRectanglesShape *)v141;
      v52 = 0;
LABEL_50:
      if ( !HIBYTE(v136) )
        goto LABEL_51;
      goto LABEL_103;
    }
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v24)(v24, 1LL);
    v25 = *((float *)&v162 + 3);
    v24 = 0LL;
    v26 = *((float *)&v162 + 2);
    v33 = (__m128)(unsigned int)v162;
    v95 = 14LL;
    v139.dx = *((FLOAT *)&v162 + 3);
    v137 = *((float *)&v162 + 2);
    v139.m11 = *((FLOAT *)&v162 + 1);
    v141 = 0LL;
    HIBYTE(v136) = 0;
LABEL_80:
    v140 = v95;
    goto LABEL_81;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v123, 0x417u);
LABEL_103:
  if ( v24 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64, __int64, __int64))v24)(v24, 1LL, v36, v37);
LABEL_51:
  HIDWORD(v177) = 0;
  v173 = &CRectanglesShape::`vftable';
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  if ( v179 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v179 + 16LL))(v179);
    v179 = 0LL;
  }
  if ( lpMem != v175 )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    lpMem = 0LL;
  }
  if ( v194 != v195 )
    WPF::ProcessHeapImpl::Free(v194);
  return (unsigned int)v52;
}
