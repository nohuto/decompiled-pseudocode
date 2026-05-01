/*
 * XREFs of ?get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800508A0
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10 (-v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA-AW4NavigationLevel@ViewManagerInterop@Shell@In.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_NavigationLevel(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a2)
{
  RTL_SRWLOCK *v4; // rdi
  char *v5; // rcx
  __int64 (__fastcall *v6)(char *); // rax
  int DesiredNavigationLevel; // eax

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = (char *)this - 8;
  v6 = *(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 120LL);
  if ( (char *)v6 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
    DesiredNavigationLevel = UAPViewWrapper::v_GetDesiredNavigationLevel(v5);
  else
    DesiredNavigationLevel = v6(v5);
  *(_DWORD *)a2 = DesiredNavigationLevel;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
