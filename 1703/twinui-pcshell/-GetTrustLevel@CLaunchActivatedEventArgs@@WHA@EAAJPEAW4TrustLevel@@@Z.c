/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WHA@EAAJPEAW4TrustLevel@@@Z @ 0x1801904E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 112), a2);
}
