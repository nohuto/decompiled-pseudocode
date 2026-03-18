/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18013CD68 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162F04 (-RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180184978 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180186480 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B644C (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801DB318 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802123E0 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004DB60 (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        const struct CVisualTree *a2,
        int a3,
        __int64 a4,
        bool *a5,
        __int64 a6)
{
  unsigned int v10; // edi
  struct _LIST_ENTRY *TreeData; // rax
  struct _LIST_ENTRY *v12; // rbx
  bool v13; // r9
  int v14; // eax
  struct _LIST_ENTRY *Flink; // rax

  v10 = -2003292412;
  TreeData = CVisual::FindTreeData(a1, a2);
  v12 = TreeData;
  if ( TreeData )
  {
    v13 = 0;
    if ( a3 != 5 || TreeData[7].Blink && CVisualTree::IsInTree(a2, a1) )
    {
      v14 = CVisual::EnsureWorldTransform(a1, a2, (struct CTreeData *)v12);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x616u);
        return v10;
      }
      if ( !v12[7].Blink )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
        v10 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x61Du);
        return v10;
      }
      *(struct _LIST_ENTRY *)a4 = *(struct _LIST_ENTRY *)((char *)v12 + 40);
      *(struct _LIST_ENTRY *)(a4 + 16) = *(struct _LIST_ENTRY *)((char *)v12 + 56);
      *(struct _LIST_ENTRY *)(a4 + 32) = *(struct _LIST_ENTRY *)((char *)v12 + 72);
      *(struct _LIST_ENTRY *)(a4 + 48) = *(struct _LIST_ENTRY *)((char *)v12 + 88);
      *(_DWORD *)(a4 + 64) = v12[6].Blink;
      v13 = ((__int64)v12[1].Flink & 2) != 0;
      if ( a6 )
      {
        Flink = v12[7].Flink;
        *(struct _LIST_ENTRY *)a6 = *Flink;
        *(struct _LIST_ENTRY *)(a6 + 16) = Flink[1];
        *(struct _LIST_ENTRY *)(a6 + 32) = Flink[2];
        *(struct _LIST_ENTRY *)(a6 + 48) = Flink[3];
        *(_DWORD *)(a6 + 64) = Flink[4].Flink;
      }
    }
    else
    {
      *(_WORD *)(a4 + 64) = 32085;
      *(_OWORD *)a4 = _xmm;
      *(_OWORD *)(a4 + 16) = _xmm;
      *(_OWORD *)(a4 + 32) = _xmm;
      *(_OWORD *)(a4 + 48) = _xmm;
      if ( a6 )
      {
        *(_WORD *)(a6 + 64) = 32085;
        *(_OWORD *)a6 = _xmm;
        *(_OWORD *)(a6 + 16) = _xmm;
        *(_OWORD *)(a6 + 32) = _xmm;
        *(_OWORD *)(a6 + 48) = _xmm;
      }
    }
    v10 = 0;
    if ( a5 )
      *a5 = v13;
  }
  return v10;
}
