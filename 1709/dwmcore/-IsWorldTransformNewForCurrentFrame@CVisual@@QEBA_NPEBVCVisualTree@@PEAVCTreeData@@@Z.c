/*
 * XREFs of ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18011A9D4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z @ 0x18011A7B8 (-IsWorldTransformCurrent@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@PEA_NPEAPEBV3@@Z.c)
 */

char __fastcall CVisual::IsWorldTransformNewForCurrentFrame(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3)
{
  bool IsWorldTransformCurrent; // al
  char v4; // cl
  bool v6; // [rsp+40h] [rbp+8h] BYREF
  struct CTreeData *v7; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_QWORD *)a3 + 15) == *(_QWORD *)(*((_QWORD *)this + 2) + 360LL) )
    return 1;
  IsWorldTransformCurrent = CVisual::IsWorldTransformCurrent(this, a2, a3, &v6, &v7);
  v4 = 0;
  if ( !IsWorldTransformCurrent )
    return 1;
  return v4;
}
