/*
 * XREFs of ?GetAppUserModelId@CClassicWindowExternal@@UEAAJPEAPEAG@Z @ 0x180005860
 * Callers:
 *     ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x18002AA30 (-IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z.c)
 *     ?GetAppUserModelId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002AB30 (-GetAppUserModelId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180007FF0 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::GetAppUserModelId(CClassicWindowExternal *this, unsigned __int16 **a2)
{
  CClassicWindow *v4; // rcx
  __int64 (__fastcall *v5)(CClassicWindow *__hidden, unsigned __int16 **); // rax
  unsigned int ApplicationId; // eax
  unsigned int v7; // ebx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (CClassicWindow *)*((_QWORD *)this + 7);
  v5 = *(__int64 (__fastcall **)(CClassicWindow *__hidden, unsigned __int16 **))(*(_QWORD *)v4 + 56LL);
  if ( v5 == CClassicWindow::GetApplicationId )
    ApplicationId = CClassicWindow::GetApplicationId(v4, a2);
  else
    ApplicationId = v5(v4, a2);
  v7 = ApplicationId;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v7;
}
