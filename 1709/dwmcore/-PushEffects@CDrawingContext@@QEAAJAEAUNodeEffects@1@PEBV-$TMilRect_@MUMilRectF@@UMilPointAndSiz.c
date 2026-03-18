/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180031C1C (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180032030 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180036CD8 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18003B4F0 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18003BC70 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18004E7C0 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x1800596D4 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180097F4C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097F70 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800BFC70 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@XZ @ 0x18011A500 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18011D840 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18013DA70 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013DE18 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@@Z @ 0x18013DEF4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18013E270 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r15
  struct CFilterEffect *v8; // r14
  int v9; // edi
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  char v16; // r12
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  _BYTE *v19; // rdx
  struct CVisual *v20; // rax
  __int64 v21; // r15
  const struct D2D_SIZE_F *v22; // r12
  char v23; // dl
  struct D2D_SIZE_F *v24; // rbx
  __int64 (__fastcall *v25)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v26; // eax
  CComponentTransform2D *v27; // rcx
  CRegionShape *v28; // rbx
  __int64 (__fastcall *v29)(CRegionShape *, __m128 *, _QWORD); // rax
  int v30; // eax
  CRectanglesShape *(__fastcall *v31)(CRectanglesShape *, char); // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  int Current; // eax
  struct D2D_SIZE_F v35; // rcx
  char v36; // al
  struct D2D_SIZE_F *v37; // rbx
  __int64 (__fastcall *v38)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v40; // rcx
  _QWORD *v41; // rbx
  CVisual *v42; // rcx
  struct _LIST_ENTRY *v43; // r10
  __int64 v44; // r9
  struct CVisual *v45; // r15
  char v46; // r12
  int v47; // eax
  __int64 v48; // rax
  void *v49; // r15
  unsigned int v50; // eax
  bool v51; // dl
  int v52; // r8d
  int v53; // eax
  float v54; // xmm3_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  int v58; // eax
  __int128 *v59; // rbx
  CRectanglesShape *(__fastcall *v61)(CRectanglesShape *, char); // rax
  __int64 v62; // rbx
  __int64 v63; // rbx
  CRectanglesShape *v64; // rbx
  CRectanglesShape *v65; // rbx
  CRectanglesShape *(__fastcall *v66)(CRectanglesShape *, char); // rax
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  FLOAT v70; // xmm0_4
  struct CVisual *v71; // rax
  int v72; // eax
  int v73; // eax
  struct CVisual *v74; // rax
  int v75; // eax
  int v76; // eax
  CDrawingContext *v77; // rcx
  struct D2D_MATRIX_3X2_F *v78; // rcx
  __m128 v79; // xmm4
  __m128 v80; // xmm4
  __m128 v81; // xmm4
  struct CFilterEffect **v82; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v84; // r11
  struct _LIST_ENTRY *Flink; // rdx
  int v86; // eax
  int v87; // eax
  unsigned __int64 v88; // rdx
  int v89; // eax
  int TightBounds; // eax
  int v91; // ebx
  int v92; // eax
  int updated; // eax
  int ShapeDataWorker; // eax
  int v95; // eax
  CRectanglesShape **v96; // rcx
  unsigned __int64 v97; // rax
  unsigned int v98; // edx
  SIZE_T v99; // r8
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned int v102; // edx
  SIZE_T v103; // r8
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  float *v106; // rcx
  float v107; // xmm1_4
  CVisual *v108; // rcx
  struct CFilterEffect *EffectInternal; // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  unsigned int v111; // [rsp+28h] [rbp-E0h]
  bool v112[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_SIZE_F v113; // [rsp+50h] [rbp-B8h] BYREF
  void *lpMem; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v115; // [rsp+60h] [rbp-A8h]
  _BYTE *v116; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v117; // [rsp+70h] [rbp-98h] BYREF
  __int128 *v118; // [rsp+78h] [rbp-90h]
  struct ID2D1Geometry *v119; // [rsp+80h] [rbp-88h] BYREF
  __int64 v120; // [rsp+88h] [rbp-80h]
  __int64 v121; // [rsp+90h] [rbp-78h]
  _QWORD v122[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v123; // [rsp+B8h] [rbp-50h]
  __int64 v124; // [rsp+C8h] [rbp-40h]
  int v125; // [rsp+D0h] [rbp-38h]
  __int64 v126; // [rsp+D4h] [rbp-34h]
  _QWORD v127[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v128; // [rsp+108h] [rbp+0h]
  __int64 v129; // [rsp+118h] [rbp+10h]
  int v130; // [rsp+120h] [rbp+18h]
  __int64 v131; // [rsp+124h] [rbp+1Ch]
  __m128 v132; // [rsp+138h] [rbp+30h] BYREF
  CRectanglesShape *v133; // [rsp+148h] [rbp+40h] BYREF
  char v134; // [rsp+150h] [rbp+48h]
  struct D2D_MATRIX_3X2_F v135; // [rsp+158h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v7 = a7;
  v8 = 0LL;
  v9 = 0;
  *a7 = 0;
  v12 = *((float *)a2 + 2);
  v121 = a5;
  v118 = a3;
  v120 = a6;
  v116 = a7;
  v119 = 0LL;
  v13 = COERCE_DOUBLE(*(_QWORD *)&v12 & _xmm);
  if ( v13 < 0.0000011920929
    || (v14 = *((float *)a2 + 5), (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm) < 0.0000011920929) )
  {
    *a7 = 1;
    return (unsigned int)v9;
  }
  if ( *((_BYTE *)this + 3136) || *((_QWORD *)this + 846) )
  {
    if ( !*((_BYTE *)a2 + 164) )
    {
LABEL_205:
      v132.m128_u64[1] = *a2;
      v132.m128_i32[0] = 6;
      updated = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v132);
      v9 = updated;
      if ( updated >= 0 )
        goto LABEL_93;
      v111 = 5295;
      goto LABEL_322;
    }
    v88 = *a2;
    v132.m128_u64[0] = 0LL;
    v132.m128_i8[8] = 0;
    v89 = CDrawingContext::ShapeDataFromGeometry(
            (const struct D2D_SIZE_F *)(v88 + 132),
            *(struct CGeometry **)(v88 + 232),
            (struct CShapePtr *)&v132);
    v9 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x1486u);
    }
    else
    {
      if ( !v132.m128_u64[0] )
        goto LABEL_204;
      TightBounds = CShapePtr::GetTightBounds(&v132, &v133, (char *)a2 + 92);
      v91 = TightBounds;
      if ( TightBounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x148Fu);
      if ( v91 == -2003304438 )
        goto LABEL_211;
      if ( v91 < 0 )
      {
LABEL_204:
        CShapePtr::Release((CShapePtr *)&v132);
        goto LABEL_205;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v133) )
      {
LABEL_211:
        *a7 = 1;
        goto LABEL_204;
      }
      v92 = CDrawingContext::PushClipRectForNode((__int64)this, *a2, (int)&v133, 0);
      v9 = v92;
      if ( v92 >= 0 )
      {
        CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v133) )
          goto LABEL_204;
        goto LABEL_211;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0x149Du);
    }
    v96 = (CRectanglesShape **)&v132;
    goto LABEL_303;
  }
  v15 = FLOAT_1_0;
  if ( *((_BYTE *)a2 + 164)
    || *((_BYTE *)a2 + 165)
    || *((_BYTE *)a2 + 166)
    || *((_BYTE *)a2 + 167)
    || *((_BYTE *)a2 + 168)
    || *((_DWORD *)a2 + 3)
    || *((_DWORD *)a2 + 4)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v16 = 0;
    if ( qword_18026EEA8 )
    {
      v17 = *((_DWORD *)qword_18026EEA8 + 18);
      v18 = 0;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = *(_BYTE **)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v18);
          if ( v19[309] || v19[308] || v19[208] )
            break;
          if ( ++v18 >= v17 )
            goto LABEL_12;
        }
        CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)*a2);
      }
    }
LABEL_12:
    if ( !*((_BYTE *)a2 + 164) )
    {
LABEL_81:
      if ( *((_BYTE *)a2 + 164) || (v58 = *((_DWORD *)a2 + 3), v58 == 2) )
      {
        if ( *((_DWORD *)a2 + 3) == 1 )
        {
          updated = CDrawingContext::PushEffectiveAlphaForNode(
                      this,
                      (const struct CVisual *)*a2,
                      *((float *)a2 + 5) * *((float *)a2 + 2),
                      1);
          v9 = updated;
          if ( updated < 0 )
          {
            v111 = 5079;
            goto LABEL_322;
          }
        }
        else
        {
          v74 = (struct CVisual *)*a2;
          v113.width = *((FLOAT *)a2 + 5);
          v132.m128_u64[1] = (unsigned __int64)v74;
          v132.m128_i32[0] = 7;
          v75 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v132);
          v9 = v75;
          if ( v75 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x183Bu);
          }
          else
          {
            v76 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3104, &v113);
            v9 = v76;
            if ( v76 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x183Fu);
              CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                (char *)this + 448,
                0LL);
            }
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13E0u);
            goto LABEL_93;
          }
          v15 = *((float *)a2 + 2);
        }
        v112[0] = 1;
        if ( !*((_BYTE *)a2 + 164) )
          goto LABEL_168;
        updated = CDrawingContext::D2DGeometryFromGeometry(
                    v77,
                    (const struct D2D_SIZE_F *)(*a2 + 132LL),
                    *(struct CGeometry **)(*a2 + 232LL),
                    (const struct CMILMatrix *)((char *)a2 + 92),
                    &v119,
                    v112);
        v9 = updated;
        if ( updated == -2003238895 )
        {
          *v7 = 1;
          v9 = 0;
          goto LABEL_93;
        }
        if ( updated < 0 )
        {
          v111 = 5111;
          goto LABEL_322;
        }
        if ( v112[0] )
        {
LABEL_168:
          v78 = 0LL;
        }
        else
        {
          v78 = &v135;
          v79 = _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 23), (__m128)*((unsigned int *)a2 + 23), 225);
          v79.m128_f32[0] = *((float *)a2 + 24);
          v80 = _mm_shuffle_ps(v79, v79, 198);
          v80.m128_f32[0] = *((float *)a2 + 27);
          v81 = _mm_shuffle_ps(v80, v80, 39);
          v81.m128_f32[0] = *((float *)a2 + 28);
          *(_QWORD *)&v135.m[2][0] = _mm_unpacklo_ps(
                                       (__m128)*((unsigned int *)a2 + 35),
                                       (__m128)*((unsigned int *)a2 + 36)).m128_u64[0];
          *(__m128 *)&v135.m11 = _mm_shuffle_ps(v81, v81, 57);
        }
        v59 = v118;
        updated = CDrawingContext::PushD2DLayer(
                    this,
                    (struct CVisual *)*a2,
                    v118,
                    (__int64)v119,
                    (__int64)v78,
                    v15,
                    1,
                    *((_DWORD *)a2 + 40));
        v9 = updated;
        if ( updated < 0 )
        {
          v111 = 5128;
          goto LABEL_322;
        }
      }
      else
      {
        if ( v58 == 1 )
        {
          v70 = *((float *)a2 + 5) * *((float *)a2 + 2);
          v71 = (struct CVisual *)*a2;
          v132.m128_i32[0] = 7;
          v132.m128_u64[1] = (unsigned __int64)v71;
          v113.width = v70;
          v72 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v132);
          v9 = v72;
          if ( v72 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x183Bu);
          }
          else
          {
            v73 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 3104, &v113);
            v9 = v73;
            if ( v73 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x183Fu);
              CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                (char *)this + 448,
                0LL);
            }
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1419u);
            goto LABEL_93;
          }
        }
        else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a2 + 5) - 1.0)) & _xmm) >= 0.0000011920929 )
        {
          updated = CDrawingContext::PushEffectiveAlphaForNode(this, (const struct CVisual *)*a2, *((float *)a2 + 5), 1);
          v9 = updated;
          if ( updated < 0 )
          {
            v111 = 5154;
            goto LABEL_322;
          }
        }
        v59 = v118;
      }
      if ( *((_BYTE *)a2 + 165) )
      {
        CVisual::GetColorTransform(*a2);
        CDrawingContext::PushColorTransformLayer(this, (struct CVisual *)*a2);
        v16 = 1;
      }
      if ( *((_BYTE *)a2 + 166) )
      {
        v108 = (CVisual *)*a2;
        v112[0] = 0;
        EffectInternal = CVisual::GetEffectInternal(v108);
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*a2,
                    (__int64)v59,
                    v121,
                    v120,
                    EffectInternal,
                    (char *)v112);
        v9 = updated;
        if ( updated < 0 )
        {
          v111 = 5181;
          goto LABEL_322;
        }
        v16 = 1;
        *v7 |= v112[0];
      }
      if ( *((_BYTE *)a2 + 167) )
      {
        v82 = (struct CFilterEffect **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
        v112[0] = 0;
        if ( v82 )
          v8 = *v82;
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*a2,
                    (__int64)v59,
                    v121,
                    v120,
                    v8,
                    (char *)v112);
        v9 = updated;
        if ( updated < 0 )
        {
          v111 = 5202;
          goto LABEL_322;
        }
        v16 = 1;
        *v7 |= v112[0];
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        updated = CDrawingContext::ComputeExternalLayerOffsetAndBounds(this, (struct MilPointAndSizeL *)&v132);
        v9 = updated;
        if ( updated < 0 )
        {
          v111 = 5211;
          goto LABEL_322;
        }
        CMILMatrix::SetToIdentity((CMILMatrix *)v122);
        CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v122);
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v122, (float *)&v116, (float *)&v113);
        updated = CDrawingContext::PushResampleLayer(
                    this,
                    *a2,
                    *((unsigned int *)a2 + 4),
                    &v132,
                    (_DWORD)v116,
                    LODWORD(v113.width));
        v9 = updated;
        if ( updated < 0 )
        {
          v111 = 5225;
          goto LABEL_322;
        }
        v16 = 1;
      }
      if ( *((_BYTE *)a2 + 168) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*a2);
        CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*a2, ColorSpace);
      }
      else if ( !v16 )
      {
        goto LABEL_93;
      }
      CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)(a2 + 3));
      updated = CVisual::UpdateCpuClippingData(*a2, *((_QWORD *)this + 816), 4LL);
      v9 = updated;
      if ( updated >= 0 )
        goto LABEL_93;
      v111 = 5245;
LABEL_322:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v111);
      goto LABEL_93;
    }
    v20 = (struct CVisual *)*a2;
    v133 = 0LL;
    v134 = 0;
    lpMem = 0LL;
    v21 = *((_QWORD *)v20 + 29);
    v22 = (const struct D2D_SIZE_F *)((char *)v20 + 132);
    v133 = 0LL;
    v134 = 0;
    LOBYTE(v115) = 0;
    if ( !*(_BYTE *)(v21 + 96) )
    {
      v62 = *(_QWORD *)(v21 + 16);
      if ( GetCurrentThreadId() == *(_DWORD *)(v62 + 560) )
      {
        if ( (*(_BYTE *)(v21 + 32) & 1) != 0 )
        {
          ShapeDataWorker = CGeometry::GetShapeDataWorker((CGeometry *)v21, v22, (struct CShapePtr *)(v21 + 80));
          v9 = ShapeDataWorker;
          if ( ShapeDataWorker < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataWorker, 0x4Eu);
LABEL_221:
            v28 = (CRegionShape *)lpMem;
LABEL_108:
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x26u);
              goto LABEL_224;
            }
LABEL_23:
            v9 = -2003292412;
            if ( v28 )
            {
              v29 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, _QWORD))(*(_QWORD *)v28 + 32LL);
              if ( (char *)v29 == (char *)CRectanglesShape::GetTightBounds )
              {
                v30 = CRectanglesShape::GetTightBounds((__int64)v28, (__int64)&v132, 0LL);
              }
              else if ( v29 == CRegionShape::GetTightBounds )
              {
                v30 = CRegionShape::GetTightBounds(v28, &v132, 0LL);
              }
              else
              {
                v30 = v29(v28, &v132, 0LL);
              }
              v9 = v30;
              if ( v30 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x102u);
              v28 = (CRegionShape *)lpMem;
            }
            if ( v9 >= 0 )
            {
LABEL_30:
              if ( v9 == -2003304438 )
              {
                v9 = 0;
                v132 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              }
              if ( (_BYTE)v115 && v28 )
              {
                v31 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v28;
                if ( v31 == CRectanglesShape::`scalar deleting destructor' )
                {
                  *(_QWORD *)v28 = &CRectanglesShape::`vftable';
                  *((_DWORD *)v28 + 8) = 0;
                  DynArrayImpl<0>::ShrinkToSize((char *)v28 + 8, 16LL);
                  v32 = (_QWORD *)*((_QWORD *)v28 + 7);
                  if ( v32 )
                  {
                    (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
                    *((_QWORD *)v28 + 7) = 0LL;
                  }
                  v33 = (_QWORD *)*((_QWORD *)v28 + 1);
                  if ( v33 != *((_QWORD **)v28 + 2) )
                  {
                    WPF::ProcessHeapImpl::Free(v33);
                    *((_QWORD *)v28 + 1) = 0LL;
                  }
                  Current = CThreadContext::GetCurrent((struct CThreadContext **)&v113);
                  if ( Current < 0 )
                    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
                  v35 = v113;
                  if ( *(_DWORD *)(*(_QWORD *)&v113 + 12LL) >= *(_DWORD *)(*(_QWORD *)&v113 + 8LL) )
                  {
                    WPF::ProcessHeapImpl::Free(v28);
                  }
                  else
                  {
                    *(_QWORD *)v28 = *(_QWORD *)(*(_QWORD *)&v113 + 16LL);
                    ++*(_DWORD *)(*(_QWORD *)&v35 + 12LL);
                    *(_QWORD *)(*(_QWORD *)&v35 + 16LL) = v28;
                  }
                }
                else
                {
                  v31(v28, 1);
                }
              }
              lpMem = 0LL;
              LOBYTE(v115) = 0;
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD45u);
              }
              else if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v132.m128_f32[0]
                      || v132.m128_f32[2] < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 2))
                     && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v132.m128_f32[1]
                      || v132.m128_f32[3] < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                            + 3)) )
              {
                v9 = 0;
                if ( *(_BYTE *)(v21 + 96)
                  || (v63 = *(_QWORD *)(v21 + 16), GetCurrentThreadId() != *(_DWORD *)(v63 + 560)) )
                {
                  v36 = *(_BYTE *)(v21 + 96);
                  if ( v36 || (*(_BYTE *)(v21 + 32) & 1) != 0 || (v65 = *(CRectanglesShape **)(v21 + 80)) == 0LL )
                  {
                    v37 = 0LL;
                    if ( v36 )
                      v37 = (struct D2D_SIZE_F *)v22;
                    v38 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v21 + 176LL);
                    if ( v38 == CRectangleGeometry::GetShapeDataCore )
                      ShapeDataCore = CRectangleGeometry::GetShapeDataCore(
                                        (CRectangleGeometry *)v21,
                                        v37,
                                        (struct CShapePtr *)&v133);
                    else
                      ShapeDataCore = v38((CRectangleGeometry *)v21, v37, (struct CShapePtr *)&v133);
                    v9 = ShapeDataCore;
                    if ( ShapeDataCore < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0x80u);
                    }
                    else
                    {
                      v40 = *(CComponentTransform2D **)(v21 + 72);
                      if ( v40 )
                      {
                        v117 = 0LL;
                        if ( v37 )
                          v117 = *v37;
                        if ( v133 )
                        {
                          CComponentTransform2D::GetRealization(v40, &v117, &v135);
                          v122[2] = *(_QWORD *)&v135.m[1][0];
                          v122[0] = *(_QWORD *)&v135.m11;
                          v123 = _xmm;
                          v124 = *(_QWORD *)&v135.m[2][0];
                          v126 = 1065353216LL;
                          v122[1] = 0LL;
                          v122[3] = 0LL;
                          v125 = 0;
                          v87 = CShape::CopyShape(v133, (const struct CMILMatrix *)v122, (struct CShape **)&v117);
                          v9 = v87;
                          if ( v87 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0x94u);
                          }
                          else
                          {
                            CShapePtr::Release((CShapePtr *)&v133);
                            v133 = (CRectanglesShape *)v117;
                            v134 = 1;
                          }
                        }
                      }
                    }
                    if ( v9 >= 0 )
                      goto LABEL_54;
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x5Du);
                  }
                  else
                  {
                    if ( v134 && v133 )
                      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v133)(v133, 1LL);
                    v133 = v65;
                    v134 = 0;
                  }
                  goto LABEL_114;
                }
                if ( (*(_BYTE *)(v21 + 32) & 1) != 0 )
                {
                  v95 = CGeometry::GetShapeDataWorker((CGeometry *)v21, v22, (struct CShapePtr *)(v21 + 80));
                  v9 = v95;
                  if ( v95 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x4Eu);
                    goto LABEL_114;
                  }
                  *(_DWORD *)(v21 + 32) &= ~1u;
                }
                v64 = *(CRectanglesShape **)(v21 + 80);
                CShapePtr::Release((CShapePtr *)&v133);
                v133 = v64;
                v134 = 0;
LABEL_114:
                if ( v9 >= 0 )
                  goto LABEL_54;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD4Cu);
              }
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1393u);
LABEL_241:
                v96 = &v133;
LABEL_303:
                CShapePtr::Release((CShapePtr *)v96);
                goto LABEL_93;
              }
LABEL_54:
              if ( !v133 )
              {
                *((_BYTE *)a2 + 164) = 0;
LABEL_79:
                if ( v134 && v133 )
                {
                  v66 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v133;
                  if ( v66 == CRectanglesShape::`scalar deleting destructor' )
                    CRectanglesShape::`scalar deleting destructor'(v133, 1);
                  else
                    v66(v133, 1);
                }
                v7 = v116;
                v16 = 0;
                goto LABEL_81;
              }
              v41 = (_QWORD *)((char *)this + 1008);
              if ( *(_BYTE *)(*((_QWORD *)this + 126) + 80LL * (unsigned int)(*((_DWORD *)this + 258) - 1)) )
              {
                v42 = (CVisual *)*a2;
                if ( *(_BYTE *)(*((_QWORD *)this + 816) + 32LL) )
                {
                  v43 = (struct _LIST_ENTRY *)((char *)v42 + 280);
                }
                else
                {
                  TreeDataListHead = CVisual::GetTreeDataListHead(v42);
                  if ( TreeDataListHead )
                  {
                    Flink = TreeDataListHead->Flink;
                    if ( TreeDataListHead->Flink != TreeDataListHead )
                    {
                      while ( Flink[2].Flink != v84 )
                      {
                        Flink = Flink->Flink;
                        if ( Flink == TreeDataListHead )
                          goto LABEL_58;
                      }
                      v43 = Flink - 14;
                    }
                  }
                }
LABEL_58:
                v44 = (__int64)v43[10].Flink;
              }
              else
              {
                v44 = (__int64)a2 + 92;
              }
              v45 = (struct CVisual *)*a2;
              v46 = 0;
              v47 = CScopedClipStack::PushCpuOrGpuClipToScope(
                      (__int64 *)this + 126,
                      (__int64)&v133,
                      *((_DWORD *)this + 64) != 0,
                      v44,
                      (char *)v112,
                      (char *)&v112[1]);
              v9 = v47;
              if ( v47 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x1267u);
                goto LABEL_285;
              }
              v9 = 0;
              v48 = *((unsigned int *)this + 113);
              v132.m128_u64[1] = (unsigned __int64)v45;
              v49 = 0LL;
              if ( v112[1] )
              {
                v46 = 1;
                v132.m128_i32[0] = 1;
                if ( *((_DWORD *)this + 112) != (_DWORD)v48 )
                {
LABEL_62:
                  *(__m128 *)(*((_QWORD *)this + 58) + 16LL * (unsigned int)(*((_DWORD *)this + 112))++) = v132;
                  v50 = *((_DWORD *)this + 118);
                  if ( v50 <= *((_DWORD *)this + 112) )
                    v50 = *((_DWORD *)this + 112);
                  *((_DWORD *)this + 118) = v50;
                  goto LABEL_65;
                }
                v97 = 2 * v48;
                if ( v97 > 0xFFFFFFFF )
                {
                  v9 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_65:
                  if ( v9 >= 0 )
                  {
                    *((_BYTE *)this + 6825) = 1;
                    v51 = 0;
LABEL_67:
                    if ( v9 < 0 )
                    {
                      if ( v51 )
                        CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), v112);
                      if ( v46 )
                        CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 1008));
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x13A5u);
                      goto LABEL_241;
                    }
                    v52 = *((_DWORD *)this + 258);
                    if ( v52
                      && *(_DWORD *)(*v41 + 80LL * (unsigned int)(v52 - 1) + 4)
                      && (v53 = *((_DWORD *)this + 768)) != 0 )
                    {
                      v132 = *(__m128 *)(*((_QWORD *)this + 386) + 16LL * (unsigned int)(v53 - 1));
                      v54 = v132.m128_f32[0];
                      v55 = v132.m128_f32[1];
                      LODWORD(v56) = _mm_shuffle_ps(v132, v132, 255).m128_u32[0];
                      v57 = v132.m128_f32[2];
                    }
                    else
                    {
                      v56 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                      v57 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                      v55 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                      v54 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                    }
                    if ( v52 && *(_DWORD *)(*v41 + 80LL * (unsigned int)(v52 - 1) + 8) )
                    {
                      v68 = 120LL * (unsigned int)(*((_DWORD *)this + 466) - 1);
                      v69 = *((_QWORD *)this + 230);
                      if ( *(float *)(v68 + v69 + 96) > v54 )
                        v54 = *(float *)(v68 + v69 + 96);
                      if ( *(float *)(v68 + v69 + 100) > v55 )
                        v55 = *(float *)(v68 + v69 + 100);
                      if ( v57 > *(float *)(v68 + v69 + 104) )
                        v57 = *(float *)(v68 + v69 + 104);
                      if ( v56 > *(float *)(v68 + v69 + 108) )
                        v56 = *(float *)(v68 + v69 + 108);
                      if ( v57 <= v54 || v56 <= v55 )
                        goto LABEL_96;
                    }
                    if ( v57 <= v54 || v56 <= v55 )
                    {
LABEL_96:
                      *v116 = 1;
                      if ( v134 && v133 )
                      {
                        v61 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v133;
                        if ( v61 == CRectanglesShape::`scalar deleting destructor' )
                          CRectanglesShape::`scalar deleting destructor'(v133, 1);
                        else
                          v61(v133, 1);
                      }
                      goto LABEL_93;
                    }
                    if ( v112[0] )
                      *((_BYTE *)a2 + 164) = 0;
                    if ( EventEnabled(
                           Microsoft_Windows_Dwm_Core_Provider_Context,
                           &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
                    {
                      if ( CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v133) )
                        *((_DWORD *)a2 + 40) |= 1u;
                      LOBYTE(v105) = 1;
                      if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>((char *)a2 + 92, v105)
                        && (v107 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v106[1]) & _xmm), v107 < 0.000081380211)
                        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v106[4]) & _xmm) < 0.000081380211
                        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v106) & _xmm) < 0.000081380211
                        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v106[5]) & _xmm) < 0.000081380211 )
                      {
                        *((_DWORD *)a2 + 40) |= 4u;
                      }
                    }
                    goto LABEL_79;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1270u);
LABEL_285:
                  v51 = 0;
                  goto LABEL_67;
                }
                v98 = v97;
                if ( (unsigned int)v97 <= 0x40 )
                  v98 = 64;
                LODWORD(v113.width) = v98;
                v9 = 0;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v98 <= 0x10 )
                {
                  v9 = -2147024809;
                }
                else
                {
                  v99 = 16LL * v98;
                  if ( !v99 )
                    v99 = 1LL;
                  v49 = HeapAlloc(WPF::g_processHeap, 0, v99);
                  if ( !v49 )
                    v9 = -2147024882;
                }
                if ( v9 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x54u);
                }
                else
                {
                  v100 = 16LL * *((unsigned int *)this + 112);
                  v9 = 0;
                  if ( v100 <= 0xFFFFFFFF )
                  {
                    memcpy_0(v49, *((const void **)this + 58), (unsigned int)v100);
                    WPF::ProcessHeapImpl::Free(*((void **)this + 58));
                    *((_DWORD *)this + 113) = LODWORD(v113.width);
                    *((_QWORD *)this + 58) = v49;
                    goto LABEL_62;
                  }
                  v9 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
                }
                if ( v49 )
                  HeapFree(WPF::g_processHeap, 0, v49);
                goto LABEL_65;
              }
              v51 = 1;
              v132.m128_i32[0] = 2;
              v112[1] = 1;
              if ( *((_DWORD *)this + 112) != (_DWORD)v48 )
                goto LABEL_120;
              v101 = 2 * v48;
              if ( v101 > 0xFFFFFFFF )
              {
                v9 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
              }
              else
              {
                v102 = v101;
                if ( (unsigned int)v101 <= 0x40 )
                  v102 = 64;
                LODWORD(v113.width) = v102;
                v9 = 0;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v102 <= 0x10 )
                {
                  v9 = -2147024809;
                }
                else
                {
                  v103 = 16LL * v102;
                  if ( !v103 )
                    v103 = 1LL;
                  v49 = HeapAlloc(WPF::g_processHeap, 0, v103);
                  if ( !v49 )
                    v9 = -2147024882;
                }
                if ( v9 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x54u);
                }
                else
                {
                  v104 = 16LL * *((unsigned int *)this + 112);
                  v9 = 0;
                  if ( v104 <= 0xFFFFFFFF )
                  {
                    memcpy_0(v49, *((const void **)this + 58), (unsigned int)v104);
                    WPF::ProcessHeapImpl::Free(*((void **)this + 58));
                    v51 = v112[1];
                    *((_DWORD *)this + 113) = LODWORD(v113.width);
                    *((_QWORD *)this + 58) = v49;
LABEL_120:
                    *(__m128 *)(*((_QWORD *)this + 58) + 16LL * (unsigned int)(*((_DWORD *)this + 112))++) = v132;
                    v67 = *((_DWORD *)this + 118);
                    if ( v67 <= *((_DWORD *)this + 112) )
                      v67 = *((_DWORD *)this + 112);
                    *((_DWORD *)this + 118) = v67;
                    goto LABEL_123;
                  }
                  v9 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
                }
                if ( v49 )
                  HeapFree(WPF::g_processHeap, 0, v49);
              }
              v51 = v112[1];
LABEL_123:
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x127Bu);
                v51 = v112[1];
              }
              else if ( v112[0] )
              {
                *((_BYTE *)this + 6826) = 1;
              }
              goto LABEL_67;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x27u);
LABEL_224:
            v28 = (CRegionShape *)lpMem;
            goto LABEL_30;
          }
          *(_DWORD *)(v21 + 32) &= ~1u;
        }
        v28 = *(CRegionShape **)(v21 + 80);
        CShapePtr::Release((CShapePtr *)&lpMem);
        lpMem = v28;
        LOBYTE(v115) = 0;
        goto LABEL_108;
      }
    }
    v23 = *(_BYTE *)(v21 + 96);
    if ( !v23 && (*(_BYTE *)(v21 + 32) & 1) == 0 )
    {
      v28 = *(CRegionShape **)(v21 + 80);
      if ( v28 )
      {
        lpMem = *(void **)(v21 + 80);
        LOBYTE(v115) = 0;
        goto LABEL_108;
      }
    }
    v24 = 0LL;
    if ( v23 )
      v24 = (struct D2D_SIZE_F *)v22;
    v25 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v21 + 176LL);
    if ( v25 == CRectangleGeometry::GetShapeDataCore )
      v26 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v21, v24, (struct CShapePtr *)&lpMem);
    else
      v26 = ((__int64 (__fastcall *)(__int64, struct D2D_SIZE_F *, void **, __int64))v25)(v21, v24, &lpMem, 1LL);
    v9 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x80u);
    }
    else
    {
      v27 = *(CComponentTransform2D **)(v21 + 72);
      if ( v27 )
      {
        v113 = 0LL;
        if ( v24 )
          v113 = *v24;
        v28 = (CRegionShape *)lpMem;
        if ( !lpMem )
          goto LABEL_22;
        CComponentTransform2D::GetRealization(v27, &v113, &v135);
        v127[2] = *(_QWORD *)&v135.m[1][0];
        v127[0] = *(_QWORD *)&v135.m11;
        v128 = _xmm;
        v129 = *(_QWORD *)&v135.m[2][0];
        v131 = 1065353216LL;
        v127[1] = 0LL;
        v127[3] = 0LL;
        v130 = 0;
        v86 = CShape::CopyShape((CShape *)lpMem, (const struct CMILMatrix *)v127, (struct CShape **)&v113);
        v9 = v86;
        if ( v86 >= 0 )
        {
          CShapePtr::Release((CShapePtr *)&lpMem);
          v28 = (CRegionShape *)v113;
          lpMem = (void *)v113;
          LOBYTE(v115) = 1;
          goto LABEL_22;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x94u);
      }
    }
    v28 = (CRegionShape *)lpMem;
LABEL_22:
    if ( v9 >= 0 )
      goto LABEL_23;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x5Du);
    goto LABEL_221;
  }
  v132.m128_u64[1] = *a2;
  v132.m128_i32[0] = 6;
  updated = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v132);
  v9 = updated;
  if ( updated < 0 )
  {
    v111 = 4997;
    goto LABEL_322;
  }
LABEL_93:
  if ( v119 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v119 + 16LL))(v119);
  return (unsigned int)v9;
}
