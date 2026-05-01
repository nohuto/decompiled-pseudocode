/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x1800582D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 424) & 1) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152));
  return result;
}
