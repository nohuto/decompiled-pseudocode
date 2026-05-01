/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180157060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015A130 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        int a3)
{
  int v5; // r8d
  HANDLE v6; // rax
  __int64 v7; // r8
  void *v8; // rdi
  int v9; // ecx
  int v10; // eax
  int started; // eax
  _QWORD v13[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v14; // [rsp+38h] [rbp-D0h]
  __int128 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h]
  _QWORD v17[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v16 = -2LL;
  LODWORD(v15) = *((_DWORD *)this + 14);
  *((_QWORD *)&v15 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v13, &v15);
  if ( v5 < 0 )
  {
    v6 = OpenEventW(2u, 0, L"ShellStartReadyEvent");
    v8 = v6;
    if ( v6 )
    {
      SetEvent(v6);
      CloseHandle(v8);
    }
    v9 = *((_DWORD *)this + 14);
    if ( v9 != 1 )
    {
      if ( v9 <= 2 )
        goto LABEL_19;
      if ( v9 > 4 )
      {
        if ( v9 == 15 )
        {
          *((_DWORD *)this + 14) = 0;
LABEL_14:
          StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v17, v7);
          XamlLauncherState::CompleteStartShowTelemetry(
            this,
            a3,
            (struct StartWindowTelemetry::LauncherInvokeActivity *)v17);
          v17[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
          goto LABEL_19;
        }
        if ( ((v9 - 18) & 0xFFFFFFFC) != 0 || v9 == 19 )
          goto LABEL_19;
      }
    }
    *((_DWORD *)this + 14) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x61A,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v10);
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 958) )
  {
    started = XamlLauncherState::ShowStartView((__int64)this + 16, 1u, 4);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x641,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    *((_BYTE *)this + 958) = 0;
  }
LABEL_19:
  if ( (_BYTE)v14 )
  {
    LOBYTE(v14) = 0;
    StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v13,
      v13[1] + 56LL);
  }
  return 0LL;
}
