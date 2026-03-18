/*
 * XREFs of ?HasFinalValue@CExpressionForce@@W7EBA_NXZ @ 0x1800DDDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionForce::HasFinalValue(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 8));
}
