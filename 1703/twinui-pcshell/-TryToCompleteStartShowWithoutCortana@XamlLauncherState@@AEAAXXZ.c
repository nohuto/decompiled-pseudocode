/*
 * XREFs of ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1801566A0
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801567B0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180157710 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1801581B0 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180158304 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x180156EC4 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::TryToCompleteStartShowWithoutCortana(XamlLauncherState *this)
{
  __int64 v2; // r8
  int v3; // eax
  _QWORD v4[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 128LL))(*((_QWORD *)this + 9)) >= 0
    || (*((_BYTE *)this + 276) & 4) != 0 )
  {
    StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v4, v2);
    *((_DWORD *)this + 14) = 16;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 144LL))(*((_QWORD *)this + 9));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4D1,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15));
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v4);
    v4[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v4);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v4);
  }
  else
  {
    *((_DWORD *)this + 14) = 15;
    XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
  }
}
