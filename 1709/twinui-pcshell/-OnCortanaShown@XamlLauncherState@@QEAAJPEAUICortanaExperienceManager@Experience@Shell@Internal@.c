/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18018B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x180185B4C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x18018AAC0 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18018BA78 (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E378 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *v3; // r14
  int *v5; // rsi
  struct _TP_TIMER **v6; // rcx
  void **v7; // r13
  int v8; // eax
  int v9; // r15d
  int v10; // eax
  int v11; // r14d
  int v12; // r15d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v22[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+38h] [rbp-D0h]
  __int64 v25; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v25 = -2LL;
  v3 = a3;
  v5 = (int *)((char *)this + 64);
  v22[2] = *((_DWORD *)this + 16);
  v23 = this;
  LOBYTE(v24) = 1;
  v6 = (struct _TP_TIMER **)((char *)this + 944);
  if ( *v6 )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v6,
      0LL);
  switch ( *v5 )
  {
    case 1:
      goto LABEL_28;
    case 2:
      goto LABEL_16;
    case 6:
      LOBYTE(a3) = **((_DWORD **)this + 81) == 1;
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        v28,
        (char *)this + 600,
        a3);
      v7 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      v28[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
      v9 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x680,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v8);
      *v5 = 7;
      v10 = XamlLauncherState::ProcessCortanaShownEventArgs(this, v3);
      v11 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x682,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v10);
      if ( v9 < 0 )
        v11 = v9;
      PostCortanaVisibility(1u, *((_QWORD *)this + 122));
      XamlLauncherState::CompleteCortanaTelemetry(
        this,
        (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v28,
        v11);
      goto LABEL_27;
    case 18:
LABEL_28:
      v19 = 20;
      if ( *v5 == 1 )
        v19 = 3;
      *v5 = v19;
      v20 = XamlLauncherState::ProcessCortanaShownEventArgs(this, v3);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x664,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v20);
      goto LABEL_32;
  }
  if ( *v5 != 19 )
    goto LABEL_32;
LABEL_16:
  LOBYTE(a3) = **((_DWORD **)this + 42) == 1;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v28,
    (char *)this + 288,
    a3);
  v7 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  v28[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  v12 = *v5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 144LL))(*((_QWORD *)this + 11));
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66E,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v14);
  *v5 = 5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  v15 = XamlLauncherState::ProcessCortanaShownEventArgs(this, v3);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x671,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v15);
  PostCortanaVisibility(1u, *((_QWORD *)this + 122));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v28);
  if ( v12 != 19 )
    goto LABEL_27;
  string = 0LL;
  v16 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
  if ( v16 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
  v17 = XamlLauncherState::ShowCortanaFromOpenStart(this, string);
  v18 = v17;
  if ( v17 >= 0 )
  {
LABEL_27:
    v28[0] = v7;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
LABEL_32:
    v18 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x676,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v17);
  v28[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
LABEL_33:
  LOBYTE(v24) = 0;
  StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v22[2],
    v5);
  return v18;
}
