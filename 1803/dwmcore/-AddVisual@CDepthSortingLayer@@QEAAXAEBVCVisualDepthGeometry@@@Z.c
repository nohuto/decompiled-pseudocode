/*
 * XREFs of ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x18021FE20
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$emplace_back@I@?$vector@IV?$allocator@I@std@@@std@@QEAAX$$QEAI@Z @ 0x18021FC04 (--$emplace_back@I@-$vector@IV-$allocator@I@std@@@std@@QEAAX$$QEAI@Z.c)
 */

void __fastcall CDepthSortingLayer::AddVisual(CDepthSortingLayer *this, const struct CVisualDepthGeometry *a2)
{
  float v4; // xmm1_4
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_DWORD *)a2 + 8);
  std::vector<unsigned int>::emplace_back<unsigned int>((const void **)this, &v5);
  v4 = *((float *)this + 7);
  *((float *)this + 6) = fminf(*((float *)this + 6), *((float *)a2 + 6));
  *((float *)this + 7) = fmaxf(v4, *((float *)a2 + 7));
}
