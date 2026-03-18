/*
 * XREFs of ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1801B3D58
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180094380 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800946B0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800C1A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 */

void __fastcall CPreComputeHelper::ClearResolvingFlagsFromStack(CPreComputeHelper *this, const struct CVisualTree *a2)
{
  int *v2; // rdi
  CVisual *v4; // rbx
  struct _LIST_ENTRY *TreeData; // rax
  CVisual *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (int *)((char *)this + 8);
  while ( CWatermarkStack<CVisual *,64,2,10>::Pop(v2, &v6) )
  {
    v4 = v6;
    TreeData = CVisual::FindTreeData(v6, a2);
    if ( (*(_DWORD *)(*((_QWORD *)v4 + 26) + 4LL) & 0x10000000) != 0 )
      LOBYTE(TreeData[1].Flink) &= ~8u;
  }
}
