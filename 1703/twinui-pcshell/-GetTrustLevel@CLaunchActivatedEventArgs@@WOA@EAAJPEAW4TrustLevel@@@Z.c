/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WOA@EAAJPEAW4TrustLevel@@@Z @ 0x180190130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 224), a2);
}
