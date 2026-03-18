/*
 * XREFs of ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18000CD58 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18000D038 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18000F988 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x180013700 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180023584 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180093610 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180094F80 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800ABFD4 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800BF864 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800CF668 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@XZ @ 0x18012B580 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180134954 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18014C828 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014D35C (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@@Z @ 0x18014D448 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 */

__int64 __fastcall CDrawingContext::PushEffects(
        CDrawingContext *this,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r12
  struct D2D_MATRIX_3X2_F *v8; // r14
  int v9; // esi
  struct D2D_SIZE_F **v10; // rdi
  double v12; // xmm0_8
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  char v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // rcx
  struct CVisual *v19; // rax
  _BYTE *v20; // r12
  unsigned __int64 v21; // r13
  char v22; // dl
  struct D2D_SIZE_F *v23; // rbx
  __int64 (__fastcall *v24)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v26; // rcx
  __int64 (__fastcall *v27)(void *, __m128 *, _QWORD); // rax
  int TightBounds; // eax
  _QWORD *v29; // rbx
  CRectanglesShape *(__fastcall *v30)(CRectanglesShape *, char); // rax
  __int64 v31; // rcx
  void *v32; // rcx
  int Current; // eax
  struct D2D_SIZE_F v34; // rcx
  char v35; // al
  struct D2D_SIZE_F *v36; // rbx
  __int64 (__fastcall *v37)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v38; // eax
  CComponentTransform2D *v39; // rcx
  _QWORD *v40; // rbx
  CVisual *v41; // rcx
  struct _LIST_ENTRY *v42; // r10
  __int64 v43; // r9
  struct CVisual *v44; // r12
  char v45; // r13
  int v46; // eax
  __int64 v47; // rax
  int v48; // r12d
  void *v49; // rsi
  unsigned int v50; // eax
  int v51; // r8d
  int v52; // eax
  float v53; // xmm3_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm0_4
  int v57; // eax
  float v58; // xmm3_4
  __int128 *v59; // rbx
  __int64 v60; // r14
  __int64 v62; // rbx
  __int64 v63; // rbx
  CRectanglesShape *v64; // rbx
  CRectanglesShape *(__fastcall *v65)(CRectanglesShape *, char); // rax
  CRectanglesShape *v66; // rbx
  float v67; // xmm0_4
  struct CVisual *v68; // rax
  int v69; // eax
  int v70; // eax
  CRectanglesShape *(__fastcall *v71)(CRectanglesShape *, char); // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  int v75; // eax
  struct CVisual *v76; // rax
  int v77; // eax
  int v78; // eax
  CDrawingContext *v79; // rcx
  __m128 v80; // xmm4
  __m128 v81; // xmm4
  __m128 v82; // xmm4
  CVisual *v83; // rcx
  struct CFilterEffect **TreeEffectInternal; // rax
  int v85; // eax
  int v86; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v88; // r11
  struct _LIST_ENTRY *Flink; // rcx
  void *v90; // rbx
  unsigned __int64 v91; // rdx
  int v92; // eax
  int v93; // eax
  int v94; // ebx
  int v95; // eax
  CVisual *v96; // rcx
  struct CFilterEffect *EffectInternal; // rax
  int updated; // eax
  int v99; // eax
  int ShapeDataWorker; // eax
  CRectanglesShape **v101; // rcx
  struct D2D_SIZE_F v102; // rax
  SIZE_T v103; // r8
  unsigned __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  unsigned int v109; // [rsp+28h] [rbp-E0h]
  unsigned int v110; // [rsp+28h] [rbp-E0h]
  bool v111[8]; // [rsp+48h] [rbp-C0h] BYREF
  CRectanglesShape *v112; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+58h] [rbp-B0h]
  _BYTE *v114; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v115; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v116; // [rsp+70h] [rbp-98h] BYREF
  __int128 *v117; // [rsp+78h] [rbp-90h]
  struct ID2D1Geometry *v118; // [rsp+80h] [rbp-88h] BYREF
  __int64 v119; // [rsp+88h] [rbp-80h]
  __int64 v120; // [rsp+90h] [rbp-78h]
  _QWORD v121[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v122; // [rsp+B8h] [rbp-50h]
  __int64 v123; // [rsp+C8h] [rbp-40h]
  int v124; // [rsp+D0h] [rbp-38h]
  __int64 v125; // [rsp+D4h] [rbp-34h]
  _QWORD v126[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v127; // [rsp+108h] [rbp+0h]
  __int64 v128; // [rsp+118h] [rbp+10h]
  int v129; // [rsp+120h] [rbp+18h]
  __int64 v130; // [rsp+124h] [rbp+1Ch]
  __m128 v131; // [rsp+138h] [rbp+30h] BYREF
  void *lpMem; // [rsp+148h] [rbp+40h] BYREF
  char v133; // [rsp+150h] [rbp+48h]
  struct D2D_MATRIX_3X2_F v134; // [rsp+158h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v7 = a7;
  v8 = 0LL;
  v9 = 0;
  v10 = (struct D2D_SIZE_F **)a2;
  *a7 = 0;
  v12 = *(float *)(a2 + 8);
  v119 = a5;
  v117 = a3;
  v120 = a6;
  v114 = a7;
  v118 = 0LL;
  v13 = COERCE_DOUBLE(*(_QWORD *)&v12 & _xmm);
  if ( v13 < 0.0000011920929
    || (v14 = *(float *)(a2 + 16), (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm) < 0.0000011920929) )
  {
    *a7 = 1;
    return (unsigned int)v9;
  }
  if ( *((_BYTE *)this + 3040) || *((_QWORD *)this + 838) )
  {
    if ( !*(_BYTE *)(a2 + 160) )
    {
LABEL_183:
      v131.m128_u64[1] = (unsigned __int64)*v10;
      v131.m128_i32[0] = 6;
      updated = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
      v9 = updated;
      if ( updated >= 0 )
        goto LABEL_90;
      v110 = 5845;
      goto LABEL_281;
    }
    v91 = *(_QWORD *)a2;
    v131.m128_u64[0] = 0LL;
    v131.m128_i8[8] = 0;
    v92 = CDrawingContext::ShapeDataFromGeometry(
            (struct D2D_SIZE_F *)(v91 + 128),
            *(struct CGeometry **)(v91 + 232),
            (struct CShapePtr *)&v131);
    v9 = v92;
    if ( v92 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0x16ACu);
    }
    else
    {
      if ( !v131.m128_u64[0] )
        goto LABEL_196;
      v93 = (*(__int64 (__fastcall **)(unsigned __int64, void **, struct D2D_SIZE_F **))(*(_QWORD *)v131.m128_u64[0]
                                                                                       + 32LL))(
              v131.m128_u64[0],
              &lpMem,
              v10 + 11);
      v94 = v93;
      if ( v93 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0x16B5u);
      if ( v94 == -2003304438 )
        goto LABEL_280;
      if ( v94 < 0 )
      {
LABEL_196:
        CShapePtr::Release((CShapePtr *)&v131);
        goto LABEL_183;
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&lpMem) )
      {
LABEL_280:
        *a7 = 1;
        goto LABEL_196;
      }
      v95 = CDrawingContext::PushClipRectForNode((__int64)this, (int)*v10, (int)&lpMem, 0);
      v9 = v95;
      if ( v95 >= 0 )
      {
        CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&lpMem);
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&lpMem) )
          goto LABEL_196;
        goto LABEL_280;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0x16C3u);
    }
    v101 = (CRectanglesShape **)&v131;
    goto LABEL_270;
  }
  v15 = FLOAT_1_0;
  if ( *(_BYTE *)(a2 + 160)
    || *(_BYTE *)(a2 + 161)
    || *(_BYTE *)(a2 + 162)
    || *(_BYTE *)(a2 + 163)
    || *(_BYTE *)(a2 + 164)
    || *(_DWORD *)(a2 + 12)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v16 = 0;
    if ( qword_18023E528 )
    {
      v17 = *((_DWORD *)qword_18023E528 + 18);
      a2 = 0LL;
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8LL * (unsigned int)a2);
          if ( *(_BYTE *)(v18 + 299) || *(_BYTE *)(v18 + 298) || *(_BYTE *)(v18 + 212) || *(_DWORD *)(v18 + 208) )
            break;
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= v17 )
            goto LABEL_13;
        }
        CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)*v10);
      }
    }
LABEL_13:
    if ( !*((_BYTE *)v10 + 160) )
    {
LABEL_78:
      if ( *((_BYTE *)v10 + 160) || (v57 = *((_DWORD *)v10 + 3), v57 == 2) )
      {
        if ( *((_DWORD *)v10 + 3) == 1 )
        {
          updated = CDrawingContext::PushEffectiveAlphaForNode(
                      this,
                      (const struct CVisual *)*v10,
                      *((float *)v10 + 4) * *((float *)v10 + 2),
                      1);
          v9 = updated;
          if ( updated < 0 )
          {
            v110 = 5665;
            goto LABEL_281;
          }
        }
        else
        {
          v76 = (struct CVisual *)*v10;
          LODWORD(v114) = *((_DWORD *)v10 + 4);
          v131.m128_u64[1] = (unsigned __int64)v76;
          v131.m128_i32[0] = 7;
          v77 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
          v9 = v77;
          if ( v77 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x1A61u);
          }
          else
          {
            v78 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3008, &v114);
            v9 = v78;
            if ( v78 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0x1A65u);
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, v107);
            }
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x162Au);
            goto LABEL_90;
          }
          v15 = *((float *)v10 + 2);
        }
        v111[0] = 1;
        if ( *((_BYTE *)v10 + 160) )
        {
          updated = CDrawingContext::D2DGeometryFromGeometry(
                      v79,
                      *v10 + 16,
                      *(struct CGeometry **)&(*v10)[29],
                      (unsigned __int64)(v10 + 11),
                      &v118,
                      v111);
          v9 = updated;
          if ( updated < 0 )
          {
            v110 = 5687;
            goto LABEL_281;
          }
          if ( !v111[0] )
          {
            v8 = &v134;
            v80 = _mm_shuffle_ps((__m128)*((unsigned int *)v10 + 22), (__m128)*((unsigned int *)v10 + 22), 225);
            v80.m128_f32[0] = *((float *)v10 + 23);
            v81 = _mm_shuffle_ps(v80, v80, 198);
            v81.m128_f32[0] = *((float *)v10 + 26);
            v82 = _mm_shuffle_ps(v81, v81, 39);
            v82.m128_f32[0] = *((float *)v10 + 27);
            *(_QWORD *)&v134.m[2][0] = _mm_unpacklo_ps(
                                         (__m128)*((unsigned int *)v10 + 34),
                                         (__m128)*((unsigned int *)v10 + 35)).m128_u64[0];
            *(__m128 *)&v134.m11 = _mm_shuffle_ps(v82, v82, 57);
          }
        }
        v59 = v117;
        updated = CDrawingContext::PushD2DLayer(
                    this,
                    (struct CVisual *)*v10,
                    v117,
                    (__int64)v118,
                    (__int64)v8,
                    v15,
                    1,
                    *((_DWORD *)v10 + 39));
        v9 = updated;
        if ( updated < 0 )
        {
          v110 = 5704;
          goto LABEL_281;
        }
      }
      else
      {
        if ( v57 == 1 )
        {
          v67 = *((float *)v10 + 4) * *((float *)v10 + 2);
          v68 = (struct CVisual *)*v10;
          v131.m128_i32[0] = 7;
          v131.m128_u64[1] = (unsigned __int64)v68;
          *(float *)&v114 = v67;
          v69 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
          v9 = v69;
          if ( v69 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x1A61u);
          }
          else
          {
            v70 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3008, &v114);
            v9 = v70;
            if ( v70 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0x1A65u);
              CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, v105);
            }
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1659u);
            goto LABEL_90;
          }
        }
        else
        {
          v58 = *((float *)v10 + 4);
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v58 - 1.0)) & _xmm) >= 0.0000011920929 )
          {
            v131.m128_u64[1] = (unsigned __int64)*v10;
            *(float *)&v114 = v58;
            v131.m128_i32[0] = 7;
            v74 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
            v9 = v74;
            if ( v74 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x1A61u);
            }
            else
            {
              v75 = CWatermarkStack<float,64,2,10>::Push((char *)this + 3008, &v114);
              v9 = v75;
              if ( v75 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x1A65u);
                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 440, 0LL, v106);
              }
            }
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1662u);
              goto LABEL_90;
            }
          }
        }
        v59 = v117;
      }
      if ( *((_BYTE *)v10 + 161) )
      {
        CVisual::GetColorTransform(*v10, a2);
        CDrawingContext::PushColorTransformLayer(this, (struct CVisual *)*v10);
        v16 = 1;
      }
      if ( *((_BYTE *)v10 + 162) )
      {
        v96 = (CVisual *)*v10;
        v111[0] = 0;
        EffectInternal = CVisual::GetEffectInternal(v96);
        v60 = v119;
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*v10,
                    (__int64)v59,
                    v119,
                    v120,
                    EffectInternal,
                    (char *)v111);
        v9 = updated;
        if ( updated < 0 )
        {
          v110 = 5757;
          goto LABEL_281;
        }
        v16 = 1;
        *v7 |= v111[0];
      }
      else
      {
        v60 = v119;
      }
      if ( *((_BYTE *)v10 + 163) )
      {
        v83 = (CVisual *)*v10;
        v111[0] = 0;
        TreeEffectInternal = (struct CFilterEffect **)CVisual::GetTreeEffectInternal(v83);
        updated = CDrawingContext::PushEffectLayer(
                    (struct IRenderTarget **)this,
                    (struct CVisual *)*v10,
                    (__int64)v59,
                    v60,
                    v120,
                    *TreeEffectInternal,
                    (char *)v111);
        v9 = updated;
        if ( updated < 0 )
        {
          v110 = 5777;
          goto LABEL_281;
        }
        v16 = 1;
        *v7 |= v111[0];
      }
      if ( *((_BYTE *)v10 + 164) )
      {
        ColorSpace = CVisual::GetColorSpace((CVisual *)*v10);
        CDrawingContext::PushColorSpaceLayer(this, (const struct CVisual *)*v10, ColorSpace);
      }
      else if ( !v16 )
      {
        goto LABEL_90;
      }
      CMatrixStack::Top((CDrawingContext *)((char *)this + 472), (struct CMILMatrix *)((char *)v10 + 20));
      updated = CVisual::UpdateCpuClippingData((CVisual *)*v10, *((const struct CVisualTree **)this + 808), 4u, 0);
      v9 = updated;
      if ( updated >= 0 )
        goto LABEL_90;
      v110 = 5795;
LABEL_281:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v110);
      goto LABEL_90;
    }
    v19 = (struct CVisual *)*v10;
    v112 = 0LL;
    LOBYTE(v113) = 0;
    lpMem = 0LL;
    v20 = (_BYTE *)*((_QWORD *)v19 + 29);
    v21 = (unsigned __int64)v19 + 128;
    v112 = 0LL;
    LOBYTE(v113) = 0;
    v133 = 0;
    if ( v20[96] || (v62 = *((_QWORD *)v20 + 2), GetCurrentThreadId() != *(_DWORD *)(v62 + 592)) )
    {
      v22 = v20[96];
      if ( v22 || (v20[32] & 1) != 0 || !*((_QWORD *)v20 + 10) )
      {
        v23 = 0LL;
        if ( v22 )
          v23 = (struct D2D_SIZE_F *)v21;
        v24 = *(__int64 (__fastcall **)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v20 + 152LL);
        if ( v24 == CRectangleGeometry::GetShapeDataCore )
          ShapeDataCore = CRectangleGeometry::GetShapeDataCore(
                            (CRectangleGeometry *)v20,
                            v23,
                            (struct CShapePtr *)&lpMem);
        else
          ShapeDataCore = ((__int64 (__fastcall *)(_BYTE *, struct D2D_SIZE_F *, void **, __int64))v24)(
                            v20,
                            v23,
                            &lpMem,
                            1LL);
        v9 = ShapeDataCore;
        if ( ShapeDataCore < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCore, 0x7Fu);
        }
        else
        {
          v26 = (CComponentTransform2D *)*((_QWORD *)v20 + 9);
          if ( v26 )
          {
            v116 = 0LL;
            if ( v23 )
              v116 = *v23;
            if ( lpMem )
            {
              CComponentTransform2D::GetRealization(v26, &v116, &v134);
              v121[2] = *(_QWORD *)&v134.m[1][0];
              v121[0] = *(_QWORD *)&v134.m11;
              v122 = _xmm;
              v123 = *(_QWORD *)&v134.m[2][0];
              v125 = 1065353216LL;
              v121[1] = 0LL;
              v121[3] = 0LL;
              v124 = 0;
              v85 = CShape::CopyShape((CShape *)lpMem, (const struct CMILMatrix *)v121, (struct CShape **)&v116);
              v9 = v85;
              if ( v85 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x92u);
              }
              else
              {
                CShapePtr::Release((CShapePtr *)&lpMem);
                lpMem = (void *)v116;
                v133 = 1;
              }
            }
          }
        }
        if ( v9 >= 0 )
          goto LABEL_23;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Du);
      }
      else
      {
        lpMem = (void *)*((_QWORD *)v20 + 10);
        v133 = 0;
      }
LABEL_111:
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26u);
        goto LABEL_27;
      }
LABEL_23:
      v27 = *(__int64 (__fastcall **)(void *, __m128 *, _QWORD))(*(_QWORD *)lpMem + 32LL);
      if ( (char *)v27 == (char *)CRectanglesShape::GetTightBounds )
      {
        TightBounds = CRectanglesShape::GetTightBounds((__int64)lpMem, (__int64)&v131, 0LL);
      }
      else if ( (char *)v27 == (char *)CRegionShape::GetTightBounds )
      {
        TightBounds = CRegionShape::GetTightBounds((CRegionShape *)lpMem, &v131, 0LL);
      }
      else
      {
        TightBounds = v27(lpMem, &v131, 0LL);
      }
      v9 = TightBounds;
      if ( TightBounds < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x27u);
LABEL_27:
      if ( v9 == -2003304438 )
      {
        v9 = 0;
        v131 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      if ( v133 )
      {
        v29 = lpMem;
        if ( lpMem )
        {
          v30 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))lpMem;
          if ( v30 == CRectanglesShape::`scalar deleting destructor' )
          {
            *(_QWORD *)lpMem = &CRectanglesShape::`vftable';
            *((_DWORD *)v29 + 8) = 0;
            DynArrayImpl<0>::ShrinkToSize((__int64)(v29 + 1), 0x10u);
            v31 = v29[7];
            if ( v31 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v29[7] = 0LL;
            }
            v32 = (void *)v29[1];
            if ( v32 != (void *)v29[2] )
            {
              WPF::ProcessHeapImpl::Free(v32);
              v29[1] = 0LL;
            }
            Current = CThreadContext::GetCurrent((struct CThreadContext **)&v116);
            if ( Current < 0 )
            {
              ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
              __debugbreak();
            }
            v34 = v116;
            if ( *(_DWORD *)(*(_QWORD *)&v116 + 12LL) >= *(_DWORD *)(*(_QWORD *)&v116 + 8LL) )
            {
              WPF::ProcessHeapImpl::Free(v29);
            }
            else
            {
              *v29 = *(_QWORD *)(*(_QWORD *)&v116 + 16LL);
              ++*(_DWORD *)(*(_QWORD *)&v34 + 12LL);
              *(_QWORD *)(*(_QWORD *)&v34 + 16LL) = v29;
            }
          }
          else
          {
            v30((CRectanglesShape *)lpMem, 1);
          }
        }
      }
      lpMem = 0LL;
      v133 = 0;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF13u);
      }
      else if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v131.m128_f32[0]
              || v131.m128_f32[2] < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
             && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v131.m128_f32[1]
              || v131.m128_f32[3] < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
      {
        v9 = 0;
        if ( v20[96] || (v63 = *((_QWORD *)v20 + 2), GetCurrentThreadId() != *(_DWORD *)(v63 + 592)) )
        {
          v35 = v20[96];
          if ( v35 || (v20[32] & 1) != 0 || (v66 = (CRectanglesShape *)*((_QWORD *)v20 + 10)) == 0LL )
          {
            v36 = 0LL;
            if ( v35 )
              v36 = (struct D2D_SIZE_F *)v21;
            v37 = *(__int64 (__fastcall **)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v20 + 152LL);
            if ( v37 == CRectangleGeometry::GetShapeDataCore )
              v38 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v20, v36, (struct CShapePtr *)&v112);
            else
              v38 = v37((CRectangleGeometry *)v20, v36, (struct CShapePtr *)&v112);
            v9 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x7Fu);
            }
            else
            {
              v39 = (CComponentTransform2D *)*((_QWORD *)v20 + 9);
              if ( v39 )
              {
                v115 = 0LL;
                if ( v36 )
                  v115 = *v36;
                if ( v112 )
                {
                  CComponentTransform2D::GetRealization(v39, &v115, &v134);
                  v126[2] = *(_QWORD *)&v134.m[1][0];
                  v126[0] = *(_QWORD *)&v134.m11;
                  v127 = _xmm;
                  v128 = *(_QWORD *)&v134.m[2][0];
                  v130 = 1065353216LL;
                  v126[1] = 0LL;
                  v126[3] = 0LL;
                  v129 = 0;
                  v86 = CShape::CopyShape(v112, (const struct CMILMatrix *)v126, (struct CShape **)&v115);
                  v9 = v86;
                  if ( v86 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0x92u);
                  }
                  else
                  {
                    CShapePtr::Release((CShapePtr *)&v112);
                    v112 = (CRectanglesShape *)v115;
                    LOBYTE(v113) = 1;
                  }
                }
              }
            }
            if ( v9 >= 0 )
              goto LABEL_51;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Du);
          }
          else
          {
            if ( (_BYTE)v113 && v112 )
              (**(void (__fastcall ***)(CRectanglesShape *, __int64))v112)(v112, 1LL);
            v112 = v66;
            LOBYTE(v113) = 0;
          }
          goto LABEL_117;
        }
        if ( (v20[32] & 1) != 0 )
        {
          ShapeDataWorker = CGeometry::GetShapeDataWorker((CGeometry *)v20, v21, (struct CShapePtr *)(v20 + 80));
          v9 = ShapeDataWorker;
          if ( ShapeDataWorker < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x4Eu);
            goto LABEL_117;
          }
          *((_DWORD *)v20 + 8) &= ~1u;
        }
        v64 = (CRectanglesShape *)*((_QWORD *)v20 + 10);
        CShapePtr::Release((CShapePtr *)&v112);
        v112 = v64;
        LOBYTE(v113) = 0;
LABEL_117:
        if ( v9 >= 0 )
          goto LABEL_51;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF1Au);
      }
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15DEu);
LABEL_233:
        v101 = &v112;
LABEL_270:
        CShapePtr::Release((CShapePtr *)v101);
        goto LABEL_90;
      }
LABEL_51:
      if ( !v112 )
      {
        *((_BYTE *)v10 + 160) = 0;
LABEL_76:
        if ( (_BYTE)v113 && v112 )
        {
          v65 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v112;
          if ( v65 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v112, 1);
          else
            v65(v112, 1);
        }
        v7 = v114;
        v16 = 0;
        goto LABEL_78;
      }
      v40 = (_QWORD *)((char *)this + 912);
      v116 = (struct D2D_SIZE_F)v112;
      if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
      {
        v41 = (CVisual *)*v10;
        if ( *(_BYTE *)(*((_QWORD *)this + 808) + 32LL) )
        {
          v42 = (struct _LIST_ENTRY *)((char *)v41 + 264);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v41);
          if ( TreeDataListHead )
          {
            Flink = TreeDataListHead->Flink;
            if ( TreeDataListHead->Flink != TreeDataListHead )
            {
              while ( Flink[2].Flink != v88 )
              {
                Flink = Flink->Flink;
                if ( Flink == TreeDataListHead )
                  goto LABEL_55;
              }
              v42 = Flink - 14;
            }
          }
        }
LABEL_55:
        v43 = (__int64)v42[10].Flink;
      }
      else
      {
        v43 = (__int64)(v10 + 11);
      }
      v44 = (struct CVisual *)*v10;
      v111[0] = 0;
      v45 = 0;
      v46 = CScopedClipStack::PushCpuOrGpuClipToScope(
              (__int64 *)this + 114,
              (__int64)&v112,
              *((_DWORD *)this + 66) != 0,
              v43,
              (char *)&v111[1],
              (char *)&v111[2]);
      v9 = v46;
      if ( v46 < 0 )
      {
        v109 = 5298;
      }
      else
      {
        v131.m128_u64[1] = (unsigned __int64)v44;
        if ( v111[2] )
        {
          v47 = *((unsigned int *)this + 111);
          v45 = 1;
          v131.m128_i32[0] = 1;
          v48 = 0;
          v49 = 0LL;
          if ( *((_DWORD *)this + 110) != (_DWORD)v47 )
          {
LABEL_59:
            *(__m128 *)(*((_QWORD *)this + 57) + 16LL * (unsigned int)(*((_DWORD *)this + 110))++) = v131;
            v50 = *((_DWORD *)this + 116);
            if ( v50 <= *((_DWORD *)this + 110) )
              v50 = *((_DWORD *)this + 110);
            *((_DWORD *)this + 116) = v50;
            goto LABEL_62;
          }
          v102 = (struct D2D_SIZE_F)(2 * v47);
          if ( *(unsigned __int64 *)&v102 > 0xFFFFFFFF )
          {
            v48 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
            v9 = -2147024362;
            goto LABEL_253;
          }
          if ( LODWORD(v102.width) <= 0x40 )
            v102 = (struct D2D_SIZE_F)64LL;
          v115 = v102;
          if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(v102.width) <= 0x10 )
          {
            v48 = -2147024809;
          }
          else
          {
            v103 = 16LL * LODWORD(v102.width);
            if ( !v103 )
              v103 = 1LL;
            v49 = HeapAlloc(WPF::g_processHeap, 0, v103);
            if ( !v49 )
              v48 = -2147024882;
          }
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x54u);
          }
          else
          {
            v104 = 16LL * *((unsigned int *)this + 110);
            if ( v104 <= 0xFFFFFFFF )
            {
              v48 = 0;
              memcpy_0(v49, *((const void **)this + 57), (unsigned int)v104);
              WPF::ProcessHeapImpl::Free(*((void **)this + 57));
              *((_DWORD *)this + 111) = LODWORD(v115.width);
              *((_QWORD *)this + 57) = v49;
              goto LABEL_59;
            }
            v48 = -2147024362;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
          }
          if ( v49 )
            HeapFree(WPF::g_processHeap, 0, v49);
LABEL_62:
          v9 = v48;
          if ( v48 >= 0 )
          {
            *((_BYTE *)this + 6769) = 1;
LABEL_64:
            if ( v9 < 0 )
            {
              if ( v111[0] )
                CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 912), &v111[1]);
              if ( v45 )
                CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)this + 912));
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15F0u);
              goto LABEL_233;
            }
            v51 = *((_DWORD *)this + 234);
            if ( v51
              && (a2 = 10LL * (unsigned int)(v51 - 1), *(_DWORD *)(*v40 + 80LL * (unsigned int)(v51 - 1) + 4))
              && (v52 = *((_DWORD *)this + 744)) != 0 )
            {
              v131 = *(__m128 *)(*((_QWORD *)this + 374) + 16LL * (unsigned int)(v52 - 1));
              v53 = v131.m128_f32[0];
              v54 = v131.m128_f32[1];
              LODWORD(v55) = _mm_shuffle_ps(v131, v131, 255).m128_u32[0];
              v56 = v131.m128_f32[2];
            }
            else
            {
              v55 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
              v56 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
              v54 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
              v53 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            }
            if ( v51 )
            {
              a2 = 10LL * (unsigned int)(v51 - 1);
              if ( *(_DWORD *)(*v40 + 80LL * (unsigned int)(v51 - 1) + 8) )
              {
                v72 = 120LL * (unsigned int)(*((_DWORD *)this + 442) - 1);
                v73 = *((_QWORD *)this + 218);
                if ( *(float *)(v72 + v73 + 96) > v53 )
                  v53 = *(float *)(v72 + v73 + 96);
                if ( *(float *)(v72 + v73 + 100) > v54 )
                  v54 = *(float *)(v72 + v73 + 100);
                if ( v56 > *(float *)(v72 + v73 + 104) )
                  v56 = *(float *)(v72 + v73 + 104);
                if ( v55 > *(float *)(v72 + v73 + 108) )
                  v55 = *(float *)(v72 + v73 + 108);
                if ( v56 <= v53 || v55 <= v54 )
                  goto LABEL_124;
              }
            }
            if ( v56 <= v53 || v55 <= v54 )
            {
LABEL_124:
              *v114 = 1;
              if ( (_BYTE)v113 && v112 )
              {
                v71 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v112;
                if ( v71 == CRectanglesShape::`scalar deleting destructor' )
                  CRectanglesShape::`scalar deleting destructor'(v112, 1);
                else
                  v71(v112, 1);
              }
              goto LABEL_90;
            }
            if ( v111[1] )
              *((_BYTE *)v10 + 160) = 0;
            if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
            {
              if ( CShape::IsAxisAlignedRectangle(*(CShape **)&v116) )
                *((_DWORD *)v10 + 39) |= 1u;
              if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)(v10 + 11)) )
                *((_DWORD *)v10 + 39) |= 4u;
            }
            goto LABEL_76;
          }
LABEL_253:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x14BBu);
          goto LABEL_64;
        }
        v111[0] = 1;
        v131.m128_i32[0] = 2;
        v46 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
        v9 = v46;
        if ( v46 >= 0 )
        {
          if ( v111[1] )
            *((_BYTE *)this + 6770) = 1;
          goto LABEL_64;
        }
        v109 = 5318;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, v109);
      goto LABEL_64;
    }
    if ( (v20[32] & 1) != 0 )
    {
      v99 = CGeometry::GetShapeDataWorker((CGeometry *)v20, v21, (struct CShapePtr *)(v20 + 80));
      v9 = v99;
      if ( v99 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x4Eu);
        goto LABEL_111;
      }
      *((_DWORD *)v20 + 8) &= ~1u;
    }
    v90 = (void *)*((_QWORD *)v20 + 10);
    CShapePtr::Release((CShapePtr *)&lpMem);
    lpMem = v90;
    v133 = 0;
    goto LABEL_111;
  }
  v131.m128_u64[1] = *(_QWORD *)a2;
  v131.m128_i32[0] = 6;
  updated = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v131);
  v9 = updated;
  if ( updated < 0 )
  {
    v110 = 5584;
    goto LABEL_281;
  }
LABEL_90:
  if ( v118 )
    (*(void (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)v118 + 16LL))(v118, a2);
  return (unsigned int)v9;
}
