/*
 * XREFs of ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x180052140
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180056D58 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnBackButtonUpdated(CImmersiveApp *this)
{
  char *v1; // rbx

  v1 = (char *)this - 88;
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 88));
  CImmersiveApp::_QueuePresentationChangeNotification(v1, 1LL);
}
