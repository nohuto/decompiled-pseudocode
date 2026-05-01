/*
 * XREFs of ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x1801318D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Unensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 444) = 0;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
