/*
 * XREFs of ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800C05C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::GetTrustLevel(__int64 a1, int *a2)
{
  return CWinRTApplicationView::IsTray((CWinRTApplicationView *)(a1 - 16), a2);
}
