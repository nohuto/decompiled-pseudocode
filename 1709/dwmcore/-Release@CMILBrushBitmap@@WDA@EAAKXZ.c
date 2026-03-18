/*
 * XREFs of ?Release@CMILBrushBitmap@@WDA@EAAKXZ @ 0x1800C6FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::Release(__int64 a1)
{
  return CSwRenderTargetGetBounds::Release((CSwRenderTargetGetBounds *)(a1 - 48));
}
