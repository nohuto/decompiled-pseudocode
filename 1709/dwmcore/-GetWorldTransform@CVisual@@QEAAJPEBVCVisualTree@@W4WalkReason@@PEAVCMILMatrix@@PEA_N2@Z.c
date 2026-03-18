/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18011AA58 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18015B808 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015D440 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180031A14 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18004E548 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(
        CVisual *a1,
        struct _LIST_ENTRY *a2,
        int a3,
        __int64 a4,
        bool *a5,
        CVisual *a6)
{
  int v7; // r11d
  unsigned int v10; // edi
  struct _LIST_ENTRY *v11; // rbx
  bool v12; // r10
  const struct CTreeData *ParentTreeData; // rax
  unsigned __int64 v14; // rcx
  CVisual *v15; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v18; // r10
  int updated; // eax
  CVisual *v20; // rax
  struct _LIST_ENTRY *Flink; // rax
  bool v22; // [rsp+58h] [rbp+10h] BYREF

  v7 = a3;
  v10 = -2003292412;
  if ( LOBYTE(a2[2].Flink) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)a1 + 280);
LABEL_3:
    if ( v11 )
    {
      v12 = 0;
      if ( v7 != 5 || v11[7].Blink && CVisualTree::IsInTree((const struct CVisual **)a2, a1) )
      {
        v10 = 0;
        ParentTreeData = CVisual::GetParentTreeData(a1, (const struct CVisualTree *)a2, (struct CTreeData *)v11, &v22);
        if ( ParentTreeData )
          v14 = *((_QWORD *)ParentTreeData + 15);
        else
          v14 = 1LL;
        if ( v11[7].Blink < (struct _LIST_ENTRY *)v14 )
        {
          updated = CVisual::UpdateWorldTransform(
                      a1,
                      (const struct CVisualTree *)a2,
                      (struct CTreeData *)v11,
                      v22,
                      ParentTreeData);
          v10 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x63Bu);
        }
        if ( (v10 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x59Bu);
          return v10;
        }
        if ( !v11[7].Blink )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
          v10 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x5A2u);
          return v10;
        }
        v15 = a6;
        *(struct _LIST_ENTRY *)a4 = *(struct _LIST_ENTRY *)((char *)v11 + 40);
        *(struct _LIST_ENTRY *)(a4 + 16) = *(struct _LIST_ENTRY *)((char *)v11 + 56);
        *(struct _LIST_ENTRY *)(a4 + 32) = *(struct _LIST_ENTRY *)((char *)v11 + 72);
        *(struct _LIST_ENTRY *)(a4 + 48) = *(struct _LIST_ENTRY *)((char *)v11 + 88);
        *(_DWORD *)(a4 + 64) = v11[6].Blink;
        v12 = ((__int64)v11[1].Flink & 2) != 0;
        if ( v15 )
        {
          Flink = v11[7].Flink;
          *(struct _LIST_ENTRY *)v15 = *Flink;
          *((struct _LIST_ENTRY *)v15 + 1) = Flink[1];
          *((struct _LIST_ENTRY *)v15 + 2) = Flink[2];
          *((struct _LIST_ENTRY *)v15 + 3) = Flink[3];
          *((_DWORD *)v15 + 16) = Flink[4].Flink;
        }
      }
      else
      {
        v20 = a6;
        *(_WORD *)(a4 + 64) = 32085;
        *(_OWORD *)a4 = _xmm;
        *(_OWORD *)(a4 + 16) = _xmm;
        *(_OWORD *)(a4 + 32) = _xmm;
        *(_OWORD *)(a4 + 48) = _xmm;
        if ( v20 )
        {
          *((_WORD *)v20 + 32) = 32085;
          *(_OWORD *)v20 = _xmm;
          *((_OWORD *)v20 + 1) = _xmm;
          *((_OWORD *)v20 + 2) = _xmm;
          *((_OWORD *)v20 + 3) = _xmm;
        }
      }
      v10 = 0;
      if ( a5 )
        *a5 = v12;
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a1);
    v18 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      while ( 1 )
      {
        TreeDataListHead = TreeDataListHead->Flink;
        if ( TreeDataListHead == v18 )
          break;
        v11 = TreeDataListHead - 14;
        if ( TreeDataListHead[2].Flink == a2 )
          goto LABEL_3;
      }
    }
  }
  return v10;
}
