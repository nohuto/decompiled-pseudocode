/*
 * XREFs of ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18012E160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005DC44 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z @ 0x1800F1CB0 (-_ValidateApplicationState@CImmersiveApp@@AEBAJW4ValidateApplicationStateOption@1@@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetDestinationInformationInternal(CImmersiveApp *this, HWND *a2, struct tagRECT *a3)
{
  int v6; // edi

  SetRectEmpty(a3);
  *a2 = 0LL;
  v6 = CImmersiveApp::_ValidateApplicationState((__int64)this - 112, 1);
  if ( v6 >= 0 )
  {
    *a2 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152));
    CopyRect(a3, (const RECT *)((char *)this + 168));
  }
  return (unsigned int)v6;
}
