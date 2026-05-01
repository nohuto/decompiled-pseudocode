/*
 * XREFs of ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180156460
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155AA0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180155D70 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E266C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801531F8 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToMember@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x180153454 (-TransferToMember@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ??$Start@$$V@CortanaLauncherInvokeActivity@StartWindowTelemetry@@SA?AV01@XZ @ 0x180159CB0 (--$Start@$$V@CortanaLauncherInvokeActivity@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

void __fastcall XamlLauncherState::BeginCortanaTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v7; // r9
  struct _TP_TIMER *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r8
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int *v14; // [rsp+58h] [rbp-A8h]
  int *v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h] BYREF
  char v17; // [rsp+6Ch] [rbp-94h]
  int v18; // [rsp+90h] [rbp-70h] BYREF
  const char *v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  char v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  _BYTE v23[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+148h] [rbp+48h]
  __int64 v25; // [rsp+150h] [rbp+50h]
  __int64 v26; // [rsp+158h] [rbp+58h]
  __int64 v27; // [rsp+160h] [rbp+60h]
  _QWORD v28[40]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v1 = pv + 118;
  if ( !pv[118] )
  {
    v12[1] = 0LL;
    v12[2] = v12;
    v12[3] = 0LL;
    v14 = &v18;
    v13 = 0;
    v15 = &v16;
    v16 = 0;
    v19 = "CortanaLauncherInvokeActivity";
    v17 = 0;
    v21 = 0;
    v18 = 0;
    v20 = 0LL;
    v22 = 1LL;
    v24 = 0LL;
    v25 = 0LL;
    memset(v23, 0, sizeof(v23));
    v3 = pv[80];
    v26 = 0LL;
    v27 = 0LL;
    v12[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
    if ( *(_DWORD *)v3 != 1 )
    {
      v4 = StartWindowTelemetry::CortanaLauncherInvokeActivity::Start<>((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v28);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)v12, v4, v5);
      v28[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
    }
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_14cad72e104b6faacc5f5111e03488e5_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( !*v1 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x4AC,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v7);
    v8 = *v1;
    if ( *v1 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 15));
      SetThreadpoolTimer(v8, &pftDueTime, 0, 0x3E8u);
    }
    if ( *v15 == 1 )
    {
      v9 = StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToMember((__int64)v12, v28);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)(pv + 74), (__int64)v9, v10);
      v28[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
    }
    v12[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  }
}
