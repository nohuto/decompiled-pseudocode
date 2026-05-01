/*
 * XREFs of ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1801530F8 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153420 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x1801536C4 (-StartAndCortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x180153738 (-CortanaBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180158A00 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A5A4 (--$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTele.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaFailedToGetForeground(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  void **v6; // rax
  void **v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+38h] [rbp-D0h]
  __int128 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h]
  _QWORD v16[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v15 = -2LL;
  LODWORD(v14) = *((_DWORD *)this + 14);
  *((_QWORD *)&v14 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v12, &v14);
  if ( (int)v4 <= 0 )
    goto LABEL_21;
  if ( (int)v4 > 2 )
  {
    if ( (_DWORD)v4 == 6 )
    {
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((__int64)this + 592, v16, v4);
      StartWindowTelemetry::CortanaBlockedBySetForegroundFailure();
      *((_DWORD *)this + 14) = 0;
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
      if ( *((_QWORD *)this + 118) )
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
          (struct _TP_TIMER **)this + 118,
          0LL);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v16,
        v5);
      if ( (v5 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x76F,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)v5);
        v6 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
LABEL_18:
        v16[0] = v6;
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
        goto LABEL_22;
      }
      v7 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      goto LABEL_20;
    }
    if ( (unsigned int)(v4 - 18) > 1 )
      goto LABEL_21;
  }
  StartWindowTelemetry::StartAndCortanaBlockedBySetForegroundFailure();
  StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v16, v8);
  StartWindowTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((StartWindowTelemetry::LauncherInvokeActivity *)v16);
  if ( *((_QWORD *)this + 117) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 117,
      0LL);
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v16);
  *((_DWORD *)this + 14) = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 1921LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v9);
    v6 = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    goto LABEL_18;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 1922LL;
    goto LABEL_17;
  }
  v7 = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
LABEL_20:
  v16[0] = v7;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
LABEL_21:
  v5 = 0;
LABEL_22:
  if ( (_BYTE)v13 )
  {
    LOBYTE(v13) = 0;
    StartWindowTelemetry::OnCortanaFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v12,
      v12[1] + 56LL);
  }
  return v5;
}
