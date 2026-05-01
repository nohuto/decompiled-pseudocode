/*
 * XREFs of ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180230080
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x18022FF10 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180079A08 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18007A2A4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007A3DC (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180225E60 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18022CBB4 (--$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     ?CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022E14C (-CancelCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18022F67C (-LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180231664 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnSessionBecameIdle(XamlLauncherState *this, __int64 a2, __int64 a3)
{
  int *v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // esi
  int v11[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  LPVOID v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v14 = -2LL;
  v4 = (int *)((char *)this + 64);
  v11[2] = *((_DWORD *)this + 16);
  v5 = v11[2];
  v12 = this;
  LOBYTE(v13) = 1;
  *((_BYTE *)this + 968) = 1;
  if ( v5 <= 0 )
    goto LABEL_12;
  if ( v5 <= 4 )
    goto LABEL_7;
  if ( v5 != 6 )
  {
    if ( v5 != 15 && (v5 <= 17 || v5 > 21) )
      goto LABEL_12;
LABEL_7:
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 288, v15, a3);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock((CommonStartTelemetry::LauncherInvokeActivity *)v15);
    *v4 = 0;
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        385LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        386LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v15);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v15);
    goto LABEL_12;
  }
  StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread((char *)this + 600, v15);
  *v4 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      396LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v9);
  XamlLauncherState::CancelCortanaTelemetryTimeout(this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (CommonStartTelemetry::LauncherInvokeActivity *)v15,
    v10);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v15);
LABEL_12:
  LOBYTE(v13) = 0;
  StartWindowTelemetry::OnSessionBecameIdle<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v11[2],
    v4);
  return 0LL;
}
