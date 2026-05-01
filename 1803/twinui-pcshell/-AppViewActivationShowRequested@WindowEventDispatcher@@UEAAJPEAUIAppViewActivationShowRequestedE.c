/*
 * XREFs of ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180005638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D6750 (-IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1801D9264 (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::AppViewActivationShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  void *v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v17; // [rsp+40h] [rbp-68h] BYREF
  void *v18; // [rsp+48h] [rbp-60h] BYREF
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-50h] BYREF
  void **v21; // [rsp+68h] [rbp-40h] BYREF
  __int64 v22[7]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v24; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+18h] BYREF
  void **v26; // [rsp+C8h] [rbp+20h] BYREF

  v20[1] = -2LL;
  try
  {
    v26 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *))a2)(
           a2,
           &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
           (__int64 *)&v26);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        615LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    v17 = 0LL;
    v5 = (*((__int64 (__fastcall **)(void **, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))*v26
          + 6))(
           v26,
           &v17);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        618LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    if ( !IsComponentAppView(v17) )
    {
      v19 = 0LL;
      v6 = (*((__int64 (__fastcall **)(void **, __int64 *))*v26 + 10))(v26, &v19);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          623LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v6);
      v7 = (__int64)v26;
      v21 = v26;
      if ( v26 )
        (*((void (__fastcall **)(void **))*v26 + 1))(v26);
      v8 = v19;
      v22[0] = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v9 = 0LL;
      v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v10;
      if ( v10 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v10);
        v21 = 0LL;
        v11[2] = v7;
        v22[0] = 0LL;
        v11[3] = v8;
        *v11 = off_180333980;
        v9 = v11;
      }
      v18 = v9;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v22);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v21);
      v21 = &v18;
      LOBYTE(v22[0]) = 1;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v17 + 48LL))(
              v17,
              &v25);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          641LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
              a2,
              &v24);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          644LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v13);
      v14 = (*((__int64 (__fastcall **)(void **, _QWORD *))*v26 + 7))(v26, v20);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          648LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      WindowEventDispatcher::TryShowAsStandaloneAsync((char *)this - 16, v25, v25);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v18);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v19);
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x297,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v15);
  }
  return result;
}
