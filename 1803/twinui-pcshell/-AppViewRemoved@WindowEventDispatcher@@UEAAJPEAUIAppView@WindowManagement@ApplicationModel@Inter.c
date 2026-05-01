/*
 * XREFs of ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3DE0
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1801D6D30 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventR.c)
 *     ?IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D6750 (-IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1801D76E8 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D82E8 (-RemoveCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_except.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::AppViewRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2)
{
  const char *v4; // r9
  int v5; // eax
  RTL_SRWLOCK *v6; // rsi
  RTL_SRWLOCK *v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *EventRegistration; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v19[1] = -2LL;
  try
  {
    if ( !IsComponentAppView(a2) )
    {
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
             a2,
             &v21);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          465LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v5);
      v19[0] = 0LL;
      v6 = this + 56;
      AcquireSRWLockExclusive(this + 56);
      v18 = this + 56;
      v7 = this - 2;
      v8 = (__int64 *)WindowEventDispatcher::RemoveCachedView(&this[-2], &v22, v21);
      v9 = *v8;
      *v8 = 0LL;
      v19[0] = v9;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v22);
      if ( this != (RTL_SRWLOCK *)-448LL )
        ReleaseSRWLockExclusive(this + 56);
      if ( v9 )
      {
        v18 = 0LL;
        AcquireSRWLockShared(this + 56);
        v19[2] = (__int64)&this[56];
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 232LL))(v9);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 224LL))(v9);
        EventRegistration = (__int64 *)WindowEventDispatcher::GetEventRegistration(v7, &v17, v11, v10);
        v13 = *EventRegistration;
        *EventRegistration = 0LL;
        v18 = (RTL_SRWLOCK *)v13;
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v17);
        if ( !v13 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            485LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070490LL);
        if ( v6 )
          ReleaseSRWLockShared(v6);
        v22 = 0LL;
        v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
                v9,
                &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
                &v22);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            5691LL,
            (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
            (const char *)(unsigned int)v14);
        v15 = *(_QWORD *)(v13 + 32);
        v17 = v15;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        ((void (__fastcall *)(RTL_SRWLOCK *, __int64, __int64, __int64 *))WindowEventDispatcher::RaiseViewEvent)(
          v7,
          v22,
          4LL,
          &v17);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v22);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v18);
      }
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v19);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
