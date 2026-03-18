/*
 * XREFs of ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18004A830
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x18004A608 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18004ADA0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CLegacyMilBrushRealizer::GetRealizedBrushNoRef(CLegacyMilBrushRealizer *this, char a2)
{
  struct CMILBrush *result; // rax

  result = (struct CMILBrush *)*((_QWORD *)this + 11);
  if ( a2 )
  {
    if ( !result )
      return (struct CMILBrush *)(((unsigned __int64)this + 40) & -(__int64)((CLegacyMilBrushRealizer *)((char *)this + 16) != 0LL));
  }
  return result;
}
