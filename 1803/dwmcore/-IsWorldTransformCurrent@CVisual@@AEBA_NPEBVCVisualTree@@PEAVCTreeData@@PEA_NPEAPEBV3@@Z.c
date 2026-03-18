/*
 * XREFs of ?IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z @ 0x18013C7C8
 * Callers:
 *     ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18013CD30 (-IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000B53C (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 */

bool __fastcall CVisual::IsWorldTransformCurrent(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4,
        const struct CTreeData **a5)
{
  const struct CTreeData *ParentTreeData; // rax
  unsigned __int64 v7; // rax

  ParentTreeData = CVisual::GetParentTreeData(this, a2, a3, a4);
  *a5 = ParentTreeData;
  if ( ParentTreeData )
    v7 = *((_QWORD *)ParentTreeData + 15);
  else
    v7 = 1LL;
  return *((_QWORD *)a3 + 15) >= v7;
}
