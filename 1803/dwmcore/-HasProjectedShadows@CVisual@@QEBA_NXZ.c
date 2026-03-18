/*
 * XREFs of ?HasProjectedShadows@CVisual@@QEBA_NXZ @ 0x18013CA1C
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ @ 0x18013C60C (-GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ.c)
 */

char __fastcall CVisual::HasProjectedShadows(CVisual *this)
{
  struct CProjectedShadowReceiver *ProjectedShadowReceiver; // rax
  char v2; // cl

  ProjectedShadowReceiver = CVisual::GetProjectedShadowReceiver(this);
  v2 = 0;
  if ( ProjectedShadowReceiver )
    return (int)((__int64)(*((_QWORD *)ProjectedShadowReceiver + 9) - *((_QWORD *)ProjectedShadowReceiver + 8)) >> 3) > 0;
  return v2;
}
