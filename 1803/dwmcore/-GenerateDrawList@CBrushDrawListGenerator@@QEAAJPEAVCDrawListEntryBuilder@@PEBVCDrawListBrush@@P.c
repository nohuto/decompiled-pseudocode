/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800564EC (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B309C (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180005A50 (-IsOfType@CPrimitiveGroupDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180005A60 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019094 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18006320C (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008BA40 (-IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800DB752 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x18017C630 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x1801C87C0 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        CMILRefCountBase **a2,
        const struct CDrawListBrush *a3,
        void ***a4)
{
  void ***v4; // rax
  __int64 v7; // rdx
  CScopedClipStack *v9; // rbx
  CVisual *v10; // rcx
  struct _LIST_ENTRY *v11; // r10
  struct _LIST_ENTRY *Blink; // rsi
  int TopCpuClipInScope; // eax
  int DrawListPrimitive; // ebx
  __int64 v15; // rbx
  size_t v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // ebx
  bool v19; // zf
  CPrimitiveGroupDrawListBrush *v20; // rcx
  bool (__fastcall *v21)(__int64, int); // rax
  char v22; // al
  __int64 v23; // r9
  int BuiltHWPrimitiveEntry; // eax
  CMILRefCountBase *v25; // rcx
  void (*v26)(void); // rax
  unsigned int v28; // r14d
  CPrimitiveGroupDrawListBrush *v29; // rdi
  __int64 (__fastcall *v30)(CPrimitiveGroupDrawListBrush *, __int64 (__fastcall *)(void *, void *), void *); // rax
  int v31; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v33; // r11
  struct _LIST_ENTRY *i; // rcx
  CRectanglesShape *(__fastcall *v35)(CRectanglesShape *, char); // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  const struct CMILMatrix *TopByReference; // rax
  unsigned int v41; // ecx
  int v42; // ebx
  CPrimitiveGroupDrawListBrush *v43; // rdi
  char v44; // al
  unsigned int v45; // eax
  CBrushDrawListGenerator *v46; // [rsp+30h] [rbp-49h] BYREF
  struct CShape *v47; // [rsp+38h] [rbp-41h] BYREF
  struct _LIST_ENTRY *v48; // [rsp+40h] [rbp-39h]
  CRectanglesShape *v49; // [rsp+48h] [rbp-31h] BYREF
  char v50; // [rsp+50h] [rbp-29h]
  char v51; // [rsp+58h] [rbp-21h]
  unsigned int v52; // [rsp+60h] [rbp-19h]
  CPrimitiveGroupDrawListBrush *v53[5]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v54; // [rsp+90h] [rbp+17h]
  struct CDrawListEntryBuilder *v55; // [rsp+98h] [rbp+1Fh]
  void ***v56; // [rsp+A0h] [rbp+27h]
  char v57; // [rsp+A8h] [rbp+2Fh]
  void **v58; // [rsp+E0h] [rbp+67h] BYREF
  struct CShape *v59; // [rsp+E8h] [rbp+6Fh] BYREF

  v46 = this;
  v55 = (struct CDrawListEntryBuilder *)a2;
  v58 = &CCommonRenderingEffectFactory::`vftable';
  v47 = 0LL;
  v4 = &v58;
  if ( a4 )
    v4 = a4;
  v48 = 0LL;
  v56 = v4;
  v49 = 0LL;
  v7 = *(_QWORD *)this;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 0LL;
  v9 = (CScopedClipStack *)(v7 + 1008);
  v57 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v7 + 1008) + 80LL * (unsigned int)(*(_DWORD *)(v7 + 1032) - 1)) )
    goto LABEL_11;
  v10 = 0LL;
  if ( *(_BYTE *)(v7 + 6520) )
  {
    if ( *(_BYTE *)(v7 + 6521) )
      v10 = *(CVisual **)(v7 + 3160);
    else
      v10 = *(CVisual **)(*(_QWORD *)(v7 + 6528) + 24LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 6528) + 32LL) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)v10 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v10);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( i[2].Flink == v33 )
        {
          v11 = i - 14;
          break;
        }
      }
    }
  }
  Blink = v11[9].Blink;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v9, &v59);
  DrawListPrimitive = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    v47 = v59;
    v49 = 0LL;
    v50 = 0;
    v51 = 0;
    v48 = Blink;
LABEL_11:
    DrawListPrimitive = 0;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TopCpuClipInScope, 0x344u);
LABEL_12:
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0xBBu);
    goto LABEL_40;
  }
  v15 = *((unsigned int *)this + 18);
  LODWORD(v54) = v15;
  HIDWORD(v54) = v15;
  v16 = 8 * v15;
  if ( !v16 )
    goto LABEL_17;
  if ( this == (CBrushDrawListGenerator *)-40LL || v16 > 0x28 )
  {
    memset_0(v53, 0, sizeof(v53));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(v37, v36, v38, v39) = 22;
    }
    else
    {
      if ( v16 <= 0x28 )
        goto LABEL_17;
      *(_DWORD *)_o__errno(v37, v36, v38, v39) = 34;
    }
    invalid_parameter_noinfo();
    goto LABEL_17;
  }
  memcpy_0(v53, (char *)this + 40, v16);
LABEL_17:
  if ( a3 )
  {
    v53[(unsigned int)v54] = a3;
    LODWORD(v54) = v54 + 1;
  }
  v17 = *(_QWORD *)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 6833LL)
    || !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + 384) + 160LL))(*(_QWORD *)(v17 + 384)) + 632)
    || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP
    || (TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v17 + 480)),
        !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference))
    || !*(_DWORD *)(v17 + 768) && *(_DWORD *)(v17 + 696)
    || *(_QWORD *)(v17 + 3336)
    || (v57 = 1, ((unsigned int (__fastcall *)(void ***))(*v56)[1])(v56))
    || (v47 || v49) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v47)
    || *(_DWORD *)(*(_QWORD *)this + 260LL) == 4
    || CBrushDrawListGenerator::IsColorConversionRequired(this) )
  {
    v57 = 0;
    goto LABEL_21;
  }
  if ( !*((_BYTE *)this + 78) || (v41 = HIDWORD(v54), v42 = 0, !HIDWORD(v54)) )
  {
LABEL_86:
    v44 = v57;
    goto LABEL_87;
  }
  while ( 1 )
  {
    v43 = v53[v42];
    if ( v43 )
      break;
LABEL_85:
    if ( ++v42 >= v41 )
      goto LABEL_86;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CPrimitiveGroupDrawListBrush *, __int64))(*(_QWORD *)v43 + 8LL))(
          v53[v42],
          2LL)
    || Matrix3x3::Is2DAffine((CPrimitiveGroupDrawListBrush *)((char *)v43 + 100)) )
  {
    v41 = HIDWORD(v54);
    goto LABEL_85;
  }
  v44 = 0;
  v57 = 0;
LABEL_87:
  if ( v44 )
  {
    CShapePtr::Release(&v49);
    v51 = 0;
    v47 = 0LL;
    v48 = 0LL;
  }
LABEL_21:
  v18 = v52;
  v19 = v52 == (_DWORD)v54;
  if ( v52 < (unsigned int)v54 )
  {
    do
    {
      v20 = v53[v18];
      if ( v20 )
      {
        v21 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 8LL);
        if ( (char *)v21 == (char *)CSurfaceDrawListBrush::IsOfType )
        {
          v22 = CSurfaceDrawListBrush::IsOfType(v20, 3LL);
        }
        else if ( v21 == CGeometryOnlyDrawListBrush::IsOfType )
        {
          v22 = CGeometryOnlyDrawListBrush::IsOfType((__int64)v20, 3);
        }
        else
        {
          v22 = v21 == CPrimitiveGroupDrawListBrush::IsOfType
              ? CPrimitiveGroupDrawListBrush::IsOfType((__int64)v20, 3)
              : v21((__int64)v20, 3);
        }
        if ( v22 )
          break;
      }
      ++v18;
    }
    while ( v18 < (unsigned int)v54 );
    v19 = v18 == (_DWORD)v54;
  }
  if ( !v19 )
  {
    v28 = v52;
    v29 = v53[v18];
    v52 = v18;
    v30 = *(__int64 (__fastcall **)(CPrimitiveGroupDrawListBrush *, __int64 (__fastcall *)(void *, void *), void *))(*(_QWORD *)v29 + 32LL);
    if ( v30 == CPrimitiveGroupDrawListBrush::EnumerateBrushes )
      v31 = CPrimitiveGroupDrawListBrush::EnumerateBrushes(
              v29,
              (__int64 (__fastcall *)(void *, void *))lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_,
              &v46);
    else
      v31 = v30(
              v29,
              (__int64 (__fastcall *)(void *, void *))lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_,
              &v46);
    v53[v18] = v29;
    DrawListPrimitive = v31;
    v52 = v28;
    v23 = (unsigned int)v31;
    if ( v31 >= 0 )
      goto LABEL_32;
    v45 = 361;
    goto LABEL_91;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v46,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v46);
  if ( DrawListPrimitive < 0 )
  {
    LODWORD(v23) = DrawListPrimitive;
    v45 = 305;
LABEL_91:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v45);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x102u);
    goto LABEL_40;
  }
LABEL_32:
  DrawListPrimitive = 0;
  if ( a2[4] )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)a2,
                              0,
                              0LL,
                              0LL);
    DrawListPrimitive = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
    v25 = a2[4];
    if ( v25 )
    {
      a2[4] = 0LL;
      v26 = *(void (**)(void))(*(_QWORD *)v25 + 8LL);
      if ( (char *)v26 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v25);
      else
        v26();
    }
    if ( DrawListPrimitive < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListPrimitive, 0x107u);
  }
LABEL_40:
  if ( v50 && v49 )
  {
    v35 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v49;
    if ( v35 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v49, 1);
    else
      ((void (__fastcall *)(CRectanglesShape *, __int64, CRectanglesShape *(__fastcall *)(CRectanglesShape *, char), __int64))v35)(
        v49,
        1LL,
        CRectanglesShape::`scalar deleting destructor',
        v23);
  }
  return (unsigned int)DrawListPrimitive;
}
