/*
 * XREFs of ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800351F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x18002C9B0 (-CanChangeForeground@@YAJXZ.c)
 */

__int64 __fastcall CClassicWindow::GetWindowForActivation(CClassicWindow *this, HWND *a2, int *a3)
{
  int v3; // ebx
  HWND v7; // rdx
  int v8; // ebp
  HWND v9; // rdi
  PSRWLOCK v10; // r8
  int pvAttribute; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v8 = CanChangeForeground();
  if ( v8 >= 0 )
  {
    v9 = (HWND)*((_QWORD *)this + 2);
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    *a2 = v9;
    if ( v9 == v10[10].Ptr
      || CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)v9, v7) && IsWindowVisible(v9) )
    {
      *a3 = 1;
      if ( DwmGetWindowAttribute(*a2, 0xEu, &pvAttribute, 4u) >= 0 )
      {
        LOBYTE(v3) = (pvAttribute & 0xFFFFFFFD) == 0;
        *a3 = v3;
      }
    }
  }
  return (unsigned int)v8;
}
