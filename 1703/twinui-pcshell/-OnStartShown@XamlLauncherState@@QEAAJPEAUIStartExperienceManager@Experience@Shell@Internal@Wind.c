/*
 * XREFs of ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801567B0
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
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180156394 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180157BB0 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159E10 (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnStartShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v4; // r8
  int v5; // eax
  bool v6; // r14
  bool v7; // si
  int v8; // eax
  int v9; // eax
  HRESULT v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  _QWORD v17[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C8h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v19 = -2LL;
  LODWORD(hstringHeader.Reserved.Reserved1) = *((_DWORD *)this + 14);
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v17, (__int128 *)&hstringHeader);
  if ( (_DWORD)v4 == 1 )
    goto LABEL_31;
  if ( (int)v4 <= 2 )
  {
LABEL_28:
    *((_BYTE *)this + 956) = 1;
    if ( *((_QWORD *)this + 117) )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 117,
        0LL);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
    *((_DWORD *)this + 14) = 0;
    goto LABEL_42;
  }
  if ( (int)v4 <= 4 )
    goto LABEL_12;
  if ( (_DWORD)v4 != 15 )
  {
    if ( (_DWORD)v4 != 18 )
    {
      if ( (unsigned int)(v4 - 20) > 1 )
        goto LABEL_28;
LABEL_12:
      v6 = (unsigned int)(v4 - 20) <= 1;
      v7 = (_DWORD)v4 == 3 || (_DWORD)v4 == 20;
      StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v22, v4);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 40LL))(*((_QWORD *)this + 15));
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 144LL))(*((_QWORD *)this + 9));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x511,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x512,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v9);
      *((_DWORD *)this + 14) = 5;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
      if ( v7 )
        PostCortanaVisibility(1u, *((_QWORD *)this + 120));
      XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v22);
      if ( v6 )
      {
        string = 0LL;
        v10 = WindowsCreateStringReference(L"StartMode=AppTransition", 0x17u, &hstringHeader, &string);
        if ( v10 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
        v11 = XamlLauncherState::ShowCortanaFromOpenStart(this, string);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x51C,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v11);
          v22[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
          goto LABEL_43;
        }
      }
      goto LABEL_11;
    }
LABEL_31:
    v13 = 19;
    if ( (_DWORD)v4 == 1 )
      v13 = 2;
    *((_DWORD *)this + 14) = v13;
    if ( *((_BYTE *)this + 952) )
    {
      if ( !*((_BYTE *)this + 953) )
      {
        *((_BYTE *)this + 952) = 0;
        XamlLauncherState::BeginCortanaReadinessCutoff((struct _TP_TIMER **)this);
        v14 = *((_DWORD *)this + 69) >> 2;
        LOBYTE(v14) = (*((_DWORD *)this + 69) & 4) != 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 72LL))(
                *((_QWORD *)this + 10),
                v14);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4EF,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v15);
        goto LABEL_42;
      }
    }
    else if ( !*((_BYTE *)this + 953) && !*((_BYTE *)this + 954) && !*((_BYTE *)this + 955) )
    {
      XamlLauncherState::BeginCortanaReadinessCutoff((struct _TP_TIMER **)this);
      goto LABEL_42;
    }
    XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    goto LABEL_42;
  }
  StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v22, v4);
  *((_DWORD *)this + 14) = 16;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 144LL))(*((_QWORD *)this + 9));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x500,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v22);
LABEL_11:
  v22[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
LABEL_42:
  v12 = 0;
LABEL_43:
  if ( (_BYTE)v18 )
  {
    LOBYTE(v18) = 0;
    StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v17,
      v17[1] + 56LL);
  }
  return v12;
}
