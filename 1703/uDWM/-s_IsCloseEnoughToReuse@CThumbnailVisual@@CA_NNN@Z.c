/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18007FF28
 * Callers:
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007FBA4 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18007FF58 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(double a1, double a2)
{
  return a2 > 0.0 && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1 - a2) & _xmm) / a2 < 0.1;
}
