/*
 * XREFs of ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180088EE0 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800F0D9C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800F1D88 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180107DF0 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x18010FBD8 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x18011EA10 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x180121BD0 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180125720 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180126A6C (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180126C20 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18012D83C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801306C4 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     _lambda_f5c3a3508d94124ca65af9e8c1942170_::operator() @ 0x180136824 (_lambda_f5c3a3508d94124ca65af9e8c1942170_--operator().c)
 * Callees:
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rax
  PSRWLOCK *p_SRWLock; // rax
  char v6; // bl
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  const struct _TlgProvider_t *Ptr; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-88h] BYREF
  PSRWLOCK v14; // [rsp+38h] [rbp-80h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-78h] BYREF
  int v16; // [rsp+44h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  int *v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]
  PSRWLOCK *v20; // [rsp+80h] [rbp-38h]
  __int64 v21; // [rsp+88h] [rbp-30h]

  LODWORD(v14) = 0;
  v4 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v4 )
  {
    v7 = v4 + 31;
    AcquireSRWLockExclusive(v4 + 31);
    p_SRWLock = &v14;
    v14 = v7;
    v6 = 1;
  }
  else
  {
    SRWLock = 0LL;
    p_SRWLock = &SRWLock;
    v6 = 2;
    v7 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v6 & 1) != 0 && v14 )
    ReleaseSRWLockExclusive(v14);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(v8 + 72);
  if ( v9 < 1 )
    __fastfail(7u);
  if ( *(int *)(v8 + 76) >= 0 )
    *(_DWORD *)(v8 + 76) = a2;
  v10 = v9 - 1;
  *(_DWORD *)(v8 + 72) = v10;
  v11 = v10 == 0;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( v11 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)a1);
  }
  else
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&SRWLock)
      && fPending )
    {
      SRWLock = (PSRWLOCK)qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    Ptr = (const struct _TlgProvider_t *)SRWLock[1].Ptr;
    if ( *(_DWORD *)Ptr > 5u )
    {
      v16 = a2;
      v18 = &v16;
      v19 = 4LL;
      LODWORD(v14) = GetCurrentThreadId();
      v20 = &v14;
      v21 = 4LL;
      TlgWrite(Ptr, &unk_18038A92E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
