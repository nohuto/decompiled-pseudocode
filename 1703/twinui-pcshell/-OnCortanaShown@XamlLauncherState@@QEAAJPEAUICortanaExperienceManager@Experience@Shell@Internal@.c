/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180157230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z @ 0x18015188C (-PostCortanaVisibility@@YAX_NPEAUHMONITOR__@@@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153420 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801575AC (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180158A00 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A1F8 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  __int64 v5; // r8
  int v6; // eax
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // esi
  void **v10; // rax
  int v11; // r14d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HRESULT v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  _QWORD v21[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v26[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v23 = -2LL;
  LODWORD(hstringHeader.Reserved.Reserved1) = *((_DWORD *)this + 14);
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v21, (__int128 *)&hstringHeader);
  if ( *((_QWORD *)this + 117) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 117,
      0LL);
  if ( *((_DWORD *)this + 14) == 1 )
    goto LABEL_31;
  if ( *((_DWORD *)this + 14) == 2 )
  {
LABEL_18:
    StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v26, v5);
    v11 = *((_DWORD *)this + 14);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 144LL))(*((_QWORD *)this + 9));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65D,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x65E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v13);
    *((_DWORD *)this + 14) = 5;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
    v14 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x661,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v14);
    PostCortanaVisibility(1u, *((_QWORD *)this + 120));
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v26);
    if ( v11 == 19 )
    {
      string = 0LL;
      v15 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
      if ( v15 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      v16 = XamlLauncherState::ShowCortanaFromOpenStart(this, string);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x666,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v16);
        v26[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
        wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
        goto LABEL_36;
      }
    }
    v10 = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 14) != 6 )
  {
    if ( *((_DWORD *)this + 14) != 18 )
    {
      if ( *((_DWORD *)this + 14) != 19 )
        goto LABEL_35;
      goto LABEL_18;
    }
LABEL_31:
    v18 = 20;
    if ( *((_DWORD *)this + 14) == 1 )
      v18 = 3;
    *((_DWORD *)this + 14) = v18;
    v19 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x654,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v19);
    goto LABEL_35;
  }
  StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((__int64)this + 592, v26, v5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x670,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6);
  *((_DWORD *)this + 14) = 7;
  v8 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x672,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v8);
  if ( v7 < 0 )
    v9 = v7;
  PostCortanaVisibility(1u, *((_QWORD *)this + 120));
  if ( *((_QWORD *)this + 118) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 118,
      0LL);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v26, v9);
  v10 = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
LABEL_30:
  v26[0] = v10;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
LABEL_35:
  v17 = 0;
LABEL_36:
  if ( (_BYTE)v22 )
  {
    LOBYTE(v22) = 0;
    StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v21,
      v21[1] + 56LL);
  }
  return v17;
}
