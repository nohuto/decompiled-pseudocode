/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180190620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 24), a2);
}
