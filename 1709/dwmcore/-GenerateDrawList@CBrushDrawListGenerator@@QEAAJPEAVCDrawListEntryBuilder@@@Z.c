/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0
 * Callers:
 *     ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC (-DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001DB7C (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801679F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180031E04 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x18009F8A8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3630 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800B6FE8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x180153510 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(CBrushDrawListGenerator *this, CMILRefCountBase **a2)
{
  __int64 v4; // rdx
  CScopedClipStack *v5; // rdi
  CVisual *v6; // rcx
  struct _LIST_ENTRY *v7; // r10
  struct _LIST_ENTRY *Blink; // rsi
  int TopCpuClipInScope; // eax
  int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // edi
  bool v15; // zf
  __int64 v16; // rcx
  int DrawListPrimitive; // eax
  int BuiltHWPrimitiveEntry; // eax
  CMILRefCountBase *v19; // rcx
  void (*v20)(void); // rax
  struct D2D_MATRIX_3X2_F *v22; // rsi
  CPrimitiveGroupDrawListBrush *v23; // r15
  unsigned int v24; // r12d
  CSurfaceDrawListBrush *v25; // rbx
  __int64 (__fastcall *v26)(CPrimitiveGroupDrawListBrush *__hidden, int (*)(struct CDrawListBrush *, void *), void *); // rax
  int v27; // eax
  CSurfaceDrawListBrush *v28; // rcx
  CRectanglesShape *(__fastcall *v29)(CRectanglesShape *, char); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v31; // r11
  struct _LIST_ENTRY *Flink; // rcx
  FLOAT v33; // xmm1_4
  FLOAT v34; // xmm0_4
  FLOAT v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  __int64 v38; // r9
  const struct D2D_RECT_F *v39; // r10
  int v40; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v42; // rdx
  const struct D2D_MATRIX_3X2_F *v43; // rdx
  float *v44; // rcx
  float v45; // xmm1_4
  void *(__fastcall *v46)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v47)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall *v48)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  struct D2D_MATRIX_3X2_F v49; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v51; // [rsp+68h] [rbp-A0h]
  CRectanglesShape *v52; // [rsp+70h] [rbp-98h] BYREF
  char v53; // [rsp+78h] [rbp-90h]
  char v54; // [rsp+80h] [rbp-88h]
  void *v55; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v56; // [rsp+90h] [rbp-78h]
  int v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v59[160]; // [rsp+A8h] [rbp-60h] BYREF
  void *v60; // [rsp+148h] [rbp+40h] BYREF
  _BYTE *v61; // [rsp+150h] [rbp+48h]
  int v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+15Ch] [rbp+54h]
  _BYTE v64[160]; // [rsp+168h] [rbp+60h] BYREF
  void *lpMem; // [rsp+208h] [rbp+100h] BYREF
  _BYTE *v66; // [rsp+210h] [rbp+108h]
  int v67; // [rsp+218h] [rbp+110h]
  __int64 v68; // [rsp+21Ch] [rbp+114h]
  _BYTE v69[48]; // [rsp+228h] [rbp+120h] BYREF
  unsigned int v70; // [rsp+258h] [rbp+150h]
  struct CDrawListEntryBuilder *v71; // [rsp+260h] [rbp+158h]
  char v72; // [rsp+268h] [rbp+160h]
  struct D2D_RECT_F v73; // [rsp+278h] [rbp+170h] BYREF
  int v74; // [rsp+288h] [rbp+180h]
  int v75; // [rsp+28Ch] [rbp+184h]

  *(_QWORD *)&v49.m[2][0] = this;
  v55 = v59;
  v56 = v59;
  v60 = v64;
  v61 = v64;
  lpMem = v69;
  v71 = (struct CDrawListEntryBuilder *)a2;
  v66 = v69;
  v57 = 10;
  v58 = 10LL;
  v62 = 10;
  v63 = 10LL;
  v67 = 3;
  v68 = 3LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v54 = 0;
  v70 = 0;
  v72 = 0;
  v4 = *(_QWORD *)this;
  v5 = (CScopedClipStack *)(*(_QWORD *)this + 1008LL);
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 80LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 1032LL) - 1)) )
  {
LABEL_10:
    v10 = 0;
    goto LABEL_11;
  }
  v6 = 0LL;
  if ( *(_BYTE *)(v4 + 6520) )
  {
    if ( *(_BYTE *)(v4 + 6521) )
      v6 = *(CVisual **)(v4 + 3160);
    else
      v6 = *(CVisual **)(*(_QWORD *)(v4 + 6528) + 24LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 6528) + 32LL) )
  {
    v7 = (struct _LIST_ENTRY *)((char *)v6 + 280);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v6);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != v31 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_7;
        }
        v7 = Flink - 14;
      }
    }
  }
LABEL_7:
  Blink = v7[9].Blink;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v5, (const struct CShape **)&v49);
  v10 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    if ( v53 && v52 )
      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v52)(v52, 1LL);
    v50 = *(_QWORD *)&v49.m11;
    v52 = 0LL;
    v53 = 0;
    v54 = 0;
    v51 = Blink;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TopCpuClipInScope, 0x351u);
LABEL_11:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x113u);
    goto LABEL_38;
  }
  HIDWORD(v58) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v55, 16LL);
  HIDWORD(v63) = 0;
  DynArrayImpl<0>::ShrinkToSize(&v60, 16LL);
  HIDWORD(v68) = 0;
  DynArrayImpl<0>::ShrinkToSize(&lpMem, 16LL);
  v11 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)this + v11 + 9);
      if ( v12 )
      {
        v10 = 0;
        if ( *(_DWORD *)(v12 + 24) == 1 )
        {
          v33 = *(float *)(v12 + 32);
          v73.left = *(FLOAT *)(v12 + 28);
          v34 = *(float *)(v12 + 40);
          v73.top = v33;
          v35 = *(float *)(v12 + 44);
          v73.right = v34;
          v36 = *(_DWORD *)(v12 + 52);
          v73.bottom = v35;
          v37 = *(_DWORD *)(v12 + 56);
          v74 = v36;
          v75 = v37;
          D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
            (D2DMatrixHelper *)(v12 + 8),
            &v73,
            &v49,
            (struct D2D_RECT_F *)v12);
          v40 = CoordMap::AddNineGrid(
                  (CoordMap *)&v55,
                  v11,
                  (const struct D2D_RECT_F *)&v49,
                  (const struct Insets *)(v38 + 84),
                  v39,
                  (const struct Insets *)(v38 + 68),
                  *(unsigned __int8 *)(v38 + 100));
          v10 = v40;
          if ( v40 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x85u);
        }
        if ( v10 < 0 )
          break;
      }
      if ( ++v11 >= *((_DWORD *)this + 26) )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xFDu);
  }
  else
  {
LABEL_17:
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x114u);
    goto LABEL_38;
  }
  v13 = *(_QWORD *)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 6836LL)
    || !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 384) + 152LL))(*(_QWORD *)(v13 + 384)) + 632)
    || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP
    || ((TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v13 + 480)),
         LOBYTE(v42) = 1,
         !(unsigned __int8)CMILMatrix::Is2DAffine<1>(TopByReference, v42))
     || (v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44[1]) & _xmm), v45 >= 0.000081380211)
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44[4]) & _xmm) >= 0.000081380211)
    && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v44) & _xmm) >= 0.000081380211
     || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44[5]) & _xmm) >= 0.000081380211)
    || !*(_DWORD *)(v13 + 768) && *(_DWORD *)(v13 + 696)
    || *(_QWORD *)(v13 + 3336)
    || (v72 = (char)v43, *((_QWORD *)this + 6))
    || (v50 || v52) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v50)
    || !D2DMatrixHelper::Is2DAxisAlignedPreserving((CBrushDrawListGenerator *)((char *)this + 16), v43)
    || *(_DWORD *)(*(_QWORD *)this + 260LL) == 4
    || CBrushDrawListGenerator::IsColorConversionRequired(this) )
  {
    v72 = 0;
  }
  else if ( v72 )
  {
    CShapePtr::Release((CShapePtr *)&v52);
    v54 = 0;
    v50 = 0LL;
    v51 = 0LL;
  }
  v14 = v70;
  v15 = v70 == *((_DWORD *)this + 26);
  if ( v70 < *((_DWORD *)this + 26) )
  {
    do
    {
      v16 = *((_QWORD *)this + v14 + 9);
      if ( v16 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16) == 2 )
        break;
      ++v14;
    }
    while ( v14 < *((_DWORD *)this + 26) );
    v15 = v14 == *((_DWORD *)this + 26);
  }
  if ( !v15 )
  {
    v22 = (struct D2D_MATRIX_3X2_F *)((char *)this + 8 * v14 + 72);
    v23 = *(CPrimitiveGroupDrawListBrush **)&v22->m11;
    *(_QWORD *)&v22->m11 = 0LL;
    v24 = v70;
    v25 = v23;
    v70 = v14;
    v26 = *(__int64 (__fastcall **)(CPrimitiveGroupDrawListBrush *__hidden, int (*)(struct CDrawListBrush *, void *), void *))(*(_QWORD *)v23 + 24LL);
    if ( v26 == CPrimitiveGroupDrawListBrush::EnumerateBrushes )
      v27 = CPrimitiveGroupDrawListBrush::EnumerateBrushes(
              v23,
              lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_,
              v49.m[2]);
    else
      v27 = v26(v23, lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_, v49.m[2]);
    v10 = v27;
    if ( v22 != &v49 )
    {
      v28 = *(CSurfaceDrawListBrush **)&v22->m11;
      v25 = 0LL;
      if ( v23 != *(CPrimitiveGroupDrawListBrush **)&v22->m11 )
      {
        if ( v28 )
        {
          v46 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v28;
          if ( v46 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(v28, 1u);
          }
          else if ( v46 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
          {
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v28, 1u);
          }
          else
          {
            ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v46)(
              v28,
              1LL,
              CSurfaceDrawListBrush::`vector deleting destructor');
          }
        }
        *(_QWORD *)&v22->m11 = v23;
      }
    }
    v70 = v24;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1A9u);
      if ( v25 )
      {
        v48 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v25;
        if ( v48 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1u);
        }
        else if ( v48 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
        {
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
        }
        else
        {
          v48(v25, 1u);
        }
      }
      goto LABEL_29;
    }
    if ( v25 )
    {
      v47 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v25;
      if ( v47 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v25, 1u);
      }
      else if ( v47 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      {
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v25, 1u);
      }
      else
      {
        ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int)))v47)(
          v25,
          1LL,
          CSurfaceDrawListBrush::`vector deleting destructor');
      }
    }
    goto LABEL_28;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        this,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)v49.m[2]);
  v10 = DrawListPrimitive;
  if ( DrawListPrimitive >= 0 )
  {
LABEL_28:
    v10 = 0;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x160u);
LABEL_29:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13Au);
  }
  else if ( a2[4] )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)a2,
                              0,
                              0LL,
                              0LL);
    v10 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
    v19 = a2[4];
    if ( v19 )
    {
      a2[4] = 0LL;
      v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
      if ( (char *)v20 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v19);
      else
        v20();
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13Fu);
  }
LABEL_38:
  if ( lpMem != v66 )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    lpMem = 0LL;
  }
  if ( v60 != v61 )
  {
    WPF::ProcessHeapImpl::Free(v60);
    v60 = 0LL;
  }
  if ( v55 != v56 )
  {
    WPF::ProcessHeapImpl::Free(v55);
    v55 = 0LL;
  }
  if ( v53 && v52 )
  {
    v29 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v52;
    if ( v29 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v52, 1);
    else
      v29(v52, 1);
  }
  return (unsigned int)v10;
}
