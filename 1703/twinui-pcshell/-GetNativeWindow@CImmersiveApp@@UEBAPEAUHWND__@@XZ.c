/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x180055E00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 408) & 1) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 136));
  return result;
}
