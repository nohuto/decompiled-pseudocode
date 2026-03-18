/*
 * XREFs of ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E78
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160ED8 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::IsDrawListCachingDisabled(CDrawingContext *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)this + 6774) || *((_QWORD *)this + 405) )
    return 1LL;
  return result;
}
