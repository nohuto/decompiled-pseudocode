/*
 * XREFs of ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18000DBD4 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800484F8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18004FCE0 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180072174 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800F952C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::HandleInitialViewCreation(
        CImmersiveApp *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  char *v5; // rdi
  __int64 v6; // r12
  char v7; // r14
  __int64 v8; // r8
  int (*v9)(ViewWrapperBase *__hidden, const unsigned __int16 *, unsigned int); // rax
  int View; // esi
  __int64 v11; // rax
  struct IApplicationPresentationLayer *v13; // rdx
  ViewWrapperBase *v14; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID Context[4]; // [rsp+30h] [rbp-D0h] BYREF
  void **v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+88h] [rbp-78h]
  _BYTE v21[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[184]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v23[24]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v24[16]; // [rsp+180h] [rbp+80h] BYREF

  Context[2] = (LPVOID)-2LL;
  v5 = (char *)this - 112;
  v6 = *((_QWORD *)this + 39);
  v7 = v6 == 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v17,
    (__int64)"ProcessNewWindow");
  v17 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)&v17,
    *((const unsigned __int16 **)v5 + 68));
  v14 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, ViewWrapperBase **))a2)(
      a2,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v14);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    (*(void (__fastcall **)(struct ITaskWindow *, GUID *, ViewWrapperBase **))(*(_QWORD *)a3 + 40LL))(
      a3,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      &v14);
  }
  v8 = *((unsigned int *)v5 + 138);
  v9 = *(int (**)(ViewWrapperBase *__hidden, const unsigned __int16 *, unsigned int))(*(_QWORD *)v14 + 88LL);
  if ( v9 == ViewWrapperBase::SetLightweightProperty )
    ViewWrapperBase::SetLightweightProperty(v14, L"LastSetGlomIdForReconstitution", v8);
  else
    ((void (__fastcall *)(ViewWrapperBase *, const WCHAR *, __int64))v9)(v14, L"LastSetGlomIdForReconstitution", v8);
  View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
           (CImmersiveApp::CImmersiveWindowCollection *)(v5 + 264),
           a2,
           a3);
  if ( View >= 0 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)v5);
    GetSystemTimeAsFileTime((LPFILETIME)(v5 + 628));
    v11 = *(_QWORD *)(v5 + 628);
    *(_QWORD *)(v5 + 652) = v11;
    if ( v5[448] && !v5[449] )
    {
      *(_QWORD *)(v5 + 660) = v11;
      v13 = (struct IApplicationPresentationLayer *)*((_QWORD *)v5 + 50);
      *((_DWORD *)v5 + 146) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(v5 + 584), v13);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)v5);
  }
  if ( View < 0 )
    v7 &= -(v6 != 0);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v17, View);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v17 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v17);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v24);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v23);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v22);
  if ( v20 == 1 )
  {
    v20 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    {
      Context[0] = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v21);
  }
  v20 = 3;
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  if ( View >= 0 && v7 )
  {
    LODWORD(Context[0]) = 11;
    Context[1] = 0LL;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (RTL_SRWLOCK *)v5,
      (const struct APP_CHANGE_INFO *const)Context,
      1uLL);
  }
  return (unsigned int)View;
}
