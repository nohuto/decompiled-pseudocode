/*
 * XREFs of ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180156CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ @ 0x1801534F4 (-StartViewDestroyedWhileVisible@StartWindowTelemetry@@SAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180159FA0 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartDestroyed(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v12; // [rsp+40h] [rbp-C8h]
  __int128 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h]
  _QWORD v15[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v14 = -2LL;
  LODWORD(v13) = *((_DWORD *)this + 14);
  *((_QWORD *)&v13 + 1) = this;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v11, &v13);
  if ( (unsigned int)v4 > 0x11 || (v5 = 227872, !_bittest(&v5, v4)) )
  {
    if ( (_DWORD)v4 != 1 )
    {
      if ( (_DWORD)v4 == 2 )
        goto LABEL_21;
      if ( (int)v4 <= 2 )
        goto LABEL_22;
      if ( (int)v4 > 4 )
      {
        if ( (((_DWORD)v4 - 18) & 0xFFFFFFFD) != 0 )
        {
          if ( (_DWORD)v4 != 21 )
            goto LABEL_22;
          goto LABEL_20;
        }
LABEL_21:
        *((_DWORD *)this + 14) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
        goto LABEL_22;
      }
    }
LABEL_20:
    StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread((__int64)this + 280, v15, v4);
    XamlLauncherState::CompleteStartShowTelemetry(
      this,
      -2147467260,
      (struct StartWindowTelemetry::LauncherInvokeActivity *)v15);
    v15[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
    goto LABEL_21;
  }
  StartWindowTelemetry::StartViewDestroyedWhileVisible();
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), 3LL);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x595,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6);
  if ( !*((_BYTE *)this + 953) && !*((_BYTE *)this + 954) && !*((_BYTE *)this + 955) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 88LL))(*((_QWORD *)this + 10));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x598,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v7);
  }
  *((_DWORD *)this + 14) = 0;
  v8 = *((_QWORD *)this + 12);
  if ( v8 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v10) >= 0 && v10 )
    *((_BYTE *)this + 958) = 1;
LABEL_22:
  if ( (_BYTE)v12 )
  {
    LOBYTE(v12) = 0;
    StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v11,
      v11[1] + 56LL);
  }
  return 0LL;
}
