/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18005970C (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001A380 (--4-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800412E8 (-Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18004135C (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180041464 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800414C0 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18004ECE0 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180057730 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180058040 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180058078 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 *     ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x180058118 (-IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FindPrimitiveRect@CBrushDrawListGenerator@@AEBA_N_NPEAUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180059828 (-FindPrimitiveRect@CBrushDrawListGenerator@@AEBA_N_NPEAUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@PEAUD2.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x1800598B4 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180077680 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18007AF68 (-ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009AD10 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E78 (-IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800C1278 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800C2624 (--0SamplerMode@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C2E84 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C2F3C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x1800C5A60 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18015C44C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC (-ComputeTexPositions@CoordMap@@QEBAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 *     ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18015FA94 (-ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801AE144 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  CCpuClip *v2; // r13
  __int64 v3; // r15
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v4; // rsi
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rbx
  char v9; // r14
  _QWORD *v10; // rsi
  CCompositionSurfaceBitmap *v11; // rcx
  __int64 (*v12)(void); // rax
  char IsOpaque; // al
  bool IsDrawListCachingDisabled; // al
  int v15; // r8d
  struct CCommonRenderingEffect *v16; // rcx
  int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rbx
  struct CObjectCache *ObjectCache; // rax
  char *v23; // rbx
  int v24; // edx
  SamplerMode *v25; // r12
  unsigned int (__fastcall *v26)(CMILRefCountBase *__hidden); // rax
  __int64 v27; // r12
  unsigned int (__fastcall *v28)(CCommonRenderingEffect *__hidden); // rax
  unsigned int UsedSamplersBitmask; // eax
  __int128 v30; // xmm0
  unsigned int v31; // ebx
  CRectanglesShape **v32; // rsi
  struct CShape *v33; // r14
  CRectanglesShape *v34; // rcx
  bool IsEmpty; // al
  bool PrimitiveRect; // al
  __m128 dy_low; // xmm7
  float dx; // xmm8_4
  float m22; // xmm9_4
  float m21; // xmm10_4
  float m12; // xmm11_4
  float m11; // xmm12_4
  __int64 (__fastcall *v43)(CRectanglesShape *, struct D2D_RECT_F *, _QWORD); // rax
  int TightBounds; // eax
  CRectanglesShape *v45; // rbx
  void *(__fastcall **v46)(CRectanglesShape *__hidden, unsigned int); // rax
  bool (__fastcall *v47)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  void *(__fastcall *v49)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v50; // r14
  char *v51; // rsi
  int v52; // eax
  __int128 v53; // xmm0
  char v54; // cl
  __int128 *v55; // rax
  unsigned int v56; // xmm1_4
  __int128 v57; // xmm0
  char v58; // dl
  CDrawListPrimitiveBuilder *v59; // rcx
  int v60; // eax
  CRectanglesShape *v61; // rcx
  CBrushRenderingEffect *v63; // rcx
  int v64; // eax
  int AllHollowRects; // eax
  _OWORD *v66; // rdx
  __int64 v67; // r8
  unsigned int v68; // esi
  _OWORD *v69; // rcx
  bool v70; // r14
  unsigned int v71; // edx
  unsigned int v72; // r15d
  unsigned int v73; // r8d
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // r12
  unsigned int v78; // r13d
  float v79; // xmm5_4
  float v80; // xmm6_4
  float v81; // xmm8_4
  float v82; // xmm7_4
  int v83; // r10d
  __int64 v84; // r11
  float v85; // xmm5_4
  int v86; // ecx
  int v87; // ecx
  int v88; // eax
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // ecx
  unsigned int v94; // r8d
  __int64 v95; // rsi
  unsigned int v96; // eax
  int v97; // eax
  void *(__fastcall *v98)(CRectanglesShape *__hidden, unsigned int); // rax
  __m128 v99; // xmm1
  __m128 v100; // xmm2
  int v101; // xmm0_4
  int v102; // xmm1_4
  int v103; // xmm0_4
  int v104; // xmm1_4
  int v105; // xmm0_4
  int v106; // xmm1_4
  int v107; // eax
  void *(__fastcall *v108)(CRectanglesShape *__hidden, unsigned int); // rax
  bool v109; // zf
  int v110; // eax
  float *v111; // rax
  int v112; // eax
  __int128 v113; // xmm1
  int v114; // eax
  struct D2D_MATRIX_3X2_F *v115; // r9
  FLOAT v116; // xmm1_4
  float *v117; // rax
  __int64 v118; // r9
  __int64 v119; // rcx
  __int128 v120; // xmm1
  __int64 v121; // rdx
  int v122; // eax
  bool v123; // [rsp+48h] [rbp-C0h]
  __int16 v124; // [rsp+48h] [rbp-C0h]
  char v125; // [rsp+49h] [rbp-BFh]
  __int16 v126; // [rsp+4Ch] [rbp-BCh]
  int v127; // [rsp+4Ch] [rbp-BCh]
  unsigned int v128; // [rsp+50h] [rbp-B8h]
  CRectanglesShape *v129; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v130; // [rsp+60h] [rbp-A8h]
  BOOL v131; // [rsp+64h] [rbp-A4h] BYREF
  struct D2D_RECT_F v132; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v133; // [rsp+78h] [rbp-90h]
  struct CBrushDrawListGenerator::GenerateDrawListParameters *v134; // [rsp+80h] [rbp-88h]
  CoordMap *v135; // [rsp+88h] [rbp-80h] BYREF
  int v136; // [rsp+90h] [rbp-78h] BYREF
  float v137; // [rsp+94h] [rbp-74h] BYREF
  __int64 v138; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_RECT_F v139; // [rsp+A0h] [rbp-68h] BYREF
  float v140; // [rsp+B0h] [rbp-58h]
  float v141; // [rsp+B4h] [rbp-54h]
  struct D2D_RECT_F v142; // [rsp+B8h] [rbp-50h] BYREF
  struct D2D_MATRIX_3X2_F v143; // [rsp+C8h] [rbp-40h] BYREF
  CRectanglesShape **v144; // [rsp+E0h] [rbp-28h]
  struct CShape *v145; // [rsp+E8h] [rbp-20h] BYREF
  char v146; // [rsp+F0h] [rbp-18h]
  _DWORD v147[4]; // [rsp+F8h] [rbp-10h] BYREF
  CCpuClip *v148; // [rsp+108h] [rbp+0h]
  unsigned int v149; // [rsp+110h] [rbp+8h]
  bool v150; // [rsp+114h] [rbp+Ch]
  float v151[9]; // [rsp+118h] [rbp+10h] BYREF
  float v152[9]; // [rsp+13Ch] [rbp+34h] BYREF
  struct D2D_RECT_F v153; // [rsp+160h] [rbp+58h]
  struct D2D_RECT_F v154; // [rsp+178h] [rbp+70h]
  __int128 v155; // [rsp+190h] [rbp+88h]
  _DWORD v156[6]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v157; // [rsp+1C0h] [rbp+B8h]
  __int64 v158; // [rsp+1C8h] [rbp+C0h]
  int v159; // [rsp+1D0h] [rbp+C8h]
  int v160; // [rsp+1D4h] [rbp+CCh]
  int v161; // [rsp+1D8h] [rbp+D0h]
  int v162; // [rsp+1DCh] [rbp+D4h]
  int v163; // [rsp+1E0h] [rbp+D8h]
  __int64 v164; // [rsp+1E4h] [rbp+DCh]
  __int64 v165; // [rsp+1F8h] [rbp+F0h] BYREF
  int v166; // [rsp+200h] [rbp+F8h]
  __int64 v167; // [rsp+208h] [rbp+100h] BYREF
  int v168; // [rsp+210h] [rbp+108h]
  struct D2D_RECT_F v169; // [rsp+218h] [rbp+110h] BYREF
  struct D2D_RECT_F v170; // [rsp+228h] [rbp+120h] BYREF
  __int64 v171; // [rsp+238h] [rbp+130h]
  struct D2D_RECT_F v172; // [rsp+248h] [rbp+140h] BYREF
  __int64 v173; // [rsp+258h] [rbp+150h]
  _BYTE v174[64]; // [rsp+268h] [rbp+160h] BYREF
  int v175; // [rsp+2A8h] [rbp+1A0h]
  float v176[9]; // [rsp+2B8h] [rbp+1B0h] BYREF
  float v177[9]; // [rsp+2DCh] [rbp+1D4h] BYREF
  struct D2D_MATRIX_3X2_F v178; // [rsp+300h] [rbp+1F8h] BYREF
  struct D2D_RECT_F v179; // [rsp+318h] [rbp+210h] BYREF
  _QWORD v180[2]; // [rsp+328h] [rbp+220h] BYREF
  int v181; // [rsp+338h] [rbp+230h]
  int v182; // [rsp+33Ch] [rbp+234h]
  int v183; // [rsp+340h] [rbp+238h]
  char v184; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v185[2]; // [rsp+350h] [rbp+248h] BYREF
  int v186; // [rsp+360h] [rbp+258h]
  int v187; // [rsp+364h] [rbp+25Ch]
  int v188; // [rsp+368h] [rbp+260h]
  char v189; // [rsp+370h] [rbp+268h] BYREF
  _QWORD v190[2]; // [rsp+378h] [rbp+270h] BYREF
  int v191; // [rsp+388h] [rbp+280h]
  int v192; // [rsp+38Ch] [rbp+284h]
  unsigned int v193; // [rsp+390h] [rbp+288h]
  _BYTE v194[48]; // [rsp+398h] [rbp+290h] BYREF
  _QWORD v195[2]; // [rsp+3C8h] [rbp+2C0h] BYREF
  int v196; // [rsp+3D8h] [rbp+2D0h]
  int v197; // [rsp+3DCh] [rbp+2D4h]
  unsigned int v198; // [rsp+3E0h] [rbp+2D8h]
  _BYTE v199[48]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _QWORD v200[2]; // [rsp+418h] [rbp+310h] BYREF
  int v201; // [rsp+428h] [rbp+320h]
  int v202; // [rsp+42Ch] [rbp+324h]
  unsigned int v203; // [rsp+430h] [rbp+328h]
  _BYTE v204[32]; // [rsp+438h] [rbp+330h] BYREF
  __int128 v205; // [rsp+458h] [rbp+350h] BYREF
  char v206; // [rsp+468h] [rbp+360h]
  _OWORD *v207; // [rsp+478h] [rbp+370h]
  int v208; // [rsp+480h] [rbp+378h]
  __int128 v209; // [rsp+488h] [rbp+380h] BYREF
  __int128 v210; // [rsp+498h] [rbp+390h] BYREF
  _OWORD v211[13]; // [rsp+4A8h] [rbp+3A0h] BYREF
  _OWORD v212[9]; // [rsp+578h] [rbp+470h] BYREF

  v2 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8);
  v134 = a2;
  LODWORD(v3) = 0;
  v4 = a2;
  if ( *((_BYTE *)a2 + 40) )
  {
    CShapePtr::Release((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 24));
    *((_BYTE *)v2 + 32) = 0;
  }
  if ( !*(_QWORD *)(*((_QWORD *)v4 + 65) + 32LL) )
  {
    v6 = *(_QWORD *)this;
    v175 = 0;
    v7 = *(_DWORD *)(v6 + 264);
    v131 = v7 != 0;
    if ( *(_DWORD *)(v6 + 472) )
      CWatermarkStack<CMILMatrix,8,2,8>::Top(v6 + 472, (__int64)v174);
    else
      CMILMatrix::operator=(v174);
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v174, &v137, (float *)&v138);
    v123 = 0;
    if ( (*(_QWORD *)v2 || *((_QWORD *)v2 + 2)) && !v7 )
      v123 = !CCpuClip::IsAxisAlignedRectangle(v2) || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v174);
    if ( !*((_QWORD *)this + 6)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 17) - 1.0)) & _xmm) < 0.0000011920929 )
    {
      v8 = 0LL;
      v9 = 1;
      if ( *((_DWORD *)this + 26) )
      {
        do
        {
          v10 = (_QWORD *)*((_QWORD *)this + v8 + 9);
          if ( v10 && (*(unsigned int (__fastcall **)(_QWORD))(*v10 + 8LL))(*((_QWORD *)this + v8 + 9)) == 1 )
          {
            v11 = (CCompositionSurfaceBitmap *)v10[18];
            v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 96LL);
            if ( (char *)v12 == (char *)CCompositionSurfaceBitmap::IsOpaque )
              IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v11);
            else
              IsOpaque = v12();
            v9 = IsOpaque != 0 ? v9 : 0;
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 26) );
        v4 = v134;
      }
    }
    memset_0(v147, 0, 0x20uLL);
    v147[0] = *((_DWORD *)this + 26);
    LODWORD(v3) = 0;
    v147[3] = v131;
    *(float *)&v147[1] = v137;
    v147[2] = v138;
    v148 = v2;
    v150 = v123;
    IsDrawListCachingDisabled = CDrawingContext::IsDrawListCachingDisabled(*(CDrawingContext **)this);
    v135 = 0LL;
    v16 = (struct CCommonRenderingEffect *)(v15 | (IsDrawListCachingDisabled ? 0x80 : 0));
    v149 = (unsigned int)v16 | v17;
    if ( *((_QWORD *)this + 6) )
    {
      Microsoft::WRL::ComPtr<CRenderingEffect>::operator=((__int64 *)&v135, (__int64 *)this + 6);
      v23 = (char *)v135;
    }
    else
    {
      v18 = *((_QWORD *)this + 9);
      v19 = 0LL;
      v20 = 0LL;
      v124 = 257;
      if ( v18 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18) == 1 )
      {
        v19 = *(_QWORD *)(v18 + 144);
        v130 = *(_WORD *)(v18 + 64);
        LOBYTE(v124) = *(_BYTE *)(v18 + 66);
      }
      else
      {
        v130 = 257;
      }
      v21 = *((_QWORD *)this + 10);
      if ( v21 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*((_QWORD *)this + 10)) == 1 )
      {
        v20 = *(_QWORD *)(v21 + 144);
        v126 = *(_WORD *)(v21 + 64);
        LODWORD(v3) = 0;
        HIBYTE(v124) = *(_BYTE *)(v21 + 66);
      }
      else
      {
        v126 = 257;
      }
      ObjectCache = CThreadContext::GetObjectCache(v16);
      v23 = 0LL;
      v24 = *((_DWORD *)ObjectCache + 1);
      if ( v24 )
      {
        v23 = (char *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v23;
        *((_DWORD *)ObjectCache + 1) = v24 - 1;
      }
      if ( v23 || (v23 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL)) != 0LL )
      {
        *(_QWORD *)v23 = &CMILRefCountBase::`vftable';
        v25 = (SamplerMode *)(v23 + 32);
        *((_DWORD *)v23 + 2) = 0;
        *(_QWORD *)v23 = &CCommonRenderingEffect::`vftable';
        v3 = 2LL;
        do
        {
          SamplerMode::SamplerMode(v25);
          v25 = (SamplerMode *)((char *)v25 + 3);
          --v3;
        }
        while ( v3 );
        *((_QWORD *)v23 + 2) = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        *((_QWORD *)v23 + 3) = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        *((_WORD *)v23 + 16) = v130;
        v23[34] = v124;
        *(_WORD *)(v23 + 35) = v126;
        v23[37] = HIBYTE(v124);
      }
      else
      {
        v23 = 0LL;
      }
      if ( v23 )
        (**(void (__fastcall ***)(void *))v23)(v23);
      v135 = (CoordMap *)v23;
      if ( !v23 )
      {
        v31 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x229u);
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v135);
        return v31;
      }
      v4 = v134;
    }
    CDrawListPrimitiveBuilder::Begin(
      *((CDrawListPrimitiveBuilder **)v4 + 65),
      (const struct PrimitiveBuilderSetupParams *)v147,
      (struct CRenderingEffect *)v23);
    if ( v23 )
    {
      v26 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v23 + 8LL);
      if ( v26 == CMILRefCountBase::Release )
        CMILRefCountBase::Release((CMILRefCountBase *)v23);
      else
        v26((CMILRefCountBase *)v23);
    }
  }
  v27 = *(_QWORD *)(*((_QWORD *)v4 + 65) + 32LL);
  v28 = *(unsigned int (__fastcall **)(CCommonRenderingEffect *__hidden))(*(_QWORD *)v27 + 24LL);
  if ( v28 == CCommonRenderingEffect::GetUsedSamplersBitmask )
  {
    UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(*(CCommonRenderingEffect **)(*((_QWORD *)v4 + 65) + 32LL));
  }
  else
  {
    v63 = *(CBrushRenderingEffect **)(*((_QWORD *)v4 + 65) + 32LL);
    if ( v28 == CBrushRenderingEffect::GetUsedSamplersBitmask )
      UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(v63);
    else
      UsedSamplersBitmask = v28(v63);
  }
  v30 = *((_OWORD *)this + 1);
  v128 = UsedSamplersBitmask;
  *(_QWORD *)&v178.m[2][0] = *((_QWORD *)this + 4);
  *(_OWORD *)&v178.m11 = v30;
  v129 = 0LL;
  v144 = &v129;
  v145 = 0LL;
  v146 = 1;
  v31 = CBrushDrawListGenerator::ComputeBrushClamp(this, &v145);
  if ( v146 )
  {
    v32 = v144;
    v33 = v145;
    v34 = *v144;
    if ( v145 != *v144 )
    {
      if ( v34 )
      {
        v98 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v34;
        if ( v98 == CRectanglesShape::`scalar deleting destructor' )
          CRectanglesShape::`scalar deleting destructor'(v34, 1u);
        else
          v98(v34, 1u);
      }
      *v32 = v33;
    }
    v4 = v134;
  }
  if ( (v31 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x23Du);
    goto LABEL_183;
  }
  v125 = 0;
  v135 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v4 + 48);
  IsEmpty = CoordMap::IsEmpty((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v4 + 48));
  PrimitiveRect = CBrushDrawListGenerator::FindPrimitiveRect(
                    this,
                    !IsEmpty,
                    &v142,
                    (enum D2D1_EDGE_FLAGS *)&v136,
                    &v143);
  dy_low = (__m128)LODWORD(v143.dy);
  dx = v143.dx;
  m22 = v143.m22;
  m21 = v143.m21;
  m12 = v143.m12;
  m11 = v143.m11;
  if ( PrimitiveRect )
  {
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v143) )
    {
      v125 = 1;
      v139.left = (float)(v178.m21 * m12) + (float)(v178.m11 * m11);
      v139.top = (float)(m11 * v178.m12) + (float)(v178.m22 * m12);
      v139.right = (float)(v178.m11 * m21) + (float)(m22 * v178.m21);
      v99 = dy_low;
      v139.bottom = (float)(m22 * v178.m22) + (float)(m21 * v178.m12);
      v100 = dy_low;
      v99.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * v178.m21) + (float)(v178.m11 * dx)) + v178.dx;
      v100.m128_f32[0] = (float)(dy_low.m128_f32[0] * v178.m22) + (float)(dx * v178.m12);
      *(struct D2D_RECT_F *)&v178.m11 = v139;
      v100.m128_f32[0] = v100.m128_f32[0] + v178.dy;
      *(_QWORD *)&v178.m[2][0] = _mm_unpacklo_ps(v99, v100).m128_u64[0];
    }
    v45 = v129;
    v127 = v136;
    goto LABEL_61;
  }
  v43 = *(__int64 (__fastcall **)(CRectanglesShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v129 + 32LL);
  if ( (char *)v43 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(v129, &v179, 0LL);
  else
    TightBounds = v43(v129, &v179, 0LL);
  v31 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x252u);
LABEL_183:
    v61 = v129;
    if ( !v129 )
      return v31;
    v108 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v129;
    v109 = v108 == CRectanglesShape::`scalar deleting destructor';
    goto LABEL_185;
  }
  v45 = v129;
  v127 = 50529027;
  v46 = *(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v129;
  v154 = v179;
  v142 = v179;
  v47 = (bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *))v46[5];
  if ( v47 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(v129, (unsigned int *)&v131);
  }
  else
  {
    IsRectangles = v47(v129, (unsigned int *)&v131);
    v45 = v129;
  }
  if ( IsRectangles && v131 )
  {
    if ( !v45 )
      goto LABEL_62;
    v49 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v45;
    if ( v49 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v45, 1u);
    else
      v49(v45, 1u);
    v45 = 0LL;
    v129 = 0LL;
  }
LABEL_61:
  if ( v45 )
  {
    v101 = *((_DWORD *)this + 4);
    v102 = *((_DWORD *)this + 5);
    v156[2] = 0;
    v156[3] = 0;
    v160 = 0;
    v163 = 0;
    v156[0] = v101;
    v103 = *((_DWORD *)this + 6);
    v156[1] = v102;
    v104 = *((_DWORD *)this + 7);
    v156[4] = v103;
    v105 = *((_DWORD *)this + 8);
    v156[5] = v104;
    v106 = *((_DWORD *)this + 9);
    v161 = v105;
    v162 = v106;
    v164 = 1065353216LL;
    v157 = 0LL;
    v158 = 0LL;
    v159 = 1065353216;
    v107 = CCpuClip::AddPrimitiveClip(v2, v45, (const struct CMILMatrix *)v156);
    v31 = v107;
    if ( v107 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x263u);
      goto LABEL_79;
    }
  }
LABEL_62:
  memset_0(v211, 0, sizeof(v211));
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v50 = *((_QWORD *)this + (unsigned int)v3 + 9);
      if ( v50
        && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 8LL))(*((_QWORD *)this + (unsigned int)v3 + 9)) == 1 )
      {
        v51 = (char *)v211 + 52 * (unsigned int)v3;
        if ( *((_BYTE *)v134 + 528) )
        {
          v110 = CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
                   (CSurfaceDrawListBrush *)v50,
                   (struct Matrix3x3 *)v51);
          v31 = v110;
          if ( v110 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x277u);
            goto LABEL_79;
          }
        }
        else
        {
          v52 = CSurfaceDrawListBrush::ComputePrimitiveToTextureTransform(
                  (CSurfaceDrawListBrush *)v50,
                  (struct Matrix3x3 *)v51);
          v31 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x27Bu);
            goto LABEL_79;
          }
        }
        if ( v125 )
        {
          v151[2] = 0.0;
          v151[5] = 0.0;
          v151[0] = m11;
          v151[1] = m12;
          v151[3] = m21;
          v151[4] = m22;
          v151[6] = dx;
          v151[7] = dy_low.m128_f32[0];
          v151[8] = 1.0;
          v111 = Matrix3x3::operator*(v151, v176, (float *)v51);
          *(_OWORD *)v51 = *(_OWORD *)v111;
          *((_OWORD *)v51 + 1) = *((_OWORD *)v111 + 1);
          *((float *)v51 + 8) = v111[8];
        }
        if ( *(_DWORD *)(v50 + 24) == 2 )
          v53 = *(_OWORD *)(v50 + 124);
        else
          v53 = _xmm;
        *(_OWORD *)(v51 + 36) = v53;
      }
      LODWORD(v3) = v3 + 1;
      if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
      {
        v4 = v134;
        break;
      }
    }
  }
  memset_0(&v205, 0, 0x20uLL);
  v54 = *((_BYTE *)this + 108);
  v208 = *((_DWORD *)this + 26);
  v207 = v211;
  if ( v54 )
  {
    v55 = &v210;
    v210 = *(_OWORD *)((char *)this + 56);
  }
  else
  {
    v55 = &v209;
    HIDWORD(v155) = *((_DWORD *)this + 17);
    *(float *)&v56 = *((float *)&v155 + 3) * *((float *)this + 15);
    *(float *)&v155 = *((float *)&v155 + 3) * *((float *)this + 14);
    *(_QWORD *)((char *)&v155 + 4) = __PAIR64__(*((float *)&v155 + 3) * *((float *)this + 16), v56);
    v209 = v155;
  }
  v57 = *v55;
  v206 = v54;
  v133 = 0x300000000LL;
  v205 = v57;
  *(_QWORD *)&v132.left = 0LL;
  *(_QWORD *)&v132.right = 0LL;
  if ( CoordMap::IsEmpty((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)v4 + 48)) )
  {
    v58 = *((_BYTE *)v4 + 528);
    v59 = (CDrawListPrimitiveBuilder *)*((_QWORD *)v4 + 65);
    LODWORD(v133) = v127;
    v132 = v142;
    v172 = v142;
    v173 = v133;
    v60 = CDrawListPrimitiveBuilder::Insert(
            v59,
            v58,
            (const struct PrimitiveGeometryDesc *)&v172,
            (const struct PrimitiveVertexAttributesDesc *)&v205,
            &v178);
    v31 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x29Fu);
  }
  else
  {
    v198 = 0;
    v193 = 0;
    v195[0] = v199;
    v196 = 10;
    v195[1] = v199;
    v197 = 10;
    v190[0] = v194;
    v191 = 10;
    v192 = 10;
    v190[1] = v194;
    v64 = CoordMap::ComputeMeshPositions(
            (__int64)v4 + 48,
            (__int64)v195,
            (__int64)v190,
            (__int64)&v142,
            0.00000011920929);
    v31 = v64;
    if ( v64 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x2A5u);
    }
    else
    {
      v203 = 0;
      v200[0] = v204;
      v201 = 2;
      v200[1] = v204;
      v202 = 2;
      AllHollowRects = CoordMap::GetAllHollowRects((__int64)v4 + 48, (__int64)v200);
      v67 = 0LL;
      v31 = AllHollowRects;
      if ( AllHollowRects < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AllHollowRects, 0x2A8u);
      }
      else
      {
        v68 = v128;
        if ( *((_DWORD *)this + 26) )
        {
          v69 = v212;
          v66 = v211;
          do
          {
            if ( _bittest((const int *)&v68, v67) )
            {
              v112 = *((_DWORD *)v66 + 8);
              v113 = v66[1];
              *v69 = *v66;
              v69[1] = v113;
              *((_DWORD *)v69 + 8) = v112;
            }
            v67 = (unsigned int)(v67 + 1);
            v66 = (_OWORD *)((char *)v66 + 52);
            v69 = (_OWORD *)((char *)v69 + 36);
          }
          while ( (unsigned int)v67 < *((_DWORD *)this + 26) );
        }
        v70 = 1;
        if ( v128 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v27 + 48LL))(v27, v66, v67) )
            v70 = (v128 & 1) != 0;
        }
        else
        {
          v70 = 0;
        }
        v71 = v193;
        v72 = 1;
        if ( v193 > 1 )
        {
          v73 = v198;
          v74 = v195[0];
          v75 = v190[0];
          while ( 1 )
          {
            v76 = v72 - 1;
            v77 = v76;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v75 + 4 * v76)
                                                                  - *(float *)(v75 + 4LL * v72))) & _xmm) > 0.0000011920929 )
            {
              v78 = 1;
              if ( v73 > 1 )
                break;
            }
LABEL_134:
            if ( ++v72 >= v71 )
              goto LABEL_135;
          }
          while ( 1 )
          {
            v79 = *(float *)(v74 + 4LL * (v78 - 1));
            v138 = v78 - 1;
            v80 = *(float *)(v74 + 4LL * v78);
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v79 - v80)) & _xmm) > 0.0000011920929 )
            {
              v81 = *(float *)(v75 + 4 * v77);
              v132.left = v79;
              v132.top = v81;
              v132.right = v80;
              v82 = *(float *)(v75 + 4LL * v72);
              v132.bottom = v82;
              if ( !CoordMap::IsHollowRect(v135, &v132) )
              {
                if ( v83 )
                  v86 = -v70;
                else
                  v86 = v127;
                v87 = v86 & 0x3000000;
                if ( (_DWORD)v76 )
                  v88 = -v70;
                else
                  LOBYTE(v88) = v127;
                v89 = v88 & 3 | v87;
                if ( v78 == v198 - 1 )
                  v90 = v127 & 0x300;
                else
                  v90 = v70 ? 0x200 : 0;
                v91 = v90 | v89;
                if ( v72 == v193 - 1 )
                  v92 = v127 & 0x30000;
                else
                  v92 = v70 ? 0x20000 : 0;
                v93 = v92 | v91;
                v94 = 0;
                for ( LODWORD(v133) = v93; v94 < v203; ++v94 )
                {
                  if ( v93 == 50529027 )
                    break;
                  if ( v81 >= *(float *)(v200[0] + 16LL * v94 + 4) && *(float *)(v200[0] + 16LL * v94 + 12) >= v82 )
                  {
                    if ( v85 == *(float *)(v200[0] + 16LL * v94 + 8) )
                    {
                      v93 |= 0x3000000u;
                      LODWORD(v133) = v93;
                    }
                    if ( v80 == *(float *)(v200[0] + 16LL * v94) )
                    {
                      v93 |= 0x300u;
                      LODWORD(v133) = v93;
                    }
                  }
                  if ( v85 >= *(float *)(v200[0] + 16LL * v94) && *(float *)(v200[0] + 16LL * v94 + 8) >= v80 )
                  {
                    if ( v81 == *(float *)(v200[0] + 16LL * v94 + 12) )
                    {
                      v93 |= 3u;
                      LODWORD(v133) = v93;
                    }
                    if ( v82 == *(float *)(v200[0] + 16LL * v94 + 4) )
                    {
                      v93 |= 0x30000u;
                      LODWORD(v133) = v93;
                    }
                  }
                }
                v95 = 0LL;
                if ( *((_DWORD *)this + 26) )
                {
                  v96 = v128;
                  do
                  {
                    if ( _bittest((const int *)&v96, v95) )
                    {
                      v188 = 0;
                      v183 = 0;
                      v185[0] = &v189;
                      v186 = 2;
                      v185[1] = &v189;
                      v180[0] = &v184;
                      v180[1] = &v184;
                      v187 = 2;
                      v181 = 2;
                      v182 = 2;
                      v166 = 2;
                      v165 = v190[0] + 4 * v77;
                      v168 = 2;
                      v167 = v195[0] + 4 * v84;
                      v114 = CoordMap::ComputeTexPositions(
                               (_DWORD)v135,
                               v95,
                               (unsigned int)&v167,
                               (unsigned int)&v165,
                               (__int64)v185,
                               (__int64)v180,
                               LODWORD(FLOAT_1_1920929eN7));
                      v31 = v114;
                      if ( v114 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0x335u);
                        DynArrayImpl<1>::~DynArrayImpl<1>(v180);
                        DynArrayImpl<1>::~DynArrayImpl<1>(v185);
                        goto LABEL_135;
                      }
                      v153.left = *(FLOAT *)v185[0];
                      v116 = *(float *)v180[0];
                      v153.right = *(FLOAT *)(v185[0] + 4LL * (unsigned int)(v188 - 1));
                      v153.top = v116;
                      v153.bottom = *(FLOAT *)(v180[0] + 4LL * (unsigned int)(v183 - 1));
                      v169 = v153;
                      if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v132, &v169, &v139, v115) )
                      {
                        v152[2] = 0.0;
                        v152[5] = 0.0;
                        v152[0] = v139.left;
                        v152[1] = v139.top;
                        v152[3] = v139.right;
                        v152[4] = v139.bottom;
                        v152[6] = v140;
                        v152[7] = v141;
                        v152[8] = 1.0;
                        v117 = Matrix3x3::operator*(v152, v177, (float *)v212 + 9 * v95);
                        v119 = 52 * v118;
                        *(_OWORD *)((char *)v211 + v119) = *(_OWORD *)v117;
                        *(_OWORD *)((char *)&v211[1] + v119) = *((_OWORD *)v117 + 1);
                        *(float *)((char *)&v211[2] + v119) = v117[8];
                      }
                      else
                      {
                        v120 = *(_OWORD *)((char *)&v212[1] + 36 * v95);
                        v121 = 52LL * (unsigned int)v95;
                        v122 = *((_DWORD *)&v212[2] + 9 * v95);
                        *(_OWORD *)((char *)v211 + v121) = *(_OWORD *)((char *)v212 + 36 * v95);
                        *(_OWORD *)((char *)&v211[1] + v121) = v120;
                        *(_DWORD *)((char *)&v211[2] + v121) = v122;
                      }
                      DynArrayImpl<1>::~DynArrayImpl<1>(v180);
                      DynArrayImpl<1>::~DynArrayImpl<1>(v185);
                      v84 = v138;
                      v96 = v128;
                    }
                    v95 = (unsigned int)(v95 + 1);
                  }
                  while ( (unsigned int)v95 < *((_DWORD *)this + 26) );
                }
                v170 = v132;
                v171 = v133;
                v97 = CDrawListPrimitiveBuilder::Insert(
                        *((CDrawListPrimitiveBuilder **)v134 + 65),
                        *((_BYTE *)v134 + 528),
                        (const struct PrimitiveGeometryDesc *)&v170,
                        (const struct PrimitiveVertexAttributesDesc *)&v205,
                        &v178);
                v31 = v97;
                if ( v97 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v97, 0x350u);
                  break;
                }
                LODWORD(v76) = v72 - 1;
              }
              v73 = v198;
              v74 = v195[0];
              v71 = v193;
              v75 = v190[0];
            }
            if ( ++v78 >= v73 )
              goto LABEL_134;
          }
        }
      }
LABEL_135:
      DynArrayImpl<1>::~DynArrayImpl<1>(v200);
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v190);
    DynArrayImpl<1>::~DynArrayImpl<1>(v195);
  }
LABEL_79:
  v61 = v129;
  if ( v129 )
  {
    v108 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v129;
    v109 = v108 == CRectanglesShape::`scalar deleting destructor';
LABEL_185:
    if ( v109 )
      CRectanglesShape::`scalar deleting destructor'(v61, 1u);
    else
      v108(v61, 1u);
  }
  return v31;
}
