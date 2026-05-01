/*
 * XREFs of ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x180052F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::OnPresentedWindowChanged(CImmersiveApp *this, struct ITaskWindow *a2)
{
  CImmersiveApp::_QueuePresentationChangeNotification((char *)this - 88, 0LL);
}
