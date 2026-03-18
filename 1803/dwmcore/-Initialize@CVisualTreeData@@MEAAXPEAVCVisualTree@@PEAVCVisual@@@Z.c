/*
 * XREFs of ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180029510
 * Callers:
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualTreeData::Initialize(CVisualTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  *((_QWORD *)this + 32) = a2;
  CTreeData::Initialize(this, 0LL, a3);
}
