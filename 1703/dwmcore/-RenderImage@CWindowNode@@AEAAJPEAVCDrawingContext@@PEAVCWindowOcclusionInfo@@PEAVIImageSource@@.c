/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000CE14 (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18000DC2C (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001E2BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?FillShapeWithBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18001E3AC (-FillShapeWithBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVIImageSource@@AEBVCMILMatrix@@PE.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180020680 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800206A0 (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004FDD0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180050644 (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006F2DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006F9F0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18008ADBC (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18008ADF0 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180093F4C (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800A6148 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18012A478 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18014ACC0 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x18014B124 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18014D7E0 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1801590F0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x18015A684 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180162544 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x1801B00F4 (-ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CVisual *a1,
        __int64 a2,
        __int64 a3,
        struct IImageSource *a4,
        CRectanglesShape *a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        char a11,
        char a12,
        struct _D3DCOLORVALUE *a13)
{
  bool v14; // r12
  int v17; // eax
  int v18; // r15d
  float v19; // xmm10_4
  float v20; // xmm9_4
  signed int v21; // eax
  __m128i v22; // xmm7
  int v23; // eax
  float v24; // xmm7_4
  float v25; // xmm6_4
  __int64 (__fastcall *v26)(CRectanglesShape *, struct CShape **, _QWORD); // rax
  int TightBounds; // eax
  bool (__fastcall *v28)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  char v30; // r15
  char v31; // r14
  char v32; // di
  int *v33; // rax
  CVisual *v34; // r14
  bool v35; // zf
  LONG left; // r9d
  unsigned __int64 top; // r8
  LONG right; // r11d
  LONG bottom; // r10d
  int v40; // r12d
  int v41; // r15d
  int v42; // esi
  int v43; // eax
  float v44; // xmm0_4
  float v45; // xmm11_4
  int v46; // eax
  void *v47; // rcx
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm2_4
  float v51; // xmm3_4
  int v52; // r8d
  int v53; // eax
  float v54; // xmm6_4
  float v55; // xmm1_4
  float v56; // xmm7_4
  float v57; // xmm0_4
  __int64 v58; // rdi
  __int64 v59; // rcx
  int v60; // esi
  __int64 (__fastcall *v61)(__int64, struct CShape **, _QWORD); // rax
  float v63; // xmm6_4
  float v64; // xmm4_4
  float v65; // xmm9_4
  float v66; // xmm10_4
  float v67; // xmm5_4
  float v68; // xmm1_4
  struct IImageSource *v69; // rax
  bool v70; // di
  int v71; // esi
  int v72; // eax
  float v73; // xmm7_4
  bool v74; // di
  char v75; // si
  float v76; // xmm12_4
  float v77; // xmm6_4
  float v78; // xmm11_4
  struct CSolidColorLegacyMilBrush *v79; // rbx
  void (__fastcall ***v80)(_QWORD, __int64); // r14
  struct CShape *v81; // rsi
  struct CShape *v82; // rdi
  LONG v84; // edx
  LONG v85; // r8d
  LONG v86; // eax
  bool IsEmpty; // di
  __int64 v88; // r8
  unsigned int v89; // eax
  CVisual *v90; // rsi
  __int64 v91; // rdi
  struct CShape *v92; // rbx
  struct IImageSource *v93; // rbx
  int v94; // eax
  int (__fastcall **v95)(struct IImageSource *, GUID *, struct ISwapChainContent **); // rax
  struct IImageSource *v96; // rax
  __int64 v97; // rcx
  struct IImageSource *v98; // rax
  __int64 v99; // rcx
  struct IImageSource *v100; // rax
  __int64 v101; // rcx
  struct IImageSource *v102; // rax
  float v103; // xmm14_4
  float v104; // xmm13_4
  unsigned int v105; // xmm0_4
  int v106; // eax
  int v107; // eax
  CCachedVisualImage *v108; // rdi
  float v109; // xmm1_4
  float v110; // xmm11_4
  float v111; // xmm9_4
  int v112; // eax
  int v113; // eax
  int v114; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 i; // rbx
  int *v117; // rax
  int *v118; // rax
  int v119; // ecx
  int v120; // eax
  int v121; // r9d
  __int64 v122; // rcx
  __int64 v123; // rax
  int v124; // eax
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // eax
  __int64 v129; // r8
  unsigned int v130; // eax
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // rdx
  struct CShape *v136; // rax
  char v137; // bl
  float v138; // xmm2_4
  float v139; // xmm4_4
  float v140; // xmm3_4
  float v141; // xmm5_4
  __m128i v142; // xmm7
  bool v143; // al
  int v144; // xmm7_4
  const struct CShape *v145; // rcx
  int v146; // eax
  const struct CShape *v147; // rcx
  const struct CShape *v148; // rcx
  char IsOverlayAssigned; // bl
  char v150; // al
  HWND v151; // r8
  int v152; // edx
  int v153; // ecx
  int v154; // eax
  float v155; // xmm0_4
  __m128i v156; // xmm3
  unsigned int v157; // eax
  int v158; // xmm3_4
  __m128i v159; // xmm2
  int v160; // eax
  float v161; // xmm2_4
  int v162; // r8d
  struct tagRECT *MoveRects; // rax
  unsigned int *p_right; // rbx
  __m128i v165; // xmm4
  __m128i v166; // xmm5
  __m128i v167; // xmm6
  __m128i v168; // xmm0
  float v169; // xmm2_4
  float v170; // xmm3_4
  float v171; // xmm4_4
  float v172; // xmm5_4
  float v173; // xmm6_4
  float v174; // xmm1_4
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  void *v176; // rcx
  int v177; // [rsp+28h] [rbp-E0h]
  unsigned int v178; // [rsp+28h] [rbp-E0h]
  unsigned int v179; // [rsp+28h] [rbp-E0h]
  unsigned int v180; // [rsp+28h] [rbp-E0h]
  unsigned int v181; // [rsp+28h] [rbp-E0h]
  __m128 *v182; // [rsp+30h] [rbp-D8h]
  int v183; // [rsp+38h] [rbp-D0h]
  int v184; // [rsp+48h] [rbp-C0h]
  bool v185[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v186; // [rsp+6Ch] [rbp-9Ch]
  __int64 v187; // [rsp+70h] [rbp-98h]
  struct CShape *v188; // [rsp+78h] [rbp-90h] BYREF
  bool v189; // [rsp+80h] [rbp-88h] BYREF
  struct CShape *v190; // [rsp+88h] [rbp-80h] BYREF
  void (__fastcall ***v191)(_QWORD, __int64); // [rsp+90h] [rbp-78h] BYREF
  struct CSolidColorLegacyMilBrush *v192; // [rsp+98h] [rbp-70h] BYREF
  bool v193; // [rsp+A0h] [rbp-68h]
  unsigned int v194; // [rsp+A4h] [rbp-64h] BYREF
  struct _D3DCOLORVALUE *v195; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v196; // [rsp+B0h] [rbp-58h]
  struct IImageSource *v197; // [rsp+B8h] [rbp-50h]
  __int128 v198; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v199; // [rsp+D8h] [rbp-30h]
  __int128 v200; // [rsp+E8h] [rbp-20h]
  __int128 v201; // [rsp+F8h] [rbp-10h]
  __int16 v202; // [rsp+108h] [rbp+0h]
  struct ISwapChainContent *v203; // [rsp+118h] [rbp+10h] BYREF
  struct CShape *v204; // [rsp+120h] [rbp+18h] BYREF
  struct CShape *v205; // [rsp+128h] [rbp+20h] BYREF
  char v206[64]; // [rsp+138h] [rbp+30h] BYREF
  int v207; // [rsp+178h] [rbp+70h]
  __int128 v208; // [rsp+188h] [rbp+80h] BYREF
  __int128 v209; // [rsp+198h] [rbp+90h] BYREF
  __int128 v210; // [rsp+1A8h] [rbp+A0h] BYREF
  struct CShape *v211[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  RECT rcSrc1; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128 v213; // [rsp+1D8h] [rbp+D0h] BYREF
  float v214; // [rsp+1E8h] [rbp+E0h] BYREF
  float v215; // [rsp+1ECh] [rbp+E4h]
  float v216; // [rsp+1F0h] [rbp+E8h]
  float v217; // [rsp+1F4h] [rbp+ECh]
  __int128 v218; // [rsp+1F8h] [rbp+F0h] BYREF
  CVisual *v219[2]; // [rsp+208h] [rbp+100h]
  __int128 v220; // [rsp+218h] [rbp+110h] BYREF
  unsigned int v221[4]; // [rsp+228h] [rbp+120h] BYREF
  int v222[2]; // [rsp+238h] [rbp+130h] BYREF
  float v223; // [rsp+240h] [rbp+138h]
  float v224; // [rsp+244h] [rbp+13Ch]
  int v225[2]; // [rsp+248h] [rbp+140h] BYREF
  float v226; // [rsp+250h] [rbp+148h]
  float v227; // [rsp+254h] [rbp+14Ch]
  int v228[4]; // [rsp+258h] [rbp+150h] BYREF
  void **v229; // [rsp+268h] [rbp+160h] BYREF
  _BYTE *v230; // [rsp+270h] [rbp+168h]
  _BYTE *v231; // [rsp+278h] [rbp+170h]
  int v232; // [rsp+280h] [rbp+178h]
  __int64 v233; // [rsp+284h] [rbp+17Ch]
  _BYTE v234[16]; // [rsp+290h] [rbp+188h] BYREF
  __int64 v235; // [rsp+2A0h] [rbp+198h]
  _QWORD v236[8]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v14 = 0;
  v219[0] = a1;
  v197 = a4;
  *(_QWORD *)&v208 = a3;
  v195 = a13;
  v203 = 0LL;
  v191 = 0LL;
  v190 = 0LL;
  v188 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v192 = 0LL;
  LOBYTE(v187) = 0;
  v207 = 0;
  v189 = 0;
  v17 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC9Eu);
    goto LABEL_138;
  }
  v186 = 0;
  v19 = 0.0;
  *(_QWORD *)&v209 = 0LL;
  v20 = 0.0;
  v18 = 0;
  v193 = 0;
  if ( a4 )
  {
    v21 = *((_DWORD *)a1 + 165) - *((_DWORD *)a1 + 163);
    if ( v21 < 0 )
      v21 = 0;
    v22 = _mm_cvtsi32_si128(v21);
    v23 = *((_DWORD *)a1 + 166) - *((_DWORD *)a1 + 164);
    LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
    *((float *)&v209 + 2) = v24;
    if ( v23 < 0 )
      v23 = 0;
    v25 = (float)v23;
  }
  else
  {
    v24 = 0.0;
    v25 = 0.0;
    DWORD2(v209) = 0;
  }
  *((float *)&v209 + 3) = v25;
  if ( !a5 )
    goto LABEL_30;
  v26 = *(__int64 (__fastcall **)(CRectanglesShape *, struct CShape **, _QWORD))(*(_QWORD *)a5 + 32LL);
  if ( (char *)v26 == (char *)CRectanglesShape::GetTightBounds )
    TightBounds = CRectanglesShape::GetTightBounds(a5, v211, 0LL);
  else
    TightBounds = v26(a5, v211, 0LL);
  v186 = TightBounds;
  v18 = TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x8FDu);
    v14 = v189;
    v193 = v189;
  }
  else
  {
    if ( *(float *)v211 < 0.0
      || *(float *)&v211[1] > v24
      || *((float *)v211 + 1) < 0.0
      || *((float *)&v211[1] + 1) > v25 )
    {
      v193 = 1;
    }
    if ( *(float *)v211 > 0.0 )
    {
      LODWORD(v209) = v211[0];
      v19 = *(float *)v211;
    }
    if ( *((float *)v211 + 1) > 0.0 )
    {
      DWORD1(v209) = HIDWORD(v211[0]);
      v20 = *((float *)v211 + 1);
    }
    if ( v24 > *(float *)&v211[1] )
    {
      DWORD2(v209) = v211[1];
      v24 = *(float *)&v211[1];
    }
    if ( v25 > *((float *)&v211[1] + 1) )
    {
      HIDWORD(v209) = HIDWORD(v211[1]);
      v25 = *((float *)&v211[1] + 1);
    }
    if ( v24 <= v19 || v25 <= v20 )
    {
      v25 = 0.0;
      v24 = 0.0;
      v20 = 0.0;
      v19 = 0.0;
      v209 = 0uLL;
    }
    v28 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)a5 + 40LL);
    if ( v28 == CRectanglesShape::IsRectangles )
      IsRectangles = CRectanglesShape::IsRectangles(a5, &v194);
    else
      IsRectangles = v28(a5, &v194);
    if ( IsRectangles && v194 == 1 )
LABEL_30:
      v14 = 1;
  }
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xCA4u);
    goto LABEL_138;
  }
  if ( *(_BYTE *)(a2 + 6772) )
  {
    if ( qword_18023E528 )
    {
      if ( CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
      {
        *(_QWORD *)&v218 = __PAIR64__(LODWORD(v20), LODWORD(v19));
        *((_QWORD *)&v218 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
        TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a2 + 472));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v218, &v220);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 6632); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*(_QWORD *)(a2 + 6608) + 8 * i), &v220, a2);
      }
    }
  }
  (*(void (__fastcall **)(struct IImageSource *, char *, float *))(*(_QWORD *)a4 + 56LL))(a4, v206, &v214);
  if ( (float)(v216 - v214) != 0.0 && (float)(v217 - v215) != 0.0 )
  {
    if ( (a6 & 2) != 0 || !v14 )
    {
      v31 = a12;
      v30 = a11;
    }
    else
    {
      v30 = a11;
      v31 = a12;
      if ( !a11 && !a12 )
      {
        v196 = 0LL;
        v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
        v32 = 0;
        v194 = a6 & 1;
        v210 = *(_OWORD *)CMilRectLFromMilRectF((int *)&v220, (__int64)&v209);
        v33 = CMilRectLFromMilRectF(v228, (__int64)&v209);
        v34 = v219[0];
        v35 = *((_DWORD *)v219[0] + 220) == 0;
        v208 = *(_OWORD *)v33;
        if ( v35 && !*((_DWORD *)v219[0] + 222) && !*((_DWORD *)v219[0] + 221) && !*((_DWORD *)v219[0] + 223) )
          goto LABEL_43;
        v84 = *((_DWORD *)v219[0] + 222) + *((_DWORD *)v219[0] + 152);
        v85 = *((_DWORD *)v219[0] + 154) - *((_DWORD *)v219[0] + 223);
        v86 = *((_DWORD *)v219[0] + 220) + *((_DWORD *)v219[0] + 151);
        rcSrc1.right = *((_DWORD *)v219[0] + 153) - *((_DWORD *)v219[0] + 221);
        rcSrc1.top = v84;
        rcSrc1.bottom = v85;
        rcSrc1.left = v86;
        IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)v219[0] + 652));
        if ( !EqualRect(&rcSrc1, (const RECT *)((char *)v34 + 652)) )
        {
          OffsetRect(&rcSrc1, -*((_DWORD *)v34 + 163), -*((_DWORD *)v34 + 164));
          left = v210;
          if ( rcSrc1.left > (int)v210 )
          {
            left = rcSrc1.left;
            LODWORD(v210) = rcSrc1.left;
          }
          top = DWORD1(v210);
          if ( rcSrc1.top > SDWORD1(v210) )
          {
            top = (unsigned int)rcSrc1.top;
            DWORD1(v210) = rcSrc1.top;
          }
          right = DWORD2(v210);
          if ( rcSrc1.right < SDWORD2(v210) )
          {
            right = rcSrc1.right;
            DWORD2(v210) = rcSrc1.right;
          }
          bottom = HIDWORD(v210);
          if ( rcSrc1.bottom < SHIDWORD(v210) )
          {
            bottom = rcSrc1.bottom;
            HIDWORD(v210) = rcSrc1.bottom;
          }
          if ( right <= left || bottom <= (int)top )
          {
            bottom = 0;
            top = 0LL;
            right = 0;
            v210 = 0uLL;
            left = 0;
          }
        }
        else
        {
LABEL_43:
          left = v210;
          top = DWORD1(v210);
          right = DWORD2(v210);
          bottom = HIDWORD(v210);
        }
        if ( a8 && (*a8 || a8[2] || a8[1] || a8[3]) )
        {
          LODWORD(v208) = *a8 + v208;
          v32 = 1;
          v43 = a8[2] + DWORD1(v208);
          v41 = DWORD2(v208) - a8[1];
          v40 = HIDWORD(v208) - a8[3];
          *(_QWORD *)((char *)&v208 + 4) = __PAIR64__(v41, v43);
          HIDWORD(v208) = v40;
          if ( a10 )
          {
            v117 = CMilRectLFromMilRectF((int *)&v218, (__int64)&v209);
            v42 = v208 - *v117;
            LODWORD(v208) = v42;
            v118 = CMilRectLFromMilRectF(v225, (__int64)&v209);
            DWORD1(v208) -= v118[1];
            v41 += *((_DWORD *)v34 + 165) - *((_DWORD *)v34 + 163) - CMilRectLFromMilRectF(v222, (__int64)&v209)[2];
            DWORD2(v208) = v41;
            v119 = *((_DWORD *)v34 + 166)
                 - *((_DWORD *)v34 + 164)
                 - CMilRectLFromMilRectF((int *)&v213, (__int64)&v209)[3];
            v43 = DWORD1(v208);
            v40 += v119;
            HIDWORD(v208) = v40;
          }
          else
          {
            v42 = v208;
          }
          if ( v41 <= v42 )
          {
            v41 = v42;
            DWORD2(v208) = v42;
          }
          if ( v40 <= v43 )
          {
            v40 = v43;
            HIDWORD(v208) = v43;
          }
        }
        else
        {
          v40 = HIDWORD(v208);
          v41 = DWORD2(v208);
          v42 = v208;
          v43 = DWORD1(v208);
        }
        if ( left > v42 )
        {
          v42 = left;
          LODWORD(v208) = left;
        }
        if ( (int)top > v43 )
          v43 = top;
        DWORD1(v208) = v43;
        if ( right < v41 )
        {
          v41 = right;
          DWORD2(v208) = right;
        }
        if ( bottom < v40 )
        {
          v40 = bottom;
          HIDWORD(v208) = bottom;
        }
        if ( v41 <= v42 || v40 <= v43 )
        {
          v40 = 0;
          v43 = 0;
          v41 = 0;
          v208 = 0uLL;
          v42 = 0;
        }
        if ( v32 && (v43 != (_DWORD)top || v42 != left || v41 != right || v40 != bottom) )
        {
          IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v208);
          if ( (!IsEmpty || !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v210))
            && (!TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(&v208)
             || !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(&v210)) )
          {
            if ( (_BYTE)v194
              && v197 == *((struct IImageSource **)v34 + 95)
              && *(_QWORD *)(a2 + 376)
              && *(_BYTE *)(a2 + 6541) )
            {
              memset_0((char *)v236 + 4, 0, 0x24uLL);
              v236[0] = 0xFF00000100000002uLL;
              v120 = CDrawingContext::PushRenderOptionsInternal(
                       (CDrawingContext *)a2,
                       0LL,
                       (const struct MilRenderOptions *)v236,
                       1);
              if ( v120 < 0 )
              {
                v18 = v120;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v120, 0xEFDu);
                v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
                if ( v196 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
                goto LABEL_138;
              }
              LOBYTE(v187) = 1;
            }
            if ( IsEmpty )
            {
              v72 = CRegionShape::BuildFromRects(&v195, &v210, 1LL);
              if ( v72 < 0 )
              {
                v178 = 3870;
                goto LABEL_243;
              }
            }
            else
            {
              `vector constructor iterator'(
                (CInputSinkStruct::InputQueueInfo *)&v229,
                0x10uLL,
                4uLL,
                (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
              v89 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(
                      &v210,
                      &v208,
                      v88,
                      &v229);
              v72 = CRegionShape::BuildFromRects(&v195, &v229, v89);
              if ( v72 < 0 )
              {
                v178 = 3866;
                goto LABEL_243;
              }
            }
            v199 = _xmm;
            v202 = 32085;
            v200 = _xmm;
            v201 = _xmm;
            v198 = _xmm;
            CMILMatrix::SetTranslation(
              (CMILMatrix *)&v198,
              COERCE_FLOAT(LODWORD(v214) ^ _xmm),
              COERCE_FLOAT(LODWORD(v215) ^ _xmm),
              0.0);
            v72 = CWindowNode::FillShapeWithBitmap(
                    (__int64)v34,
                    (CDrawingContext *)a2,
                    v197,
                    (__int64)&v198,
                    (struct CShape *)&v195,
                    0,
                    0LL);
            v186 = v72;
            if ( v72 < 0 )
            {
              v178 = 3881;
              goto LABEL_243;
            }
          }
          v43 = DWORD1(v208);
        }
        if ( v41 > v42 && v40 > v43 )
        {
          v35 = *(_BYTE *)(a2 + 6771) == 0;
          v44 = (float)v42;
          v45 = (float)v43;
          *(float *)v219 = (float)v42;
          *((float *)v219 + 1) = (float)v43;
          *(float *)&v219[1] = (float)v41;
          *((float *)&v219[1] + 1) = (float)v40;
          if ( v35 || !*(_QWORD *)(a2 + 6680) )
          {
            v60 = a9;
LABEL_93:
            v185[0] = 0;
            v63 = v45;
            v64 = (float)v41;
            v65 = v216 - v214;
            v66 = v217 - v215;
            v67 = (float)v40;
            *(float *)&v211[1] = (float)v41;
            v68 = v44;
            *((float *)&v211[1] + 1) = (float)v40;
            v211[0] = (struct CShape *)__PAIR64__(LODWORD(v45), LODWORD(v44));
            if ( v44 < 0.0 )
            {
              v68 = 0.0;
              LODWORD(v211[0]) = 0;
            }
            if ( v45 < 0.0 )
            {
              v63 = 0.0;
              HIDWORD(v211[0]) = 0;
            }
            if ( (float)v41 > v65 )
            {
              v64 = v216 - v214;
              *(float *)&v211[1] = v216 - v214;
            }
            if ( (float)v40 > v66 )
            {
              v67 = v217 - v215;
              *((float *)&v211[1] + 1) = v217 - v215;
            }
            if ( v64 <= v68 || v67 <= v63 )
            {
LABEL_111:
              if ( (_BYTE)v187 )
              {
                CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)a2, 1);
                LOBYTE(v187) = 0;
              }
              if ( !(_BYTE)v194
                || v197 != *((struct IImageSource **)v34 + 95)
                || (CDrawingContext::RecordWindowMoveOptimization((CDrawingContext *)a2, v34, (HWND)top, 0LL),
                    *((_BYTE *)v34 + 994) = 0,
                    CWindowNode::ClipAgainstMargins((__int64)v34, (__int64)&v209),
                    v72 = CDrawingContext::VisualWasRendered(a2, &v209, v34),
                    v186 = v72,
                    v72 >= 0) )
              {
                v73 = v65 - 0.0;
                v74 = 0;
                v75 = 0;
                v76 = (float)(v41 - v208);
                if ( v76 > (float)(v65 - 0.0) )
                {
                  *(_QWORD *)&v209 = __PAIR64__(LODWORD(v45), LODWORD(v65));
                  *((float *)&v209 + 2) = (float)v41;
                  *((float *)&v209 + 3) = (float)v40;
                  v74 = CDrawingContext::IsOccluded(a2, &v209, a9) == 0;
                }
                v77 = v66 - 0.0;
                v78 = (float)(v40 - DWORD1(v208));
                if ( v78 > (float)(v66 - 0.0) )
                {
                  *(_QWORD *)&v208 = __PAIR64__(LODWORD(v66), (unsigned int)v219[0]);
                  *((float *)&v208 + 2) = (float)v41;
                  *((float *)&v208 + 3) = (float)v40;
                  if ( !CDrawingContext::IsOccluded(a2, &v208, a9) )
                    v75 = 1;
                }
                if ( !v74 && !v75 )
                {
LABEL_121:
                  v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
                  if ( v196 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
LABEL_123:
                  v18 = v186;
                  goto LABEL_124;
                }
                memset_0((char *)v236 + 4, 0, 0x24uLL);
                v236[0] = 2LL;
                v186 = CDrawingContext::PushRenderOptionsInternal(
                         (CDrawingContext *)a2,
                         0LL,
                         (const struct MilRenderOptions *)v236,
                         1);
                v18 = v186;
                if ( v186 >= 0 )
                {
                  if ( v74 )
                  {
                    v103 = *(float *)&v209 + COERCE_FLOAT(v209 ^ _xmm);
                    v104 = *((float *)&v209 + 2) + COERCE_FLOAT(v209 ^ _xmm);
                    *(float *)&v105 = *((float *)&v209 + 3) + COERCE_FLOAT(DWORD1(v209) ^ _xmm);
                    *((float *)&v209 + 1) = *((float *)&v209 + 1) + COERCE_FLOAT(DWORD1(v209) ^ _xmm);
                    v198 = _xmm;
                    v202 = 32085;
                    v199 = _xmm;
                    *(float *)&v209 = v103;
                    *((_QWORD *)&v209 + 1) = __PAIR64__(v105, LODWORD(v104));
                    v200 = _xmm;
                    v201 = _xmm;
                    CMILMatrix::SetTranslation((CMILMatrix *)&v198, v65, *((float *)v219 + 1), 0.0);
                    v106 = CDrawingContext::PushTransformInternal(
                             (CDrawingContext *)a2,
                             0LL,
                             (const struct CMILMatrix *)&v198,
                             1,
                             1);
                    v18 = v106;
                    if ( v106 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0xFEBu);
                      goto LABEL_280;
                    }
                    v107 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
                    v18 = v107;
                    if ( v107 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0xFF1u);
LABEL_276:
                      v126 = v196;
                      v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
                      if ( !v196 )
                        goto LABEL_287;
                      goto LABEL_286;
                    }
                    v198 = _xmm;
                    v202 = 32085;
                    v199 = _xmm;
                    v200 = _xmm;
                    v201 = _xmm;
                    CMILMatrix::SetTranslation(
                      (CMILMatrix *)&v198,
                      1.0 - (float)(v73 + v214),
                      COERCE_FLOAT(LODWORD(v215) ^ _xmm),
                      0.0);
                    CMILMatrix::Scale((CMILMatrix *)&v198, v104 - v103, v78 / v77, 1.0);
                    CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v229, (const struct MilRectF *)&v209);
                    v108 = v197;
                    v186 = CWindowNode::FillShapeWithBitmap(
                             (__int64)v34,
                             (CDrawingContext *)a2,
                             v197,
                             (__int64)&v198,
                             (struct CShape *)&v229,
                             a6,
                             0LL);
                    v18 = v186;
                    if ( v186 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v186, 0x1006u);
LABEL_274:
                      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
                      goto LABEL_276;
                    }
                    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
                  }
                  else
                  {
                    v108 = v197;
                  }
                  if ( !v75 )
                  {
LABEL_217:
                    CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)a2, 1);
                    LOBYTE(v187) = 0;
                    goto LABEL_121;
                  }
                  LODWORD(v109) = v208 ^ _xmm;
                  v110 = *((float *)&v208 + 1) + COERCE_FLOAT(DWORD1(v208) ^ _xmm);
                  v111 = *((float *)&v208 + 3) + COERCE_FLOAT(DWORD1(v208) ^ _xmm);
                  *(float *)&v208 = *(float *)&v208 + COERCE_FLOAT(v208 ^ _xmm);
                  *((float *)&v208 + 1) = v110;
                  v199 = _xmm;
                  v202 = 32085;
                  *((float *)&v208 + 3) = v111;
                  *((float *)&v208 + 2) = *((float *)&v208 + 2) + v109;
                  v198 = _xmm;
                  v200 = _xmm;
                  v201 = _xmm;
                  CMILMatrix::SetTranslation((CMILMatrix *)&v198, *(float *)v219, v66, 0.0);
                  v112 = CDrawingContext::PushTransformInternal(
                           (CDrawingContext *)a2,
                           0LL,
                           (const struct CMILMatrix *)&v198,
                           1,
                           1);
                  v18 = v112;
                  if ( v112 >= 0 )
                  {
                    v113 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
                    v18 = v113;
                    if ( v113 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0x101Eu);
                      v126 = v196;
                      v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
                      if ( !v196 )
                      {
LABEL_287:
                        CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_282:
                        v79 = v192;
                        v82 = v188;
                        v81 = v190;
                        v80 = v191;
                        goto LABEL_283;
                      }
LABEL_286:
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
                      goto LABEL_287;
                    }
                    v200 = _xmm;
                    v202 = 32085;
                    v199 = _xmm;
                    v198 = _xmm;
                    v201 = _xmm;
                    CMILMatrix::SetTranslation(
                      (CMILMatrix *)&v198,
                      COERCE_FLOAT(LODWORD(v214) ^ _xmm),
                      1.0 - (float)(v77 + v215),
                      0.0);
                    CMILMatrix::Scale((CMILMatrix *)&v198, v76 / v73, v111 - v110, 1.0);
                    CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v229, (const struct MilRectF *)&v208);
                    v114 = CWindowNode::FillShapeWithBitmap(
                             (__int64)v34,
                             (CDrawingContext *)a2,
                             v108,
                             (__int64)&v198,
                             (struct CShape *)&v229,
                             a6,
                             0LL);
                    v186 = v114;
                    v18 = v114;
                    if ( v114 >= 0 )
                    {
                      CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
                      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
                      goto LABEL_217;
                    }
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0x1033u);
                    goto LABEL_274;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, 0x1018u);
LABEL_280:
                  v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
                  if ( v196 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
                  goto LABEL_282;
                }
                v178 = 4060;
                v121 = v186;
                goto LABEL_245;
              }
              v178 = 3994;
LABEL_243:
              v18 = v72;
              v121 = v72;
LABEL_245:
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v121, v178);
              goto LABEL_246;
            }
            v213.m128_f32[0] = v214 + v68;
            v213.m128_f32[1] = v215 + v63;
            v213.m128_f32[2] = v214 + v64;
            v213.m128_f32[3] = v215 + v67;
            if ( (_BYTE)v187 )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v213);
            v69 = (struct IImageSource *)*((_QWORD *)v34 + 115);
            if ( v69 )
              v69 = (struct IImageSource *)((char *)v69 + 64);
            v70 = v197 == v69;
            v183 = *(_DWORD *)(a2 + 288);
            *(_QWORD *)&rcSrc1.left = 0LL;
            v186 = CDrawingContext::DrawBitmapWithPartialOcclusion(
                     (CDrawingContext *)a2,
                     v197,
                     (struct MilRectF *)&v213,
                     SLODWORD(FLOAT_1_0),
                     v60,
                     v183,
                     a6,
                     v184,
                     v197 == v69,
                     (__int64)v185);
            v71 = v186;
            if ( v186 == -2147467261 && !v70 )
            {
              v124 = CDrawingContext::ImageSourceToBitmapSource(
                       (CDrawingContext *)a2,
                       v197,
                       (struct IBitmapSource **)&rcSrc1);
              v186 = v124;
              v71 = v124;
              if ( v124 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0xE45u);
              }
              else
              {
                if ( !*(_QWORD *)&rcSrc1.left )
                  goto LABEL_110;
                v125 = CDrawingContext::DrawBitmapSource(
                         (CDrawingContext *)a2,
                         a9,
                         a6,
                         *(_DWORD *)(a2 + 288),
                         (__int64)v185);
                v186 = v125;
                v71 = v125;
                if ( v125 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v125, 0xE4Fu);
              }
            }
            if ( *(_QWORD *)&rcSrc1.left )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rcSrc1.left + 16LL))(*(_QWORD *)&rcSrc1.left);
LABEL_110:
            if ( v71 < 0 )
            {
              v18 = v186;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v186, 0xF75u);
LABEL_246:
              v195 = (struct _D3DCOLORVALUE *)&CRegionShape::`vftable';
              if ( v196 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
LABEL_124:
              v79 = v192;
              goto LABEL_125;
            }
            goto LABEL_111;
          }
          v46 = *(_DWORD *)(a2 + 472);
          v220 = *(_OWORD *)v219;
          if ( v46 )
            v47 = (void *)(*(_QWORD *)(a2 + 488) + 68LL * (unsigned int)(v46 - 1));
          else
            v47 = &CMILMatrix::Identity;
          CMILMatrix::Transform2DBoundsHelper<1>(v47, &v220, &rcSrc1);
          v48 = *(float *)&rcSrc1.right;
          v49 = *(float *)&rcSrc1.left;
          if ( *(float *)&rcSrc1.right > *(float *)&rcSrc1.left )
          {
            v50 = *(float *)&rcSrc1.bottom;
            v51 = *(float *)&rcSrc1.top;
            if ( *(float *)&rcSrc1.bottom > *(float *)&rcSrc1.top )
            {
              v52 = *(_DWORD *)(a2 + 936);
              if ( v52
                && *(_DWORD *)(*(_QWORD *)(a2 + 912) + 80LL * (unsigned int)(v52 - 1) + 4)
                && (v53 = *(_DWORD *)(a2 + 2976)) != 0 )
              {
                v213 = *(__m128 *)(*(_QWORD *)(a2 + 2992) + 16LL * (unsigned int)(v53 - 1));
                v54 = v213.m128_f32[2];
                v55 = v213.m128_f32[1];
                LODWORD(v56) = _mm_shuffle_ps(v213, v213, 255).m128_u32[0];
                v57 = v213.m128_f32[0];
              }
              else
              {
                v56 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                v54 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                v55 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                v57 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              }
              if ( v52 && *(_DWORD *)(*(_QWORD *)(a2 + 912) + 80LL * (unsigned int)(v52 - 1) + 8) )
              {
                v122 = 120LL * (unsigned int)(*(_DWORD *)(a2 + 1768) - 1);
                v123 = *(_QWORD *)(a2 + 1744);
                if ( *(float *)(v122 + v123 + 96) > v57 )
                  v57 = *(float *)(v122 + v123 + 96);
                if ( *(float *)(v122 + v123 + 100) > v55 )
                  v55 = *(float *)(v122 + v123 + 100);
                if ( v54 > *(float *)(v122 + v123 + 104) )
                  v54 = *(float *)(v122 + v123 + 104);
                if ( v56 > *(float *)(v122 + v123 + 108) )
                  v56 = *(float *)(v122 + v123 + 108);
                if ( v54 <= v57 || v56 <= v55 )
                {
                  v56 = 0.0;
                  v54 = 0.0;
                  v55 = 0.0;
                  v57 = 0.0;
                }
              }
              if ( v57 > *(float *)&rcSrc1.left )
              {
                *(float *)&rcSrc1.left = v57;
                v49 = v57;
              }
              if ( v55 > *(float *)&rcSrc1.top )
              {
                *(float *)&rcSrc1.top = v55;
                v51 = v55;
              }
              if ( *(float *)&rcSrc1.right > v54 )
              {
                *(float *)&rcSrc1.right = v54;
                v48 = v54;
              }
              if ( *(float *)&rcSrc1.bottom > v56 )
              {
                *(float *)&rcSrc1.bottom = v56;
                v50 = v56;
              }
              if ( v48 <= v49 || v50 <= v51 )
              {
                v50 = 0.0;
                v48 = 0.0;
                v51 = 0.0;
                rcSrc1.bottom = 0;
                v49 = 0.0;
                rcSrc1.right = 0;
                rcSrc1.top = 0;
                rcSrc1.left = 0;
              }
              v58 = *(_QWORD *)(a2 + 6680);
              if ( v48 > v49 && v50 > v51 )
              {
                if ( *(_BYTE *)(v58 + 728) )
                {
                  CMILMatrix::Transform2DBoundsHelper<0>(v58 + 800, &rcSrc1, &v218);
                  *(_OWORD *)v211 = v218;
                }
                else
                {
                  v211[0] = (struct CShape *)__PAIR64__(LODWORD(v51), LODWORD(v49));
                  v211[1] = (struct CShape *)__PAIR64__(LODWORD(v50), LODWORD(v48));
                }
                v59 = *(_QWORD *)(v58 + 304);
                v60 = a9;
                v61 = *(__int64 (__fastcall **)(__int64, struct CShape **, _QWORD))(*(_QWORD *)v59 + 48LL);
                if ( !((char *)v61 == (char *)CArrayBasedCoverageSet::IsFullyCovered
                     ? CArrayBasedCoverageSet::IsFullyCovered(v59, v211, a9)
                     : (unsigned __int8)v61(v59, v211, a9)) )
                {
                  v44 = *(float *)v219;
                  goto LABEL_93;
                }
              }
            }
          }
        }
        ++*((_DWORD *)v34 + 264);
        goto LABEL_121;
      }
    }
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)&rcSrc1,
      4uLL,
      2uLL,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    if ( !a10 || v14 )
    {
      v90 = v219[0];
      goto LABEL_179;
    }
    v90 = v219[0];
    v182 = &v213;
    if ( !(unsigned __int8)CWindowNode::GetAlphaMarginsRects(v219[0], a10, a8, &v209, &v220) )
      goto LABEL_179;
    v229 = &CRectanglesShape::`vftable';
    v230 = v234;
    v231 = v234;
    v232 = 1;
    v233 = 1LL;
    v235 = 0LL;
    *(float *)&v218 = (float)v213.m128_i32[0];
    *((float *)&v218 + 1) = (float)v213.m128_i32[1];
    *((float *)&v218 + 2) = (float)v213.m128_i32[2];
    *((float *)&v218 + 3) = (float)v213.m128_i32[3];
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v229, (const struct MilRectF *)&v218);
    v128 = CShape::Combine(&v229, v127, a5, 0LL, 1, &v204);
    if ( v128 < 0 )
    {
      v18 = v128;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0xD0Eu);
      goto LABEL_296;
    }
    *((_QWORD *)&v210 + 1) = 0LL;
    *(_QWORD *)&v210 = &CRegionShape::`vftable';
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v213) )
    {
      v134 = CRegionShape::BuildFromRects(&v210, &v220, 1LL);
      if ( v134 < 0 )
      {
        v179 = 3375;
        goto LABEL_306;
      }
    }
    else
    {
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v236,
        0x10uLL,
        4uLL,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      v130 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v220, &v213, v129, v236);
      v131 = CRegionShape::BuildFromRects(&v210, v236, v130);
      if ( v131 < 0 )
      {
        v18 = v131;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0xD2Bu);
        v133 = *((_QWORD *)&v210 + 1);
        *(_QWORD *)&v210 = &CRegionShape::`vftable';
        if ( !*((_QWORD *)&v210 + 1) )
        {
LABEL_296:
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
          goto LABEL_134;
        }
LABEL_294:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
        goto LABEL_296;
      }
    }
    v134 = CShape::Combine(&v210, v132, a5, 0LL, 1, &v205);
    if ( v134 >= 0 )
    {
      *(_QWORD *)&v210 = &CRegionShape::`vftable';
      if ( *((_QWORD *)&v210 + 1) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v210 + 1) + 16LL))(*((_QWORD *)&v210 + 1));
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
      if ( v204 && v205 )
      {
        v211[1] = v205;
        rcSrc1.top = 0;
        *((_QWORD *)&v220 + 1) = 0LL;
        LODWORD(v219[0]) = 2;
        v211[0] = v204;
        goto LABEL_180;
      }
LABEL_179:
      LODWORD(v219[0]) = 1;
      v211[0] = a5;
LABEL_180:
      v91 = 0LL;
      *(_QWORD *)&v220 = a7;
      rcSrc1.left = a6;
      v194 = 0;
      while ( 1 )
      {
        v92 = v211[v91];
        v230 = v234;
        v231 = v234;
        v229 = &CRectanglesShape::`vftable';
        v232 = 1;
        v233 = 1LL;
        v235 = 0LL;
        if ( v92 )
        {
          if ( !v193 )
            goto LABEL_183;
          CRectanglesShape::SetSingleRect((CRectanglesShape *)&v229, (const struct MilRectF *)&v209);
          if ( v191 )
            (**v191)(v191, 1LL);
          v191 = 0LL;
          v94 = CShape::Combine(&v229, v135, v92, 0LL, 1, &v191);
          if ( v94 < 0 )
          {
            v181 = 3451;
            goto LABEL_391;
          }
          v136 = (struct CShape *)v191;
        }
        else
        {
          CRectanglesShape::SetSingleRect((CRectanglesShape *)&v229, (const struct MilRectF *)&v209);
          v136 = (struct CShape *)&v229;
        }
        v211[v91] = v136;
LABEL_183:
        v93 = v197;
        v202 = 32085;
        v198 = _xmm;
        v199 = _xmm;
        v200 = _xmm;
        v201 = _xmm;
        v94 = CWindowNode::ApplyTextureToLocalTransform(v90, v197, (struct CMILMatrix *)&v198);
        if ( v94 < 0 )
        {
          v181 = 3468;
          goto LABEL_391;
        }
        if ( v31 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(&v198, &v214, &v218);
          v137 = 0;
          v138 = *((float *)&v218 + 2) - *(float *)&v218;
          v139 = (float)(*((_DWORD *)v90 + 159) - *((_DWORD *)v90 + 163));
          v140 = (float)(*((_DWORD *)v90 + 160) - *((_DWORD *)v90 + 164));
          v141 = (float)(*((_DWORD *)v90 + 161) - *((_DWORD *)v90 + 163));
          v142 = _mm_cvtsi32_si128(*((_DWORD *)v90 + 162) - *((_DWORD *)v90 + 164));
          v143 = 0;
          v185[0] = 0;
          v144 = _mm_cvtepi32_ps(v142).m128_u32[0];
          if ( (float)(v141 - v139) > (float)(*((float *)&v218 + 2) - *(float *)&v218) )
          {
            v137 = 1;
            if ( *((_BYTE *)v90 + 992) )
            {
              *(float *)v222 = v139;
              v223 = v141 - v138;
            }
            else
            {
              v223 = v141;
              *(float *)v222 = v138 + v139;
            }
            *(float *)&v222[1] = v140;
            v224 = (float)(*((float *)&v218 + 3) - *((float *)&v218 + 1)) + v140;
          }
          if ( (float)(*(float *)&v144 - v140) > (float)(*((float *)&v218 + 3) - *((float *)&v218 + 1)) )
          {
            *(float *)v228 = v139;
            v143 = 1;
            *(float *)&v228[2] = v141;
            v228[3] = v144;
            v185[0] = 1;
            *(float *)&v228[1] = (float)(*((float *)&v218 + 3) - *((float *)&v218 + 1)) + v140;
          }
          if ( v137 || v143 )
          {
            if ( !v192 )
            {
              v94 = CSolidColorLegacyMilBrush::CreateFromColor(&v192, *((struct CComposition **)v90 + 2), v195);
              if ( v94 < 0 )
              {
                v181 = 3557;
                goto LABEL_391;
              }
              v143 = v185[0];
            }
            if ( v137 )
            {
              if ( v188 )
                (**(void (__fastcall ***)(struct CShape *, __int64))v188)(v188, 1LL);
              v145 = v211[v91];
              v188 = 0LL;
              v94 = CShape::ClipWithRect(v145, (const struct MilRectF *)v222, &v188);
              if ( v94 < 0 )
              {
                v181 = 3573;
                goto LABEL_391;
              }
              v79 = v192;
              v146 = CDrawingContext::DrawShape((CDrawingContext *)a2, v188, v192);
              if ( v146 < 0 )
              {
                v180 = 3576;
                goto LABEL_395;
              }
              v143 = v185[0];
            }
            else
            {
              v79 = v192;
            }
            if ( v143 )
            {
              if ( v188 )
                (**(void (__fastcall ***)(struct CShape *, __int64))v188)(v188, 1LL);
              v147 = v211[v91];
              v188 = 0LL;
              v146 = CShape::ClipWithRect(v147, (const struct MilRectF *)v228, &v188);
              if ( v146 < 0 )
              {
                v180 = 3588;
LABEL_395:
                v18 = v146;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v146, v180);
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
LABEL_125:
                v80 = v191;
                v81 = v190;
                v82 = v188;
                if ( !(_BYTE)v187 )
                {
LABEL_126:
                  if ( v79 )
                    CMILCOMBase::InternalRelease(v79);
                  if ( v80 )
                    (**v80)(v80, 1LL);
                  if ( v81 )
                    (**(void (__fastcall ***)(struct CShape *, __int64))v81)(v81, 1LL);
                  if ( v82 )
                    (**(void (__fastcall ***)(struct CShape *, __int64))v82)(v82, 1LL);
LABEL_134:
                  if ( v204 )
                    (**(void (__fastcall ***)(struct CShape *, __int64))v204)(v204, 1LL);
                  if ( v205 )
                    (**(void (__fastcall ***)(struct CShape *, __int64))v205)(v205, 1LL);
                  goto LABEL_138;
                }
LABEL_283:
                CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)a2, 1);
                goto LABEL_126;
              }
              v146 = CDrawingContext::DrawShape((CDrawingContext *)a2, v188, v79);
              if ( v146 < 0 )
              {
                v180 = 3591;
                goto LABEL_395;
              }
            }
            *(_OWORD *)v221 = v218;
            if ( v190 )
              (**(void (__fastcall ***)(struct CShape *, __int64))v190)(v190, 1LL);
            v148 = v211[v91];
            v190 = 0LL;
            v146 = CShape::ClipWithRect(v148, (const struct MilRectF *)v221, &v190);
            if ( v146 < 0 )
            {
              v180 = 3608;
              goto LABEL_395;
            }
            v211[v91] = v190;
          }
          v93 = v197;
        }
        v95 = *(int (__fastcall ***)(struct IImageSource *, GUID *, struct ISwapChainContent **))v93;
        v185[0] = 0;
        if ( (*v95)(v93, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v203) < 0 )
          goto LABEL_186;
        IsOverlayAssigned = CDrawingContext::IsOverlayAssigned((COverlayContext **)a2, v90, v203, v185);
        v150 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v203 + 104LL))(v203);
        if ( !IsOverlayAssigned && !v150 )
        {
          v93 = v197;
LABEL_186:
          v96 = (struct IImageSource *)*((_QWORD *)v90 + 115);
          if ( v96 )
            v96 = (struct IImageSource *)((char *)v96 + 64);
          if ( v93 == v96
            && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v198 - 1.0)) & _xmm) >= 0.0000011920929
             || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v199 + 1) - 1.0)) & _xmm) >= 0.0000011920929) )
          {
            memset_0((char *)v236 + 4, 0, 0x24uLL);
            v236[0] = 0x100000002LL;
            v94 = CDrawingContext::PushRenderOptionsInternal(
                    (CDrawingContext *)a2,
                    0LL,
                    (const struct MilRenderOptions *)v236,
                    1);
            if ( v94 < 0 )
            {
              v181 = 3656;
              goto LABEL_391;
            }
            LOBYTE(v187) = 1;
          }
          v94 = CWindowNode::FillShapeWithBitmap(
                  (__int64)v90,
                  (CDrawingContext *)a2,
                  v93,
                  (__int64)&v198,
                  v211[v91],
                  *(&rcSrc1.left + v194),
                  *(_QWORD *)&v221[2 * v91 - 4]);
          v186 = v94;
          if ( v94 < 0 )
          {
            v181 = 3666;
            goto LABEL_391;
          }
          if ( (_BYTE)v187 )
          {
            CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)a2, 1);
            LOBYTE(v187) = 0;
          }
          goto LABEL_192;
        }
        v94 = CDrawingContext::DrawOverlayArea((CDrawingContext *)a2, v203, v211[v91], IsOverlayAssigned, v185[0]);
        v186 = v94;
        if ( v94 < 0 )
        {
          v181 = 3639;
          goto LABEL_391;
        }
        v93 = v197;
LABEL_192:
        v97 = *((_QWORD *)v90 + 115);
        if ( v97 )
          v98 = (struct IImageSource *)(v97 + 64);
        else
          v98 = 0LL;
        if ( v93 == v98 && CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v97 + 64)) && v14 )
          CDrawingContext::RecordWindowMoveOptimization((CDrawingContext *)a2, v90, v151, &v189);
        v99 = *((_QWORD *)v90 + 115);
        if ( v99 )
          v100 = (struct IImageSource *)(v99 + 64);
        else
          v100 = 0LL;
        if ( v93 == v100 )
        {
          if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v99 + 64)) )
          {
            if ( v14 )
            {
              if ( *((_BYTE *)v90 + 994) )
              {
                if ( *((_BYTE *)v90 + 1048) )
                {
                  if ( !v189 )
                  {
                    v152 = *((_DWORD *)v90 + 163);
                    v153 = *((_DWORD *)v90 + 164);
                    v154 = *((_DWORD *)v90 + 159) - v152;
                    v185[0] = 0;
                    v155 = (float)v154;
                    v156 = _mm_cvtsi32_si128(*((_DWORD *)v90 + 160) - v153);
                    v157 = *((_DWORD *)v90 + 161) - v152;
                    *(float *)v225 = v155;
                    v158 = _mm_cvtepi32_ps(v156).m128_u32[0];
                    v159 = _mm_cvtsi32_si128(v157);
                    v160 = *((_DWORD *)v90 + 162) - v153;
                    v225[1] = v158;
                    LODWORD(v161) = _mm_cvtepi32_ps(v159).m128_u32[0];
                    v226 = v161;
                    v227 = (float)v160;
                    if ( v30
                      || v31
                      && (float)(v161 - v155) >= (float)(v216 - v214)
                      && (float)((float)v160 - *(float *)&v158) >= (float)(v217 - v215) )
                    {
                      if ( (_QWORD)v208 )
                        v162 = *(_DWORD *)(v208 + 36);
                      else
                        v162 = 0;
                      v94 = CDrawingContext::CalcRectFullyVisible(
                              (CDrawingContext *)a2,
                              (const struct MilRectF *)v225,
                              v162,
                              v185);
                      v186 = v94;
                      if ( v94 < 0 )
                      {
                        v181 = 3714;
                        goto LABEL_391;
                      }
                      if ( v185[0] )
                      {
                        v185[0] = 0;
                        v221[0] = 0;
                        MoveRects = CDwmMetaRegion::GetMoveRects((CVisual *)((char *)v90 + 1008), v221);
                        if ( MoveRects )
                        {
                          if ( v221[0] )
                          {
                            p_right = (unsigned int *)&MoveRects->right;
                            *(_QWORD *)v221 = v221[0];
                            do
                            {
                              v165 = _mm_cvtsi32_si128(*p_right);
                              v166 = _mm_cvtsi32_si128(p_right[1]);
                              v167 = _mm_cvtsi32_si128(*((_DWORD *)v90 + 256));
                              v168 = _mm_cvtsi32_si128(*((_DWORD *)v90 + 257));
                              v169 = (float)(int)*(p_right - 2);
                              v170 = (float)(int)*(p_right - 1);
                              v213.m128_f32[0] = v169;
                              v213.m128_f32[1] = v170;
                              LODWORD(v171) = _mm_cvtepi32_ps(v165).m128_u32[0];
                              LODWORD(v172) = _mm_cvtepi32_ps(v166).m128_u32[0];
                              v213.m128_u64[1] = __PAIR64__(LODWORD(v172), LODWORD(v171));
                              LODWORD(v173) = _mm_cvtepi32_ps(v167).m128_u32[0];
                              *(float *)&v210 = v173;
                              DWORD1(v210) = _mm_cvtepi32_ps(v168).m128_u32[0];
                              if ( v31 && *((_BYTE *)v90 + 992) )
                              {
                                v213.m128_f32[1] = v170 + 0.0;
                                v213.m128_f32[3] = v172 + 0.0;
                                v174 = (float)(v226 - *(float *)v225) - (float)(v216 - v214);
                                v213.m128_f32[0] = v169 + v174;
                                v213.m128_f32[2] = v171 + v174;
                                *(float *)&v210 = v173 + v174;
                              }
                              CDrawingContext::RecordMoveOptimization(
                                (struct CDrawingContext *)a2,
                                v90,
                                v177,
                                (int)v182,
                                (__int64)v185);
                              p_right += 4;
                              --*(_QWORD *)v221;
                            }
                            while ( *(_QWORD *)v221 );
                            if ( v185[0] )
                            {
                              *((_BYTE *)v90 + 994) = 0;
                              MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(
                                                        v90,
                                                        (const struct CDrawingContext *)a2);
                              CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
                              v176 = (void *)*((_QWORD *)MoveRenderPassInfoRef + 2);
                              *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
                              if ( v176 )
                                DeleteObject(v176);
                            }
                            v93 = v197;
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
        v101 = *((_QWORD *)v90 + 115);
        if ( v101 )
          v102 = (struct IImageSource *)(v101 + 64);
        else
          v102 = 0LL;
        if ( v93 == v102 )
        {
          if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v101 + 64)) )
          {
            if ( v14 )
            {
              CWindowNode::ClipAgainstMargins((__int64)v90, (__int64)&v209);
              v94 = CDrawingContext::VisualWasRendered(a2, &v209, v90);
              v186 = v94;
              if ( v94 < 0 )
              {
                v181 = 3790;
LABEL_391:
                v18 = v94;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, v181);
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
                goto LABEL_124;
              }
            }
          }
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v229);
        ++v91;
        if ( ++v194 >= LODWORD(v219[0]) )
          goto LABEL_123;
      }
    }
    v179 = 3387;
LABEL_306:
    v18 = v134;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v134, v179);
    v133 = *((_QWORD *)&v210 + 1);
    *(_QWORD *)&v210 = &CRegionShape::`vftable';
    if ( !*((_QWORD *)&v210 + 1) )
      goto LABEL_296;
    goto LABEL_294;
  }
LABEL_138:
  if ( v203 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v203 + 16LL))(v203);
  return (unsigned int)v18;
}
