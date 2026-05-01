/*
 * XREFs of ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180154D88
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?LauncherCancelledDueToLock@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x180153178 (-LauncherCancelledDueToLock@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153420 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180158A00 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801591EC (--$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnSessionBecameIdle(XamlLauncherState *this)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // edi
  void **v5; // rax
  int v6; // eax
  int v7; // eax
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v10; // [rsp+38h] [rbp-D0h]
  __int128 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  _QWORD v13[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v12 = -2LL;
  LODWORD(v11) = *((_DWORD *)this + 14);
  *((_QWORD *)&v11 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v9, &v11);
  *((_BYTE *)this + 959) = 1;
  if ( (int)v2 > 0 )
  {
    if ( (int)v2 > 4 )
    {
      if ( (_DWORD)v2 == 6 )
      {
        StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((__int64)this + 592, v13, v2);
        *((_DWORD *)this + 14) = 0;
        v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
        v4 = v3;
        if ( v3 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x188,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v3);
        if ( *((_QWORD *)this + 118) )
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
            (struct _TP_TIMER **)this + 118,
            0LL);
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v13,
          v4);
        v5 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
        goto LABEL_19;
      }
      if ( (_DWORD)v2 != 15 && (unsigned int)(v2 - 18) > 3 )
        goto LABEL_20;
    }
    StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v13, v2);
    StartWindowTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock((StartWindowTelemetry::LauncherInvokeActivity *)v13);
    *((_DWORD *)this + 14) = 0;
    if ( *((_QWORD *)this + 117) )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 117,
        0LL);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v13);
    v5 = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
LABEL_19:
    v13[0] = v5;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  }
LABEL_20:
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = 0;
    StartWindowTelemetry::OnSessionBecameIdle<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v9,
      v9[1] + 56LL);
  }
  return 0LL;
}
