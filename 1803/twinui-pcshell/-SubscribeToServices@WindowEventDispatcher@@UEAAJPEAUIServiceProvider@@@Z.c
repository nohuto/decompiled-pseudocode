/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D8740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FA3E8 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801C7890 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1801E1A24 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  char *v4; // rbx
  int v5; // eax
  CCriticalFailureHandler *v6; // rcx
  int v7; // eax
  CCriticalFailureHandler *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  CCriticalFailureHandler *v11; // rcx
  CCriticalFailureHandler *v12; // rcx
  int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  CCriticalFailureHandler *v16; // rcx
  int v17; // ebx
  int v18; // eax
  CCriticalFailureHandler *v19; // rcx
  int v20; // eax
  CCriticalFailureHandler *v21; // rcx
  __int64 *v22; // rax
  ConnectedStandbyHelper **v23; // rbx
  const char *v24; // r9
  CCriticalFailureHandler *v25; // rcx
  int v26; // ebx
  unsigned __int64 *v27; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v28; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v35; // [rsp+58h] [rbp-40h] BYREF
  std::_Ref_count_base *v36; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v38; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+20h] BYREF

  v34[1] = -2LL;
  try
  {
    v4 = (char *)this + 192;
    SafeRelease<IShellItemArray>((char *)this + 192);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           v4);
    v38 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, (int *)&v38);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v38;
    }
    if ( v5 < 0 && v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        (int *)&v38,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x51u,
        v27,
        v29);
      v5 = v38;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        82LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    SafeRelease<IShellItemArray>((char *)this + 200);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           (char *)this + 200);
    v38 = v7;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v8, (int *)&v38);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v7 = v38;
    }
    if ( v7 < 0 && v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        (int *)&v38,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x58u,
        v27,
        v29);
      v7 = v38;
    }
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        89LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    v9 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            (char *)this + 208);
    v38 = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v38);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v10 = v38;
    }
    if ( v10 < 0 && v10 != -2147024882 && v10 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        (int *)&v38,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x5Fu,
        v27,
        v29);
      v10 = v38;
    }
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        96LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
    v33 = 0LL;
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v33);
    v39 = v13;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_40:
      if ( v13 < 0 )
      {
        if ( v13 != -2147024882 && v13 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v12,
            (int *)&v39,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x65u,
            v27,
            v29);
          v13 = v39;
        }
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x65,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v33);
          return (unsigned int)v13;
        }
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v33 + 32LL))(
              v33,
              ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 128) >> 64),
              (char *)this + 332);
      v30 = v17;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_58:
        if ( v17 < 0 )
        {
          if ( v17 != -2147024882 && v17 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v16,
              &v30,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              0x67u,
              v27,
              v29);
            v17 = v30;
          }
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x67,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v33);
            return (unsigned int)v17;
          }
        }
        v34[0] = 0LL;
        v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                v34);
        v38 = v18;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v38);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v18 = v38;
        }
        if ( v18 < 0 && v18 != -2147024882 && v18 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v19,
            (int *)&v38,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x6Fu,
            v27,
            v29);
          v18 = v38;
        }
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            112LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v18);
        v28 = (unsigned __int64 *)((char *)this + 328);
        v20 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v34[0] + 24LL))(
                v34[0],
                &unk_1803A9960,
                11LL,
                ((unsigned __int64)this - 48) & -(__int64)(this != (WindowEventDispatcher *)128));
        v38 = v20;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v38);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v20 = v38;
        }
        if ( v20 < 0 && v20 != -2147024882 && v20 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v21,
            (int *)&v38,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x88u,
            v28,
            v29);
          v20 = v38;
        }
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            137LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v20);
        try
        {
          v22 = std::make_shared<ConnectedStandbyHelper,>(&v35);
          v23 = (ConnectedStandbyHelper **)((char *)this + 216);
          std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 27, v22);
          if ( v36 )
            std::_Ref_count_base::_Decref(v36);
        }
        catch ( ... )
        {
          v32 = wil::details::in1diag3::Return_CaughtException(
                  retaddr,
                  (void *)0x8F,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  v24);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v34);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v33);
          return v32;
        }
        v26 = ConnectedStandbyHelper::Initialize(
                *v23,
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (WindowEventDispatcher *)128)));
        v31 = v26;
        if ( CRVPrivate::cfhImmersiveShellStartup )
          goto LABEL_94;
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v38) >= 0 )
        {
          switch ( v38 )
          {
            case 2u:
              v26 = -2023406815;
              goto LABEL_92;
            case 3u:
              v26 = -2023406814;
              goto LABEL_92;
            case 4u:
              v26 = -2147418094;
              goto LABEL_92;
            case 5u:
              v26 = -2147022986;
LABEL_92:
              v31 = v26;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_94:
        if ( v26 >= 0 )
          goto LABEL_100;
        if ( v26 != -2147024882 && v26 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v25,
            (int *)&v31,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x90u,
            v28,
            v29);
          v26 = v31;
        }
        if ( v26 >= 0 )
        {
LABEL_100:
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v34);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v33);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x90,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v26);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v34);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v33);
          return (unsigned int)v26;
        }
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v39) >= 0 )
      {
        switch ( v39 )
        {
          case 2u:
            v17 = -2023406815;
            goto LABEL_56;
          case 3u:
            v17 = -2023406814;
            goto LABEL_56;
          case 4u:
            v17 = -2147418094;
            goto LABEL_56;
          case 5u:
            v17 = -2147022986;
LABEL_56:
            v30 = v17;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_58;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v31) >= 0 )
    {
      switch ( v31 )
      {
        case 2u:
          v13 = -2023406815;
          goto LABEL_38;
        case 3u:
          v13 = -2023406814;
          goto LABEL_38;
        case 4u:
          v13 = -2147418094;
          goto LABEL_38;
        case 5u:
          v13 = -2147022986;
LABEL_38:
          v39 = v13;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_40;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v14);
  }
  return result;
}
