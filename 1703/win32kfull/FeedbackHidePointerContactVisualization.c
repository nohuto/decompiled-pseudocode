/*
 * XREFs of FeedbackHidePointerContactVisualization @ 0x1C01B7320
 * Callers:
 *     NtUserHidePointerContactVisualization @ 0x1C01DB580 (NtUserHidePointerContactVisualization.c)
 * Callees:
 *     <none>
 */

int __fastcall FeedbackHidePointerContactVisualization(PointerList *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::SetPointerVisualization(gpTouchProcessor, (unsigned __int16)a1, 0, 0LL, 1);
  else
    return PointerList::SetPointerVisualization(a1, 0, 0, (int *)1, a5);
}
