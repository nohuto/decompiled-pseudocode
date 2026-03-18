/*
 * XREFs of ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180012408 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N4@Z @ 0x180012948 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801729D4 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180172F58 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180173C60 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800B6BF8 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(CVisual *a1, __int64 a2, int a3, __int64 a4, bool *a5, __int64 a6)
{
  int v7; // r11d
  unsigned int v10; // edi
  struct _LIST_ENTRY *v11; // rbx
  bool v12; // r10
  struct CTreeData *TreeData; // r10
  bool v14; // di
  CVisual *v15; // rcx
  unsigned __int64 v16; // rax
  struct _LIST_ENTRY *Flink; // rax
  int updated; // eax
  struct TransformParentData *TransformParentDataInternal; // rax
  struct _LIST_ENTRY *v21; // r11
  struct _LIST_ENTRY *v22; // rax
  struct _LIST_ENTRY *v23; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v25; // r11

  v7 = a3;
  v10 = -2003292412;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)a1 + 264);
LABEL_3:
    if ( v11 )
    {
      v12 = 0;
      if ( v7 != 5 || v11[7].Blink && CVisualTree::IsInTree((CVisualTree *)a2, a1) )
      {
        TreeData = 0LL;
        v14 = 0;
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 26) + 4LL) & 0x10000000) != 0 )
        {
          TransformParentDataInternal = CVisual::GetTransformParentDataInternal(a1);
          if ( ((__int64)v11[1].Flink & 4) == 0 || v11[13].Blink != v21 )
          {
            v14 = 1;
            TreeData = CVisual::FindTreeData(
                         *(CVisual **)(*(_QWORD *)TransformParentDataInternal + 8LL),
                         (const struct CVisualTree *)a2);
            if ( TreeData )
              goto LABEL_10;
          }
        }
        if ( a1 != *(CVisual **)(a2 + 24) )
        {
          v15 = (CVisual *)*((_QWORD *)a1 + 10);
          if ( *(_BYTE *)(a2 + 32) )
          {
            TreeData = (CVisual *)((char *)v15 + 264);
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead(v15);
            v25 = TreeDataListHead;
            if ( TreeDataListHead )
            {
              while ( 1 )
              {
                TreeDataListHead = TreeDataListHead->Flink;
                if ( TreeDataListHead == v25 )
                  break;
                if ( TreeDataListHead[2].Flink == (struct _LIST_ENTRY *)a2 )
                {
                  TreeData = (struct CTreeData *)&TreeDataListHead[-14];
                  break;
                }
              }
            }
          }
        }
        if ( TreeData )
LABEL_10:
          v16 = *((_QWORD *)TreeData + 15);
        else
          v16 = 1LL;
        if ( v11[7].Blink < (struct _LIST_ENTRY *)v16 )
        {
          updated = CVisual::UpdateWorldTransform(
                      a1,
                      (const struct CVisualTree *)a2,
                      (struct CTreeData *)v11,
                      v14,
                      TreeData);
          v10 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x60Au);
          if ( (v10 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x570u);
            return v10;
          }
        }
        v10 = 0;
        if ( !v11[7].Blink )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
          v10 = -2003292412;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x577u);
          return v10;
        }
        *(struct _LIST_ENTRY *)a4 = *(struct _LIST_ENTRY *)((char *)v11 + 40);
        *(struct _LIST_ENTRY *)(a4 + 16) = *(struct _LIST_ENTRY *)((char *)v11 + 56);
        *(struct _LIST_ENTRY *)(a4 + 32) = *(struct _LIST_ENTRY *)((char *)v11 + 72);
        *(struct _LIST_ENTRY *)(a4 + 48) = *(struct _LIST_ENTRY *)((char *)v11 + 88);
        *(_DWORD *)(a4 + 64) = v11[6].Blink;
        v12 = ((__int64)v11[1].Flink & 2) != 0;
        if ( a6 )
        {
          Flink = v11[7].Flink;
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
        v10 = 0;
      }
      if ( a5 )
        *a5 = v12;
    }
  }
  else
  {
    v22 = CVisual::GetTreeDataListHead(a1);
    v23 = v22;
    if ( v22 )
    {
      while ( 1 )
      {
        v22 = v22->Flink;
        if ( v22 == v23 )
          break;
        v11 = v22 - 14;
        if ( v22[2].Flink == (struct _LIST_ENTRY *)a2 )
          goto LABEL_3;
      }
    }
  }
  return v10;
}
