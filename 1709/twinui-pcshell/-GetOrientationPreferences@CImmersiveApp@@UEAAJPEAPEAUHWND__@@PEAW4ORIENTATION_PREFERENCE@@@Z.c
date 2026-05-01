/*
 * XREFs of ?GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1800551E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetOrientationPreferences(
        enum ORIENTATION_PREFERENCE *this,
        HWND *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HWND ApplicationWindow; // r9
  __int64 result; // rax

  *a3 = ORIENTATION_PREFERENCE_NONE;
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(this + 38));
  if ( !ApplicationWindow )
    *a3 = this[152];
  result = 0LL;
  *a2 = ApplicationWindow;
  return result;
}
