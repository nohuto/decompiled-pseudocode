/*
 * XREFs of FeedbackHidePointerContactVisualization @ 0x1C01BC694
 * Callers:
 *     NtUserHidePointerContactVisualization @ 0x1C01E77D0 (NtUserHidePointerContactVisualization.c)
 * Callees:
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01F63FC (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

int __fastcall FeedbackHidePointerContactVisualization(PointerList *a1)
{
  int v2; // [rsp+20h] [rbp-18h]

  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::SetPointerVisualization(gpTouchProcessor, (unsigned __int16)a1, 0, 0LL, 1);
  else
    return PointerList::SetPointerVisualization(a1, 0, 0, (int *)1, v2);
}
