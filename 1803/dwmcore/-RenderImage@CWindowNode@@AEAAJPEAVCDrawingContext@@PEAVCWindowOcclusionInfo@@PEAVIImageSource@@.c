/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180008170 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F28C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180017568 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180019964 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180019984 (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800292D8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063D14 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180063D60 (--1CRegionShape@@UEAA@XZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180064B20 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18006B130 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006E054 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800903AC (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180093B80 (-GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18013C044 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18015E874 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180162750 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180177BB0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180179500 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801A7810 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801A787C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801A995C (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801A99F8 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x18020A00C (-ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        struct CWindowNode *a1,
        CDrawingContext *this,
        __int64 a3,
        struct IImageSource *a4,
        CRectanglesShape *a5,
        _DWORD *a6,
        unsigned int a7,
        unsigned __int8 a8,
        char a9,
        char a10,
        struct _D3DCOLORVALUE *a11)
{
  unsigned int v11; // ebx
  _DWORD *v14; // r14
  int v16; // eax
  int v17; // r12d
  float v18; // xmm9_4
  unsigned int v19; // xmm10_4
  signed int v20; // eax
  __m128i v21; // xmm7
  int v22; // eax
  float v23; // xmm7_4
  float v24; // xmm8_4
  __int64 (__fastcall *v25)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  bool v30; // r13
  char (__fastcall *v31)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  void (__fastcall *v33)(struct IImageSource *, _BYTE *, float *); // rax
  __int128 *v34; // rax
  int v35; // ecx
  LONG left; // r9d
  unsigned __int64 top; // r8
  LONG right; // r10d
  LONG bottom; // r11d
  int v40; // r15d
  bool v41; // dl
  int v42; // r12d
  int v43; // edi
  int v44; // r13d
  int v45; // ecx
  int v46; // eax
  CDrawingContext *v47; // r14
  bool v48; // zf
  float v49; // xmm15_4
  float v50; // xmm7_4
  int v51; // eax
  void *v52; // rcx
  char v53; // r9
  float v54; // xmm5_4
  float v55; // xmm2_4
  float v56; // xmm4_4
  float v57; // xmm3_4
  int v58; // r8d
  int v59; // eax
  float v60; // xmm7_4
  float v61; // xmm1_4
  float v62; // xmm8_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  __int64 v65; // rcx
  unsigned int v66; // r15d
  char (__fastcall *v67)(__int64, __int64, int, char); // rax
  char v68; // al
  float v69; // xmm1_4
  float v70; // xmm5_4
  float v71; // xmm9_4
  float v72; // xmm10_4
  float v73; // xmm4_4
  float v74; // xmm2_4
  float v75; // xmm0_4
  float v76; // xmm3_4
  struct IImageSource *v77; // r15
  int v78; // eax
  float v79; // xmm8_4
  bool v80; // si
  char v81; // r15
  float v82; // xmm12_4
  float v83; // xmm7_4
  float v84; // xmm11_4
  __int64 v85; // rcx
  void (__fastcall ***v86)(_QWORD, __int64); // r14
  struct CSolidColorLegacyMilBrush *v87; // rbx
  struct CShape *v88; // rsi
  struct CShape *v89; // rdi
  LONG v91; // ecx
  LONG v92; // eax
  LONG v93; // edx
  LONG v94; // ecx
  int v95; // eax
  int v96; // ecx
  __int64 v97; // r8
  unsigned int v98; // eax
  CShape **v99; // r14
  COverlayContext **v100; // rdi
  CShape *v101; // rbx
  struct IImageSource *v102; // rbx
  int v103; // eax
  int (__fastcall **v104)(struct IImageSource *, GUID *, struct ISwapChainContent **); // rax
  struct IImageSource *v105; // rax
  __int64 v106; // rax
  CCompositionSurfaceBitmap *v107; // rcx
  __int64 v108; // rax
  CCompositionSurfaceBitmap *v109; // rcx
  __int64 v110; // rax
  CCompositionSurfaceBitmap *v111; // rcx
  float v112; // xmm15_4
  float v113; // xmm14_4
  unsigned int v114; // xmm0_4
  int v115; // eax
  int v116; // eax
  struct IImageSource *v117; // rdi
  int v118; // eax
  float v119; // xmm1_4
  float v120; // xmm11_4
  float v121; // xmm9_4
  int v122; // eax
  int v123; // eax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r9
  int v127; // edx
  unsigned int v128; // r8d
  CMILMatrix *TopByReference; // rax
  unsigned int v130; // r14d
  __int64 v131; // rax
  int v132; // ecx
  int v133; // eax
  int v134; // r9d
  __int64 v135; // rcx
  __int64 v136; // rax
  float v137; // xmm12_4
  float v138; // xmm11_4
  float v139; // xmm10_4
  __int64 v140; // rdx
  int v141; // eax
  __int64 v142; // r8
  unsigned int v143; // eax
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // rdx
  int v147; // eax
  void ***v148; // rax
  char v149; // bl
  float v150; // xmm2_4
  float v151; // xmm4_4
  float v152; // xmm3_4
  float v153; // xmm5_4
  __m128i v154; // xmm8
  bool v155; // al
  float v156; // xmm8_4
  const struct CShape *v157; // rcx
  int v158; // eax
  const struct CShape *v159; // rcx
  const struct CShape *v160; // rcx
  char v161; // al
  HWND v162; // r8
  int v163; // edx
  int v164; // ecx
  int v165; // eax
  float v166; // xmm0_4
  __m128i v167; // xmm3
  unsigned int v168; // eax
  float v169; // xmm3_4
  __m128i v170; // xmm2
  int v171; // eax
  float v172; // xmm2_4
  int v173; // r8d
  struct tagRECT *MoveRects; // rax
  unsigned int *p_right; // rbx
  __m128i v176; // xmm5
  __m128i v177; // xmm3
  __m128i v178; // xmm7
  __m128i v179; // xmm0
  float v180; // xmm4_4
  float v181; // xmm2_4
  float v182; // xmm5_4
  float v183; // xmm3_4
  LONG v184; // xmm7_4
  float v185; // xmm1_4
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  void *v187; // rcx
  int v188; // [rsp+28h] [rbp-E0h]
  int v189; // [rsp+28h] [rbp-E0h]
  unsigned int v190; // [rsp+28h] [rbp-E0h]
  unsigned int v191; // [rsp+28h] [rbp-E0h]
  unsigned int v192; // [rsp+28h] [rbp-E0h]
  unsigned int v193; // [rsp+28h] [rbp-E0h]
  int v194; // [rsp+30h] [rbp-D8h]
  bool v195[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v196; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v197; // [rsp+58h] [rbp-B0h]
  struct CShape *v198; // [rsp+60h] [rbp-A8h] BYREF
  void (__fastcall ***v199)(_QWORD, __int64); // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v200[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CSolidColorLegacyMilBrush *v201; // [rsp+78h] [rbp-90h] BYREF
  struct IImageSource *v202; // [rsp+80h] [rbp-88h]
  unsigned int v203; // [rsp+88h] [rbp-80h]
  CDrawingContext *v204; // [rsp+90h] [rbp-78h]
  __int128 v205; // [rsp+98h] [rbp-70h] BYREF
  __int128 v206; // [rsp+A8h] [rbp-60h]
  __int128 v207; // [rsp+B8h] [rbp-50h]
  __int128 v208; // [rsp+C8h] [rbp-40h]
  __int16 v209; // [rsp+D8h] [rbp-30h]
  struct ISwapChainContent *v210; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v211; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v212[64]; // [rsp+108h] [rbp+0h] BYREF
  int v213; // [rsp+148h] [rbp+40h]
  __int128 v214; // [rsp+158h] [rbp+50h] BYREF
  __int128 v215; // [rsp+168h] [rbp+60h] BYREF
  struct _D3DCOLORVALUE *v216[2]; // [rsp+178h] [rbp+70h] BYREF
  char v217[8]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v218; // [rsp+190h] [rbp+88h]
  __int64 v219; // [rsp+198h] [rbp+90h]
  struct tagRECT rcDst; // [rsp+1A0h] [rbp+98h] BYREF
  __m128 v221; // [rsp+1B0h] [rbp+A8h] BYREF
  float v222; // [rsp+1C0h] [rbp+B8h] BYREF
  float v223; // [rsp+1C4h] [rbp+BCh]
  float v224; // [rsp+1C8h] [rbp+C0h]
  float v225; // [rsp+1CCh] [rbp+C4h]
  __int128 v226; // [rsp+1D0h] [rbp+C8h] BYREF
  struct tagRECT v227; // [rsp+1E0h] [rbp+D8h] BYREF
  float v228; // [rsp+1F0h] [rbp+E8h] BYREF
  float v229; // [rsp+1F4h] [rbp+ECh]
  float v230; // [rsp+1F8h] [rbp+F0h]
  float v231; // [rsp+1FCh] [rbp+F4h]
  void **v232; // [rsp+208h] [rbp+100h] BYREF
  __int64 v233; // [rsp+210h] [rbp+108h]
  _BYTE *v234; // [rsp+218h] [rbp+110h]
  _BYTE *v235; // [rsp+220h] [rbp+118h]
  int v236; // [rsp+228h] [rbp+120h]
  __int64 v237; // [rsp+22Ch] [rbp+124h]
  _BYTE v238[16]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v239; // [rsp+248h] [rbp+140h]
  unsigned int v240[4]; // [rsp+258h] [rbp+150h] BYREF
  unsigned __int64 v241; // [rsp+268h] [rbp+160h] BYREF
  unsigned __int64 v242; // [rsp+270h] [rbp+168h]
  __int64 v243; // [rsp+278h] [rbp+170h]
  float v244[2]; // [rsp+290h] [rbp+188h] BYREF
  float v245; // [rsp+298h] [rbp+190h]
  float v246; // [rsp+29Ch] [rbp+194h]
  int v247; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v248[15]; // [rsp+2ACh] [rbp+1A4h] BYREF

  v11 = *((_DWORD *)a1 + 209) & 0xFFFFFFFD;
  v14 = a6;
  v216[0] = a11;
  v204 = this;
  v202 = a4;
  *(_QWORD *)&v214 = a3;
  *(_QWORD *)&rcDst.left = a6;
  v210 = 0LL;
  v199 = 0LL;
  v198 = 0LL;
  v196 = 0LL;
  v211 = (struct tagRECT)0LL;
  v201 = 0LL;
  v195[5] = 0;
  v213 = 0;
  v195[6] = 0;
  v16 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x94Au);
    goto LABEL_135;
  }
  v17 = 0;
  v18 = 0.0;
  *(_QWORD *)&v215 = 0LL;
  v19 = 0;
  *(_DWORD *)v195 = 0;
  LOBYTE(v197) = 0;
  if ( a4 )
  {
    v20 = *((_DWORD *)a1 + 174) - *((_DWORD *)a1 + 172);
    if ( v20 < 0 )
      v20 = 0;
    v21 = _mm_cvtsi32_si128(v20);
    v22 = *((_DWORD *)a1 + 175) - *((_DWORD *)a1 + 173);
    LODWORD(v23) = _mm_cvtepi32_ps(v21).m128_u32[0];
    *((float *)&v215 + 2) = v23;
    if ( v22 < 0 )
      v22 = 0;
    v24 = (float)v22;
  }
  else
  {
    v23 = 0.0;
    v24 = 0.0;
    DWORD2(v215) = 0;
  }
  *((float *)&v215 + 3) = v24;
  if ( !a5 )
    goto LABEL_30;
  v25 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)a5 + 32LL);
  if ( v25 == CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds((__int64)a5, (__int64)v217, 0LL);
  else
    TightBounds = v25((__int64)a5, (__int64)v217, 0LL);
  *(_DWORD *)v195 = TightBounds;
  v17 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x653u);
    v30 = v195[6];
    LOBYTE(v197) = v195[6];
  }
  else
  {
    if ( *(float *)v217 < 0.0 || *(float *)&v218 > v23 || *(float *)&v217[4] < 0.0 || *((float *)&v218 + 1) > v24 )
      LOBYTE(v197) = 1;
    if ( *(float *)v217 > 0.0 )
    {
      LODWORD(v215) = *(_DWORD *)v217;
      v18 = *(float *)v217;
    }
    v27 = 0.0;
    if ( *(float *)&v217[4] > 0.0 )
    {
      DWORD1(v215) = *(_DWORD *)&v217[4];
      v19 = *(_DWORD *)&v217[4];
      v27 = *(float *)&v217[4];
    }
    v28 = v23;
    if ( v23 > *(float *)&v218 )
    {
      DWORD2(v215) = v218;
      LODWORD(v23) = v218;
      v28 = *(float *)&v218;
    }
    v29 = v24;
    if ( v24 > *((float *)&v218 + 1) )
    {
      HIDWORD(v215) = HIDWORD(v218);
      v24 = *((float *)&v218 + 1);
      v29 = *((float *)&v218 + 1);
    }
    if ( v28 <= v18 || v29 <= v27 )
    {
      v24 = 0.0;
      v23 = 0.0;
      v19 = 0;
      v18 = 0.0;
      v215 = 0uLL;
    }
    v30 = 0;
    v31 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)a5 + 40LL);
    if ( v31 == CRectanglesShape::IsRectangles )
      IsRectangles = CRectanglesShape::IsRectangles(a5, v200);
    else
      IsRectangles = v31(a5, v200);
    if ( IsRectangles && v200[0] == 1 )
LABEL_30:
      v30 = 1;
  }
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x950u);
    goto LABEL_135;
  }
  if ( *((_BYTE *)this + 6828) )
  {
    if ( qword_1802D6428 )
    {
      v125 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v126 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v126 + 8 * v125)) )
        {
          v125 = (unsigned int)(v127 + 1);
          if ( (unsigned int)v125 >= v128 )
            goto LABEL_33;
        }
        *(_QWORD *)&v226 = __PAIR64__(v19, LODWORD(v18));
        *((_QWORD *)&v226 + 1) = __PAIR64__(LODWORD(v24), LODWORD(v23));
        TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
        v48 = *((_DWORD *)this + 1674) == 0;
        v203 = 0;
        if ( !v48 )
        {
          v130 = v203;
          do
            CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)this + 834) + 8LL * v130++), &v227, this);
          while ( v130 < *((_DWORD *)this + 1674) );
          v14 = *(_DWORD **)&rcDst.left;
        }
      }
    }
  }
LABEL_33:
  v33 = *(void (__fastcall **)(struct IImageSource *, _BYTE *, float *))(*(_QWORD *)v202 + 64LL);
  if ( (char *)v33 == (char *)CGdiSpriteBitmap::GetTransform )
    CGdiSpriteBitmap::GetTransform(v202, v212, &v222);
  else
    v33(v202, v212, &v222);
  if ( (float)(v224 - v222) == 0.0 || (float)(v225 - v223) == 0.0 )
    goto LABEL_135;
  if ( v30 && !a9 && !a10 )
  {
    *(_QWORD *)v217 = &CRegionShape::`vftable';
    v218 = 0LL;
    v219 = 0LL;
    v240[0] = v11 & 1;
    *(_OWORD *)v216 = *(_OWORD *)CMilRectLFromMilRectF(&v227, &v215);
    v34 = (__int128 *)CMilRectLFromMilRectF(&v241, &v215);
    v35 = *((_DWORD *)a1 + 210);
    v214 = *v34;
    if ( (v35 || *((_DWORD *)a1 + 212) || *((_DWORD *)a1 + 211) || *((_DWORD *)a1 + 213))
      && (v91 = *((_DWORD *)a1 + 160) + v35,
          rcDst.right = *((_DWORD *)a1 + 162) - *((_DWORD *)a1 + 211),
          rcDst.top = *((_DWORD *)a1 + 161) + *((_DWORD *)a1 + 212),
          v92 = *((_DWORD *)a1 + 163) - *((_DWORD *)a1 + 213),
          rcDst.left = v91,
          rcDst.bottom = v92,
          IntersectRect(&rcDst, &rcDst, (const RECT *)a1 + 43),
          !EqualRect(&rcDst, (const RECT *)a1 + 43)) )
    {
      OffsetRect(&rcDst, -*((_DWORD *)a1 + 172), -*((_DWORD *)a1 + 173));
      left = (LONG)v216[0];
      if ( rcDst.left > SLODWORD(v216[0]) )
      {
        left = rcDst.left;
        LODWORD(v216[0]) = rcDst.left;
      }
      top = HIDWORD(v216[0]);
      if ( rcDst.top > SHIDWORD(v216[0]) )
      {
        top = (unsigned int)rcDst.top;
        HIDWORD(v216[0]) = rcDst.top;
      }
      right = (LONG)v216[1];
      v93 = (LONG)v216[1];
      if ( rcDst.right < SLODWORD(v216[1]) )
      {
        right = rcDst.right;
        LODWORD(v216[1]) = rcDst.right;
        v93 = rcDst.right;
      }
      bottom = HIDWORD(v216[1]);
      v94 = HIDWORD(v216[1]);
      if ( rcDst.bottom < SHIDWORD(v216[1]) )
      {
        bottom = rcDst.bottom;
        HIDWORD(v216[1]) = rcDst.bottom;
        v94 = rcDst.bottom;
      }
      if ( v93 <= left || v94 <= (int)top )
      {
        bottom = 0;
        v216[1] = 0LL;
        right = 0;
        v216[0] = 0LL;
        top = 0LL;
        left = 0;
      }
    }
    else
    {
      left = (LONG)v216[0];
      top = HIDWORD(v216[0]);
      right = (LONG)v216[1];
      bottom = HIDWORD(v216[1]);
    }
    if ( v14 && (*v14 || v14[2] || v14[1] || v14[3]) )
    {
      v41 = 1;
      v44 = *v14 + v214;
      v42 = HIDWORD(v214) - v14[3];
      v95 = v44;
      v40 = DWORD1(v214) + v14[2];
      v43 = DWORD2(v214) - v14[1];
      v96 = v40;
      v195[6] = 1;
      *(_QWORD *)&v214 = __PAIR64__(v40, v44);
      v200[0] = v40;
      HIDWORD(v214) = v42;
      if ( a8 )
      {
        v44 -= *(_DWORD *)CMilRectLFromMilRectF(&v226, &v215);
        LODWORD(v214) = v44;
        v40 -= *(_DWORD *)(CMilRectLFromMilRectF(&v228, &v215) + 4);
        v200[0] = v40;
        DWORD1(v214) = v40;
        v43 += *((_DWORD *)a1 + 174) - *((_DWORD *)a1 + 172) - *(_DWORD *)(CMilRectLFromMilRectF(v244, &v215) + 8);
        v131 = CMilRectLFromMilRectF(&v221, &v215);
        v41 = v195[6];
        v132 = *((_DWORD *)a1 + 175) - *((_DWORD *)a1 + 173) - *(_DWORD *)(v131 + 12);
        v95 = v44;
        v42 += v132;
        HIDWORD(v214) = v42;
        v96 = v40;
      }
      if ( v43 <= v95 )
      {
        v43 = v44;
        DWORD2(v214) = v44;
      }
      else
      {
        DWORD2(v214) = v43;
      }
      if ( v42 <= v96 )
      {
        v42 = v96;
        HIDWORD(v214) = v96;
      }
    }
    else
    {
      v40 = DWORD1(v214);
      v41 = 0;
      v42 = HIDWORD(v214);
      v43 = DWORD2(v214);
      v44 = v214;
      v200[0] = DWORD1(v214);
    }
    if ( left > v44 )
    {
      v44 = left;
      LODWORD(v214) = left;
    }
    if ( (int)top > v40 )
    {
      v40 = top;
      DWORD1(v214) = top;
    }
    v200[0] = v40;
    v45 = v43;
    if ( right < v43 )
    {
      v43 = right;
      DWORD2(v214) = right;
      v45 = right;
    }
    v46 = v42;
    if ( bottom < v42 )
    {
      v42 = bottom;
      HIDWORD(v214) = bottom;
      v46 = bottom;
    }
    if ( v45 <= v44 || v46 <= v40 )
    {
      v40 = 0;
      v42 = 0;
      v43 = 0;
      v200[0] = 0;
      v44 = 0;
      v214 = 0uLL;
    }
    if ( !v41
      || v40 == (_DWORD)top && v44 == left && v43 == right && v42 == bottom
      || (v195[6] = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v214))
      && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v216)
      || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(&v214)
      && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v216) )
    {
      v47 = v204;
    }
    else
    {
      v47 = v204;
      if ( LOBYTE(v240[0])
        && v202 == *((struct IImageSource **)a1 + 90)
        && *((_QWORD *)v204 + 46)
        && *((_BYTE *)v204 + 6605) )
      {
        memset_0((char *)&v241 + 4, 0, 0x24uLL);
        v241 = 0xFF00000100000002uLL;
        v133 = CDrawingContext::PushRenderOptionsInternal(v47, 0LL, (const struct MilRenderOptions *)&v241, 1);
        if ( v133 < 0 )
        {
          v17 = v133;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v133, 0xB87u);
          CRegionShape::~CRegionShape((CRegionShape *)v217);
          goto LABEL_135;
        }
        v195[5] = 1;
      }
      if ( v195[6] )
      {
        v78 = CRegionShape::BuildFromRects((__int64)v217, (__int64)v216, 1u);
        if ( v78 < 0 )
        {
          v190 = 2984;
          goto LABEL_242;
        }
      }
      else
      {
        `vector constructor iterator'(
          (CInputSinkStruct::InputQueueInfo *)&v247,
          0x10uLL,
          4uLL,
          (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        v98 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(v216, &v214, v97, &v247);
        v78 = CRegionShape::BuildFromRects((__int64)v217, (__int64)&v247, v98);
        if ( v78 < 0 )
        {
          v190 = 2980;
          goto LABEL_242;
        }
      }
      v206 = _xmm;
      v209 = 32085;
      v207 = _xmm;
      v208 = _xmm;
      v205 = _xmm;
      CMILMatrix::SetTranslation(
        (CMILMatrix *)&v205,
        COERCE_FLOAT(LODWORD(v222) ^ _xmm),
        COERCE_FLOAT(LODWORD(v223) ^ _xmm),
        0.0);
      v78 = CDrawingContext::FillShapeWithBitmap(v47, v202, (const struct CMILMatrix *)&v205, (CShape *)v217, 0);
      *(_DWORD *)v195 = v78;
      if ( v78 < 0 )
      {
        v190 = 2994;
LABEL_242:
        v17 = v78;
        v134 = v78;
LABEL_244:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v134, v190);
        CRegionShape::~CRegionShape((CRegionShape *)v217);
        goto LABEL_120;
      }
    }
    if ( v43 > v44 && v42 > v40 )
    {
      v48 = *((_BYTE *)v47 + 6827) == 0;
      v49 = (float)v44;
      v50 = (float)v40;
      *(float *)&rcDst.left = (float)v44;
      *(float *)&rcDst.top = (float)v40;
      *(float *)&rcDst.right = (float)v43;
      *(float *)&rcDst.bottom = (float)v42;
      if ( v48 )
      {
        v66 = a7;
LABEL_92:
        v69 = (float)v44;
        v70 = (float)v43;
        v71 = v224 - v222;
        v72 = v225 - v223;
        *(float *)&v214 = (float)v44;
        v73 = v50;
        *((float *)&v214 + 2) = (float)v43;
        *((float *)&v214 + 1) = v50;
        *((float *)&v214 + 3) = (float)v42;
        if ( v49 < 0.0 )
        {
          LODWORD(v214) = 0;
          v69 = 0.0;
        }
        v74 = v50;
        if ( v50 < 0.0 )
        {
          DWORD1(v214) = 0;
          v73 = 0.0;
          v74 = 0.0;
        }
        v75 = (float)v43;
        if ( (float)v43 > v71 )
        {
          v70 = v224 - v222;
          v75 = v224 - v222;
          *((float *)&v214 + 2) = v224 - v222;
        }
        v76 = (float)v42;
        if ( (float)v42 > v72 )
        {
          *((float *)&v214 + 3) = v225 - v223;
          v76 = v225 - v223;
        }
        if ( v75 <= v69 || v76 <= v74 )
        {
          v77 = v202;
        }
        else
        {
          v230 = v70 + v222;
          v228 = v222 + v69;
          v229 = v73 + v223;
          v231 = v76 + v223;
          if ( v195[5] )
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v228);
          v189 = v66;
          v77 = v202;
          v78 = CDrawingContext::DrawBitmap(v47, v202, (__int64)&v228, (const struct MilRectF *)&v214, v189, v11);
          *(_DWORD *)v195 = v78;
          if ( v78 < 0 )
          {
            v190 = 3060;
            goto LABEL_242;
          }
        }
        if ( v195[5] )
        {
          CDrawingContext::PopRenderOptionsInternal(v47, 1);
          v195[5] = 0;
        }
        if ( LOBYTE(v240[0]) )
        {
          if ( v77 == *((struct IImageSource **)a1 + 90) )
          {
            CDrawingContext::RecordWindowMoveOptimization(v47, a1, (HWND)top, 0LL);
            *((_BYTE *)a1 + 923) = 0;
            CWindowNode::ClipAgainstMargins((__int64)a1, (__int64)&v215);
            v78 = CDrawingContext::VisualWasRendered((__int64)v47, &v215, a1);
            *(_DWORD *)v195 = v78;
            if ( v78 < 0 )
            {
              v190 = 3097;
              goto LABEL_242;
            }
          }
        }
        v79 = v71 - 0.0;
        v80 = 0;
        v81 = 0;
        v82 = (float)(v43 - v44);
        if ( v82 > (float)(v71 - 0.0) )
        {
          *(_QWORD *)&v215 = __PAIR64__(LODWORD(v50), LODWORD(v71));
          *((float *)&v215 + 2) = (float)v43;
          *((float *)&v215 + 3) = (float)v42;
          v80 = CDrawingContext::IsOccluded((__int64)v47, &v215, a7) == 0;
        }
        v83 = v72 - 0.0;
        v84 = (float)(v42 - v200[0]);
        if ( v84 > (float)(v72 - 0.0) )
        {
          *(float *)&v214 = (float)v44;
          *((float *)&v214 + 1) = v72;
          *((float *)&v214 + 2) = (float)v43;
          *((float *)&v214 + 3) = (float)v42;
          if ( !CDrawingContext::IsOccluded((__int64)v47, &v214, a7) )
            v81 = 1;
        }
        if ( !v80 && !v81 )
        {
LABEL_115:
          *(_QWORD *)v217 = &CRegionShape::`vftable';
          if ( v219 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v219 + 16LL))(v219);
          v85 = v218;
          if ( v218 )
          {
            v218 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
          }
LABEL_119:
          v17 = *(_DWORD *)v195;
LABEL_120:
          v86 = v199;
LABEL_121:
          v87 = v201;
          goto LABEL_122;
        }
        memset_0((char *)&v241 + 4, 0, 0x24uLL);
        v241 = 2LL;
        *(_DWORD *)v195 = CDrawingContext::PushRenderOptionsInternal(
                            v47,
                            0LL,
                            (const struct MilRenderOptions *)&v241,
                            1);
        v17 = *(_DWORD *)v195;
        if ( *(int *)v195 < 0 )
        {
          v190 = 3163;
          v134 = *(_DWORD *)v195;
          goto LABEL_244;
        }
        if ( v80 )
        {
          v112 = *(float *)&v215 + COERCE_FLOAT(v215 ^ _xmm);
          v113 = *((float *)&v215 + 2) + COERCE_FLOAT(v215 ^ _xmm);
          *(float *)&v114 = *((float *)&v215 + 3) + COERCE_FLOAT(DWORD1(v215) ^ _xmm);
          *((float *)&v215 + 1) = *((float *)&v215 + 1) + COERCE_FLOAT(DWORD1(v215) ^ _xmm);
          v205 = _xmm;
          v209 = 32085;
          v206 = _xmm;
          *(float *)&v215 = v112;
          *((_QWORD *)&v215 + 1) = __PAIR64__(v114, LODWORD(v113));
          v207 = _xmm;
          v208 = _xmm;
          CMILMatrix::SetTranslation((CMILMatrix *)&v205, v71, *(float *)&rcDst.top, 0.0);
          v115 = CDrawingContext::PushTransformInternal(v47, 0LL, (const struct CMILMatrix *)&v205, 1, 1);
          v17 = v115;
          if ( v115 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v115, 0xC6Au);
            goto LABEL_267;
          }
          v116 = CDrawingContext::ApplyRenderStateInternal(v47, 0);
          v17 = v116;
          if ( v116 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v116, 0xC70u);
          }
          else
          {
            v205 = _xmm;
            v209 = 32085;
            v206 = _xmm;
            v207 = _xmm;
            v208 = _xmm;
            CMILMatrix::SetTranslation(
              (CMILMatrix *)&v205,
              1.0 - (float)(v79 + v222),
              COERCE_FLOAT(LODWORD(v223) ^ _xmm),
              0.0);
            CMILMatrix::Scale((CMILMatrix *)&v205, v113 - v112, v84 / v83, 1.0);
            CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v232, (const struct MilRectF *)&v215);
            v117 = v202;
            v118 = CDrawingContext::FillShapeWithBitmap(
                     v47,
                     v202,
                     (const struct CMILMatrix *)&v205,
                     (CShape *)&v232,
                     v11);
            *(_DWORD *)v195 = v118;
            v17 = v118;
            if ( v118 >= 0 )
            {
              CDrawingContext::PopTransformInternal(v47, 1);
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
              v49 = *(float *)&rcDst.left;
LABEL_206:
              if ( !v81 )
              {
LABEL_211:
                CDrawingContext::PopRenderOptionsInternal(v47, 1);
                v195[5] = 0;
                goto LABEL_115;
              }
              LODWORD(v119) = v214 ^ _xmm;
              v120 = *((float *)&v214 + 1) + COERCE_FLOAT(DWORD1(v214) ^ _xmm);
              v121 = *((float *)&v214 + 3) + COERCE_FLOAT(DWORD1(v214) ^ _xmm);
              *(float *)&v214 = *(float *)&v214 + COERCE_FLOAT(v214 ^ _xmm);
              *((float *)&v214 + 1) = v120;
              v206 = _xmm;
              v209 = 32085;
              *((float *)&v214 + 3) = v121;
              *((float *)&v214 + 2) = *((float *)&v214 + 2) + v119;
              v205 = _xmm;
              v207 = _xmm;
              v208 = _xmm;
              CMILMatrix::SetTranslation((CMILMatrix *)&v205, v49, v72, 0.0);
              v122 = CDrawingContext::PushTransformInternal(v47, 0LL, (const struct CMILMatrix *)&v205, 1, 1);
              v17 = v122;
              if ( v122 >= 0 )
              {
                v123 = CDrawingContext::ApplyRenderStateInternal(v47, 0);
                v17 = v123;
                if ( v123 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v123, 0xC9Cu);
                }
                else
                {
                  v207 = _xmm;
                  v209 = 32085;
                  v206 = _xmm;
                  v205 = _xmm;
                  v208 = _xmm;
                  CMILMatrix::SetTranslation(
                    (CMILMatrix *)&v205,
                    COERCE_FLOAT(LODWORD(v222) ^ _xmm),
                    1.0 - (float)(v83 + v223),
                    0.0);
                  CMILMatrix::Scale((CMILMatrix *)&v205, v82 / v79, v121 - v120, 1.0);
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v232, (const struct MilRectF *)&v214);
                  v124 = CDrawingContext::FillShapeWithBitmap(
                           v47,
                           v117,
                           (const struct CMILMatrix *)&v205,
                           (CShape *)&v232,
                           v11);
                  *(_DWORD *)v195 = v124;
                  v17 = v124;
                  if ( v124 >= 0 )
                  {
                    CDrawingContext::PopTransformInternal(v47, 1);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
                    goto LABEL_211;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v124, 0xCB0u);
                  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
                }
                goto LABEL_269;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0xC96u);
LABEL_267:
              CRegionShape::~CRegionShape((CRegionShape *)v217);
LABEL_270:
              v87 = v201;
              v89 = v196;
              v88 = v198;
LABEL_380:
              CDrawingContext::PopRenderOptionsInternal(v47, 1);
              v86 = v199;
              goto LABEL_123;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v118, 0xC84u);
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
          }
LABEL_269:
          CRegionShape::~CRegionShape((CRegionShape *)v217);
          CDrawingContext::PopTransformInternal(v47, 1);
          goto LABEL_270;
        }
        v117 = v202;
        goto LABEL_206;
      }
      v51 = *((_DWORD *)v47 + 120);
      v227 = rcDst;
      if ( v51 )
        v52 = (void *)(*((_QWORD *)v47 + 62) + 68LL * (unsigned int)(v51 - 1));
      else
        v52 = &CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<1>(v52, &v227, &v214);
      v54 = *((float *)&v214 + 2);
      v55 = *(float *)&v214;
      if ( *((float *)&v214 + 2) > *(float *)&v214 )
      {
        v56 = *((float *)&v214 + 3);
        v57 = *((float *)&v214 + 1);
        if ( *((float *)&v214 + 3) > *((float *)&v214 + 1) )
        {
          v58 = *((_DWORD *)v47 + 258);
          if ( v58
            && *(_DWORD *)(*((_QWORD *)v47 + 126) + 80LL * (unsigned int)(v58 - 1) + 4)
            && (v59 = *((_DWORD *)v47 + 768)) != 0 )
          {
            v221 = *(__m128 *)(*((_QWORD *)v47 + 386) + 16LL * (unsigned int)(v59 - 1));
            v60 = v221.m128_f32[2];
            v61 = v221.m128_f32[1];
            LODWORD(v62) = _mm_shuffle_ps(v221, v221, 255).m128_u32[0];
            v63 = v221.m128_f32[0];
          }
          else
          {
            v62 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
            v60 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v61 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v63 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          if ( v58 && *(_DWORD *)(*((_QWORD *)v47 + 126) + 80LL * (unsigned int)(v58 - 1) + 8) )
          {
            v135 = 120LL * (unsigned int)(*((_DWORD *)v47 + 466) - 1);
            v136 = *((_QWORD *)v47 + 230);
            if ( *(float *)(v135 + v136 + 96) > v63 )
              v63 = *(float *)(v135 + v136 + 96);
            v137 = v61;
            if ( *(float *)(v135 + v136 + 100) > v61 )
            {
              v61 = *(float *)(v135 + v136 + 100);
              v137 = v61;
            }
            v138 = v60;
            if ( v60 > *(float *)(v135 + v136 + 104) )
            {
              v60 = *(float *)(v135 + v136 + 104);
              v138 = v60;
            }
            v139 = v62;
            if ( v62 > *(float *)(v135 + v136 + 108) )
            {
              v62 = *(float *)(v135 + v136 + 108);
              v139 = v62;
            }
            if ( v138 <= v63 || v139 <= v137 )
            {
              v62 = 0.0;
              v60 = 0.0;
              v61 = 0.0;
              v63 = 0.0;
            }
          }
          if ( v63 > *(float *)&v214 )
          {
            *(float *)&v214 = v63;
            v55 = v63;
          }
          v64 = *((float *)&v214 + 1);
          if ( v61 > *((float *)&v214 + 1) )
          {
            *((float *)&v214 + 1) = v61;
            v57 = v61;
            v64 = v61;
          }
          if ( *((float *)&v214 + 2) > v60 )
          {
            *((float *)&v214 + 2) = v60;
            v54 = v60;
          }
          if ( *((float *)&v214 + 3) > v62 )
          {
            *((float *)&v214 + 3) = v62;
            v56 = v62;
          }
          if ( v54 <= v55 || v56 <= v64 )
          {
            v57 = 0.0;
            v214 = 0uLL;
            v55 = 0.0;
            v54 = 0.0;
            v56 = 0.0;
          }
          if ( v54 > v55 && v56 > v57 )
          {
            v65 = *(_QWORD *)(*((_QWORD *)v47 + 843) + 392LL);
            v66 = a7;
            v227 = (struct tagRECT)v214;
            v67 = *(char (__fastcall **)(__int64, __int64, int, char))(*(_QWORD *)v65 + 56LL);
            v68 = v67 == CArrayBasedCoverageSet::IsFullyCovered
                ? CArrayBasedCoverageSet::IsFullyCovered(v65, (__int64)&v227, a7, v53)
                : ((__int64 (__fastcall *)(__int64, struct tagRECT *, _QWORD))v67)(v65, &v227, a7);
            if ( !v68 )
            {
              v50 = *(float *)&rcDst.top;
              goto LABEL_92;
            }
          }
        }
      }
    }
    ++*((_DWORD *)a1 + 246);
    goto LABEL_115;
  }
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v217,
    4uLL,
    2uLL,
    (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  if ( !a8
    || v30
    || !(unsigned __int8)CWindowNode::GetAlphaMarginsRects(
                           (_DWORD)a1,
                           a8,
                           (_DWORD)v14,
                           (unsigned int)&v215,
                           (__int64)&v227,
                           (__int64)&v221) )
  {
    goto LABEL_174;
  }
  v232 = &CRectanglesShape::`vftable';
  v234 = v238;
  v233 = 0LL;
  v235 = v238;
  v236 = 1;
  v237 = 1LL;
  v239 = 0LL;
  *(float *)&v226 = (float)v221.m128_i32[0];
  *((float *)&v226 + 1) = (float)v221.m128_i32[1];
  *((float *)&v226 + 2) = (float)v221.m128_i32[2];
  *((float *)&v226 + 3) = (float)v221.m128_i32[3];
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v232, (const struct MilRectF *)&v226);
  v141 = CShape::Combine(&v232, v140, a5, 0LL, 1, &v211);
  if ( v141 < 0 )
  {
    v17 = v141;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v141, 0x9B6u);
    goto LABEL_282;
  }
  v242 = 0LL;
  v241 = (unsigned __int64)&CRegionShape::`vftable';
  v243 = 0LL;
  if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v221) )
  {
    v144 = CRegionShape::BuildFromRects((__int64)&v241, (__int64)&v227, 1u);
    if ( v144 < 0 )
    {
      v191 = 2519;
      goto LABEL_280;
    }
  }
  else
  {
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)&v247,
      0x10uLL,
      4uLL,
      (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v143 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v227, &v221, v142, &v247);
    v144 = CRegionShape::BuildFromRects((__int64)&v241, (__int64)&v247, v143);
    if ( v144 < 0 )
    {
      v191 = 2515;
LABEL_280:
      v17 = v144;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v144, v191);
      CRegionShape::~CRegionShape((CRegionShape *)&v241);
LABEL_282:
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
      goto LABEL_131;
    }
  }
  v144 = CShape::Combine(&v241, v145, a5, 0LL, 1, &v211.right);
  if ( v144 < 0 )
  {
    v191 = 2531;
    goto LABEL_280;
  }
  CRegionShape::~CRegionShape((CRegionShape *)&v241);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
  if ( *(_QWORD *)&v211.left && *(_QWORD *)&v211.right )
  {
    v227 = v211;
    *(_DWORD *)&v217[4] = 0;
    v203 = 2;
  }
  else
  {
LABEL_174:
    v203 = 1;
    *(_QWORD *)&v227.left = a5;
  }
  v99 = (CShape **)&v227;
  v100 = (COverlayContext **)v204;
  *(_DWORD *)v217 = v11;
  v200[0] = 0;
  while ( 1 )
  {
    v101 = *v99;
    v232 = &CRectanglesShape::`vftable';
    v234 = v238;
    v235 = v238;
    v233 = 0LL;
    v236 = 1;
    v237 = 1LL;
    v239 = 0LL;
    if ( v101 )
    {
      if ( !(_BYTE)v197 )
        goto LABEL_178;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)&v232, (const struct MilRectF *)&v215);
      if ( v199 )
        (**v199)(v199, 1LL);
      v199 = 0LL;
      v147 = CShape::Combine(&v232, v146, v101, 0LL, 1, &v199);
      if ( v147 < 0 )
      {
        v17 = v147;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v147, 0xA1Eu);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
        v86 = v199;
        goto LABEL_121;
      }
      v148 = (void ***)v199;
    }
    else
    {
      CRectanglesShape::SetSingleRect((CRectanglesShape *)&v232, (const struct MilRectF *)&v215);
      v148 = &v232;
    }
    *v99 = (CShape *)v148;
LABEL_178:
    v102 = v202;
    v209 = 32085;
    v205 = _xmm;
    v206 = _xmm;
    v207 = _xmm;
    v208 = _xmm;
    v103 = CWindowNode::ApplyTextureToLocalTransform(a1, v202, (struct CMILMatrix *)&v205);
    if ( v103 < 0 )
    {
      v193 = 2607;
      goto LABEL_369;
    }
    if ( a10 )
      break;
LABEL_180:
    v104 = *(int (__fastcall ***)(struct IImageSource *, GUID *, struct ISwapChainContent **))v102;
    v195[4] = 0;
    if ( (*v104)(v102, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v210) < 0 )
      goto LABEL_181;
    v103 = CDrawingContext::DrawAsOverlay(v100, v210, &v195[4]);
    *(_DWORD *)v195 = v103;
    if ( v103 < 0 )
    {
      v193 = 2760;
      goto LABEL_369;
    }
    v161 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v210 + 112LL))(v210);
    if ( !v195[4] && !v161 )
    {
LABEL_181:
      v105 = (struct IImageSource *)*((_QWORD *)a1 + 108);
      if ( v105 )
        v105 = (struct IImageSource *)((char *)v105 + 64);
      if ( v102 == v105
        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v205 - 1.0)) & _xmm) >= 0.0000011920929
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v206 + 1) - 1.0)) & _xmm) >= 0.0000011920929) )
      {
        memset_0(v248, 0, 0x24uLL);
        v247 = 2;
        v248[0] = 1;
        v103 = CDrawingContext::PushRenderOptionsInternal(
                 (CDrawingContext *)v100,
                 0LL,
                 (const struct MilRenderOptions *)&v247,
                 1);
        if ( v103 < 0 )
        {
          v193 = 2778;
          goto LABEL_369;
        }
        v195[5] = 1;
      }
      v103 = CDrawingContext::FillShapeWithBitmap(
               (CDrawingContext *)v100,
               v102,
               (const struct CMILMatrix *)&v205,
               *v99,
               *(_DWORD *)&v217[4 * v200[0]]);
      *(_DWORD *)v195 = v103;
      if ( v103 < 0 )
      {
        v193 = 2786;
        goto LABEL_369;
      }
      if ( v195[5] )
      {
        CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v100, 1);
        v195[5] = 0;
      }
    }
    v106 = *((_QWORD *)a1 + 108);
    v107 = (CCompositionSurfaceBitmap *)(v106 + 64);
    if ( v106 )
      v106 += 64LL;
    if ( v102 == (struct IImageSource *)v106 && CCompositionSurfaceBitmap::IsOpaque(v107) && v30 )
      CDrawingContext::RecordWindowMoveOptimization((CDrawingContext *)v100, a1, v162, &v195[6]);
    v108 = *((_QWORD *)a1 + 108);
    v109 = (CCompositionSurfaceBitmap *)(v108 + 64);
    if ( v108 )
      v108 += 64LL;
    if ( v102 == (struct IImageSource *)v108 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v109) )
      {
        if ( v30 )
        {
          if ( *((_BYTE *)a1 + 923) )
          {
            if ( *((_BYTE *)a1 + 976) )
            {
              if ( !v195[6] )
              {
                v163 = *((_DWORD *)a1 + 172);
                v164 = *((_DWORD *)a1 + 173);
                v165 = *((_DWORD *)a1 + 168) - v163;
                v195[4] = 0;
                v166 = (float)v165;
                v167 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 169) - v164);
                v168 = *((_DWORD *)a1 + 170) - v163;
                v228 = v166;
                LODWORD(v169) = _mm_cvtepi32_ps(v167).m128_u32[0];
                v170 = _mm_cvtsi32_si128(v168);
                v171 = *((_DWORD *)a1 + 171) - v164;
                v229 = v169;
                LODWORD(v172) = _mm_cvtepi32_ps(v170).m128_u32[0];
                v230 = v172;
                v231 = (float)v171;
                if ( a9
                  || a10
                  && (float)(v172 - v166) >= (float)(v224 - v222)
                  && (float)((float)v171 - v169) >= (float)(v225 - v223) )
                {
                  if ( (_QWORD)v214 )
                    v173 = *(_DWORD *)(v214 + 32);
                  else
                    v173 = 0;
                  v103 = CDrawingContext::CalcRectFullyVisible(
                           (CDrawingContext *)v100,
                           (const struct MilRectF *)&v228,
                           v173,
                           &v195[4]);
                  *(_DWORD *)v195 = v103;
                  if ( v103 < 0 )
                  {
                    v193 = 2834;
                    goto LABEL_369;
                  }
                  if ( v195[4] )
                  {
                    v195[4] = 0;
                    v240[0] = 0;
                    MoveRects = CDwmMetaRegion::GetMoveRects((struct CWindowNode *)((char *)a1 + 936), v240);
                    if ( MoveRects )
                    {
                      if ( v240[0] )
                      {
                        p_right = (unsigned int *)&MoveRects->right;
                        *(_QWORD *)v240 = v240[0];
                        do
                        {
                          v176 = _mm_cvtsi32_si128(*p_right);
                          v177 = _mm_cvtsi32_si128(p_right[1]);
                          v178 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 238));
                          v179 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 239));
                          v180 = (float)(int)*(p_right - 2);
                          v181 = (float)(int)*(p_right - 1);
                          v221.m128_f32[0] = v180;
                          v221.m128_f32[1] = v181;
                          LODWORD(v182) = _mm_cvtepi32_ps(v176).m128_u32[0];
                          LODWORD(v183) = _mm_cvtepi32_ps(v177).m128_u32[0];
                          v221.m128_u64[1] = __PAIR64__(LODWORD(v183), LODWORD(v182));
                          v184 = _mm_cvtepi32_ps(v178).m128_u32[0];
                          rcDst.left = v184;
                          rcDst.top = _mm_cvtepi32_ps(v179).m128_u32[0];
                          if ( a10 && *((_BYTE *)a1 + 920) )
                          {
                            v221.m128_f32[1] = v181 + 0.0;
                            v221.m128_f32[3] = v183 + 0.0;
                            v185 = (float)(v230 - v228) - (float)(v224 - v222);
                            v221.m128_f32[0] = v185 + v180;
                            v221.m128_f32[2] = v185 + v182;
                            *(float *)&rcDst.left = v185 + *(float *)&v184;
                          }
                          CDrawingContext::RecordMoveOptimization(
                            (struct CDrawingContext *)v100,
                            a1,
                            v188,
                            v194,
                            (__int64)&v195[4]);
                          p_right += 4;
                          --*(_QWORD *)v240;
                        }
                        while ( *(_QWORD *)v240 );
                        if ( v195[4] )
                        {
                          *((_BYTE *)a1 + 923) = 0;
                          MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(
                                                    a1,
                                                    (const struct CDrawingContext *)v100);
                          CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
                          v187 = (void *)*((_QWORD *)MoveRenderPassInfoRef + 2);
                          *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
                          if ( v187 )
                            DeleteObject(v187);
                        }
                        v102 = v202;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v110 = *((_QWORD *)a1 + 108);
    v111 = (CCompositionSurfaceBitmap *)(v110 + 64);
    if ( v110 )
      v110 += 64LL;
    if ( v102 == (struct IImageSource *)v110 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v111) )
      {
        if ( v30 )
        {
          CWindowNode::ClipAgainstMargins((__int64)a1, (__int64)&v215);
          v103 = CDrawingContext::VisualWasRendered((__int64)v100, &v215, a1);
          *(_DWORD *)v195 = v103;
          if ( v103 < 0 )
          {
            v193 = 2910;
LABEL_369:
            v17 = v103;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, v193);
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
            goto LABEL_120;
          }
        }
      }
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
    ++v99;
    if ( ++v200[0] >= v203 )
      goto LABEL_119;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v205);
  v149 = 0;
  v150 = *((float *)&v226 + 2) - *(float *)&v226;
  v151 = (float)(*((_DWORD *)a1 + 168) - *((_DWORD *)a1 + 172));
  v152 = (float)(*((_DWORD *)a1 + 169) - *((_DWORD *)a1 + 173));
  v153 = (float)(*((_DWORD *)a1 + 170) - *((_DWORD *)a1 + 172));
  v154 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 171) - *((_DWORD *)a1 + 173));
  v155 = 0;
  v195[4] = 0;
  LODWORD(v156) = _mm_cvtepi32_ps(v154).m128_u32[0];
  if ( (float)(v153 - v151) > (float)(*((float *)&v226 + 2) - *(float *)&v226) )
  {
    v149 = 1;
    if ( *((_BYTE *)a1 + 920) )
    {
      v244[0] = v151;
      v245 = v153 - v150;
    }
    else
    {
      v245 = v153;
      v244[0] = v150 + v151;
    }
    v244[1] = v152;
    v246 = (float)(*((float *)&v226 + 3) - *((float *)&v226 + 1)) + v152;
  }
  if ( (float)(v156 - v152) > (float)(*((float *)&v226 + 3) - *((float *)&v226 + 1)) )
  {
    *(float *)&v241 = v151;
    v155 = 1;
    v242 = __PAIR64__(LODWORD(v156), LODWORD(v153));
    v195[4] = 1;
    *((float *)&v241 + 1) = (float)(*((float *)&v226 + 3) - *((float *)&v226 + 1)) + v152;
  }
  if ( !v149 && !v155 )
  {
LABEL_325:
    v102 = v202;
    goto LABEL_180;
  }
  if ( !v201 )
  {
    v103 = CSolidColorLegacyMilBrush::CreateFromColor(&v201, *((struct CComposition **)a1 + 2), v216[0]);
    if ( v103 < 0 )
    {
      v193 = 2696;
      goto LABEL_369;
    }
    v155 = v195[4];
  }
  if ( v149 )
  {
    if ( v196 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v196)(v196, 1LL);
    v157 = *v99;
    v196 = 0LL;
    v103 = CShape::ClipWithRect(v157, (const struct MilRectF *)v244, &v196);
    if ( v103 < 0 )
    {
      v193 = 2712;
      goto LABEL_369;
    }
    v87 = v201;
    v158 = CDrawingContext::DrawShape((CDrawingContext *)v100, v196, v201);
    if ( v158 < 0 )
    {
      v192 = 2715;
      goto LABEL_372;
    }
    v155 = v195[4];
  }
  else
  {
    v87 = v201;
  }
  if ( !v155 )
  {
LABEL_321:
    *(_OWORD *)v240 = v226;
    if ( v198 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v198)(v198, 1LL);
    v160 = *v99;
    v198 = 0LL;
    v158 = CShape::ClipWithRect(v160, (const struct MilRectF *)v240, &v198);
    if ( v158 < 0 )
    {
      v192 = 2747;
      goto LABEL_372;
    }
    *v99 = v198;
    goto LABEL_325;
  }
  if ( v196 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v196)(v196, 1LL);
  v159 = *v99;
  v196 = 0LL;
  v158 = CShape::ClipWithRect(v159, (const struct MilRectF *)&v241, &v196);
  if ( v158 >= 0 )
  {
    v158 = CDrawingContext::DrawShape((CDrawingContext *)v100, v196, v87);
    if ( v158 < 0 )
    {
      v192 = 2730;
      goto LABEL_372;
    }
    goto LABEL_321;
  }
  v192 = 2727;
LABEL_372:
  v17 = v158;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v158, v192);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v232);
  v86 = v199;
LABEL_122:
  v88 = v198;
  v89 = v196;
  if ( v195[5] )
  {
    v47 = v204;
    goto LABEL_380;
  }
LABEL_123:
  if ( v87 )
    CMILCOMBase::InternalRelease(v87);
  if ( v86 )
    (**v86)(v86, 1LL);
  if ( v88 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v88)(v88, 1LL);
  if ( v89 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v89)(v89, 1LL);
LABEL_131:
  if ( *(_QWORD *)&v211.left )
    (***(void (__fastcall ****)(_QWORD, __int64))&v211.left)(*(_QWORD *)&v211.left, 1LL);
  if ( *(_QWORD *)&v211.right )
    (***(void (__fastcall ****)(_QWORD, __int64))&v211.right)(*(_QWORD *)&v211.right, 1LL);
LABEL_135:
  if ( v210 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v210 + 16LL))(v210);
  return (unsigned int)v17;
}
