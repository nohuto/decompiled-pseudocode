/*
 * XREFs of ?HasContent@CVisual@@UEAA_NXZ @ 0x18004A7E0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 31) != 0LL;
}
