/*
 * XREFs of ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D6B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventR.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1801D76E8 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::OverrideNavigationLevelForView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  unsigned __int8 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rbx
  const WCHAR *v8; // r15
  const WCHAR *v9; // rax
  __int64 *EventRegistration; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  const char *v14; // r9
  int v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-38h]
  __int64 *v18; // [rsp+38h] [rbp-30h]
  char v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v16 = -2LL;
  try
  {
    v21 = 0LL;
    (**a2)(a2, &GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9, &v21);
    v6 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 256LL);
    if ( a3 == 2 )
    {
      if ( v6(v21, 1LL) )
      {
        v18 = &v21;
        v19 = 1;
        *(_QWORD *)v15 = 0LL;
        AcquireSRWLockShared(a1 + 53);
        v17 = a1 + 53;
        v7 = v21;
        v8 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 232LL))(v21);
        v9 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7);
        EventRegistration = WindowEventDispatcher::GetEventRegistration((__int64)&a1[-5], &v22, v9, v8);
        v11 = *EventRegistration;
        *EventRegistration = 0LL;
        *(_QWORD *)v15 = v11;
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v22);
        if ( !v11 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1381LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070490LL);
        if ( a1 != (RTL_SRWLOCK *)-424LL )
          ReleaseSRWLockShared(a1 + 53);
        v12 = *(_QWORD *)(v11 + 32);
        v22 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        WindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v22, *(_QWORD *)v15);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)v15);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 256LL))(v21, 2LL);
      }
    }
    else
    {
      v6(v21, 0LL);
    }
    result = wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v21);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x576,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
             v14);
  }
  return result;
}
