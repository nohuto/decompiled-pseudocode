/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024080 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x1800410F8 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18005970C (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeCoordMap@CBrushDrawListGenerator@@AEBAJPEAVCoordMap@@@Z @ 0x180059790 (-ComputeCoordMap@CBrushDrawListGenerator@@AEBAJPEAVCoordMap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800934D8 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E9C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800C1278 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1800C12CC (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x18015D6B4 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(CBrushDrawListGenerator *this, CMILRefCountBase **a2)
{
  __int64 v4; // rdx
  CScopedClipStack *v5; // rbx
  CVisual *v6; // rcx
  CRectanglesShape *v7; // rsi
  int TopCpuClipInScope; // eax
  int v9; // ebx
  int DrawListWorker; // eax
  void *(__fastcall *v12)(CRectanglesShape *__hidden, unsigned int); // rax
  const struct D2D_MATRIX_3X2_F *v13; // rdx
  bool IsColorConversionRequired; // al
  bool v15; // dl
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  struct CShape *v18; // [rsp+30h] [rbp-D0h] BYREF
  CBrushDrawListGenerator *v19; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape *v20; // [rsp+48h] [rbp-B8h] BYREF
  CRectanglesShape *v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+60h] [rbp-A0h]
  char v23; // [rsp+68h] [rbp-98h]
  void *v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+84h] [rbp-7Ch]
  _BYTE v28[160]; // [rsp+90h] [rbp-70h] BYREF
  void *v29; // [rsp+130h] [rbp+30h]
  _BYTE *v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+144h] [rbp+44h]
  _BYTE v33[160]; // [rsp+150h] [rbp+50h] BYREF
  void *lpMem; // [rsp+1F0h] [rbp+F0h]
  _BYTE *v35; // [rsp+1F8h] [rbp+F8h]
  int v36; // [rsp+200h] [rbp+100h]
  __int64 v37; // [rsp+204h] [rbp+104h]
  _BYTE v38[48]; // [rsp+210h] [rbp+110h] BYREF
  int v39; // [rsp+240h] [rbp+140h]
  CMILRefCountBase **v40; // [rsp+248h] [rbp+148h]
  bool IsWarpFastPathEnabled; // [rsp+250h] [rbp+150h]

  v40 = a2;
  v20 = 0LL;
  v22 = 0;
  v24 = v28;
  v23 = 0;
  v4 = *(_QWORD *)this;
  v25 = v28;
  v26 = 10;
  v29 = v33;
  v27 = 10LL;
  v30 = v33;
  v5 = (CScopedClipStack *)(v4 + 912);
  v31 = 10;
  lpMem = v38;
  v35 = v38;
  v32 = 10LL;
  v36 = 3;
  v37 = 3LL;
  *(_OWORD *)v21 = 0LL;
  v39 = 0;
  IsWarpFastPathEnabled = 0;
  v19 = this;
  if ( !*(_BYTE *)(*(_QWORD *)(v4 + 912) + 80LL * (unsigned int)(*(_DWORD *)(v4 + 936) - 1)) )
  {
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v6 = 0LL;
  if ( *(_BYTE *)(v4 + 6456) )
  {
    if ( *(_BYTE *)(v4 + 6457) )
      v6 = *(CVisual **)(v4 + 3064);
    else
      v6 = *(CVisual **)(*(_QWORD *)(v4 + 6464) + 24LL);
  }
  v7 = (CRectanglesShape *)*((_QWORD *)CVisual::FindTreeData(v6, *(const struct CVisualTree **)(v4 + 6464)) + 19);
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v5, &v18);
  v9 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    if ( v22 && v21[1] )
      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v21[1])(v21[1], 1LL);
    v20 = v18;
    v21[1] = 0LL;
    v22 = 0;
    v23 = 0;
    v21[0] = v7;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, 0x356u);
LABEL_9:
  if ( v9 < 0 )
  {
    v17 = 270;
    v16 = v9;
    goto LABEL_46;
  }
  DrawListWorker = CBrushDrawListGenerator::ComputeCoordMap(this, (struct CoordMap *)&v24);
  v9 = DrawListWorker;
  if ( DrawListWorker < 0 )
  {
    v17 = 271;
    goto LABEL_43;
  }
  IsWarpFastPathEnabled = CDrawingContext::IsWarpFastPathEnabled(*(CDrawingContext **)this);
  if ( IsWarpFastPathEnabled )
  {
    if ( *((_QWORD *)this + 6)
      || CCpuClip::HasClip((CCpuClip *)&v20) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v20)
      || !D2DMatrixHelper::Is2DAxisAlignedPreserving((CBrushDrawListGenerator *)((char *)this + 16), v13)
      || *(_DWORD *)(*(_QWORD *)this + 268LL) == 4 )
    {
      IsWarpFastPathEnabled = 0;
    }
    else
    {
      IsColorConversionRequired = CBrushDrawListGenerator::IsColorConversionRequired(this);
      v15 = IsWarpFastPathEnabled;
      if ( IsColorConversionRequired )
        v15 = 0;
      IsWarpFastPathEnabled = v15;
      if ( v15 )
      {
        CShapePtr::Release((CShapePtr *)&v21[1]);
        v23 = 0;
        v20 = 0LL;
        v21[0] = 0LL;
      }
    }
  }
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker(
                     this,
                     (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v19);
  v9 = DrawListWorker;
  if ( DrawListWorker < 0 )
  {
    v17 = 309;
    goto LABEL_43;
  }
  if ( a2[4] )
  {
    DrawListWorker = CDrawListPrimitiveBuilder::End(a2);
    v9 = DrawListWorker;
    if ( DrawListWorker < 0 )
    {
      v17 = 314;
LABEL_43:
      v16 = DrawListWorker;
LABEL_46:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    }
  }
  if ( lpMem != v35 )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    lpMem = 0LL;
  }
  if ( v29 != v30 )
  {
    WPF::ProcessHeapImpl::Free(v29);
    v29 = 0LL;
  }
  if ( v24 != v25 )
  {
    WPF::ProcessHeapImpl::Free(v24);
    v24 = 0LL;
  }
  if ( v22 && v21[1] )
  {
    v12 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v21[1];
    if ( v12 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v21[1], 1u);
    else
      v12(v21[1], 1u);
  }
  return (unsigned int)v9;
}
