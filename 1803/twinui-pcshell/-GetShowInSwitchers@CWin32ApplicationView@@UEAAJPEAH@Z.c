/*
 * XREFs of ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ @ 0x1800057A0 (-ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18002A2B4 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetShowInSwitchers(CWin32ApplicationView *this, int *a2)
{
  CClassicWindowExternal *v4; // rcx
  __int64 (*v5)(void); // rax
  int ShouldShowInSwitchers; // eax
  BOOL v7; // ebx
  HWND v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (CClassicWindowExternal *)*((_QWORD *)this + 26);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 72LL);
  if ( (char *)v5 == (char *)CClassicWindowExternal::ShouldShowInSwitchers )
    ShouldShowInSwitchers = CClassicWindowExternal::ShouldShowInSwitchers(v4);
  else
    ShouldShowInSwitchers = v5();
  v7 = 0;
  if ( ShouldShowInSwitchers )
    v7 = (int)CWin32ApplicationView::GetSwitchWindow(this, &v9) >= 0;
  *a2 = v7;
  return 0LL;
}
