/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WHI@EAAJPEAW4TrustLevel@@@Z @ 0x180190730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 120), a2);
}
