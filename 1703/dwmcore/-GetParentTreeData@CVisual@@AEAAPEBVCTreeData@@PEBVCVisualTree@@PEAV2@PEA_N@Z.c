/*
 * XREFs of ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1800133B0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  __int64 v4; // rax
  struct CTreeData *TreeData; // r10
  __int64 v9; // rbp
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v12; // r11
  CVisual *v13; // rcx

  v4 = *((_QWORD *)this + 2);
  TreeData = 0LL;
  *a4 = 0;
  v9 = *(_QWORD *)(v4 + 400);
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000000) == 0
    || (TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this), (*(_BYTE *)(v12 + 16) & 4) != 0)
    && *(_QWORD *)(v12 + 216) == v9
    || (v13 = *(CVisual **)(*(_QWORD *)TransformParentDataInternal + 8LL),
        *a4 = 1,
        (TreeData = CVisual::FindTreeData(v13, a2)) == 0LL) )
  {
    if ( this != *((CVisual **)a2 + 3) )
      return CVisual::FindTreeData(*((CVisual **)this + 10), a2);
  }
  return TreeData;
}
