/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x180190960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 128), a2);
}
