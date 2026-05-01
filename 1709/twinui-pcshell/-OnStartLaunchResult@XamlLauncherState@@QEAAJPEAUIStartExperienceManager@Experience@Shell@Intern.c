/*
 * XREFs of ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18018B520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E2B0 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        int a3)
{
  int *v5; // rdi
  HANDLE v6; // rax
  __int64 v7; // r8
  void *v8; // rsi
  int v9; // ecx
  int v10; // eax
  int started; // eax
  int v13[4]; // [rsp+20h] [rbp-E8h] BYREF
  XamlLauncherState *v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  _QWORD v17[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v16 = -2LL;
  v5 = (int *)((char *)this + 64);
  v13[2] = *((_DWORD *)this + 16);
  v14 = this;
  LOBYTE(v15) = 1;
  if ( a3 < 0 )
  {
    v6 = OpenEventW(2u, 0, L"ShellStartReadyEvent");
    v8 = v6;
    if ( v6 )
    {
      SetEvent(v6);
      CloseHandle(v8);
    }
    v9 = *v5;
    if ( *v5 != 1 )
    {
      if ( v9 <= 2 )
        goto LABEL_19;
      if ( v9 > 4 )
      {
        if ( v9 == 15 )
        {
          *v5 = 0;
LABEL_14:
          LOBYTE(v7) = **((_DWORD **)this + 42) == 1;
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
            v17,
            (char *)this + 288,
            v7);
          v17[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
          XamlLauncherState::CompleteStartShowTelemetry(
            this,
            a3,
            (struct CommonStartTelemetry::LauncherInvokeActivity *)v17);
          v17[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
          wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
          goto LABEL_19;
        }
        if ( ((v9 - 18) & 0xFFFFFFFC) != 0 || v9 == 19 )
          goto LABEL_19;
      }
    }
    *v5 = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x62A,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v10);
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 967) )
  {
    started = XamlLauncherState::ShowStartView((__int64)this + 24, 1u, 4LL);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x651,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    *((_BYTE *)this + 967) = 0;
  }
LABEL_19:
  LOBYTE(v15) = 0;
  StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v13[2],
    v5);
  return 0LL;
}
