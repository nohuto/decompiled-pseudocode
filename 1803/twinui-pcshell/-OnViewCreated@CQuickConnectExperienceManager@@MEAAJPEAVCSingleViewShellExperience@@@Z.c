/*
 * XREFs of ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006FCB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78A0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??$?0U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAA@PEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@Z @ 0x1800F89F0 (--$-0U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEA.c)
 *     ??$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801793A4 (--$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConne.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017A154 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A154.c)
 *     ??1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ @ 0x18017A584 (--1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B5B0 (-ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_On.c)
 *     ?StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x18017DB34 (-StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017DFFC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQuickConnectExperienceManager::OnViewCreated(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  IUnknown *v8; // rdi
  IUnknown *v9; // rax
  IUnknown *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // eax
  int v17[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v22[24]; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  _QWORD v24[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v23 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"ExperienceManager_OnViewCreated");
  v24[0] = &QuickConnectTelemetry::ExperienceManager_OnViewCreated::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v24);
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_Params<_GUID &>(
    (__int64)v24,
    (__int128 *)((char *)this + 248));
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v4);
  if ( !v5 || SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v18 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (_QWORD *)a2 + 3,
           &v18);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)v20 = CQuickConnectExperienceManager::OnClientWindowReadyForPresentationChanged;
      v20[2] = 0;
      *(_QWORD *)v22 = (char *)this - 48;
      *(_OWORD *)&v22[8] = *(_OWORD *)v20;
      v8 = 0LL;
      v9 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v9);
        *(_OWORD *)&v10[2].lpVtbl = *(_OWORD *)v22;
        v10[4].lpVtbl = *(struct IUnknownVtbl **)&v22[16];
        v10->lpVtbl = (struct IUnknownVtbl *)off_18033A1A0;
        v8 = v10;
      }
      *(_QWORD *)v20 = v8;
      CMarshaledInterface::CMarshaledInterface(&v19, v8);
      v11 = v19;
      *(_QWORD *)v17 = v19;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v17);
      v12 = 0LL;
      v13 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( v13 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v13);
        v14[2] = 0LL;
        if ( v14 + 2 != (_QWORD *)v17 )
        {
          v14[2] = v11;
          *(_QWORD *)v17 = 0LL;
        }
        *v14 = off_18032BB60;
        v12 = (__int64)v14;
      }
      v21 = v12;
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)v17);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v18 + 80LL))(v18, v12, (char *)this + 16);
      v6 = v15;
      if ( v15 >= 0 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v24);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x277,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    v6 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::~ExperienceManager_OnViewCreated((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v24);
  return v6;
}
