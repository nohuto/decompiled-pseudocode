/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18004E548
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z @ 0x18011A7B8 (-IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  __int64 v4; // rax
  struct CTreeData *TreeData; // r10
  __int64 v10; // r8
  __int64 v11; // r11
  CVisual *v12; // rcx

  v4 = *((_QWORD *)this + 26);
  TreeData = 0LL;
  *a4 = 0;
  if ( (*(_DWORD *)(v4 + 4) & 0x10000000) == 0
    || (v10 = *(_QWORD *)CVisual::GetTransformParentDataInternal(this), (*(_BYTE *)(v11 + 16) & 4) != 0)
    && *(_QWORD *)(v11 + 216) == *(_QWORD *)(*((_QWORD *)this + 2) + 360LL)
    || (v12 = *(CVisual **)(v10 + 8), *a4 = 1, (TreeData = CVisual::FindTreeData(v12, a2)) == 0LL) )
  {
    if ( this != *((CVisual **)a2 + 3) )
      return CVisual::FindTreeData(*((CVisual **)this + 10), a2);
  }
  return TreeData;
}
