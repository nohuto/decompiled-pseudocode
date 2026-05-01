/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180230290
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180078E50 (-IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18007A2A4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18022CCF4 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x1802312D0 (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-E0h] BYREF
  int v12; // [rsp+30h] [rbp-D8h] BYREF
  XamlLauncherState *v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  __int64 v15; // [rsp+48h] [rbp-C0h]
  LPVOID v16[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v15 = -2LL;
  v4 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v12 = v5;
  v13 = this;
  LOBYTE(v14) = 1;
  if ( !XamlLauncherState::IsStartVisible((XamlLauncherState *)((char *)this + 24)) )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
LABEL_21:
        *v4 = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
        goto LABEL_22;
      }
      if ( v5 <= 2 )
        goto LABEL_22;
      if ( v5 > 4 )
      {
        if ( v5 == 18 || v5 == 20 )
          goto LABEL_21;
        if ( v5 != 21 )
          goto LABEL_22;
      }
    }
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 288, v16, v6);
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct CommonStartTelemetry::LauncherInvokeActivity *)v16);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v16);
    goto LABEL_21;
  }
  StartWindowTelemetry::StartViewDestroyedWhileVisible();
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12), 3LL);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1445LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v7);
  if ( !XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(this)
    && !*((_BYTE *)this + 963)
    && !*((_BYTE *)this + 964) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1448LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
  }
  *v4 = 0;
  v9 = *((_QWORD *)this + 13);
  if ( v9 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v11) >= 0 && v11 )
    *((_BYTE *)this + 967) = 1;
LABEL_22:
  LOBYTE(v14) = 0;
  StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4);
  return 0LL;
}
