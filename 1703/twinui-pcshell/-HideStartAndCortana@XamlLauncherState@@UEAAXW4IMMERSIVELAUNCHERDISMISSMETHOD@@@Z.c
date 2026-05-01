/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180155370
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180155610 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180152D74 (--4LauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153004 (-TransferToCurrentThread@LauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1801530F8 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801595F0 (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  XamlLauncherState *v4; // rsi
  int v5; // r8d
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v10; // [rsp+38h] [rbp-D0h]
  __int128 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  _QWORD v13[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h]
  int *v15; // [rsp+80h] [rbp-88h]
  int *v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+90h] [rbp-78h] BYREF
  char v18; // [rsp+94h] [rbp-74h]
  int v19; // [rsp+B8h] [rbp-50h] BYREF
  const char *v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  char v22; // [rsp+D0h] [rbp-38h]
  __int64 v23; // [rsp+D8h] [rbp-30h]
  _BYTE v24[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+170h] [rbp+68h]
  __int64 v26; // [rsp+178h] [rbp+70h]
  __int64 v27; // [rsp+180h] [rbp+78h]
  __int64 v28; // [rsp+188h] [rbp+80h]
  _QWORD v29[40]; // [rsp+198h] [rbp+90h] BYREF

  v12 = -2LL;
  LODWORD(v11) = *(_DWORD *)(a1 + 40);
  v4 = (XamlLauncherState *)(a1 - 16);
  *((_QWORD *)&v11 + 1) = a1 - 16;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v9, &v11);
  if ( v5 != 3 )
  {
    if ( v5 == 5 )
      goto LABEL_11;
    if ( v5 <= 11 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 940) = a2 == 7;
      if ( a2 == 7 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), 7LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
        *(_DWORD *)(a1 + 40) = 0;
      }
      goto LABEL_19;
    }
    if ( v5 <= 14 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 40) = 9;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      goto LABEL_19;
    }
    if ( v5 == 16 )
    {
      *(_DWORD *)(a1 + 40) = 17;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
      goto LABEL_19;
    }
    if ( v5 != 20 )
      goto LABEL_9;
  }
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  LODWORD(v14) = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "LauncherInvokeActivity";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0LL;
  v28 = 0LL;
  v13[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  if ( **(_DWORD **)(a1 + 312) == 1 && a2 == 7 )
  {
    v7 = StartWindowTelemetry::LauncherInvokeActivity::TransferToCurrentThread(a1 + 264, v29, v6);
    StartWindowTelemetry::LauncherInvokeActivity::operator=((__int64)v13, (__int64)v7, v8);
    v29[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
    StartWindowTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((StartWindowTelemetry::LauncherInvokeActivity *)v13);
  }
  *(_DWORD *)(a1 + 40) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
  if ( *v16 == 1 && a2 == 7 )
    XamlLauncherState::CompleteStartShowTelemetry(v4, 0, (struct StartWindowTelemetry::LauncherInvokeActivity *)v13);
  v13[0] = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
LABEL_19:
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = 0;
    StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v9,
      v9[1] + 56LL);
  }
}
