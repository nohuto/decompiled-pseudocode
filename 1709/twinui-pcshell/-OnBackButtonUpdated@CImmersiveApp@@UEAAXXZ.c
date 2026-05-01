/*
 * XREFs of ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x1800544C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800593AC (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnBackButtonUpdated(CImmersiveApp *this)
{
  char *v1; // rbx

  v1 = (char *)this - 112;
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
  CImmersiveApp::_QueuePresentationChangeNotification(v1, 1LL);
}
