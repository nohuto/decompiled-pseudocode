/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x18004C5B0
 * Callers:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x180018490 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 * Callees:
 *     ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180047AE0 (-GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ.c)
 */

char __fastcall CImmersiveApp::GetShouldShowTitleBarBackButton(CImmersiveApp *this)
{
  char result; // al
  CTaskWindow *v2; // rcx
  __int64 (*v3)(void); // rax

  result = 0;
  if ( *((_QWORD *)this + 39) )
  {
    v2 = (CTaskWindow *)**((_QWORD **)this + 38);
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 104LL);
    if ( (char *)v3 == (char *)CTaskWindow::GetShouldShowTitleBarBackButton )
      return CTaskWindow::GetShouldShowTitleBarBackButton(v2);
    else
      return v3();
  }
  return result;
}
