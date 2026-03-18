/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180005F2C (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800063EC (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180006488 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800181C4 (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019290 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180064190 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1800641D0 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008C630 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x1800ADF68 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800B1C50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AppendHWGeometry@GeometrySink@CDrawListEntryBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@_N5@Z @ 0x18017A804 (-AppendHWGeometry@GeometrySink@CDrawListEntryBuilder@@QEAAJPEBVCShape@@AEBUContentInfo@Mesh@@W4D.c)
 *     ?Create@GeometrySink@CDrawListEntryBuilder@@SAJPEAV2@PEAPEAV12@@Z @ 0x18017A9F0 (-Create@GeometrySink@CDrawListEntryBuilder@@SAJPEAV2@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  unsigned int v4; // esi
  bool v7; // zf
  FLOAT v10; // r15d
  _QWORD *v11; // rcx
  __m128 m11_low; // xmm11
  float v13; // xmm7_4
  __m128 v14; // xmm10
  __m128 m12_low; // xmm9
  float v16; // xmm8_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  __m128 v19; // xmm10
  __m128 v20; // xmm10
  __m128 v21; // xmm10
  CRectanglesShape *v22; // r13
  char (__fastcall *v23)(CRectanglesShape *); // rax
  char IsEmpty; // al
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // al
  __int64 v28; // rax
  float m12; // xmm7_4
  float m11; // xmm8_4
  float m22; // xmm11_4
  float m21; // xmm9_4
  float dy; // xmm13_4
  float dx; // xmm12_4
  unsigned int v35; // r15d
  float v36; // xmm6_4
  float v37; // xmm10_4
  unsigned int *v38; // rbx
  int v39; // eax
  __int128 v40; // xmm11
  float v41; // xmm12_4
  __int128 v42; // xmm1
  float v43; // xmm7_4
  float v44; // xmm8_4
  __m128 v45; // xmm15
  float v46; // xmm4_4
  float v47; // xmm13_4
  float v48; // xmm9_4
  float v49; // xmm5_4
  float v50; // xmm0_4
  float v51; // xmm6_4
  float v52; // xmm14_4
  __m128 v53; // xmm15
  unsigned int v54; // edx
  __m128 v55; // xmm0
  __m128 v56; // xmm15
  __m128 v57; // xmm0
  __m128 v58; // xmm15
  __m128 v59; // xmm0
  __m128 v60; // xmm0
  __int64 v61; // rax
  char *v62; // rcx
  char (__fastcall *v63)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  char (__fastcall *v65)(__int64, __int64, int); // rax
  int RectangleMesh; // eax
  int v67; // ebx
  int appended; // eax
  float v69; // xmm5_4
  float v70; // xmm6_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm7_4
  float v74; // xmm11_4
  float v75; // xmm10_4
  float v76; // xmm8_4
  float v77; // xmm9_4
  unsigned int v78; // r11d
  int v79; // r15d
  int v80; // r10d
  unsigned int v81; // ebx
  float v82; // xmm3_4
  float *v83; // rcx
  float v84; // xmm4_4
  float *v85; // rdx
  __int64 v86; // rax
  float v87; // xmm0_4
  float v88; // xmm4_4
  float v89; // xmm1_4
  float v90; // xmm3_4
  float *v91; // r14
  float v92; // xmm12_4
  signed __int64 v93; // r12
  float v94; // xmm13_4
  float v95; // xmm14_4
  float v96; // xmm15_4
  float v97; // xmm0_4
  float v98; // xmm2_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm0_4
  unsigned int v102; // eax
  float v103; // xmm5_4
  float v104; // xmm6_4
  int v105; // ecx
  __int64 v106; // rax
  float v107; // xmm2_4
  float v108; // xmm3_4
  float v109; // xmm3_4
  float v110; // xmm2_4
  __int64 v111; // rcx
  __int64 v113; // xmm1_8
  __m128 v114; // xmm7
  float v115; // xmm10_4
  float v116; // xmm8_4
  float v117; // xmm9_4
  CCpuClip *v118; // rcx
  __m128 v119; // xmm0
  __m128 v120; // xmm1
  __m128 v121; // xmm0
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  __m128 v124; // xmm1
  int v125; // eax
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 (__fastcall *v128)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  int v130; // r9d
  __m128 v131; // xmm7
  __m128 v132; // xmm7
  __m128 v133; // xmm7
  int v134; // eax
  __int64 v135; // rdx
  float v136; // xmm2_4
  float v137; // xmm6_4
  float v138; // xmm7_4
  float v139; // xmm1_4
  float *v140; // r9
  int v141; // eax
  int v142; // eax
  __int64 v143; // r9
  char v144; // al
  __int64 v145; // rcx
  int v146; // eax
  unsigned int v147; // [rsp+28h] [rbp-E0h]
  __int16 v148; // [rsp+48h] [rbp-C0h]
  float v149; // [rsp+4Ch] [rbp-BCh] BYREF
  float v150; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v151; // [rsp+54h] [rbp-B4h] BYREF
  D2D1_MATRIX_3X2_F v152; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_MATRIX_3X2_F v153; // [rsp+70h] [rbp-98h] BYREF
  float v154; // [rsp+88h] [rbp-80h]
  float v155; // [rsp+8Ch] [rbp-7Ch]
  float v156; // [rsp+90h] [rbp-78h]
  float v157; // [rsp+94h] [rbp-74h]
  _OWORD v158[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v159; // [rsp+B8h] [rbp-50h]
  __int128 v160; // [rsp+C8h] [rbp-40h]
  int v161; // [rsp+D8h] [rbp-30h]
  __int128 v162; // [rsp+E8h] [rbp-20h] BYREF
  D2D1_MATRIX_3X2_F v163; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v164; // [rsp+118h] [rbp+10h] BYREF
  D2D1_MATRIX_3X2_F v165; // [rsp+128h] [rbp+20h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+140h] [rbp+38h] BYREF
  void **v167; // [rsp+158h] [rbp+50h] BYREF
  __int64 v168; // [rsp+160h] [rbp+58h]
  void *v169; // [rsp+168h] [rbp+60h] BYREF
  _BYTE *v170; // [rsp+170h] [rbp+68h]
  int v171; // [rsp+178h] [rbp+70h]
  __int64 v172; // [rsp+17Ch] [rbp+74h]
  _BYTE v173[16]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v174; // [rsp+198h] [rbp+90h]
  __m128 v175; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v176[48]; // [rsp+1B8h] [rbp+B0h]
  __int128 v177; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v178; // [rsp+200h] [rbp+F8h]
  __int128 v179; // [rsp+208h] [rbp+100h]
  void *lpMem; // [rsp+218h] [rbp+110h] BYREF
  _BYTE *v181; // [rsp+220h] [rbp+118h]
  int v182; // [rsp+228h] [rbp+120h]
  __int64 v183; // [rsp+22Ch] [rbp+124h]
  _BYTE v184[112]; // [rsp+238h] [rbp+130h] BYREF

  v4 = *((_DWORD *)this + 586);
  v177 = 0uLL;
  v178 = 0LL;
  lpMem = v184;
  v181 = v184;
  v151 = 2;
  v182 = 2;
  v183 = 2LL;
  v7 = *((_DWORD *)this + 3) == 1;
  v167 = &CRectanglesShape::`vftable';
  v169 = v173;
  v170 = v173;
  v179 = 0LL;
  *(_QWORD *)&v162 = 0LL;
  v168 = 0LL;
  v171 = 1;
  v172 = 1LL;
  v174 = 0LL;
  v148 = 0;
  if ( v7 )
  {
    v10 = 0.0;
    v153.m11 = 0.0;
  }
  else
  {
    v7 = (*((_BYTE *)a2 + 20) & 2) == 0;
    v10 = *((float *)a2 + 4);
    v153.m11 = v10;
    if ( !v7 && v10 != 0.0 )
      *((_BYTE *)this + 2465) = 1;
  }
  if ( a4 )
  {
    v113 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&v165.m11 = *(_OWORD *)a4;
    *(_QWORD *)&v165.m[2][0] = v113;
    if ( !D2D1IsMatrixInvertible(&v165) )
    {
      v67 = 0;
      goto LABEL_54;
    }
  }
  else
  {
    *(_OWORD *)&v165.m11 = _xmm;
    *(_QWORD *)&v165.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  if ( !*((_BYTE *)this + 2464)
    || (v11 = (_QWORD *)*((_QWORD *)this + 2), !*v11) && !v11[2]
    || (v164 = *(_OWORD *)a2, CCpuClip::FullyContains((__int64)v11, (__int64)&v164, (__int64)a4)) )
  {
    m11_low = (__m128)LODWORD(v165.m11);
    v13 = *(float *)a2;
    v14 = (__m128)LODWORD(v165.m11);
    m12_low = (__m128)LODWORD(v165.m12);
    v16 = *((float *)a2 + 1);
    v17 = *((float *)a2 + 2) - *(float *)a2;
    v18 = *((float *)a2 + 3) - v16;
    HIDWORD(v172) = 0;
    v14.m128_f32[0] = (float)(v165.m11 * v17) + (float)(v165.m21 * 0.0);
    v19 = _mm_shuffle_ps(v14, v14, 225);
    v19.m128_f32[0] = (float)(v165.m12 * v17) + (float)(v165.m22 * 0.0);
    v20 = _mm_shuffle_ps(v19, v19, 198);
    v20.m128_f32[0] = (float)(v165.m21 * v18) + (float)(v165.m11 * 0.0);
    m11_low.m128_f32[0] = (float)((float)(v165.m11 * v13) + (float)(v165.m21 * v16)) + v165.dx;
    v21 = _mm_shuffle_ps(v20, v20, 39);
    v21.m128_f32[0] = (float)(v165.m22 * v18) + (float)(v165.m12 * 0.0);
    m12_low.m128_f32[0] = (float)((float)(v165.m12 * v13) + (float)(v16 * v165.m22)) + v165.dy;
    *(__m128 *)&v152.m11 = _mm_shuffle_ps(v21, v21, 57);
    *(_QWORD *)&v152.m[2][0] = _mm_unpacklo_ps(m11_low, m12_low).m128_u64[0];
    v164 = _xmm;
    DynArrayImpl<0>::ShrinkToSize((__int64)&v169, 0x10u);
    if ( v174 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v174 + 16LL))(v174);
      v174 = 0LL;
    }
    *(_OWORD *)&v163.m11 = _xmm;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&v169,
      &v163,
      1u);
LABEL_11:
    v22 = (CRectanglesShape *)&v167;
    goto LABEL_12;
  }
  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
          (D2DMatrixHelper *)&v165,
          (const struct D2D_MATRIX_3X2_F *)&v151,
          &v149,
          &v152.m11) )
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
      (D2DMatrixHelper *)&v165,
      (const struct D2D_MATRIX_3X2_F *)&v151,
      &v149,
      &v152.m11);
  v114 = (__m128)v151;
  v114.m128_f32[0] = *(float *)&v151 * *(float *)a2;
  v161 = 0;
  v115 = v149 * *((float *)a2 + 1);
  v116 = *(float *)&v151 * *((float *)a2 + 2);
  v117 = v149 * *((float *)a2 + 3);
  v163 = v152;
  *(_QWORD *)&v164 = __PAIR64__(LODWORD(v115), v114.m128_u32[0]);
  *((_QWORD *)&v164 + 1) = __PAIR64__(LODWORD(v117), LODWORD(v116));
  D2D1::Matrix3x2F::Invert(&v163);
  v118 = (CCpuClip *)*((_QWORD *)this + 2);
  *(_OWORD *)&v176[8] = 0LL;
  v119 = (__m128)v175.m128_u64[0];
  *(_DWORD *)&v176[40] = 0;
  *(_DWORD *)&v176[44] = 1065353216;
  v119.m128_f32[0] = v163.m11;
  *(_QWORD *)&v176[24] = 1065353216LL;
  v120 = *(__m128 *)v176;
  v161 = 0;
  v121 = _mm_shuffle_ps(v119, v119, 225);
  v120.m128_f32[0] = v163.m21;
  v121.m128_f32[0] = v163.m12;
  v122 = _mm_shuffle_ps(v120, v120, 225);
  v122.m128_f32[0] = v163.m22;
  *(__m128 *)v176 = _mm_shuffle_ps(v122, v122, 225);
  v158[1] = *(_OWORD *)v176;
  v123 = *(__m128 *)&v176[32];
  v175 = _mm_shuffle_ps(v121, v121, 225);
  v123.m128_f32[0] = v163.dx;
  v158[0] = v175;
  v124 = _mm_shuffle_ps(v123, v123, 225);
  v124.m128_f32[0] = v163.dy;
  v159 = *(_OWORD *)&v176[16];
  *(__m128 *)&v176[32] = _mm_shuffle_ps(v124, v124, 225);
  v160 = *(_OWORD *)&v176[32];
  v125 = CCpuClip::ResolveClip(v118, (const struct CShape **)v153.m[1]);
  v67 = v125;
  if ( v125 < 0 )
  {
    v147 = 975;
    goto LABEL_114;
  }
  v126 = *(_QWORD *)&v153.m[1][0];
  if ( CShape::IsAxisAlignedRectangle(*(CShape **)&v153.m[1][0])
    && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v158, v127) )
  {
    v128 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v126 + 32LL);
    if ( v128 == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds(v126, (__int64)&v162, (CMILMatrix *)v158);
    else
      TightBounds = v128(v126, (__int64)&v162, (CMILMatrix *)v158);
    v67 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x3D5u);
      goto LABEL_54;
    }
    if ( *((_BYTE *)this + 28) )
      v130 = 50529027;
    else
      v130 = 0;
    v131 = _mm_shuffle_ps(v114, v114, 225);
    v131.m128_f32[0] = v115;
    v132 = _mm_shuffle_ps(v131, v131, 198);
    v132.m128_f32[0] = v116;
    v133 = _mm_shuffle_ps(v132, v132, 39);
    v133.m128_f32[0] = v117;
    *(__m128 *)&v153.m[1][0] = _mm_shuffle_ps(v133, v133, 57);
    *(_OWORD *)&v163.m11 = *(_OWORD *)&v153.m[1][0];
    *(_OWORD *)&matrix.m11 = v162;
    if ( ClipRectAndEdgeFlags(&v163.m11, SLODWORD(v10), &matrix.m11, v130, v153.m[1], (int *)&v153) )
    {
      LOBYTE(v148) = 1;
      v164 = *(_OWORD *)&v153.m[1][0];
    }
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v167, (const struct MilRectF *)&v164);
    *(float *)&v151 = 0.0;
    goto LABEL_11;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v167, (const struct MilRectF *)&v164);
  v125 = CShape::Combine(&v167, v135, v126, v158, 1, &v162);
  v67 = v125;
  if ( v125 < 0 )
  {
    v147 = 1013;
LABEL_114:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v125, v147);
    goto LABEL_54;
  }
  v136 = *((float *)this + 1);
  v137 = FLOAT_1_0;
  v148 = 257;
  v151 = 1;
  v149 = FLOAT_1_0;
  v138 = FLOAT_1_0;
  v150 = FLOAT_1_0;
  if ( v136 < 1.0 || *((float *)this + 2) < 1.0 )
  {
    v139 = *((float *)this + 2);
    v163.m11 = v136;
    *(_QWORD *)&v163.m[0][1] = 0LL;
    v163.m22 = v139;
    v163.dx = 0.0 - (float)(v136 * 0.0);
    v163.dy = 0.0 - (float)(v139 * 0.0);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&matrix,
      (const struct D2D1::Matrix3x2F *)&v152,
      (const struct D2D1::Matrix3x2F *)&v163);
    v163 = matrix;
    D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v163, (const struct D2D_MATRIX_3X2_F *)&v149, &v150, v140);
    v137 = v149;
    v138 = v150;
  }
  v22 = (CRectanglesShape *)v162;
  v141 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v162 + 32LL))(v162, &v162, 0LL);
  v67 = v141;
  if ( v141 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v141, 0x411u);
LABEL_110:
    if ( v22 )
      (**(void (__fastcall ***)(CRectanglesShape *, __int64, __int64, __int64))v22)(v22, 1LL, v25, v26);
    goto LABEL_54;
  }
  if ( (float)((float)(*((float *)&v162 + 2) - *(float *)&v162) * v137) <= 0.015625
    || (float)((float)(*((float *)&v162 + 3) - *((float *)&v162 + 1)) * v138) <= 0.015625 )
  {
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v22)(v22, 1LL);
    v22 = 0LL;
    HIBYTE(v148) = 0;
LABEL_50:
    ++*((_DWORD *)this + 612);
    if ( !(_BYTE)v148 )
      goto LABEL_51;
    if ( **((_QWORD **)this + 2) )
      ++*((_DWORD *)this + 26);
    if ( *(float *)&v151 == 0.0 )
    {
      ++dword_1802D6328;
      goto LABEL_52;
    }
    if ( v151 == 1 )
    {
      ++dword_1802D632C;
      goto LABEL_52;
    }
    if ( v151 == 2 )
LABEL_51:
      ++dword_1802D6324;
LABEL_52:
    v67 = 0;
    goto LABEL_53;
  }
LABEL_12:
  v23 = *(char (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v22 + 16LL);
  if ( v23 == CRectanglesShape::IsEmpty )
    IsEmpty = CRectanglesShape::IsEmpty(v22);
  else
    IsEmpty = v23(v22);
  if ( IsEmpty )
    goto LABEL_50;
  if ( a3 )
  {
    v27 = *((_BYTE *)a3 + 16);
    v177 = *(_OWORD *)a3;
    LOBYTE(v178) = v27;
    matrix = v165;
    D2D1InvertMatrix(&matrix);
    v28 = 0LL;
    m12 = v152.m12;
    m11 = v152.m11;
    m22 = v152.m22;
    m21 = v152.m21;
    dy = v152.dy;
    dx = v152.dx;
    v35 = HIDWORD(v183);
    v149 = 0.0;
    v36 = (float)(matrix.m21 * v152.m12) + (float)(matrix.m11 * v152.m11);
    v157 = v36;
    v37 = (float)(v152.m11 * matrix.m12) + (float)(matrix.m22 * v152.m12);
    v153.m12 = v37;
    v154 = (float)(matrix.m11 * v152.m21) + (float)(v152.m22 * matrix.m21);
    v150 = (float)(v152.m22 * matrix.m22) + (float)(v152.m21 * matrix.m12);
    v155 = (float)((float)(matrix.m11 * v152.dx) + (float)(v152.dy * matrix.m21)) + matrix.dx;
    v156 = (float)((float)(v152.dy * matrix.m22) + (float)(v152.dx * matrix.m12)) + matrix.dy;
    if ( *((_DWORD *)a3 + 8) )
    {
      while ( 1 )
      {
        v38 = (unsigned int *)(*((_QWORD *)a3 + 5) + 52 * v28);
        memset_0(&v175, 0, 0x38uLL);
        v39 = *((_DWORD *)this + 613);
        v176[36] = _bittest(&v39, LODWORD(v149));
        *(_OWORD *)&v176[20] = *(_OWORD *)(v38 + 9);
        v40 = *v38;
        v41 = *((float *)v38 + 3);
        v42 = v40;
        v43 = *((float *)v38 + 4);
        v44 = *(float *)v38;
        v45 = (__m128)v38[1];
        v46 = *((float *)v38 + 5);
        v47 = *((float *)v38 + 6);
        v48 = *((float *)v38 + 7);
        v49 = *((float *)v38 + 8);
        LODWORD(v162) = v45.m128_i32[0];
        *(float *)&v42 = (float)((float)(*(float *)&v40 * v36) + (float)(v37 * v41)) + (float)(v47 * 0.0);
        v50 = v45.m128_f32[0] * v36;
        v51 = *((float *)v38 + 2);
        *(_OWORD *)&v163.m11 = v42;
        v52 = (float)((float)(v43 * v37) + v50) + (float)(v48 * 0.0);
        v45.m128_f32[0] = (float)((float)(v45.m128_f32[0] * v154) + (float)(v150 * v43)) + (float)(v48 * 0.0);
        v53 = _mm_shuffle_ps(v45, v45, 225);
        v54 = v35 + 1;
        v55 = _mm_shuffle_ps(*(__m128 *)&v163.m11, *(__m128 *)&v163.m11, 225);
        v53.m128_f32[0] = (float)((float)(v51 * v154) + (float)(v150 * v46)) + (float)(v49 * 0.0);
        v56 = _mm_shuffle_ps(v53, v53, 198);
        v55.m128_f32[0] = v52;
        v57 = _mm_shuffle_ps(v55, v55, 198);
        v56.m128_f32[0] = (float)((float)(v155 * *(float *)&v40) + (float)(v156 * v41)) + v47;
        v58 = _mm_shuffle_ps(v56, v56, 39);
        v57.m128_f32[0] = (float)((float)(v46 * v153.m12) + (float)(v51 * v157)) + (float)(v49 * 0.0);
        v59 = _mm_shuffle_ps(v57, v57, 39);
        v59.m128_f32[0] = (float)((float)(v44 * v154) + (float)(v150 * v41)) + (float)(v47 * 0.0);
        v58.m128_f32[0] = (float)((float)(*(float *)&v162 * v155) + (float)(v156 * v43)) + v48;
        v60 = _mm_shuffle_ps(v59, v59, 57);
        v175 = v60;
        *(float *)&v159 = (float)((float)(v51 * v155) + (float)(v156 * v46)) + v49;
        *(float *)&v176[16] = *(float *)&v159;
        *(__m128 *)v176 = _mm_shuffle_ps(v58, v58, 57);
        if ( v35 + 1 < v35 )
        {
          v67 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else
        {
          if ( v54 <= (unsigned int)v183 )
          {
            v61 = v35++;
            v62 = (char *)lpMem + 56 * v61;
            *(__m128 *)v62 = v60;
            *((_OWORD *)v62 + 1) = *(_OWORD *)v176;
            *((_OWORD *)v62 + 2) = *(_OWORD *)&v176[16];
            *((_QWORD *)v62 + 6) = *(_QWORD *)&v176[32];
            HIDWORD(v183) = v54;
            goto LABEL_20;
          }
          v134 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&lpMem, 0x38u, 1, &v175);
          v67 = v134;
          if ( v134 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v134, 0xC0u);
        }
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x449u);
          goto LABEL_53;
        }
        v35 = HIDWORD(v183);
LABEL_20:
        v36 = v157;
        v28 = (unsigned int)(LODWORD(v149) + 1);
        v37 = v153.m12;
        v149 = *(float *)&v28;
        if ( (unsigned int)v28 >= *((_DWORD *)a3 + 8) )
          goto LABEL_21;
      }
    }
  }
  else
  {
    v35 = HIDWORD(v183);
    v177 = _xmm;
LABEL_21:
    dy = v152.dy;
    dx = v152.dx;
    m22 = v152.m22;
    m21 = v152.m21;
    m12 = v152.m12;
    m11 = v152.m11;
  }
  *(_QWORD *)&v162 = v35;
  *((_QWORD *)&v162 + 1) = lpMem;
  v179 = v162;
  v63 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v22 + 40LL);
  if ( v63 == CRectanglesShape::IsRectangles )
    IsRectangles = CRectanglesShape::IsRectangles(v22, (unsigned int *)&v153.m21);
  else
    IsRectangles = v63(v22, (unsigned int *)&v153.m21);
  if ( IsRectangles && LODWORD(v153.m21) == 1 )
  {
    v65 = *(char (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v22 + 48LL);
    if ( v65 == CRectanglesShape::GetRectangles )
      CRectanglesShape::GetRectangles((__int64)v22, (__int64)&v164, 1);
    else
      v65((__int64)v22, (__int64)&v164, 1);
    v162 = v164;
    *(_OWORD *)&v163.m11 = v164;
    RectangleMesh = Mesh::CreateRectangleMesh(
                      (CDrawListEntryBuilder *)((char *)this + 112),
                      (const struct Mesh::ContentInfo *)&v177,
                      (const struct D2D_RECT_F *)&v163,
                      LODWORD(v153.m11));
    v67 = RectangleMesh;
    if ( RectangleMesh < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleMesh, 0x462u);
    }
    else
    {
      if ( RectangleMesh
        || (appended = CDrawListEntryBuilder::AppendHWGeometry(
                         this,
                         *((_BYTE *)a2 + 20) & 1,
                         (*((_BYTE *)a2 + 20) & 2) != 0),
            v67 = appended,
            appended >= 0) )
      {
LABEL_31:
        v69 = FLOAT_1_0;
        if ( m11 != 1.0 || m12 != 0.0 || m21 != 0.0 || m22 != 1.0 || dx != 0.0 || dy != 0.0 )
        {
          v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m12) & _xmm);
          if ( v70 < 0.000081380211 && (v71 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m21) & _xmm), v71 < 0.000081380211)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m11) & _xmm) < 0.000081380211
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m22) & _xmm) < 0.000081380211 )
          {
            v163 = v152;
            v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m11) & _xmm);
            if ( v72 < 0.000081380211 )
            {
              v76 = FLOAT_N1_0;
              v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m21) & _xmm);
              if ( m12 >= 0.0 )
                v77 = FLOAT_1_0;
              else
                v77 = FLOAT_N1_0;
              v73 = v163.m22;
              v75 = v163.m11;
              if ( v163.m21 >= 0.0 )
                v76 = FLOAT_1_0;
            }
            else
            {
              v73 = FLOAT_N1_0;
              v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m11) & _xmm);
              v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(m22) & _xmm);
              if ( m11 < 0.0 )
                v75 = FLOAT_N1_0;
              else
                v75 = FLOAT_1_0;
              v76 = v163.m21;
              v77 = v163.m12;
              if ( v163.m22 >= 0.0 )
                v73 = FLOAT_1_0;
            }
          }
          else
          {
            D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
              (D2DMatrixHelper *)&v152,
              (struct D2D_MATRIX_3X2_F *)&v153.m[0][1],
              (float *)&v162,
              &v163.m11);
            v69 = FLOAT_1_0;
            v73 = v163.m22;
            v76 = v163.m21;
            v77 = v163.m12;
            v75 = v163.m11;
            v74 = *(float *)&v162;
            v70 = v153.m12;
          }
          v78 = v4;
          v25 = *((_QWORD *)this + 45);
          v26 = *((_QWORD *)this + 169);
          v79 = 8 * *(_DWORD *)this + 16;
          if ( v4 < *((_DWORD *)this + 586) )
          {
            v80 = v4 * v79;
            do
            {
              v81 = *(_DWORD *)this;
              v82 = *(float *)(v26 + v80 + 4);
              v83 = (float *)(v25 + v80);
              v84 = *(float *)(v26 + v80);
              v85 = (float *)(v26 + v80);
              v86 = 0LL;
              v87 = *v83 - v84;
              v88 = v84 * v70;
              v89 = v83[1] - v82;
              v90 = v82 * v74;
              *v83 = v87 + v88;
              v83[1] = v90 + v89;
              if ( v81 >= 2 )
              {
                v91 = v83 + 4;
                v92 = v69 / v70;
                *(_QWORD *)&v162 = ((v81 - 2) >> 1) + 1;
                v93 = (char *)v85 - (char *)v83;
                v86 = (unsigned int)(2 * v162);
                v94 = v69 / v74;
                v95 = v69 - (float)(v69 / v70);
                v96 = v69 - (float)(v69 / v74);
                do
                {
                  v97 = v94 * v91[1];
                  *v91 = (float)(v95 * *(float *)((char *)v91 + v93)) + (float)(v92 * *v91);
                  v98 = (float)(v96 * *(float *)((char *)v91 + v93 + 4)) + v97;
                  v99 = v92 * v91[2];
                  v91[1] = v98;
                  v100 = (float)(v95 * *(float *)((char *)v91 + v93 + 8)) + v99;
                  v101 = v94 * v91[3];
                  v91[2] = v100;
                  v91[3] = (float)(v96 * *(float *)((char *)v91 + v93 + 12)) + v101;
                  v91 += 4;
                  *(_QWORD *)&v162 = v162 - 1;
                }
                while ( (_QWORD)v162 );
              }
              if ( (unsigned int)v86 < v81 )
              {
                v83[2 * v86 + 4] = (float)((float)(v69 - (float)(v69 / v70)) * v85[2 * v86 + 4])
                                 + (float)((float)(v69 / v70) * v83[2 * v86 + 4]);
                v83[2 * v86 + 5] = (float)((float)(v69 - (float)(v69 / v74)) * v85[2 * v86 + 5])
                                 + (float)((float)(v69 / v74) * v83[2 * v86 + 5]);
              }
              *v85 = v88;
              ++v78;
              v85[1] = v90;
              v80 += v79;
              v102 = *((_DWORD *)this + 586);
            }
            while ( v78 < v102 );
            if ( v4 < v102 )
            {
              v103 = v163.dy;
              v104 = v163.dx;
              v105 = v4 * v79;
              do
              {
                v106 = v105;
                ++v4;
                v105 += v79;
                v107 = *(float *)(v25 + v106);
                v108 = *(float *)(v25 + v106 + 4);
                *(float *)(v25 + v106) = (float)((float)(v75 * v107) + (float)(v76 * v108)) + v104;
                *(float *)(v25 + v106 + 4) = (float)((float)(v77 * v107) + (float)(v73 * v108)) + v103;
                v109 = *(float *)(v26 + v106);
                v110 = *(float *)(v26 + v106 + 4);
                *(float *)(v26 + v106) = (float)((float)(v76 * v110) + (float)(v75 * v109)) + v104;
                *(float *)(v26 + v106 + 4) = (float)((float)(v73 * v110) + (float)(v77 * v109)) + v103;
              }
              while ( v4 < *((_DWORD *)this + 586) );
            }
          }
        }
        goto LABEL_50;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x467u);
    }
  }
  else if ( *((_QWORD *)this + 44)
         || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 44),
             v142 = CDrawListEntryBuilder::GeometrySink::Create(
                      this,
                      (struct CDrawListEntryBuilder::GeometrySink **)this + 44),
             v67 = v142,
             v142 >= 0) )
  {
    v143 = *((unsigned int *)this + 3);
    v144 = *((_BYTE *)a2 + 20);
    v145 = *((_QWORD *)this + 44);
    v162 = v164;
    *(_OWORD *)&v163.m11 = v164;
    v146 = CDrawListEntryBuilder::GeometrySink::AppendHWGeometry(
             v145,
             v22,
             &v177,
             v143,
             LODWORD(v153.m11),
             &v163,
             v144 & 1,
             (v144 & 2) != 0);
    v67 = v146;
    if ( v146 >= 0 )
      goto LABEL_31;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v146, 0x472u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v142, 0x46Eu);
  }
LABEL_53:
  if ( HIBYTE(v148) )
    goto LABEL_110;
LABEL_54:
  HIDWORD(v172) = 0;
  v167 = &CRectanglesShape::`vftable';
  DynArrayImpl<0>::ShrinkToSize((__int64)&v169, 0x10u);
  if ( v174 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v174 + 16LL))(v174);
    v174 = 0LL;
  }
  if ( v169 != v170 )
  {
    operator delete(v169);
    v169 = 0LL;
  }
  v111 = v168;
  if ( v168 )
  {
    v168 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
  }
  if ( lpMem != v181 )
    operator delete(lpMem);
  return (unsigned int)v67;
}
