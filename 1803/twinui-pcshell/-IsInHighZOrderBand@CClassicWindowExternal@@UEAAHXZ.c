/*
 * XREFs of ?IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ @ 0x180005800
 * Callers:
 *     ?IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A690 (-IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?IsInHighZOrderBand@CClassicWindow@@UEBA_NXZ @ 0x180007E00 (-IsInHighZOrderBand@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CClassicWindowExternal::IsInHighZOrderBand(CClassicWindowExternal *this)
{
  CClassicWindow *v2; // rcx
  __int64 (*v3)(void); // rax
  char v4; // al
  BOOL v5; // ebx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (CClassicWindow *)*((_QWORD *)this + 7);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 176LL);
  if ( (char *)v3 == (char *)CClassicWindow::IsInHighZOrderBand )
    v4 = CClassicWindow::IsInHighZOrderBand(v2);
  else
    v4 = v3();
  v5 = v4 != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v5;
}
