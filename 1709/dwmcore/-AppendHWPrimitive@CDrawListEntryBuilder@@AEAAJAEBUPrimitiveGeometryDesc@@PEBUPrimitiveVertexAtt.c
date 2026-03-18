/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180035340 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x180035400 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x180061CBC (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006A440 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800957B0 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800B33FC (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B70C4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?CalcClippedRectEdgeFlags@CDrawListEntryBuilder@@CA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x1800BDB80 (-CalcClippedRectEdgeFlags@CDrawListEntryBuilder@@CA-AW4D2D1_EDGE_FLAGS@@W42@AEBV-$TMilRect_@MUMi.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AppendHWGeometry@GeometrySink@CDrawListEntryBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x180151798 (-AppendHWGeometry@GeometrySink@CDrawListEntryBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D.c)
 *     ?Create@GeometrySink@CDrawListEntryBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x180151994 (-Create@GeometrySink@CDrawListEntryBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1801C8B88 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x1801C8C24 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  unsigned int v8; // r14d
  bool v9; // zf
  unsigned int v10; // esi
  __int64 v11; // xmm1_8
  __int64 v12; // xmm12_8
  _QWORD *v13; // rcx
  __m128 m11_low; // xmm11
  float v15; // xmm7_4
  __m128 v16; // xmm10
  float v17; // xmm8_4
  __m128 m12_low; // xmm9
  float v19; // xmm1_4
  float v20; // xmm2_4
  __m128 v21; // xmm10
  __m128 v22; // xmm10
  __m128 v23; // xmm10
  struct D2D_RECT_F v24; // xmm7
  CRectanglesShape *v25; // r15
  char (__fastcall *v26)(CRectanglesShape *); // rax
  char IsEmpty; // al
  char v28; // al
  unsigned int v29; // esi
  float v30; // xmm8_4
  float v31; // xmm9_4
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm14_4
  float v35; // xmm15_4
  unsigned int v36; // r15d
  float v37; // xmm7_4
  float v38; // xmm6_4
  __int64 v39; // rbx
  int v40; // eax
  float v41; // xmm14_4
  float v42; // xmm12_4
  __m128 v43; // xmm9
  __m128 v44; // xmm15
  float v45; // xmm5_4
  float v46; // xmm11_4
  float v47; // xmm8_4
  float v48; // xmm4_4
  float v49; // xmm13_4
  float v50; // xmm6_4
  __m128 v51; // xmm15
  float v52; // xmm0_4
  __m128 v53; // xmm14
  unsigned int v54; // edx
  __m128 v55; // xmm14
  __m128 v56; // xmm15
  __m128 v57; // xmm14
  __m128 v58; // xmm15
  __m128 v59; // xmm14
  __m128 v60; // xmm15
  __int64 v61; // rax
  char *v62; // rcx
  __int64 v63; // rax
  char (__fastcall *v64)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  char (__fastcall *v66)(__int64, __int64, int); // rax
  int v67; // eax
  int v68; // ebx
  int appended; // eax
  float v70; // xmm5_4
  float m11; // xmm6_4
  float v72; // xmm1_4
  float v73; // xmm1_4
  float bottom; // xmm7_4
  float v75; // xmm11_4
  float left; // xmm10_4
  float right; // xmm8_4
  float top; // xmm9_4
  unsigned int v79; // r11d
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // r15d
  int v83; // r10d
  unsigned int v84; // ebx
  float v85; // xmm4_4
  float *v86; // rcx
  float v87; // xmm3_4
  float *v88; // rdx
  __int64 v89; // rax
  float v90; // xmm1_4
  float v91; // xmm4_4
  float v92; // xmm2_4
  float v93; // xmm3_4
  float *v94; // rsi
  float v95; // xmm12_4
  signed __int64 v96; // r12
  unsigned int v97; // eax
  __int64 v98; // r13
  float v99; // xmm13_4
  float v100; // xmm14_4
  float v101; // xmm15_4
  float v102; // xmm0_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm0_4
  float v107; // xmm5_4
  float v108; // xmm6_4
  int v109; // ecx
  __int64 v110; // rax
  float v111; // xmm1_4
  float v112; // xmm1_4
  unsigned int v114; // xmm0_4
  struct D2D_RECT_F v115; // xmm9
  float v116; // xmm10_4
  float v117; // xmm8_4
  CCpuClip *v118; // rcx
  __m128 v119; // xmm0
  __m128 v120; // xmm1
  __m128 v121; // xmm0
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  __m128 v124; // xmm1
  int v125; // eax
  CShape *v126; // rbx
  float v127; // xmm1_4
  __int64 (__fastcall *v128)(__int64, __int64, __int64); // rax
  int TightBounds; // eax
  __int64 v130; // r9
  __int64 v131; // rdx
  float *v132; // r9
  float v133; // xmm10_4
  float v134; // xmm6_4
  float v135; // xmm7_4
  float v136; // xmm8_4
  __m128 v137; // xmm9
  __m128 v138; // xmm2
  __m128 v139; // xmm9
  __m128 v140; // xmm9
  __m128 v141; // xmm1
  __m128 v142; // xmm9
  int v143; // eax
  int v144; // eax
  __int64 v145; // rcx
  int v146; // eax
  __int64 v147; // r9
  __int64 v148; // rcx
  __m128 v149; // xmm1
  __m128 v150; // xmm1
  __m128 v151; // xmm1
  int v152; // eax
  struct D2D_MATRIX_3X2_F *v153; // [rsp+28h] [rbp-E0h]
  unsigned int v154; // [rsp+28h] [rbp-E0h]
  __int16 v155; // [rsp+48h] [rbp-C0h]
  _BYTE v156[28]; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v157; // [rsp+68h] [rbp-A0h]
  unsigned int v158; // [rsp+70h] [rbp-98h]
  float m22; // [rsp+74h] [rbp-94h]
  float v160; // [rsp+78h] [rbp-90h]
  float v161; // [rsp+7Ch] [rbp-8Ch]
  struct D2D_MATRIX_3X2_F v162; // [rsp+80h] [rbp-88h] BYREF
  __m128 v163; // [rsp+98h] [rbp-70h] BYREF
  __int128 v164; // [rsp+A8h] [rbp-60h]
  __int128 v165; // [rsp+B8h] [rbp-50h]
  __int128 v166; // [rsp+C8h] [rbp-40h]
  int v167; // [rsp+D8h] [rbp-30h]
  struct D2D_RECT_F v168; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v169; // [rsp+F8h] [rbp-10h]
  D2D1_MATRIX_3X2_F v170; // [rsp+108h] [rbp+0h] BYREF
  CShape *v171[2]; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v172; // [rsp+130h] [rbp+28h]
  CRectanglesShape *v173; // [rsp+138h] [rbp+30h] BYREF
  float v174; // [rsp+140h] [rbp+38h]
  float v175; // [rsp+144h] [rbp+3Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+148h] [rbp+40h] BYREF
  void **v177; // [rsp+168h] [rbp+60h] BYREF
  void *lpMem; // [rsp+170h] [rbp+68h] BYREF
  _BYTE *v179; // [rsp+178h] [rbp+70h]
  int v180; // [rsp+180h] [rbp+78h]
  __int64 v181; // [rsp+184h] [rbp+7Ch]
  _BYTE v182[16]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v183; // [rsp+1A0h] [rbp+98h]
  __m128 v184; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v185[48]; // [rsp+1B8h] [rbp+B0h]
  __int128 v186; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v187; // [rsp+200h] [rbp+F8h]
  __int128 v188; // [rsp+208h] [rbp+100h]
  __int64 v189; // [rsp+218h] [rbp+110h]
  void *v190; // [rsp+228h] [rbp+120h] BYREF
  _BYTE *v191; // [rsp+230h] [rbp+128h]
  int v192; // [rsp+238h] [rbp+130h]
  __int64 v193; // [rsp+23Ch] [rbp+134h]
  _BYTE v194[112]; // [rsp+248h] [rbp+140h] BYREF

  v186 = 0uLL;
  v187 = 0LL;
  v189 = 0LL;
  v190 = v194;
  v191 = v194;
  v177 = &CRectanglesShape::`vftable';
  v8 = *((_DWORD *)this + 586);
  v9 = *((_DWORD *)this + 3) == 1;
  lpMem = v182;
  v179 = v182;
  v188 = 0uLL;
  *(_DWORD *)&v156[8] = 2;
  v192 = 2;
  v193 = 2LL;
  v173 = 0LL;
  v180 = 1;
  v181 = 1LL;
  v183 = 0LL;
  v155 = 0;
  if ( v9 )
  {
    v10 = 0;
    v158 = 0;
  }
  else
  {
    v9 = (*((_BYTE *)a2 + 20) & 2) == 0;
    v10 = *((_DWORD *)a2 + 4);
    v158 = v10;
    if ( !v9 && v10 )
      *((_BYTE *)this + 2465) = 1;
  }
  if ( a4 )
  {
    v11 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v11;
    if ( !D2D1IsMatrixInvertible(&matrix) )
    {
      v68 = 0;
      goto LABEL_56;
    }
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  v12 = _xmm;
  if ( !*((_BYTE *)this + 2464)
    || (v13 = (_QWORD *)*((_QWORD *)this + 2), !*v13) && !v13[2]
    || (*(_OWORD *)&v170.m11 = *(_OWORD *)a2, (unsigned __int8)CCpuClip::FullyContains(v13, &v170, a4, a4)) )
  {
    m11_low = (__m128)LODWORD(matrix.m11);
    v15 = *((float *)a2 + 1);
    v16 = (__m128)LODWORD(matrix.m11);
    v17 = *(float *)a2;
    m12_low = (__m128)LODWORD(matrix.m12);
    v19 = *((float *)a2 + 2) - *(float *)a2;
    v20 = *((float *)a2 + 3) - v15;
    HIDWORD(v181) = 0;
    v16.m128_f32[0] = (float)(matrix.m11 * v19) + (float)(matrix.m21 * 0.0);
    v21 = _mm_shuffle_ps(v16, v16, 225);
    v21.m128_f32[0] = (float)(matrix.m12 * v19) + (float)(matrix.m22 * 0.0);
    v22 = _mm_shuffle_ps(v21, v21, 198);
    v22.m128_f32[0] = (float)(matrix.m21 * v20) + (float)(matrix.m11 * 0.0);
    m11_low.m128_f32[0] = (float)((float)(matrix.m11 * v17) + (float)(matrix.m21 * v15)) + matrix.dx;
    v23 = _mm_shuffle_ps(v22, v22, 39);
    v23.m128_f32[0] = (float)(matrix.m22 * v20) + (float)(matrix.m12 * 0.0);
    m12_low.m128_f32[0] = (float)((float)(matrix.m12 * v17) + (float)(matrix.m22 * v15)) + matrix.dy;
    v24 = (struct D2D_RECT_F)_mm_shuffle_ps(v23, v23, 57);
    *(struct D2D_RECT_F *)&v156[12] = v24;
    v157 = _mm_unpacklo_ps(m11_low, m12_low).m128_u64[0];
    *(_OWORD *)&v170.m11 = _xmm;
    DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
    if ( v183 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v183 + 16LL))(v183);
      v183 = 0LL;
    }
    v168 = (struct D2D_RECT_F)_xmm;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      &lpMem,
      &v168,
      1LL);
    v25 = (CRectanglesShape *)&v177;
    m22 = v170.m22;
    *(FLOAT *)v156 = v170.m21;
    v173 = (CRectanglesShape *)&v177;
    v168 = (struct D2D_RECT_F)LODWORD(v170.m11);
LABEL_11:
    *(FLOAT *)&v156[4] = v170.m12;
    goto LABEL_12;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&matrix,
          (const struct D2D_MATRIX_3X2_F *)&v156[8],
          (float *)v156,
          (float *)&v156[12],
          v153) )
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
      (D2DMatrixHelper *)&matrix,
      (const struct D2D_MATRIX_3X2_F *)&v156[8],
      (float *)v156,
      (float *)&v156[12],
      v153);
  *(float *)&v114 = *(float *)v156 * *((float *)a2 + 3);
  v115 = (struct D2D_RECT_F)*(unsigned int *)&v156[8];
  v115.left = *(float *)&v156[8] * *(float *)a2;
  v167 = 0;
  v116 = *(float *)v156 * *((float *)a2 + 1);
  v117 = *(float *)&v156[8] * *((float *)a2 + 2);
  v24 = *(struct D2D_RECT_F *)&v156[12];
  m22 = *(float *)&v114;
  v172 = v157;
  *(_QWORD *)&v170.m11 = __PAIR64__(LODWORD(v116), LODWORD(v115.left));
  *(float *)&v156[4] = v116;
  *(float *)v156 = v117;
  *(_QWORD *)&v170.m[1][0] = __PAIR64__(v114, LODWORD(v117));
  v168 = v115;
  *(_OWORD *)v171 = *(_OWORD *)&v156[12];
  D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)v171);
  v118 = (CCpuClip *)*((_QWORD *)this + 2);
  *(_OWORD *)&v185[8] = 0LL;
  v119 = (__m128)v184.m128_u64[0];
  *(_DWORD *)&v185[40] = 0;
  *(_DWORD *)&v185[44] = 1065353216;
  v119.m128_f32[0] = *(float *)v171;
  *(_QWORD *)&v185[24] = 1065353216LL;
  v120 = *(__m128 *)v185;
  v167 = 0;
  v121 = _mm_shuffle_ps(v119, v119, 225);
  v120.m128_f32[0] = *(float *)&v171[1];
  v121.m128_f32[0] = *((float *)v171 + 1);
  v122 = _mm_shuffle_ps(v120, v120, 225);
  v122.m128_f32[0] = *((float *)&v171[1] + 1);
  *(__m128 *)v185 = _mm_shuffle_ps(v122, v122, 225);
  v164 = *(_OWORD *)v185;
  v123 = *(__m128 *)&v185[32];
  v184 = _mm_shuffle_ps(v121, v121, 225);
  v123.m128_f32[0] = *(float *)&v172;
  v163 = v184;
  v124 = _mm_shuffle_ps(v123, v123, 225);
  v124.m128_f32[0] = *((float *)&v172 + 1);
  v165 = *(_OWORD *)&v185[16];
  *(__m128 *)&v185[32] = _mm_shuffle_ps(v124, v124, 225);
  v166 = *(_OWORD *)&v185[32];
  v125 = CCpuClip::ResolveClip(v118, v171);
  v68 = v125;
  if ( v125 < 0 )
  {
    v154 = 975;
    goto LABEL_125;
  }
  v126 = v171[0];
  if ( !CShape::IsAxisAlignedRectangle(v171[0])
    || (!CMILMatrix::Is2DAffine<1>((__int64)&v163, 1)
     || (v127 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v163.m128_f32[1] - 0.0)) & _xmm), v127 >= 0.000081380211)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v164 - 0.0)) & _xmm) >= 0.000081380211)
    && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v163.m128_f32[0] - 0.0)) & _xmm) >= 0.000081380211
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v164 + 1) - 0.0)) & _xmm) >= 0.000081380211) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v177, (const struct MilRectF *)&v170);
    v125 = CShape::Combine(&v177, v131, v126, &v163, 1, &v173);
    v68 = v125;
    if ( v125 >= 0 )
    {
      v133 = *((float *)this + 1);
      v134 = FLOAT_1_0;
      v155 = 257;
      *(_DWORD *)&v156[8] = 1;
      *(float *)v156 = FLOAT_1_0;
      v135 = FLOAT_1_0;
      *(float *)&v156[4] = FLOAT_1_0;
      if ( v133 < 1.0 || *((float *)this + 2) < 1.0 )
      {
        v136 = *((float *)this + 2);
        v137 = (__m128)*(unsigned int *)&v156[12];
        v137.m128_f32[0] = (float)(*(float *)&v156[12] * v133) + (float)(*(float *)&v156[16] * 0.0);
        v138 = (__m128)(unsigned int)v157;
        v139 = _mm_shuffle_ps(v137, v137, 225);
        v139.m128_f32[0] = (float)(*(float *)&v156[16] * v136) + (float)(*(float *)&v156[12] * 0.0);
        v140 = _mm_shuffle_ps(v139, v139, 198);
        v141 = (__m128)HIDWORD(v157);
        v140.m128_f32[0] = (float)(*(float *)&v156[20] * v133) + (float)(*(float *)&v156[24] * 0.0);
        v142 = _mm_shuffle_ps(v140, v140, 39);
        v142.m128_f32[0] = (float)(*(float *)&v156[24] * v136) + (float)(*(float *)&v156[20] * 0.0);
        v138.m128_f32[0] = (float)((float)(*(float *)&v157 * v133) + (float)(*((float *)&v157 + 1) * 0.0))
                         + (float)(0.0 - (float)(v133 * 0.0));
        v168 = (struct D2D_RECT_F)_mm_shuffle_ps(v142, v142, 57);
        v141.m128_f32[0] = (float)((float)(*((float *)&v157 + 1) * v136) + (float)(*(float *)&v157 * 0.0))
                         + (float)(0.0 - (float)(v136 * 0.0));
        v169 = _mm_unpacklo_ps(v138, v141).m128_u64[0];
        D2DMatrixHelper::GetScaleDimensions(
          (D2DMatrixHelper *)&v168,
          (const struct D2D_MATRIX_3X2_F *)v156,
          (float *)&v156[4],
          v132);
        v134 = *(float *)v156;
        v135 = *(float *)&v156[4];
      }
      v25 = v173;
      v143 = (*(__int64 (__fastcall **)(CRectanglesShape *, CShape **, _QWORD))(*(_QWORD *)v173 + 32LL))(
               v173,
               v171,
               0LL);
      v68 = v143;
      if ( v143 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v143, 0x442u);
LABEL_121:
        if ( v25 )
          (**(void (__fastcall ***)(CRectanglesShape *, __int64))v25)(v25, 1LL);
        goto LABEL_56;
      }
      if ( (float)((float)(*(float *)&v171[1] - *(float *)v171) * v134) <= 0.015625
        || (float)((float)(*((float *)&v171[1] + 1) - *((float *)v171 + 1)) * v135) <= 0.015625 )
      {
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))v25)(v25, 1LL);
        v25 = 0LL;
        HIBYTE(v155) = 0;
LABEL_52:
        ++*((_DWORD *)this + 612);
        if ( !(_BYTE)v155 )
          goto LABEL_53;
        if ( **((_QWORD **)this + 2) )
          ++*((_DWORD *)this + 26);
        switch ( *(_DWORD *)&v156[8] )
        {
          case 0:
            ++dword_18026EDE8;
            break;
          case 1:
            ++dword_18026EDEC;
            break;
          case 2:
LABEL_53:
            ++dword_18026EDE4;
            break;
        }
        v68 = 0;
        goto LABEL_55;
      }
      v24 = *(struct D2D_RECT_F *)&v156[12];
      m22 = v170.m22;
      *(FLOAT *)v156 = v170.m21;
      v168 = (struct D2D_RECT_F)LODWORD(v170.m11);
      goto LABEL_11;
    }
    v154 = 1062;
LABEL_125:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v125, v154);
    goto LABEL_56;
  }
  v128 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v126 + 32LL);
  if ( v128 == CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds((__int64)v126, (__int64)v171, (__int64)&v163);
  else
    TightBounds = v128((__int64)v126, (__int64)v171, (__int64)&v163);
  v68 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x3D7u);
    goto LABEL_56;
  }
  if ( (float)(*(float *)v171 - v115.left) > 0.0000011920929 )
  {
    LODWORD(v173) = v171[0];
    LOBYTE(v155) = 1;
  }
  else
  {
    *(FLOAT *)&v173 = v115.left;
    LOBYTE(v155) = 0;
  }
  if ( (float)(*((float *)v171 + 1) - v116) <= 0.0000011920929 )
  {
    *((float *)&v173 + 1) = v116;
  }
  else
  {
    HIDWORD(v173) = HIDWORD(v171[0]);
    LOBYTE(v155) = 1;
  }
  if ( (float)(v117 - *(float *)&v171[1]) > 0.0000011920929 )
  {
    v174 = *(float *)&v171[1];
    LOBYTE(v155) = 1;
  }
  else
  {
    v174 = v117;
  }
  if ( (float)(m22 - *((float *)&v171[1] + 1)) > 0.0000011920929 )
  {
    v175 = *((float *)&v171[1] + 1);
    LOBYTE(v155) = 1;
  }
  else
  {
    v175 = m22;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v177, (const struct MilRectF *)&v173);
  v130 = *((unsigned __int8 *)this + 28);
  v25 = (CRectanglesShape *)&v177;
  v173 = (CRectanglesShape *)&v177;
  v10 = CDrawListEntryBuilder::CalcClippedRectEdgeFlags(v10, &v170, v171, v130);
  v158 = v10;
  if ( v10 != *((_DWORD *)a2 + 4) )
    LOBYTE(v155) = 1;
  *(_DWORD *)&v156[8] = 0;
LABEL_12:
  v26 = *(char (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v25 + 16LL);
  if ( v26 == CRectanglesShape::IsEmpty )
    IsEmpty = CRectanglesShape::IsEmpty(v25);
  else
    IsEmpty = v26(v25);
  if ( IsEmpty )
    goto LABEL_52;
  if ( a3 )
  {
    v28 = *((_BYTE *)a3 + 16);
    v186 = *(_OWORD *)a3;
    LOBYTE(v187) = v28;
    v170 = matrix;
    D2D1InvertMatrix(&v170);
    v29 = 0;
    v30 = *(float *)&v156[12];
    v31 = *(float *)&v156[16];
    v32 = *(float *)&v156[20];
    v33 = *(float *)&v156[24];
    v34 = *(float *)&v157;
    v35 = *((float *)&v157 + 1);
    v36 = HIDWORD(v193);
    v37 = (float)(*(float *)&v156[12] * v170.m11) + (float)(v170.m21 * *(float *)&v156[16]);
    v38 = (float)(*(float *)&v156[12] * v170.m12) + (float)(v170.m22 * *(float *)&v156[16]);
    *(float *)v171 = v37;
    v161 = (float)(v170.m21 * *(float *)&v156[24]) + (float)(*(float *)&v156[20] * v170.m11);
    v162.m22 = v38;
    v160 = (float)(v170.m22 * *(float *)&v156[24]) + (float)(v170.m12 * *(float *)&v156[20]);
    v162.m21 = (float)((float)(v170.m22 * *((float *)&v157 + 1)) + (float)(v170.m12 * *(float *)&v157)) + v170.dy;
    v162.m11 = (float)((float)(v170.m21 * *((float *)&v157 + 1)) + (float)(*(float *)&v157 * v170.m11)) + v170.dx;
    if ( *((_DWORD *)a3 + 10) )
    {
      while ( 1 )
      {
        v39 = *((_QWORD *)a3 + 4) + 52LL * v29;
        memset_0(&v184, 0, 0x38uLL);
        v40 = *((_DWORD *)this + 613);
        v185[36] = _bittest(&v40, v29);
        *(_OWORD *)&v185[20] = *(_OWORD *)(v39 + 36);
        v41 = *(float *)v39;
        v42 = *(float *)(v39 + 12);
        v43 = (__m128)*(unsigned int *)(v39 + 16);
        v44 = (__m128)LODWORD(v42);
        v45 = *(float *)(v39 + 20);
        v46 = *(float *)(v39 + 24);
        v47 = *(float *)(v39 + 28);
        v48 = *(float *)(v39 + 32);
        v44.m128_f32[0] = (float)(v42 * v38) + (float)(*(float *)v39 * v37);
        v49 = *(float *)(v39 + 16) * v38;
        v50 = *(float *)(v39 + 8);
        v162.m12 = *(FLOAT *)(v39 + 4);
        v44.m128_f32[0] = v44.m128_f32[0] + (float)(v46 * 0.0);
        v162.dy = v41;
        v51 = _mm_shuffle_ps(v44, v44, 225);
        v52 = v41 * v161;
        v53 = v43;
        v53.m128_f32[0] = (float)((float)(v43.m128_f32[0] * v160) + (float)(v162.m12 * v161)) + (float)(v47 * 0.0);
        *(float *)&v165 = (float)((float)(v50 * v162.m11) + (float)(v45 * v162.m21)) + v48;
        v54 = v36 + 1;
        v55 = _mm_shuffle_ps(v53, v53, 225);
        v51.m128_f32[0] = (float)(v49 + (float)(v162.m12 * v37)) + (float)(v47 * 0.0);
        v56 = _mm_shuffle_ps(v51, v51, 198);
        v55.m128_f32[0] = (float)((float)(v45 * v160) + (float)(v50 * v161)) + (float)(v48 * 0.0);
        v57 = _mm_shuffle_ps(v55, v55, 198);
        v56.m128_f32[0] = (float)((float)(v45 * v162.m22) + (float)(v50 * v37)) + (float)(v48 * 0.0);
        v58 = _mm_shuffle_ps(v56, v56, 39);
        v57.m128_f32[0] = (float)((float)(v162.dy * v162.m11) + (float)(v42 * v162.m21)) + v46;
        v59 = _mm_shuffle_ps(v57, v57, 39);
        v58.m128_f32[0] = (float)((float)(v42 * v160) + v52) + (float)(v46 * 0.0);
        v60 = _mm_shuffle_ps(v58, v58, 57);
        v59.m128_f32[0] = (float)((float)(v162.m12 * v162.m11) + (float)(v43.m128_f32[0] * v162.m21)) + v47;
        *(float *)&v185[16] = *(float *)&v165;
        v184 = v60;
        *(__m128 *)v185 = _mm_shuffle_ps(v59, v59, 57);
        if ( v36 + 1 < v36 )
        {
          v68 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else
        {
          if ( v54 <= (unsigned int)v193 )
          {
            v61 = v36++;
            v62 = (char *)v190 + 56 * v61;
            *(__m128 *)v62 = v60;
            *((_OWORD *)v62 + 1) = *(_OWORD *)v185;
            *((_OWORD *)v62 + 2) = *(_OWORD *)&v185[16];
            *((_QWORD *)v62 + 6) = *(_QWORD *)&v185[32];
            HIDWORD(v193) = v54;
            goto LABEL_20;
          }
          v144 = DynArrayImpl<0>::AddMultipleAndSet(&v190, 56LL, 1LL, &v184);
          v68 = v144;
          if ( v144 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v144, 0xC0u);
        }
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x47Au);
          v25 = v173;
          goto LABEL_55;
        }
        v36 = HIDWORD(v193);
LABEL_20:
        v37 = *(float *)v171;
        ++v29;
        v38 = v162.m22;
        if ( v29 >= *((_DWORD *)a3 + 10) )
        {
          v12 = _xmm;
          v24 = *(struct D2D_RECT_F *)&v156[12];
          v10 = v158;
          goto LABEL_22;
        }
      }
    }
    v24 = *(struct D2D_RECT_F *)&v156[12];
    v10 = v158;
  }
  else
  {
    v36 = HIDWORD(v193);
    v186 = _xmm;
LABEL_22:
    v35 = *((float *)&v157 + 1);
    v34 = *(float *)&v157;
    v33 = *(float *)&v156[24];
    v32 = *(float *)&v156[20];
    v31 = *(float *)&v156[16];
    v30 = *(float *)&v156[12];
  }
  *(_QWORD *)&v170.m11 = v190;
  v63 = v36;
  v25 = v173;
  *(_QWORD *)&v170.m[1][0] = v63;
  v188 = *(_OWORD *)&v170.m11;
  v64 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v173 + 40LL);
  if ( v64 == CRectanglesShape::IsRectangles )
    IsRectangles = CRectanglesShape::IsRectangles(v173, (unsigned int *)&v162.dx);
  else
    IsRectangles = v64(v173, (unsigned int *)&v162.dx);
  if ( IsRectangles && LODWORD(v162.dx) == 1 )
  {
    v66 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v25 + 48LL);
    if ( v66 == CRectanglesShape::GetRectangles )
      CRectanglesShape::GetRectangles((__int64)v25, (__int64)&v170, 1);
    else
      v66((__int64)v25, (__int64)&v170, 1);
    *(_OWORD *)v171 = *(_OWORD *)&v170.m11;
    v168 = *(struct D2D_RECT_F *)&v170.m11;
    v67 = Mesh::CreateRectangleMesh(
            (CDrawListEntryBuilder *)((char *)this + 112),
            (const struct Mesh::ContentInfo *)&v186,
            &v168,
            v10);
    v68 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x493u);
    }
    else
    {
      if ( v67
        || (appended = CDrawListEntryBuilder::AppendHWGeometry(
                         this,
                         *((_BYTE *)a2 + 20) & 1,
                         (*((_BYTE *)a2 + 20) & 2) != 0),
            v68 = appended,
            appended >= 0) )
      {
LABEL_32:
        v70 = FLOAT_1_0;
        if ( v30 != 1.0 || v31 != 0.0 || v32 != 0.0 || v33 != 1.0 || v34 != 0.0 || v35 != 0.0 )
        {
          m11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & v12);
          if ( m11 < 0.000081380211 && (v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & v12), v72 < 0.000081380211)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & v12) < 0.000081380211
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & v12) < 0.000081380211 )
          {
            v169 = v157;
            v168 = v24;
            v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & v12);
            if ( v73 < 0.000081380211 )
            {
              right = FLOAT_N1_0;
              v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & v12);
              if ( v31 >= 0.0 )
                top = FLOAT_1_0;
              else
                top = FLOAT_N1_0;
              bottom = v168.bottom;
              left = v168.left;
              if ( v168.right >= 0.0 )
                right = FLOAT_1_0;
            }
            else
            {
              bottom = FLOAT_N1_0;
              m11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & v12);
              v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & v12);
              if ( v30 < 0.0 )
                left = FLOAT_N1_0;
              else
                left = FLOAT_1_0;
              right = v168.right;
              top = v168.top;
              if ( v168.bottom >= 0.0 )
                bottom = FLOAT_1_0;
            }
          }
          else
          {
            D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
              (D2DMatrixHelper *)&v156[12],
              &v162,
              (float *)v171,
              &v168.left,
              v153);
            v70 = FLOAT_1_0;
            bottom = v168.bottom;
            right = v168.right;
            top = v168.top;
            left = v168.left;
            v75 = *(float *)v171;
            m11 = v162.m11;
          }
          v79 = v8;
          v80 = *((_QWORD *)this + 45);
          v81 = *((_QWORD *)this + 169);
          v82 = 8 * *(_DWORD *)this + 16;
          if ( v8 < *((_DWORD *)this + 586) )
          {
            v83 = v8 * v82;
            do
            {
              v84 = *(_DWORD *)this;
              v85 = *(float *)(v83 + v81);
              v86 = (float *)(v83 + v80);
              v87 = *(float *)(v83 + v81 + 4);
              v88 = (float *)(v83 + v81);
              v89 = 0LL;
              v90 = *v86 - v85;
              v91 = v85 * m11;
              v92 = v86[1] - v87;
              v93 = v87 * v75;
              *v86 = v91 + v90;
              v86[1] = v93 + v92;
              if ( v84 >= 2 )
              {
                v94 = v86 + 4;
                v95 = v70 / m11;
                v96 = (char *)v88 - (char *)v86;
                v97 = ((v84 - 2) >> 1) + 1;
                v98 = v97;
                v89 = 2 * v97;
                v99 = v70 / v75;
                v100 = v70 - (float)(v70 / m11);
                v101 = v70 - (float)(v70 / v75);
                do
                {
                  v102 = v99 * v94[1];
                  *v94 = (float)(v100 * *(float *)((char *)v94 + v96)) + (float)(v95 * *v94);
                  v103 = (float)(v101 * *(float *)((char *)v94 + v96 + 4)) + v102;
                  v104 = v95 * v94[2];
                  v94[1] = v103;
                  v105 = (float)(v100 * *(float *)((char *)v94 + v96 + 8)) + v104;
                  v106 = v99 * v94[3];
                  v94[2] = v105;
                  v94[3] = (float)(v101 * *(float *)((char *)v94 + v96 + 12)) + v106;
                  v94 += 4;
                  --v98;
                }
                while ( v98 );
              }
              if ( (unsigned int)v89 < v84 )
              {
                v86[2 * v89 + 4] = (float)((float)(v70 - (float)(v70 / m11)) * v88[2 * v89 + 4])
                                 + (float)((float)(v70 / m11) * v86[2 * v89 + 4]);
                v86[2 * v89 + 5] = (float)((float)(v70 - (float)(v70 / v75)) * v88[2 * v89 + 5])
                                 + (float)((float)(v70 / v75) * v86[2 * v89 + 5]);
              }
              ++v79;
              *v88 = v91;
              v83 += v82;
              v88[1] = v93;
            }
            while ( v79 < *((_DWORD *)this + 586) );
            if ( v8 < *((_DWORD *)this + 586) )
            {
              v107 = *((float *)&v169 + 1);
              v108 = *(float *)&v169;
              v109 = v8 * v82;
              do
              {
                v110 = v109;
                ++v8;
                v109 += v82;
                v111 = (float)((float)(top * *(float *)(v110 + v80)) + (float)(bottom * *(float *)(v110 + v80 + 4)))
                     + v107;
                *(float *)(v110 + v80) = (float)((float)(left * *(float *)(v110 + v80))
                                               + (float)(right * *(float *)(v110 + v80 + 4)))
                                       + v108;
                *(float *)(v110 + v80 + 4) = v111;
                v112 = (float)((float)(bottom * *(float *)(v110 + v81 + 4)) + (float)(top * *(float *)(v110 + v81)))
                     + v107;
                *(float *)(v110 + v81) = (float)((float)(right * *(float *)(v110 + v81 + 4))
                                               + (float)(left * *(float *)(v110 + v81)))
                                       + v108;
                *(float *)(v110 + v81 + 4) = v112;
              }
              while ( v8 < *((_DWORD *)this + 586) );
            }
          }
          v25 = v173;
        }
        goto LABEL_52;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x498u);
    }
  }
  else
  {
    if ( *((_QWORD *)this + 44) )
      goto LABEL_143;
    v145 = *((_QWORD *)this + 44);
    if ( v145 )
    {
      *((_QWORD *)this + 44) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v145 + 16LL))(v145);
    }
    v146 = CDrawListEntryBuilder::GeometrySink::Create(this, (struct CDrawListEntryBuilder::GeometrySink **)this + 44);
    v68 = v146;
    if ( v146 >= 0 )
    {
LABEL_143:
      v147 = *((unsigned int *)this + 3);
      v148 = *((_QWORD *)this + 44);
      v149 = _mm_shuffle_ps((__m128)v168, (__m128)v168, 225);
      v149.m128_f32[0] = *(float *)&v156[4];
      v150 = _mm_shuffle_ps(v149, v149, 198);
      v150.m128_f32[0] = *(float *)v156;
      v151 = _mm_shuffle_ps(v150, v150, 39);
      v151.m128_f32[0] = m22;
      LODWORD(v153) = v10;
      v168 = (struct D2D_RECT_F)_mm_shuffle_ps(v151, v151, 57);
      v152 = CDrawListEntryBuilder::GeometrySink::AppendHWGeometry(v148, v25, &v186, v147);
      v68 = v152;
      if ( v152 >= 0 )
        goto LABEL_32;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v152, 0x4A3u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v146, 0x49Fu);
    }
  }
LABEL_55:
  if ( HIBYTE(v155) )
    goto LABEL_121;
LABEL_56:
  HIDWORD(v181) = 0;
  v177 = &CRectanglesShape::`vftable';
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  if ( v183 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v183 + 16LL))(v183);
    v183 = 0LL;
  }
  if ( lpMem != v179 )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    lpMem = 0LL;
  }
  if ( v190 != v191 )
    WPF::ProcessHeapImpl::Free(v190);
  return (unsigned int)v68;
}
