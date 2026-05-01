/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180189700
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1801899A0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180186EE4 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180186F7C (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18018B01C (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018D830 (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  XamlLauncherState *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _QWORD v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-A0h]
  int *v14; // [rsp+70h] [rbp-98h]
  int *v15; // [rsp+78h] [rbp-90h]
  int v16; // [rsp+80h] [rbp-88h] BYREF
  char v17; // [rsp+84h] [rbp-84h]
  int v18; // [rsp+A8h] [rbp-60h] BYREF
  const char *v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  char v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  _BYTE v23[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+160h] [rbp+58h]
  __int64 v25; // [rsp+168h] [rbp+60h]
  __int64 v26; // [rsp+170h] [rbp+68h]
  __int64 v27; // [rsp+178h] [rbp+70h]
  _QWORD v28[40]; // [rsp+188h] [rbp+80h] BYREF

  v11 = -2LL;
  DWORD2(v8) = *(_DWORD *)(a1 + 40);
  v4 = (XamlLauncherState *)(a1 - 24);
  v9 = a1 - 24;
  LOBYTE(v10) = 1;
  if ( DWORD2(v8) != 3 )
  {
    if ( DWORD2(v8) == 5 )
      goto LABEL_11;
    if ( SDWORD2(v8) <= 11 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 941) = a2 == 7;
      if ( a2 == 7 )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
        *(_DWORD *)(a1 + 40) = 0;
      }
      goto LABEL_19;
    }
    if ( SDWORD2(v8) <= 14 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 40) = 9;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      goto LABEL_19;
    }
    if ( DWORD2(v8) == 16 )
    {
      *(_DWORD *)(a1 + 40) = 17;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      goto LABEL_19;
    }
    if ( DWORD2(v8) != 20 )
      goto LABEL_9;
  }
  v12[1] = 0LL;
  v12[2] = v12;
  v12[3] = 0LL;
  LODWORD(v13) = 0;
  v14 = &v18;
  v15 = &v16;
  v16 = 0;
  v17 = 0;
  v21 = 0;
  v18 = 0;
  v19 = "LauncherInvokeActivity";
  v20 = 0LL;
  v22 = 1LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  v27 = 0LL;
  v12[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  if ( **(_DWORD **)(a1 + 312) == 1 && a2 == 7 )
  {
    LOBYTE(v5) = **(_DWORD **)(a1 + 312) == 1;
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v28,
      a1 + 264,
      v5);
    v28[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v12, (__int64)v28, v6);
    v28[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
    CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v12);
  }
  *(_DWORD *)(a1 + 40) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
  if ( *v15 == 1 && a2 == 7 )
    XamlLauncherState::CompleteStartShowTelemetry(v4, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v12);
  v12[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
LABEL_19:
  LOBYTE(v10) = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           (char *)&v8 + 8,
           (char *)v4 + 64);
}
