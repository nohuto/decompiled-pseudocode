/*
 * XREFs of ?GetDestinationInformationInternal@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800580E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18005A958 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetDestinationInformationInternal(CImmersiveApp *this, HWND *a2, struct tagRECT *a3)
{
  unsigned int v6; // ebx

  SetRectEmpty(a3);
  v6 = 0;
  *a2 = 0LL;
  if ( *((_BYTE *)this + 576) || (*((_BYTE *)this + 424) & 1) == 0 )
  {
    return (unsigned int)-2147019873;
  }
  else
  {
    *a2 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 152));
    CopyRect(a3, (const RECT *)((char *)this + 168));
  }
  return v6;
}
