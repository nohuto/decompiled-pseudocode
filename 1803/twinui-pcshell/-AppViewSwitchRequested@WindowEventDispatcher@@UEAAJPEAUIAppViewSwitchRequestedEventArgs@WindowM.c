/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4510
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
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801D8F2C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  void *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  char v11; // bl
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  __int64 result; // rax
  void **v19; // [rsp+30h] [rbp-68h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v20; // [rsp+38h] [rbp-60h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v21; // [rsp+40h] [rbp-58h] BYREF
  void *v22; // [rsp+48h] [rbp-50h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-48h] BYREF
  void **v24; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25[6]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v27; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+20h] BYREF

  v23[1] = -2LL;
  try
  {
    v19 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 *))a2)(
           a2,
           &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
           (__int64 *)&v19);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        778LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    v23[0] = 0LL;
    v5 = (*((__int64 (__fastcall **)(void **, __int64 *))*v19 + 10))(v19, v23);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        781LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    v6 = (__int64)v19;
    v24 = v19;
    if ( v19 )
      (*((void (__fastcall **)(void **))*v19 + 1))(v19);
    v7 = v23[0];
    v25[0] = v23[0];
    if ( v23[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
    v8 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v9);
      v24 = 0LL;
      v10[2] = v6;
      v25[0] = 0LL;
      v10[3] = v7;
      *v10 = off_1803339D0;
      v8 = v10;
    }
    v22 = v8;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v25);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v24);
    v24 = &v22;
    v11 = 1;
    LOBYTE(v25[0]) = 1;
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)a2 + 48LL))(
            a2,
            &v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        799LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12);
    v20 = 0LL;
    v13 = (*((__int64 (__fastcall **)(void **, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))*v19
           + 6))(
            v19,
            &v20);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        802LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    if ( !IsComponentAppView(v21) && !IsComponentAppView(v20) )
      v11 = 0;
    if ( v11 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        804LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8000FFFFLL);
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v21 + 48LL))(
            v21,
            &v29);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        807LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v20 + 48LL))(
            v20,
            &v28);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        810LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v27);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        813LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    WindowEventDispatcher::SwitchAsync((char *)this - 16, v29, v28, v27, v22);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v20);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v22);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v23);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x339,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v17);
  }
  return result;
}
