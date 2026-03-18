/*
 * XREFs of ?Initialize@CVisualOcclusionInfo@@MEAAXXZ @ 0x180029330
 * Callers:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180029D40 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualOcclusionInfo::Initialize(CVisualOcclusionInfo *this)
{
  *((_BYTE *)this + 8) &= 0xF0u;
  *((_DWORD *)this + 4) = 0x80000000;
  *((_DWORD *)this + 3) = 0x80000000;
}
