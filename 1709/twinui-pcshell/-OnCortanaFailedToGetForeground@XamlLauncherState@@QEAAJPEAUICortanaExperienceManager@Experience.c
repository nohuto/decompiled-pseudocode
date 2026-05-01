/*
 * XREFs of ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180186F7C (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x18018765C (-StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x1801876D0 (-CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x18018AAC0 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     ??$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E724 (--$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTele.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaFailedToGetForeground(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rsi
  void **v5; // r15
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  int v11[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  _QWORD v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v14 = -2LL;
  v4 = (_DWORD *)((char *)this + 64);
  v11[2] = *((_DWORD *)this + 16);
  v12 = this;
  LOBYTE(v13) = 1;
  if ( v11[2] <= 0 )
    goto LABEL_18;
  if ( v11[2] <= 2 )
  {
LABEL_9:
    StartWindowTelemetry::StartAndCortanaBlockedBySetForegroundFailure();
    LOBYTE(v7) = **((_DWORD **)this + 42) == 1;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v15,
      (char *)this + 288,
      v7);
    v5 = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    v15[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v15);
    if ( *((_QWORD *)this + 118) )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 118,
        0LL);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v15);
    *v4 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 1937LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 1938LL;
      goto LABEL_15;
    }
LABEL_17:
    v15[0] = v5;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  if ( v11[2] != 6 )
  {
    if ( (unsigned int)(v11[2] - 18) > 1 )
      goto LABEL_18;
    goto LABEL_9;
  }
  LOBYTE(a3) = **((_DWORD **)this + 81) == 1;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v15,
    (char *)this + 600,
    a3);
  v5 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  v15[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  StartWindowTelemetry::CortanaBlockedBySetForegroundFailure();
  *v4 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
  XamlLauncherState::CompleteCortanaTelemetry(
    this,
    (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v15,
    v6);
  if ( v6 >= 0 )
    goto LABEL_17;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x77F,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6);
LABEL_16:
  v15[0] = v5;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
LABEL_19:
  LOBYTE(v13) = 0;
  StartWindowTelemetry::OnCortanaFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v11[2],
    v4);
  return (unsigned int)v6;
}
