/*
 * XREFs of ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18004C0B0
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::OnPresentedWindowChanged(CImmersiveApp *this, struct ITaskWindow *a2)
{
  CImmersiveApp::_QueuePresentationChangeNotification((CImmersiveApp *)((char *)this - 112), 0);
}
