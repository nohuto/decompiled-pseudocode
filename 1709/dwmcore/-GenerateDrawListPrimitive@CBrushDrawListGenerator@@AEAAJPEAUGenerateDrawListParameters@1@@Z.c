/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004A700 (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18001FB60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180048234 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180048570 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180048A10 (--0SamplerMode@@QEAA@XZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?GetTextureSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18004C480 (-GetTextureSize@CD2DBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x18006CA70 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800702DC (--4-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsOpaque@CAtlasImageSource@@UEBA_NXZ @ 0x18008EE40 (-IsOpaque@CAtlasImageSource@@UEBA_NXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180095758 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x18009F824 (-IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x1800A01A4 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800A0244 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3494 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3630 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B37C8 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1800B6F60 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800B6FE8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BDC50 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 *     ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x180155AFC (-ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801C8CAC (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2,
        __int64 a3,
        __int64 a4)
{
  CCpuClip *v4; // r15
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v5; // r14
  char v7; // r13
  __int64 v8; // r8
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  float v17; // xmm7_4
  float v18; // xmm6_4
  _QWORD *v19; // r15
  __int64 v20; // rdi
  char v21; // r14
  __int64 v22; // rbx
  CCompositionSurfaceBitmap *v23; // rcx
  bool (__fastcall *v24)(CAtlasImageSource *__hidden); // rax
  char IsOpaque; // al
  __int64 v26; // rdx
  bool v27; // cf
  int v28; // ecx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r12
  __int16 v34; // cx
  __int64 v35; // rbx
  LPVOID Value; // rdi
  int v37; // ecx
  CCommonRenderingEffect *v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rdi
  CDrawListBitmap *v42; // r14
  __int64 v43; // rdi
  SamplerMode *v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int128 v47; // xmm1
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rcx
  __int64 (__fastcall *v51)(CCommonRenderingEffect *); // rax
  unsigned int UsedSamplersBitmask; // eax
  _QWORD *v53; // rax
  __int64 (__fastcall *v54)(CMILRefCountBase *); // rax
  CCommonRenderingEffect *v55; // rcx
  __int64 (__fastcall *v56)(CCommonRenderingEffect *); // rax
  unsigned int v57; // eax
  __int128 v58; // xmm0
  unsigned int v59; // edi
  CRectanglesShape **v60; // rbx
  struct CShape *v61; // r14
  CRectanglesShape *v62; // rcx
  char v63; // r15
  CoordMap *v64; // r12
  unsigned int v65; // r10d
  unsigned int v66; // r8d
  const struct D2D_MATRIX_3X2_F *v67; // rdx
  __int64 v68; // r9
  unsigned int v69; // r13d
  __m128 v70; // xmm6
  __m128 v71; // xmm6
  __m128 v72; // xmm6
  struct D2D_RECT_F v73; // xmm6
  struct D2D_RECT_F *v74; // r9
  char v75; // r11
  unsigned __int64 v76; // xmm4_8
  const struct D2D_MATRIX_3X2_F *v77; // r8
  CRectanglesShape *v78; // rbx
  char IsRectangles; // al
  int TightBounds; // eax
  struct D2D_RECT_F *v81; // r9
  float v82; // xmm7_4
  float v83; // xmm9_4
  float v84; // xmm8_4
  __m128 v85; // xmm6
  __m128 v86; // xmm0
  __m128 v87; // xmm0
  __m128 v88; // xmm0
  __m128 v89; // xmm0
  bool DoesContain; // al
  int v91; // xmm1_4
  int v92; // xmm1_4
  int v93; // xmm0_4
  int v94; // xmm1_4
  int v95; // eax
  int v96; // eax
  CRectanglesShape *(__fastcall **v97)(CRectanglesShape *, char); // rax
  char (__fastcall *v98)(CRectanglesShape *, unsigned int *); // r8
  char v99; // al
  CRectanglesShape *(__fastcall *v100)(CRectanglesShape *, char); // rax
  __int64 v101; // r15
  __int64 v102; // rbx
  char *v103; // r14
  float *v104; // rcx
  float *v105; // r8
  float *v106; // rdx
  float *v107; // rax
  __int128 v108; // xmm0
  char v109; // al
  __m128 v110; // xmm2
  __m128 *v111; // rcx
  __m128 v112; // xmm3
  __m128 v113; // xmm3
  __m128 v114; // xmm3
  __m128 v115; // xmm3
  __m128 v116; // xmm0
  CDrawListEntryBuilder *v117; // rcx
  __m128 v118; // xmm0
  __m128 v119; // xmm0
  __m128 v120; // xmm0
  __m128 v121; // xmm0
  int v122; // eax
  CD2DBitmap *v124; // rcx
  struct D2D_SIZE_U (__fastcall *v125)(CD2DBitmap *__hidden); // rax
  __int64 v126; // rdx
  unsigned __int8 v127; // dl
  float v128; // xmm1_4
  CRectanglesShape *(__fastcall *v129)(CRectanglesShape *, char); // rax
  bool v130; // zf
  CRectanglesShape *v131; // rcx
  int v132; // eax
  int AllHollowRects; // eax
  unsigned int v134; // eax
  int v135; // r10d
  _OWORD *v136; // rdx
  _OWORD *v137; // r8
  int v138; // ecx
  __int64 v139; // r9
  unsigned int v140; // ebx
  unsigned int v141; // r8d
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r9
  __int64 v145; // r15
  unsigned int i; // r14d
  float v147; // xmm5_4
  float v148; // xmm6_4
  float v149; // xmm8_4
  float v150; // xmm7_4
  int v151; // r10d
  __int64 v152; // r11
  float v153; // xmm5_4
  int v154; // edx
  unsigned int v155; // r8d
  int v156; // eax
  int v157; // ecx
  int v158; // edx
  int v159; // edx
  int v160; // ecx
  int v161; // edx
  float v162; // xmm1_4
  unsigned int v163; // edx
  int v164; // eax
  int v165; // eax
  _QWORD *v166; // rax
  DWORD v167; // ecx
  CRectanglesShape *(__fastcall *v168)(CRectanglesShape *, char); // rax
  __int128 v169; // xmm0
  float m21; // xmm4_4
  float m22; // xmm3_4
  float m12; // xmm5_4
  __m128 m11_low; // xmm10
  __m128 v174; // xmm9
  __m128 v175; // xmm9
  __m128 v176; // xmm9
  __m128 v177; // xmm1
  __m128 v178; // xmm9
  int v179; // eax
  __int128 v180; // xmm1
  __int128 v181; // xmm0
  float *v182; // rax
  int inserted; // eax
  int v184; // eax
  __int128 v185; // xmm1
  int v186; // eax
  struct D2D_MATRIX_3X2_F *v187; // r9
  __m128 v188; // xmm3
  __m128 v189; // xmm3
  __m128 v190; // xmm3
  float *v191; // rax
  __int64 v192; // r9
  __int64 v193; // rcx
  __int64 v194; // rdx
  int v195; // eax
  __int128 v196; // xmm1
  unsigned __int8 v197; // [rsp+40h] [rbp-C0h]
  char v198; // [rsp+40h] [rbp-C0h]
  char v199; // [rsp+41h] [rbp-BFh]
  char v200; // [rsp+41h] [rbp-BFh]
  CRectanglesShape *v201; // [rsp+48h] [rbp-B8h] BYREF
  char v202; // [rsp+50h] [rbp-B0h]
  char v203; // [rsp+51h] [rbp-AFh]
  unsigned int v204; // [rsp+54h] [rbp-ACh]
  __int64 v205; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v206; // [rsp+60h] [rbp-A0h]
  unsigned int v207; // [rsp+64h] [rbp-9Ch] BYREF
  struct D2D_RECT_F v208; // [rsp+68h] [rbp-98h] BYREF
  __int64 v209; // [rsp+78h] [rbp-88h]
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v210; // [rsp+80h] [rbp-80h]
  struct D2D_MATRIX_3X2_F v211; // [rsp+88h] [rbp-78h] BYREF
  int v212; // [rsp+A0h] [rbp-60h] BYREF
  int v213; // [rsp+A4h] [rbp-5Ch]
  __int64 v214; // [rsp+A8h] [rbp-58h] BYREF
  CCommonRenderingEffect *v215; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v216; // [rsp+B8h] [rbp-48h]
  __int128 v217; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v218[20]; // [rsp+D0h] [rbp-30h]
  __int128 v219; // [rsp+E8h] [rbp-18h] BYREF
  char v220; // [rsp+F8h] [rbp-8h]
  __int128 v221; // [rsp+100h] [rbp+0h] BYREF
  char v222; // [rsp+110h] [rbp+10h]
  __int128 v223; // [rsp+118h] [rbp+18h] BYREF
  __int128 v224; // [rsp+128h] [rbp+28h]
  CRectanglesShape **v225; // [rsp+138h] [rbp+38h]
  struct CShape *v226; // [rsp+140h] [rbp+40h] BYREF
  char v227; // [rsp+148h] [rbp+48h]
  float v228; // [rsp+150h] [rbp+50h] BYREF
  __int64 v229; // [rsp+154h] [rbp+54h]
  int v230; // [rsp+15Ch] [rbp+5Ch]
  float v231; // [rsp+160h] [rbp+60h]
  int v232; // [rsp+164h] [rbp+64h]
  float v233; // [rsp+168h] [rbp+68h]
  float v234; // [rsp+16Ch] [rbp+6Ch]
  int v235; // [rsp+170h] [rbp+70h]
  float v236[6]; // [rsp+178h] [rbp+78h] BYREF
  unsigned __int64 v237; // [rsp+190h] [rbp+90h]
  int v238; // [rsp+198h] [rbp+98h]
  __int64 v239; // [rsp+1A0h] [rbp+A0h]
  __int128 v240; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v241; // [rsp+1E0h] [rbp+E0h]
  __int128 v242; // [rsp+1F0h] [rbp+F0h]
  __int128 v243; // [rsp+200h] [rbp+100h]
  int v244; // [rsp+210h] [rbp+110h]
  _DWORD v245[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v246; // [rsp+228h] [rbp+128h]
  int v247; // [rsp+230h] [rbp+130h]
  int v248; // [rsp+234h] [rbp+134h]
  __int64 v249; // [rsp+238h] [rbp+138h]
  __int128 v250; // [rsp+240h] [rbp+140h]
  int v251; // [rsp+250h] [rbp+150h]
  int v252; // [rsp+254h] [rbp+154h]
  int v253; // [rsp+258h] [rbp+158h]
  __int64 v254; // [rsp+25Ch] [rbp+15Ch]
  __int128 v255; // [rsp+270h] [rbp+170h]
  __int128 v256; // [rsp+280h] [rbp+180h]
  struct D2D_RECT_F v257; // [rsp+290h] [rbp+190h] BYREF
  __int128 v258; // [rsp+2A0h] [rbp+1A0h] BYREF
  __m128 v259; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v260; // [rsp+2C0h] [rbp+1C0h]
  __m128 v261; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v262; // [rsp+2E0h] [rbp+1E0h]
  struct D2D_RECT_F v263; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v264; // [rsp+300h] [rbp+200h]
  __int128 v265; // [rsp+310h] [rbp+210h] BYREF
  char v266; // [rsp+320h] [rbp+220h] BYREF
  float v267[9]; // [rsp+344h] [rbp+244h] BYREF
  float v268[9]; // [rsp+368h] [rbp+268h] BYREF
  char v269; // [rsp+38Ch] [rbp+28Ch] BYREF
  struct D2D_RECT_F v270; // [rsp+3B0h] [rbp+2B0h] BYREF
  unsigned __int64 v271; // [rsp+3C0h] [rbp+2C0h]
  __m128 v272; // [rsp+3C8h] [rbp+2C8h] BYREF
  __m128 v273; // [rsp+3D8h] [rbp+2D8h] BYREF
  struct D2D_MATRIX_3X2_F v274; // [rsp+3E8h] [rbp+2E8h] BYREF
  struct D2D_RECT_F v275; // [rsp+400h] [rbp+300h] BYREF
  __int64 v276; // [rsp+410h] [rbp+310h]
  __int128 v277; // [rsp+418h] [rbp+318h] BYREF
  struct D2D_RECT_F v278; // [rsp+428h] [rbp+328h] BYREF
  unsigned __int64 v279; // [rsp+438h] [rbp+338h]
  _QWORD v280[2]; // [rsp+440h] [rbp+340h] BYREF
  int v281; // [rsp+450h] [rbp+350h]
  __int64 v282; // [rsp+454h] [rbp+354h]
  char v283; // [rsp+460h] [rbp+360h] BYREF
  _QWORD v284[2]; // [rsp+468h] [rbp+368h] BYREF
  int v285; // [rsp+478h] [rbp+378h]
  __int64 v286; // [rsp+47Ch] [rbp+37Ch]
  char v287; // [rsp+488h] [rbp+388h] BYREF
  _QWORD v288[2]; // [rsp+490h] [rbp+390h] BYREF
  int v289; // [rsp+4A0h] [rbp+3A0h]
  __int64 v290; // [rsp+4A4h] [rbp+3A4h]
  _BYTE v291[48]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _QWORD v292[2]; // [rsp+4E0h] [rbp+3E0h] BYREF
  int v293; // [rsp+4F0h] [rbp+3F0h]
  __int64 v294; // [rsp+4F4h] [rbp+3F4h]
  _BYTE v295[48]; // [rsp+500h] [rbp+400h] BYREF
  _QWORD v296[2]; // [rsp+530h] [rbp+430h] BYREF
  int v297; // [rsp+540h] [rbp+440h]
  __int64 v298; // [rsp+544h] [rbp+444h]
  _BYTE v299[32]; // [rsp+550h] [rbp+450h] BYREF
  __m128 v300; // [rsp+570h] [rbp+470h] BYREF
  __m128 v301; // [rsp+580h] [rbp+480h] BYREF
  char v302; // [rsp+590h] [rbp+490h]
  __int128 v303; // [rsp+5A0h] [rbp+4A0h]
  __m128 v304; // [rsp+5B0h] [rbp+4B0h] BYREF
  __int128 v305; // [rsp+5C0h] [rbp+4C0h] BYREF
  _OWORD v306[13]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _OWORD v307[9]; // [rsp+6A0h] [rbp+5A0h] BYREF
  void *retaddr; // [rsp+808h] [rbp+708h]

  v130 = *((_BYTE *)a2 + 40) == 0;
  v4 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8);
  v5 = a2;
  v210 = a2;
  v214 = (__int64)a2 + 8;
  if ( !v130 )
  {
    CShapePtr::Release((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 24));
    *((_BYTE *)v4 + 32) = 0;
  }
  v7 = 0;
  if ( !*(_QWORD *)(*((_QWORD *)v5 + 65) + 32LL) )
  {
    v8 = *(_QWORD *)this;
    v244 = 0;
    v9 = *(_DWORD *)(v8 + 256);
    v10 = *(_DWORD *)(v8 + 480);
    v11 = v9 != 0;
    v207 = v11;
    if ( v10 )
    {
      v12 = (unsigned int)(v10 - 1);
      v13 = *(_QWORD *)(v8 + 496);
      v14 = *(_OWORD *)(68 * v12 + v13 + 16);
      v240 = *(_OWORD *)(68 * v12 + v13);
      v15 = *(_OWORD *)(68 * v12 + v13 + 32);
      v241 = v14;
      v16 = *(_OWORD *)(68 * v12 + v13 + 48);
      LODWORD(v13) = *(_DWORD *)(68 * v12 + v13 + 64);
      v242 = v15;
      v243 = v16;
      v244 = v13;
    }
    else
    {
      CMILMatrix::operator=(&v240, CBrushRenderingEffect::GetUsedSamplersBitmask, v8, a4);
    }
    v17 = sqrtf_0((float)(*(float *)&v240 * *(float *)&v240) + (float)(*((float *)&v240 + 1) * *((float *)&v240 + 1)));
    v18 = sqrtf_0((float)(*(float *)&v241 * *(float *)&v241) + (float)(*((float *)&v241 + 1) * *((float *)&v241 + 1)));
    v197 = 0;
    if ( (*(_QWORD *)v4 || *((_QWORD *)v4 + 2)) && !v9 )
    {
      if ( CCpuClip::IsAxisAlignedRectangle(v4)
        && ((LOBYTE(v126) = 1, (unsigned __int8)CMILMatrix::Is2DAffine<1>(&v240, v126))
         && (v128 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v240 + 1) - 0.0)) & _xmm),
             v128 < 0.000081380211)
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v241 - 0.0)) & _xmm) < 0.000081380211
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v240 - 0.0)) & _xmm) < 0.000081380211
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v241 + 1) - 0.0)) & _xmm) < 0.000081380211) )
      {
        v7 = 0;
        v197 = v127;
      }
      else
      {
        v7 = 1;
        v197 = 0;
      }
    }
    v19 = (_QWORD *)((char *)this + 48);
    if ( *((_QWORD *)this + 6)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 17) - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      v21 = 0;
    }
    else
    {
      v20 = 0LL;
      v21 = 1;
      if ( *((_DWORD *)this + 26) )
      {
        do
        {
          v22 = *((_QWORD *)this + v20 + 9);
          if ( v22
            && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*((_QWORD *)this + v20 + 9)) == 1
            && !*(_BYTE *)(v22 + 160) )
          {
            v23 = *(CCompositionSurfaceBitmap **)(v22 + 144);
            v24 = *(bool (__fastcall **)(CAtlasImageSource *__hidden))(*(_QWORD *)v23 + 104LL);
            if ( (char *)v24 == (char *)CCompositionSurfaceBitmap::IsOpaque )
              IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v23);
            else
              IsOpaque = v24 == CAtlasImageSource::IsOpaque
                       ? CAtlasImageSource::IsOpaque(v23)
                       : ((__int64 (*)(void))v24)();
            if ( !IsOpaque )
              v21 = 0;
          }
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (unsigned int)v20 < *((_DWORD *)this + 26) );
        v11 = v207;
        v19 = (_QWORD *)((char *)this + 48);
      }
    }
    memset_0(&v223, 0, 0x20uLL);
    LODWORD(v223) = *((_DWORD *)this + 26);
    *(_QWORD *)&v224 = v214;
    v27 = *((_BYTE *)this + 110) != 0;
    *(_QWORD *)((char *)&v223 + 4) = __PAIR64__(LODWORD(v18), LODWORD(v17));
    HIDWORD(v223) = v11;
    v28 = *((_DWORD *)this + 10) | (v197 << 6) | (v27 ? 0x20 : 0);
    BYTE12(v224) = v7;
    if ( !*((_BYTE *)v210 + 528) && v21 )
    {
      v30 = 1;
      v29 = 129LL;
    }
    else
    {
      v29 = 128LL;
      v30 = 0;
    }
    if ( CCommonRegistryData::m_fDisableDrawListCaching
      || (v26 = *(_QWORD *)this, !*(_BYTE *)(*(_QWORD *)this + 6830LL))
      || *(_QWORD *)(v26 + 3336) )
    {
      v30 = v29;
    }
    v215 = 0LL;
    v130 = *v19 == 0LL;
    DWORD2(v224) = v28 | v30;
    if ( v130 )
    {
      v31 = *((_QWORD *)this + 9);
      v198 = 0;
      v220 = 0;
      v202 = 0;
      v222 = 0;
      LOWORD(v204) = 257;
      v203 = 1;
      LOWORD(v205) = 257;
      v199 = 1;
      v219 = 0LL;
      v221 = 0LL;
      if ( v31 && (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 8LL))(v31, v26, v29) == 1 )
      {
        v32 = *(_QWORD *)(v31 + 144);
        if ( v32 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 8LL))(*(_QWORD *)(v31 + 144));
          *(_QWORD *)&v219 = v32;
        }
        else
        {
          v32 = v219;
        }
        v33 = *(_QWORD *)(v31 + 152);
        if ( v33 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 8LL))(*(_QWORD *)(v31 + 152));
          *((_QWORD *)&v219 + 1) = v33;
        }
        else
        {
          v33 = *((_QWORD *)&v219 + 1);
        }
        v34 = *(_WORD *)(v31 + 64);
        v198 = *(_BYTE *)(v31 + 160);
        v220 = v198;
        v203 = *(_BYTE *)(v31 + 66);
        v206 = v34;
      }
      else
      {
        v33 = *((_QWORD *)&v219 + 1);
        v32 = v219;
        v206 = v204;
      }
      v35 = *((_QWORD *)this + 10);
      if ( v35 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 8LL))(*((_QWORD *)this + 10)) == 1 )
      {
        CDrawListBitmap::operator=((CArrayBasedCoverageSet **)&v221, v35 + 144);
        LOWORD(v204) = *(_WORD *)(v35 + 64);
        v199 = *(_BYTE *)(v35 + 66);
        v202 = v222;
      }
      else
      {
        LOWORD(v204) = v205;
      }
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v166 = operator new(0xA8uLL);
        Value = v166;
        if ( !v166 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        v167 = CThreadContext::s_dwTlsIndex;
        *v166 = 0LL;
        v166[1] = 0LL;
        v166[2] = 0LL;
        v166[3] = 0LL;
        v166[4] = 0LL;
        v166[5] = 0LL;
        v166[6] = 0LL;
        v166[7] = 0LL;
        v166[8] = 0LL;
        v166[9] = 0LL;
        v166[10] = 0LL;
        v166[11] = 0LL;
        v166[12] = 0LL;
        v166[13] = 0LL;
        v166[14] = 0LL;
        v166[15] = 0LL;
        v166[16] = 0LL;
        v166[17] = 0LL;
        v166[18] = 0LL;
        v166[19] = 0LL;
        v166[20] = 0LL;
        TlsSetValue(v167, v166);
      }
      v37 = *((_DWORD *)Value + 23);
      v38 = 0LL;
      if ( v37 )
      {
        v38 = (CCommonRenderingEffect *)*((_QWORD *)Value + 12);
        *((_QWORD *)Value + 12) = *(_QWORD *)v38;
        *((_DWORD *)Value + 23) = v37 - 1;
      }
      v39 = *((_QWORD *)&v221 + 1);
      v216 = *((_QWORD *)&v221 + 1);
      v40 = v221;
      v239 = v221;
      if ( v38 || (v38 = (CCommonRenderingEffect *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
      {
        v41 = 2LL;
        *(_QWORD *)v38 = &CMILRefCountBase::`vftable';
        v42 = (CCommonRenderingEffect *)((char *)v38 + 16);
        *((_DWORD *)v38 + 2) = 0;
        *(_QWORD *)v38 = &CCommonRenderingEffect::`vftable';
        do
        {
          CDrawListBitmap::CDrawListBitmap(v42);
          v42 = (CDrawListBitmap *)((char *)v42 + 24);
          --v41;
        }
        while ( v41 );
        v43 = 2LL;
        v44 = (CCommonRenderingEffect *)((char *)v38 + 64);
        do
        {
          SamplerMode::SamplerMode(v44);
          v44 = (SamplerMode *)((char *)v44 + 3);
          --v43;
        }
        while ( v43 );
        if ( *((_QWORD *)v38 + 2) != v32 )
        {
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
          v45 = *((_QWORD *)v38 + 2);
          *((_QWORD *)v38 + 2) = v32;
          if ( v45 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        }
        if ( *((_QWORD *)v38 + 3) != v33 )
        {
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
          v46 = *((_QWORD *)v38 + 3);
          *((_QWORD *)v38 + 3) = v33;
          if ( v46 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
        }
        v40 = v239;
        *((_BYTE *)v38 + 32) = v198;
        if ( *((_QWORD *)v38 + 5) != v40 )
        {
          v205 = v40;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v205);
          v205 = *((_QWORD *)v38 + 5);
          *((_QWORD *)v38 + 5) = v40;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v205);
        }
        v39 = v216;
        if ( *((_QWORD *)v38 + 6) != v216 )
        {
          v214 = v216;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v214);
          v214 = *((_QWORD *)v38 + 6);
          *((_QWORD *)v38 + 6) = v39;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v214);
        }
        *((_BYTE *)v38 + 56) = v202;
        *((_WORD *)v38 + 32) = v206;
        *((_BYTE *)v38 + 66) = v203;
        *(_WORD *)((char *)v38 + 67) = v204;
        *((_BYTE *)v38 + 69) = v199;
        (**(void (__fastcall ***)(CCommonRenderingEffect *))v38)(v38);
      }
      else
      {
        v38 = 0LL;
      }
      v215 = v38;
      if ( !v38 )
      {
        v59 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x22Fu);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v221 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v221);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v219 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v219);
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v215);
        return v59;
      }
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    else
    {
      Microsoft::WRL::ComPtr<CRenderingEffect>::operator=(&v215, v19, v29);
      v38 = v215;
    }
    v5 = v210;
    v47 = v224;
    v48 = *((_QWORD *)v210 + 65);
    *(_OWORD *)v48 = v223;
    *(_OWORD *)(v48 + 16) = v47;
    if ( *(_DWORD *)v48 > 2u )
      v49 = 4;
    else
      v49 = 2;
    *(_DWORD *)v48 = v49;
    if ( *(CCommonRenderingEffect **)(v48 + 32) != v38 )
    {
      if ( v38 )
        (**(void (__fastcall ***)(CCommonRenderingEffect *))v38)(v38);
      v50 = *(_QWORD *)(v48 + 32);
      *(_QWORD *)(v48 + 32) = v38;
      if ( v50 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
    }
    v51 = *(__int64 (__fastcall **)(CCommonRenderingEffect *))(*(_QWORD *)v38 + 24LL);
    if ( v51 == CCommonRenderingEffect::GetUsedSamplersBitmask )
    {
      UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v38);
    }
    else if ( (char *)v51 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
    {
      UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(v38);
    }
    else
    {
      UsedSamplersBitmask = v51(v38);
    }
    *(_DWORD *)(v48 + 2452) = UsedSamplersBitmask;
    v53 = *(_QWORD **)(v48 + 16);
    *(_BYTE *)(v48 + 2465) = 0;
    if ( !*v53 && !v53[2] || *(_DWORD *)(v48 + 12) == 1 )
      *(_BYTE *)(v48 + 28) = 0;
    *(_BYTE *)(v48 + 2464) = ((*(_BYTE *)(v48 + 24) & 0x20) != 0 || !*v53)
                          && CCommonRegistryData::m_fEnableCpuClipping != 0;
    *(_DWORD *)(v48 + 384) = 0;
    *(_DWORD *)(v48 + 1376) = 0;
    *(_DWORD *)(v48 + 2376) = 0;
    *(_DWORD *)(v48 + 2344) = 0;
    *(_DWORD *)(v48 + 2448) = 0;
    v54 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v38 + 8LL);
    if ( v54 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v38);
    else
      v54(v38);
  }
  v55 = *(CCommonRenderingEffect **)(*((_QWORD *)v5 + 65) + 32LL);
  v56 = *(__int64 (__fastcall **)(CCommonRenderingEffect *))(*(_QWORD *)v55 + 24LL);
  if ( v56 == CCommonRenderingEffect::GetUsedSamplersBitmask )
  {
    v57 = CCommonRenderingEffect::GetUsedSamplersBitmask(v55);
  }
  else if ( (char *)v56 == (char *)CBrushRenderingEffect::GetUsedSamplersBitmask )
  {
    v57 = CBrushRenderingEffect::GetUsedSamplersBitmask(v55);
  }
  else
  {
    v57 = ((__int64 (__fastcall *)(CCommonRenderingEffect *, unsigned int (__fastcall *)(CBrushRenderingEffect *__hidden)))v56)(
            v55,
            CBrushRenderingEffect::GetUsedSamplersBitmask);
  }
  v58 = *((_OWORD *)this + 1);
  LODWORD(v205) = v57;
  *(_QWORD *)&v274.m[2][0] = *((_QWORD *)this + 4);
  *(_OWORD *)&v274.m11 = v58;
  v201 = 0LL;
  v225 = &v201;
  v226 = 0LL;
  v227 = 1;
  v59 = CBrushDrawListGenerator::ComputeBrushClamp(this, &v226);
  if ( v227 )
  {
    v60 = v225;
    v61 = v226;
    v62 = *v225;
    if ( v226 != *v225 )
    {
      if ( v62 )
      {
        v168 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v62;
        if ( v168 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v62, 1);
        else
          v168(v62, 1);
      }
      *v60 = v61;
    }
    v5 = v210;
  }
  if ( (v59 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x243u);
  }
  else
  {
    v63 = 0;
    v64 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v5 + 48);
    v200 = 0;
    v65 = *((_DWORD *)this + 26);
    v66 = 0;
    if ( v65 )
    {
      v67 = (const struct D2D_MATRIX_3X2_F *)((char *)this + 72);
      while ( 1 )
      {
        v68 = *(_QWORD *)&v67->m11;
        if ( *(_QWORD *)&v67->m11 )
        {
          if ( *(_DWORD *)(v68 + 24) == 2 )
          {
            if ( *(_BYTE *)(v68 + 140) )
            {
              v69 = *(_DWORD *)(v68 + 120);
              if ( v69 != 50529027 )
              {
                v70 = _mm_shuffle_ps((__m128)*(unsigned int *)(v68 + 28), (__m128)*(unsigned int *)(v68 + 28), 225);
                v70.m128_f32[0] = *(float *)(v68 + 32);
                v71 = _mm_shuffle_ps(v70, v70, 198);
                v71.m128_f32[0] = *(float *)(v68 + 40);
                v72 = _mm_shuffle_ps(v71, v71, 39);
                v72.m128_f32[0] = *(float *)(v68 + 44);
                v279 = _mm_unpacklo_ps((__m128)*(unsigned int *)(v68 + 52), (__m128)*(unsigned int *)(v68 + 56)).m128_u64[0];
                v73 = (struct D2D_RECT_F)_mm_shuffle_ps(v72, v72, 57);
                v275 = v73;
                v278 = v73;
                if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)&v278, v67) )
                {
                  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
                    (D2DMatrixHelper *)&v74[6].right,
                    &v278,
                    &v211,
                    v74);
                  v69 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                          (D2DMatrixHelper *)v69,
                          (unsigned int)&v278,
                          v77);
                  v270 = (struct D2D_RECT_F)_xmm;
                  v271 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
                  goto LABEL_100;
                }
                if ( v75 )
                  break;
              }
            }
          }
        }
        ++v66;
        v67 = (const struct D2D_MATRIX_3X2_F *)((char *)v67 + 8);
        if ( v66 >= v65 )
          goto LABEL_116;
      }
      v169 = *(_OWORD *)&v74[6].right;
      v270 = v73;
      *(_OWORD *)&v211.m11 = v169;
      v271 = v76;
LABEL_100:
      if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v270) )
      {
        m21 = v274.m21;
        v63 = 1;
        m22 = v274.m22;
        v200 = 1;
        m12 = v274.m12;
        m11_low = (__m128)LODWORD(v274.m11);
        v174 = (__m128)LODWORD(v274.m11);
        v174.m128_f32[0] = (float)(v274.m11 * v270.left) + (float)(v274.m21 * v270.top);
        m11_low.m128_f32[0] = v274.m11 * *(float *)&v271;
        v175 = _mm_shuffle_ps(v174, v174, 225);
        v175.m128_f32[0] = (float)(v270.left * v274.m12) + (float)(v274.m22 * v270.top);
        v176 = _mm_shuffle_ps(v175, v175, 198);
        v177 = (__m128)HIDWORD(v271);
        v176.m128_f32[0] = (float)(v274.m11 * v270.right) + (float)(v270.bottom * v274.m21);
        v178 = _mm_shuffle_ps(v176, v176, 39);
        v178.m128_f32[0] = (float)(v270.bottom * v274.m22) + (float)(v270.right * v274.m12);
        *(__m128 *)&v274.m11 = _mm_shuffle_ps(v178, v178, 57);
        v177.m128_f32[0] = (float)((float)(*((float *)&v271 + 1) * m22) + (float)(*(float *)&v271 * m12)) + v274.dy;
        m11_low.m128_f32[0] = (float)(m11_low.m128_f32[0] + (float)(*((float *)&v271 + 1) * m21)) + v274.dx;
        *(_QWORD *)&v274.m[2][0] = _mm_unpacklo_ps(m11_low, v177).m128_u64[0];
      }
      v78 = v201;
      if ( *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v201 + 40LL) == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v201, (unsigned int *)&v211.dx);
      }
      else
      {
        IsRectangles = (*(__int64 (__fastcall **)(CRectanglesShape *, FLOAT *))(*(_QWORD *)v201 + 40LL))(v201, &v211.dx);
        v78 = v201;
      }
      if ( IsRectangles && LODWORD(v211.dx) == 1 )
      {
        if ( *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v78 + 32LL) == CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds((__int64)v78, (__int64)&v277, 0LL);
        else
          TightBounds = (*(__int64 (__fastcall **)(CRectanglesShape *, __int128 *, _QWORD))(*(_QWORD *)v78 + 32LL))(
                          v78,
                          &v277,
                          0LL);
        v59 = TightBounds;
        if ( TightBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x259u);
          goto LABEL_265;
        }
        v82 = v211.m22;
        v83 = v211.m21;
        v84 = v211.m12;
        v85 = (__m128)LODWORD(v211.m11);
        if ( v63 )
        {
          D2DMatrixHelper::TransformRectConservative(
            (D2DMatrixHelper *)&v211,
            &v270,
            (const struct D2D_MATRIX_3X2_F *)&v273,
            v81);
          v89 = v273;
          v272 = v273;
        }
        else
        {
          v86 = _mm_shuffle_ps((__m128)LODWORD(v211.m11), (__m128)LODWORD(v211.m11), 225);
          v86.m128_f32[0] = v211.m12;
          v87 = _mm_shuffle_ps(v86, v86, 198);
          v87.m128_f32[0] = v211.m21;
          v88 = _mm_shuffle_ps(v87, v87, 39);
          v88.m128_f32[0] = v211.m22;
          v89 = _mm_shuffle_ps(v88, v88, 57);
        }
        v300 = v89;
        DoesContain = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)&v277, v300.m128_f32);
        v78 = v201;
        if ( !DoesContain )
          goto LABEL_112;
LABEL_123:
        if ( v78 )
        {
          v100 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v78;
          if ( v100 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v78, 1);
          else
            v100(v78, 1);
          v78 = 0LL;
          v201 = 0LL;
        }
        goto LABEL_127;
      }
      v82 = v211.m22;
      v83 = v211.m21;
      v84 = v211.m12;
      v85 = (__m128)LODWORD(v211.m11);
LABEL_112:
      if ( v78 )
      {
        v91 = *((_DWORD *)this + 5);
        v245[0] = *((_DWORD *)this + 4);
        v247 = *((_DWORD *)this + 6);
        v245[1] = v91;
        v92 = *((_DWORD *)this + 7);
        v250 = _xmm;
        v93 = *((_DWORD *)this + 9);
        v248 = v92;
        v94 = *((_DWORD *)this + 8);
        v252 = v93;
        v251 = v94;
        v254 = 1065353216LL;
        v246 = 0LL;
        v249 = 0LL;
        v253 = 0;
        v95 = CCpuClip::AddPrimitiveClip(
                (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v5 + 8),
                v78,
                (const struct CMILMatrix *)v245);
        v59 = v95;
        if ( v95 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x287u);
          goto LABEL_272;
        }
        v78 = v201;
      }
LABEL_127:
      memset_0(v306, 0, sizeof(v306));
      v101 = 0LL;
      if ( *((_DWORD *)this + 26) )
      {
        while ( 1 )
        {
          v102 = *((_QWORD *)this + v101 + 9);
          if ( v102
            && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v102 + 8LL))(*((_QWORD *)this + v101 + 9)) == 1 )
          {
            v103 = (char *)v306 + 52 * (unsigned int)v101;
            if ( *((_BYTE *)v210 + 528) )
            {
              v179 = CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
                       (CSurfaceDrawListBrush *)v102,
                       (struct Matrix3x3 *)v103);
              v59 = v179;
              if ( v179 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v179, 0x29Bu);
LABEL_272:
                v131 = v201;
                if ( v201 )
                {
                  v129 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v201;
                  if ( v129 == CRectanglesShape::`scalar deleting destructor' )
                  {
LABEL_294:
                    CRectanglesShape::`scalar deleting destructor'(v131, 1);
                    return v59;
                  }
LABEL_295:
                  v129(v131, 1);
                  return v59;
                }
                return v59;
              }
            }
            else
            {
              *(_OWORD *)v103 = *(_OWORD *)(v102 + 28);
              *((_OWORD *)v103 + 1) = *(_OWORD *)(v102 + 44);
              *((_DWORD *)v103 + 8) = *(_DWORD *)(v102 + 60);
              if ( Matrix3x3::TryInvert(
                     (const struct Matrix3x3 *)((char *)v306 + 52 * (unsigned int)v101),
                     (struct Matrix3x3 *)v103) )
              {
                if ( *(_DWORD *)(v102 + 24) == 2 )
                {
                  v105 = (float *)(v102 + 68);
                  v106 = (float *)&v266;
                }
                else
                {
                  v124 = *(CD2DBitmap **)(v102 + 152);
                  if ( v124 )
                  {
                    v125 = *(struct D2D_SIZE_U (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v124 + 40LL);
                    if ( v125 == CD2DBitmap::GetTextureSize )
                      CD2DBitmap::GetTextureSize(v124);
                    else
                      ((void (__fastcall *)(CD2DBitmap *, int *))v125)(v124, &v212);
                  }
                  else
                  {
                    v212 = 1;
                    v213 = 1;
                  }
                  v105 = &v228;
                  v229 = 0LL;
                  v230 = 0;
                  v232 = 0;
                  v106 = (float *)&v269;
                  v235 = 1065353216;
                  v104 = (float *)v306 + 13 * (unsigned int)v101;
                  v228 = 1.0 / (float)v212;
                  v231 = 1.0 / (float)v213;
                  v233 = 0.0 - (float)(v228 * 0.0);
                  v234 = 0.0 - (float)(v231 * 0.0);
                }
                v107 = Matrix3x3::operator*(v104, v106, v105);
                *(_OWORD *)v103 = *(_OWORD *)v107;
                *((_OWORD *)v103 + 1) = *((_OWORD *)v107 + 1);
                *((float *)v103 + 8) = v107[8];
              }
              else
              {
                *(_OWORD *)&v218[4] = _xmm;
                v180 = *(_OWORD *)v218;
                v181 = (unsigned int)v217;
                *(float *)&v180 = FInf._Float;
                *(float *)&v181 = FInf._Float;
                *(_OWORD *)v103 = v181;
                *((_OWORD *)v103 + 1) = v180;
                *((_DWORD *)v103 + 8) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)_xmm, 12));
                v217 = v181;
                *(_OWORD *)v218 = v180;
              }
            }
            if ( v200 )
            {
              v236[0] = v270.left;
              v236[1] = v270.top;
              v236[3] = v270.right;
              v236[4] = v270.bottom;
              v237 = v271;
              v236[2] = 0.0;
              v236[5] = 0.0;
              v238 = 1065353216;
              v182 = Matrix3x3::operator*(v236, v267, (float *)v306 + 13 * (unsigned int)v101);
              *(_OWORD *)v103 = *(_OWORD *)v182;
              *((_OWORD *)v103 + 1) = *((_OWORD *)v182 + 1);
              *((float *)v103 + 8) = v182[8];
            }
            if ( *(_DWORD *)(v102 + 24) == 2 )
              v108 = *(_OWORD *)(v102 + 124);
            else
              v108 = _xmm;
            *(_OWORD *)(v103 + 36) = v108;
          }
          v101 = (unsigned int)(v101 + 1);
          if ( (unsigned int)v101 >= *((_DWORD *)this + 26) )
          {
            v78 = v201;
            v5 = v210;
            break;
          }
        }
      }
      memset_0(&v301, 0, 0x20uLL);
      *(_QWORD *)&v277 = v306;
      *((_QWORD *)&v277 + 1) = *((unsigned int *)this + 26);
      v109 = *((_BYTE *)this + 109);
      v303 = v277;
      if ( v109 )
      {
        v111 = (__m128 *)&v305;
        v305 = *(_OWORD *)((char *)this + 56);
      }
      else
      {
        v110 = (__m128)*((unsigned int *)this + 17);
        v111 = &v304;
        v112 = v110;
        v112.m128_f32[0] = v110.m128_f32[0] * *((float *)this + 14);
        v113 = _mm_shuffle_ps(v112, v112, 225);
        v113.m128_f32[0] = *((float *)this + 17) * *((float *)this + 15);
        v114 = _mm_shuffle_ps(v113, v113, 198);
        v114.m128_f32[0] = *((float *)this + 17) * *((float *)this + 16);
        v115 = _mm_shuffle_ps(v114, v114, 39);
        v115.m128_f32[0] = v110.m128_f32[0];
        v304 = _mm_shuffle_ps(v115, v115, 57);
      }
      v116 = *v111;
      v302 = v109;
      v209 = 0x300000000LL;
      v301 = v116;
      *(_QWORD *)&v208.left = 0LL;
      *(_QWORD *)&v208.right = 0LL;
      if ( *((_DWORD *)v64 + 6) || *((_DWORD *)v64 + 54) || *((_DWORD *)v64 + 102) )
      {
        v292[0] = v295;
        v292[1] = v295;
        v293 = 10;
        v288[0] = v291;
        v294 = 10LL;
        v288[1] = v291;
        v289 = 10;
        v290 = 10LL;
        v132 = CoordMap::ComputeMeshPositions(
                 (_DWORD)v64,
                 (unsigned int)v292,
                 (unsigned int)v288,
                 (unsigned int)&v211,
                 LODWORD(FLOAT_1_1920929eN7));
        v59 = v132;
        if ( v132 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v132, 0x2C9u);
        }
        else
        {
          v297 = 2;
          v296[0] = v299;
          v298 = 2LL;
          v296[1] = v299;
          AllHollowRects = CoordMap::GetAllHollowRects(v64, v296);
          v59 = AllHollowRects;
          if ( AllHollowRects >= 0 )
          {
            v134 = *((_DWORD *)this + 26);
            if ( v134 )
            {
              v135 = v205;
              v136 = v307;
              v137 = v306;
              v138 = 1;
              v139 = v134;
              do
              {
                if ( (v135 & v138) != 0 )
                {
                  v184 = *((_DWORD *)v137 + 8);
                  v185 = v137[1];
                  *v136 = *v137;
                  v136[1] = v185;
                  *((_DWORD *)v136 + 8) = v184;
                }
                v138 = __ROL4__(v138, 1);
                v137 = (_OWORD *)((char *)v137 + 52);
                v136 = (_OWORD *)((char *)v136 + 36);
                --v139;
              }
              while ( v139 );
            }
            v140 = 1;
            if ( HIDWORD(v290) > 1 )
            {
              v141 = HIDWORD(v294);
              v142 = v292[0];
              v143 = v288[0];
              do
              {
                v144 = v140;
                v145 = v140 - 1;
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v143 + 4 * v145)
                                                                      - *(float *)(v143 + 4LL * v140))) & _xmm) > 0.0000011920929 )
                {
                  for ( i = 1; i < v141; ++i )
                  {
                    v147 = *(float *)(v142 + 4LL * (i - 1));
                    v216 = i - 1;
                    v148 = *(float *)(v142 + 4LL * i);
                    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v147 - v148)) & _xmm) > 0.0000011920929 )
                    {
                      v149 = *(float *)(v143 + 4 * v145);
                      v150 = *(float *)(v143 + 4 * v144);
                      v208.top = v149;
                      v208.bottom = v150;
                      v208.left = v147;
                      v208.right = v148;
                      if ( !CoordMap::IsHollowRect(v64, &v208) )
                      {
                        v154 = v69 & 3;
                        v155 = 0;
                        if ( v140 != 1 )
                          v154 = 0;
                        v156 = v69 & 0x3000000;
                        if ( v151 )
                          v156 = 0;
                        v157 = v69 & 0x300;
                        v158 = v156 | v154;
                        if ( i != HIDWORD(v294) - 1 )
                          v157 = 0;
                        v159 = v157 | v158;
                        v160 = v69 & 0x30000;
                        if ( v140 != HIDWORD(v290) - 1 )
                          v160 = 0;
                        v161 = v160 | v159;
                        LODWORD(v209) = v161;
                        if ( HIDWORD(v298) )
                        {
                          do
                          {
                            if ( v161 == 50529027 )
                              break;
                            v162 = *(float *)(v296[0] + 16LL * v155 + 4);
                            if ( v149 >= v162 && *(float *)(v296[0] + 16LL * v155 + 12) >= v150 )
                            {
                              if ( v153 == *(float *)(v296[0] + 16LL * v155 + 8) )
                              {
                                v161 |= 0x3000000u;
                                LODWORD(v209) = v161;
                              }
                              if ( v148 == *(float *)(v296[0] + 16LL * v155) )
                              {
                                v161 |= 0x300u;
                                LODWORD(v209) = v161;
                              }
                            }
                            if ( v153 >= *(float *)(v296[0] + 16LL * v155)
                              && *(float *)(v296[0] + 16LL * v155 + 8) >= v148 )
                            {
                              if ( v149 == *(float *)(v296[0] + 16LL * v155 + 12) )
                              {
                                v161 |= 3u;
                                LODWORD(v209) = v161;
                              }
                              if ( v150 == v162 )
                              {
                                v161 |= 0x30000u;
                                LODWORD(v209) = v161;
                              }
                            }
                            ++v155;
                          }
                          while ( v155 < HIDWORD(v298) );
                        }
                        v163 = 0;
                        v204 = 0;
                        if ( *((_DWORD *)this + 26) )
                        {
                          v164 = v205;
                          do
                          {
                            if ( _bittest(&v164, v163) )
                            {
                              v284[0] = &v287;
                              *((_QWORD *)&v255 + 1) = 2LL;
                              v284[1] = &v287;
                              *((_QWORD *)&v256 + 1) = 2LL;
                              v280[0] = &v283;
                              v280[1] = &v283;
                              v285 = 2;
                              v286 = 2LL;
                              v281 = 2;
                              v282 = 2LL;
                              *(_QWORD *)&v255 = v288[0] + 4 * v145;
                              v265 = v255;
                              *(_QWORD *)&v256 = v292[0] + 4 * v152;
                              v258 = v256;
                              v186 = CoordMap::ComputeTexPositions(
                                       (_DWORD)v64,
                                       v163,
                                       (unsigned int)&v258,
                                       (unsigned int)&v265,
                                       (__int64)v284,
                                       (__int64)v280,
                                       LODWORD(FLOAT_1_1920929eN7));
                              v59 = v186;
                              if ( v186 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v186, 0x350u);
                                DynArrayImpl<1>::~DynArrayImpl<1>(v280);
                                DynArrayImpl<1>::~DynArrayImpl<1>(v284);
                                goto LABEL_263;
                              }
                              v188 = _mm_shuffle_ps(
                                       (__m128)*(unsigned int *)v284[0],
                                       (__m128)*(unsigned int *)v284[0],
                                       225);
                              v188.m128_f32[0] = *(float *)v280[0];
                              v189 = _mm_shuffle_ps(v188, v188, 198);
                              v189.m128_f32[0] = *(float *)(v284[0] + 4LL * (unsigned int)(HIDWORD(v286) - 1));
                              v190 = _mm_shuffle_ps(v189, v189, 39);
                              v190.m128_f32[0] = *(float *)(v280[0] + 4LL * (unsigned int)(HIDWORD(v282) - 1));
                              v257 = (struct D2D_RECT_F)_mm_shuffle_ps(v190, v190, 57);
                              if ( D2DMatrixHelper::ComputeRectangleTransform(
                                     (D2DMatrixHelper *)&v208,
                                     &v257,
                                     &v275,
                                     v187) )
                              {
                                *(_QWORD *)&v217 = *(_QWORD *)&v275.left;
                                HIDWORD(v217) = LODWORD(v275.right);
                                *(_QWORD *)v218 = LODWORD(v275.bottom);
                                *(_QWORD *)&v218[8] = v276;
                                DWORD2(v217) = 0;
                                *(_DWORD *)&v218[16] = 1065353216;
                                v191 = Matrix3x3::operator*((float *)&v217, v268, (float *)v307 + 9 * v204);
                                v193 = 52 * v192;
                                *(_OWORD *)((char *)v306 + v193) = *(_OWORD *)v191;
                                *(_OWORD *)((char *)&v306[1] + v193) = *((_OWORD *)v191 + 1);
                                *(float *)((char *)&v306[2] + v193) = v191[8];
                              }
                              else
                              {
                                v194 = 52LL * v204;
                                v195 = *((_DWORD *)&v307[2] + 9 * v204);
                                v196 = *(_OWORD *)((char *)&v307[1] + 36 * v204);
                                *(_OWORD *)((char *)v306 + v194) = *(_OWORD *)((char *)v307 + 36 * v204);
                                *(_OWORD *)((char *)&v306[1] + v194) = v196;
                                *(_DWORD *)((char *)&v306[2] + v194) = v195;
                              }
                              DynArrayImpl<1>::~DynArrayImpl<1>(v280);
                              DynArrayImpl<1>::~DynArrayImpl<1>(v284);
                              v163 = v204;
                              v152 = v216;
                              v164 = v205;
                            }
                            v204 = ++v163;
                          }
                          while ( v163 < *((_DWORD *)this + 26) );
                        }
                        v263 = v208;
                        v264 = v209;
                        v165 = CDrawListEntryBuilder::Insert(
                                 *((_QWORD *)v210 + 65),
                                 *((unsigned __int8 *)v210 + 528),
                                 &v263,
                                 &v301,
                                 &v274);
                        v59 = v165;
                        if ( v165 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v165, 0x36Bu);
                          goto LABEL_263;
                        }
                      }
                      v141 = HIDWORD(v294);
                      v142 = v292[0];
                      v143 = v288[0];
                      v144 = v140;
                    }
                  }
                }
                ++v140;
              }
              while ( v140 < HIDWORD(v290) );
            }
            DynArrayImpl<1>::~DynArrayImpl<1>(v296);
            DynArrayImpl<1>::~DynArrayImpl<1>(v288);
            DynArrayImpl<1>::~DynArrayImpl<1>(v292);
            v78 = v201;
            goto LABEL_154;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllHollowRects, 0x2CCu);
LABEL_263:
          DynArrayImpl<1>::~DynArrayImpl<1>(v296);
        }
        DynArrayImpl<1>::~DynArrayImpl<1>(v288);
        DynArrayImpl<1>::~DynArrayImpl<1>(v292);
      }
      else
      {
        v117 = (CDrawListEntryBuilder *)*((_QWORD *)v5 + 65);
        v118 = _mm_shuffle_ps(v85, v85, 225);
        v59 = 0;
        LODWORD(v209) = v69;
        v118.m128_f32[0] = v84;
        v119 = _mm_shuffle_ps(v118, v118, 198);
        v119.m128_f32[0] = v83;
        v260 = v209;
        v120 = _mm_shuffle_ps(v119, v119, 39);
        v120.m128_f32[0] = v82;
        v121 = _mm_shuffle_ps(v120, v120, 57);
        v259 = v121;
        if ( v83 > v85.m128_f32[0] && v82 > v84 )
        {
          if ( *((_BYTE *)v5 + 528) )
          {
            inserted = CDrawListEntryBuilder::InsertWARP(
                         v117,
                         (const struct PrimitiveGeometryDesc *)&v259,
                         (const struct PrimitiveVertexAttributesDesc *)&v301,
                         &v274);
            v59 = inserted;
            if ( inserted < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1E4u);
          }
          else
          {
            v262 = v209;
            v261 = v121;
            v122 = CDrawListEntryBuilder::InsertHW(v117, &v261, &v301, &v274);
            v59 = v122;
            if ( v122 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x1E8u);
          }
          v78 = v201;
        }
        if ( (v59 & 0x80000000) == 0 )
        {
LABEL_154:
          if ( !v78 )
            return v59;
          v129 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v78;
          v130 = v129 == CRectanglesShape::`scalar deleting destructor';
          v131 = v78;
LABEL_187:
          if ( v130 )
            goto LABEL_294;
          goto LABEL_295;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x2C3u);
      }
LABEL_265:
      v131 = v201;
      if ( !v201 )
        return v59;
      v129 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v201;
      v130 = v129 == CRectanglesShape::`scalar deleting destructor';
      goto LABEL_187;
    }
LABEL_116:
    if ( *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v201 + 32LL) == CRectanglesShape::GetTightBounds )
      v96 = CRectanglesShape::GetTightBounds((__int64)v201, (__int64)&v272, 0LL);
    else
      v96 = (*(__int64 (__fastcall **)(CRectanglesShape *, __m128 *, _QWORD))(*(_QWORD *)v201 + 32LL))(v201, &v272, 0LL);
    v59 = v96;
    if ( v96 >= 0 )
    {
      v78 = v201;
      v85 = (__m128)v272.m128_u32[0];
      v69 = 50529027;
      v84 = v272.m128_f32[1];
      v83 = v272.m128_f32[2];
      v97 = *(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v201;
      v82 = v272.m128_f32[3];
      *(__m128 *)&v211.m11 = v272;
      v98 = (char (__fastcall *)(CRectanglesShape *, unsigned int *))v97[5];
      if ( v98 == CRectanglesShape::IsRectangles )
      {
        v99 = CRectanglesShape::IsRectangles(v201, &v207);
      }
      else
      {
        v99 = v98(v201, &v207);
        v78 = v201;
      }
      if ( v99 && v207 == 1 )
        goto LABEL_123;
      goto LABEL_112;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v96, 0x274u);
  }
  v131 = v201;
  if ( v201 )
  {
    v129 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v201;
    if ( v129 == CRectanglesShape::`scalar deleting destructor' )
      goto LABEL_294;
    goto LABEL_295;
  }
  return v59;
}
