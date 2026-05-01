/*
 * XREFs of ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x180007DE0
 * Callers:
 *     _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x180005090 (_lambda_2dd20bac4e5d2f5df658143d4108a795_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::SetApplicationView(CClassicWindow *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((char *)this + 80, a2);
}
