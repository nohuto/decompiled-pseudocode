/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4080
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
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801D95BC (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  void *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  __int64 v24; // [rsp+50h] [rbp-78h] BYREF
  void *v25; // [rsp+58h] [rbp-70h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v26; // [rsp+60h] [rbp-68h] BYREF
  int v27; // [rsp+68h] [rbp-60h] BYREF
  __int64 v28; // [rsp+70h] [rbp-58h] BYREF
  __int64 v29[3]; // [rsp+78h] [rbp-50h] BYREF
  char v30; // [rsp+90h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  int v32; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+20h] BYREF

  v29[1] = -2LL;
  try
  {
    v22 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, GUID *, __int64 *))a2)(
           a2,
           &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
           &v22);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        700LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    v26 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v22 + 48LL))(
           v22,
           &v26);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        703LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    if ( !IsComponentAppView(v26) )
    {
      v29[0] = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 80LL))(v22, v29);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          708LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v6);
      v7 = v22;
      v23 = v22;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      v8 = v29[0];
      v24 = v29[0];
      if ( v29[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29[0] + 8LL))(v29[0]);
      v9 = 0LL;
      v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v10;
      if ( v10 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v10);
        v23 = 0LL;
        v11[2] = v7;
        v24 = 0LL;
        v11[3] = v8;
        *v11 = off_180333958;
        v9 = v11;
      }
      v25 = v9;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v24);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v23);
      v29[2] = (__int64)&v25;
      v30 = 1;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v26 + 48LL))(
              v26,
              &v34);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          726LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      v28 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
              a2,
              &v28);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          729LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v13);
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 48LL))(v28, &v33);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          731LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v14);
      v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
              a2,
              &v32);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          734LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v15);
      v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
              a2,
              &v27);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          738LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v16);
      v17 = *(_QWORD *)a2;
      if ( v27 == 2 )
      {
        v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))(v17 + 56))(
                a2,
                &v23);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            743LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v18);
        WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v34, v33);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))(v17 + 72))(
                a2,
                &v23);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            756LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v19);
        WindowEventDispatcher::TryShowAsStandaloneAsync((char *)this - 16, v34, v33);
      }
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v28);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v25);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v29);
    }
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x305,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v20);
  }
  return result;
}
