/*
 * XREFs of ?GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18004C370
 * Callers:
 *     ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18001BA50 (-GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 * Callees:
 *     ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18004BD00 (-GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA-AW4FRAMEWORK_VIEW_TYPE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetFrameworkViewType(CImmersiveApp *this, enum FRAMEWORK_VIEW_TYPE *a2)
{
  __int64 (*v4)(void); // rax
  int FrameworkViewTypeInternal; // eax
  RTL_SRWLOCK *v6; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this + 1) + 616LL);
  if ( (char *)v4 == (char *)CImmersiveApp::GetFrameworkViewTypeInternal )
    FrameworkViewTypeInternal = CImmersiveApp::GetFrameworkViewTypeInternal((CImmersiveApp *)((char *)this + 8));
  else
    FrameworkViewTypeInternal = v4();
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_DWORD *)a2 = FrameworkViewTypeInternal;
  ReleaseSRWLockShared(v6);
  return 0LL;
}
