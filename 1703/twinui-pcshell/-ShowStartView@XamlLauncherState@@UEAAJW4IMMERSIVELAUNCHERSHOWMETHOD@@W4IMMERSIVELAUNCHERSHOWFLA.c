/*
 * XREFs of ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180154FA0
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180157060 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180150994 (--_GFocusHoldingTank@@QEAAPEAXI@Z.c)
 *     ??4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180152D74 (--4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Split@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180152F9C (-Split@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ @ 0x1801535DC (-ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ.c)
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180155FB0 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180158A00 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18015937C (--$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFL.c)
 *     ??$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@XZ @ 0x180159444 (--$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA-AV-$unique_ptr@VFocusHoldingTank@@U-$defau.c)
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18015947C (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ??$Start@$$V@LauncherInvokeActivity@StartWindowTelemetry@@SA?AV01@XZ @ 0x180159544 (--$Start@$$V@LauncherInvokeActivity@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     ?Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18015C910 (-Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::ShowStartView(__int64 a1, unsigned int a2, int a3)
{
  FocusHoldingTank **v6; // rdi
  FocusHoldingTank **unique; // rax
  FocusHoldingTank *v8; // rsi
  FocusHoldingTank *v9; // rcx
  struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *v10; // rdx
  void *v11; // r15
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  char v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  bool v20; // di
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  _QWORD v32[4]; // [rsp+78h] [rbp-90h] BYREF
  int v33; // [rsp+98h] [rbp-70h]
  int *v34; // [rsp+A0h] [rbp-68h]
  int *v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h] BYREF
  char v37; // [rsp+B4h] [rbp-54h]
  int v38; // [rsp+D8h] [rbp-30h] BYREF
  const char *v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  char v41; // [rsp+F0h] [rbp-18h]
  __int64 v42; // [rsp+F8h] [rbp-10h]
  _BYTE v43[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v44; // [rsp+190h] [rbp+88h]
  __int64 v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 v47; // [rsp+1A8h] [rbp+A0h]
  _QWORD v48[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v31 = -2LL;
  LODWORD(v28) = a2;
  LODWORD(v27) = a3;
  if ( *(_BYTE *)(a1 + 943) && !*(_BYTE *)(a1 + 942) && a2 != 14 )
  {
    StartWindowTelemetry::ShowAttemptSkippedDueToIdle();
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 941) )
  {
    StartWindowTelemetry::StartShowDelayedDueToReadiness<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
      &v28,
      &v27);
    *(_DWORD *)(a1 + 976) = a2;
    *(_DWORD *)(a1 + 980) = a3;
    *(_BYTE *)(a1 + 984) = 1;
    v6 = (FocusHoldingTank **)(a1 + 968);
    if ( !*(_QWORD *)(a1 + 968) )
    {
      unique = (FocusHoldingTank **)wil::make_unique_nothrow<FocusHoldingTank,>(&v28);
      if ( v6 != unique )
      {
        v8 = *unique;
        *unique = 0LL;
        v9 = *v6;
        if ( v8 != *v6 )
        {
          if ( v9 )
            FocusHoldingTank::`scalar deleting destructor'((HWND *)v9);
          *v6 = v8;
        }
      }
      if ( (_QWORD)v28 )
        FocusHoldingTank::`scalar deleting destructor'((HWND *)v28);
      if ( *v6 )
      {
        v10 = *(struct Windows::Internal::Shell::Experience::ICortanaExperienceManager **)(a1 + 64);
        if ( v10 )
          FocusHoldingTank::Advise(*v6, v10);
      }
    }
    return 0LL;
  }
  *(_WORD *)(a1 + 938) = 0;
  LODWORD(v28) = *(_DWORD *)(a1 + 40);
  v11 = (void *)(a1 - 16);
  *((_QWORD *)&v28 + 1) = a1 - 16;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v29, &v28);
  if ( v12 )
  {
    v13 = v12 - 6;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(a1 + 40) = 4;
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 104LL))(*(_QWORD *)(a1 + 64));
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x206,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v14);
      }
      goto LABEL_24;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
  }
  *(_BYTE *)(a1 + 940) = 0;
  *(_DWORD *)(a1 + 40) = *(_BYTE *)(a1 + 937) != 0 ? 15 : 1;
LABEL_24:
  v32[1] = 0LL;
  v32[2] = v32;
  v32[3] = 0LL;
  v33 = 0;
  v34 = &v38;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v38 = 0;
  v39 = "LauncherInvokeActivity";
  v40 = 0LL;
  v42 = 1LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(v43, 0, sizeof(v43));
  v46 = 0LL;
  v47 = 0LL;
  v32[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  v15 = 0;
  if ( **(_DWORD **)(a1 + 312) != 1 )
  {
    v16 = StartWindowTelemetry::LauncherInvokeActivity::Start<>((StartWindowTelemetry::LauncherInvokeActivity *)v48);
    StartWindowTelemetry::LauncherInvokeActivity::operator=((__int64)v32, v16, v17);
    v48[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v48);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
    v18 = StartWindowTelemetry::LauncherInvokeActivity::Split((__int64)v32, v48);
    StartWindowTelemetry::LauncherInvokeActivity::operator=(a1 + 264, (__int64)v18, v19);
    v48[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v48);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v48);
    v15 = 1;
  }
  XamlLauncherState::BeginStartTelemetryTimeout(v11);
  *(_DWORD *)(a1 + 256) = a2;
  *(_DWORD *)(a1 + 260) = a3;
  v20 = (a3 & 4) != 0;
  LOBYTE(v21) = *(_BYTE *)(a1 + 937);
  LOBYTE(v22) = v20;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(
          *(_QWORD *)(a1 + 56),
          v22,
          v21,
          a2);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v23);
  if ( !*(_BYTE *)(a1 + 937) )
  {
    LOBYTE(v24) = v20;
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64), v24);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21D,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v25);
      *(_BYTE *)(a1 + 936) = 1;
    }
  }
  if ( v15 )
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v32,
      0LL);
  v32[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v32);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v32);
  if ( (_BYTE)v30 )
  {
    LOBYTE(v30) = 0;
    StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v29,
      v29[1] + 56LL);
  }
  return 0LL;
}
