/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180027E70
 * Callers:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800506D0 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char result; // al

  result = 0;
  if ( !*((_QWORD *)this + 66)
    || *((float *)this + 25) <= *((float *)this + 23)
    || *((float *)this + 26) <= *((float *)this + 24) )
  {
    return 1;
  }
  return result;
}
