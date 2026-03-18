/*
 * XREFs of ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801B3DBC
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180094380 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x1801B3F98 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x1801B407C (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CPreComputeHelper::InvalidateVisual(
        CPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        struct _LIST_ENTRY *a4)
{
  struct _LIST_ENTRY *TreeData; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 26) + 4LL) & 0x10000000) != 0 )
  {
    TreeData = CVisual::FindTreeData(a2, a3);
    if ( TreeData )
    {
      LOBYTE(TreeData[1].Flink) |= 4u;
      TreeData[7].Blink = 0LL;
      TreeData[13].Blink = a4;
    }
  }
}
