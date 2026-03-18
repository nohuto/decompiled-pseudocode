/*
 * XREFs of ?IsDrawListCachingDisabled@CDrawingContext@@QEBA_NXZ @ 0x18011AD50
 * Callers:
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177CF4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_N.c)
 * Callees:
 *     <none>
 */

char __fastcall CDrawingContext::IsDrawListCachingDisabled(CDrawingContext *this)
{
  char result; // al

  result = 0;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)this + 6830) || *((_QWORD *)this + 417) )
    return 1;
  return result;
}
