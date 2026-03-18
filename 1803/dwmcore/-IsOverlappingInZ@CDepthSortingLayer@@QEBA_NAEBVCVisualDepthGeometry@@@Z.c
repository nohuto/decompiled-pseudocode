/*
 * XREFs of ?IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z @ 0x18021FE6C
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDepthSortingLayer::IsOverlappingInZ(CDepthSortingLayer *this, const struct CVisualDepthGeometry *a2)
{
  return *((float *)this + 7) >= *((float *)a2 + 6) && *((float *)a2 + 7) >= *((float *)this + 6);
}
