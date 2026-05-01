/*
 * XREFs of ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x1800551D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::OnPresentedWindowChanged(CImmersiveApp *this, struct ITaskWindow *a2)
{
  CImmersiveApp::_QueuePresentationChangeNotification((char *)this - 112, 0LL);
}
