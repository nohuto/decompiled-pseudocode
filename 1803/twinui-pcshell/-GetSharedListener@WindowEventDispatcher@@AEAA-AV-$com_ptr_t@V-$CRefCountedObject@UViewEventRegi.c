/*
 * XREFs of ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@3@0@Z @ 0x1801D5E18
 * Callers:
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801D8F2C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1801D9264 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801D95BC (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventR.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall WindowEventDispatcher::GetSharedListener(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rdi
  const WCHAR *v9; // rbx
  const WCHAR *v10; // rax
  __int64 v11; // rdi
  const WCHAR *v12; // rbx
  const WCHAR *v13; // rax
  struct IUnknown *v15[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15[1] = (struct IUnknown *)-2LL;
  v8 = *a3;
  v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 232LL))(*a3);
  v10 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 224LL))(v8);
  WindowEventDispatcher::GetEventRegistration(a1, a2, v10, v9);
  v11 = *a4;
  v12 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a4 + 232LL))(*a4);
  v13 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
  WindowEventDispatcher::GetEventRegistration(a1, (__int64 *)v15, v13, v12);
  if ( !*a2 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2034LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  if ( !v15[0] )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2035LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)*a2, v15[0]) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2036LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070057LL);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)v15);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(a3);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(a4);
  return a2;
}
