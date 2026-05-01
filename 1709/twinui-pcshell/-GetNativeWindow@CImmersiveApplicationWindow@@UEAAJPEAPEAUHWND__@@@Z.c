/*
 * XREFs of ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x1800674F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveApplicationWindow::GetNativeWindow(CImmersiveApplicationWindow *this, HWND *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a2 = 0LL;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)this + 2), (HWND)a2) )
    *a2 = (HWND)*((_QWORD *)this + 2);
  else
    return (unsigned int)-2147023496;
  return v3;
}
