/*
 * XREFs of ?HasContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D950
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     <none>
 */

char __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 31) || (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
    return 1;
  return v1;
}
