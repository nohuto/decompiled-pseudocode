/*
 * XREFs of ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x180156EC4
 * Callers:
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180156E90 (-OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@She.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157710 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1801530F8 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ @ 0x180153650 (-StartBlockedBySetForegroundFailure@StartWindowTelemetry@@SAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ??$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A068 (--$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::OnStartFailedToGetForegroundImpl(XamlLauncherState *this)
{
  int v2; // r8d
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  _QWORD v8[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v9; // [rsp+38h] [rbp-D0h]
  __int128 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  _QWORD v12[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v11 = -2LL;
  StartWindowTelemetry::StartBlockedBySetForegroundFailure();
  LODWORD(v10) = *((_DWORD *)this + 14);
  *((_QWORD *)&v10 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v8, &v10);
  v3 = (unsigned int)(v2 - 15);
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      *((_DWORD *)this + 14) = 17;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x5DB,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_9;
      }
    }
  }
  else
  {
    StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v12, v3);
    StartWindowTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((StartWindowTelemetry::LauncherInvokeActivity *)v12);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v12);
    *((_DWORD *)this + 14) = 0;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 7LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5D4,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
      v12[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
      goto LABEL_9;
    }
    v12[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  }
  v5 = 0;
LABEL_9:
  if ( (_BYTE)v9 )
  {
    LOBYTE(v9) = 0;
    StartWindowTelemetry::OnStartFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v8,
      v8[1] + 56LL);
  }
  return v5;
}
