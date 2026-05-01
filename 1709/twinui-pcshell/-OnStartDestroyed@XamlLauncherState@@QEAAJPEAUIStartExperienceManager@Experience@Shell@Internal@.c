/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018B130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x18018748C (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E120 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  signed int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-E0h] BYREF
  signed int v12; // [rsp+30h] [rbp-D8h] BYREF
  XamlLauncherState *v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  __int64 v15; // [rsp+48h] [rbp-C0h]
  _QWORD v16[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v15 = -2LL;
  v4 = (_DWORD *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v12 = v5;
  v13 = this;
  LOBYTE(v14) = 1;
  if ( (unsigned int)v5 > 0x11 || (v6 = 227872, !_bittest(&v6, v5)) )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
        goto LABEL_22;
      if ( v5 <= 2 )
        goto LABEL_23;
      if ( v5 <= 4 )
        goto LABEL_21;
      if ( ((v5 - 18) & 0xFFFFFFFD) == 0 )
      {
LABEL_22:
        *v4 = 0;
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 11) + 88LL))(
          *((_QWORD *)this + 11),
          a2,
          a3);
        goto LABEL_23;
      }
      if ( v5 != 21 )
        goto LABEL_23;
    }
LABEL_21:
    LOBYTE(a3) = **((_DWORD **)this + 42) == 1;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v16,
      (char *)this + 288,
      a3);
    v16[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v16);
    v16[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
    goto LABEL_22;
  }
  StartWindowTelemetry::StartViewDestroyedWhileVisible();
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5A5,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
  if ( !*((_BYTE *)this + 961) && !*((_BYTE *)this + 962) && !*((_BYTE *)this + 963) && !*((_BYTE *)this + 964) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5A8,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
  }
  *v4 = 0;
  v9 = *((_QWORD *)this + 13);
  if ( v9 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v11) >= 0 && v11 )
    *((_BYTE *)this + 967) = 1;
LABEL_23:
  LOBYTE(v14) = 0;
  StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4);
  return 0LL;
}
