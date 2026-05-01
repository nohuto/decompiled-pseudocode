/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1801D5858 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D6750 (-IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v18; // [rsp+88h] [rbp+20h] BYREF

  v14[1] = -2LL;
  try
  {
    v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v17);
    v5 = 0;
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        669LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    v13 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
           &v13);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        672LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v13 + 48LL))(
           v13,
           &v18);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        675LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    if ( !IsComponentAppView(v18) )
    {
      v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v18 + 48LL))(
             v18,
             &v16);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          680LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v14[0] = 0LL;
      AcquireSRWLockShared(this + 56);
      v14[2] = (__int64)&this[56];
      WindowEventDispatcher::GetCachedView(&this[-2], v12, v16);
      v9 = *(_QWORD *)v12;
      *(_QWORD *)v12 = 0LL;
      v14[0] = v9;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)v12);
      if ( !v9 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          686LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070490LL);
      if ( this != (RTL_SRWLOCK *)-448LL )
        ReleaseSRWLockShared(this + 56);
      LOBYTE(v5) = v17 == 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 264LL))(v9, 1LL, v5);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v14);
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v18);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B7,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v10);
  }
  return result;
}
