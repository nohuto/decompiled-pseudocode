/*
 * XREFs of ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x18012F620
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800484F8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnBackButtonUpdated(CImmersiveApp *this)
{
  CImmersiveApp *v1; // rbx

  v1 = (CImmersiveApp *)((char *)this - 112);
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
  CImmersiveApp::_QueuePresentationChangeNotification(v1, 1);
}
