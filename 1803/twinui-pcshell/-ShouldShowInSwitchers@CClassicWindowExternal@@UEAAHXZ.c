/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ @ 0x1800057A0
 * Callers:
 *     ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A9C0 (-GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180007E70 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CClassicWindowExternal::ShouldShowInSwitchers(CClassicWindowExternal *this)
{
  CClassicWindow *v2; // rcx
  __int64 (*v3)(void); // rax
  char ShouldShowInSwitchers; // al
  BOOL v5; // ebx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (CClassicWindow *)*((_QWORD *)this + 7);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 128LL);
  if ( (char *)v3 == (char *)CClassicWindow::ShouldShowInSwitchers )
    ShouldShowInSwitchers = CClassicWindow::ShouldShowInSwitchers(v2);
  else
    ShouldShowInSwitchers = v3();
  v5 = ShouldShowInSwitchers != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v5;
}
