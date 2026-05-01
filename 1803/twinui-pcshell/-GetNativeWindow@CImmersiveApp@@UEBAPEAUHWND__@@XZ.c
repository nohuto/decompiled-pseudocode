/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x180049600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax
  CTaskWindow *v2; // rcx
  __int64 (*v3)(void); // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 424) & 1) != 0 && *((_QWORD *)this + 39) )
  {
    v2 = (CTaskWindow *)**((_QWORD **)this + 38);
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 32LL);
    if ( (char *)v3 == (char *)CTaskWindow::GetNativeWindow )
      return (HWND)CTaskWindow::GetNativeWindow(v2);
    else
      return (HWND)v3();
  }
  return result;
}
