/*
 * XREFs of ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18018A7C0
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180189E30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18018A100 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0D2C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D408 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801871F4 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x18018728C (-StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18018D2CC (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_18018D2CC.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall XamlLauncherState::BeginCortanaTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rax
  __int64 v4; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v6; // r9
  struct _TP_TIMER *v7; // rcx
  __int64 v8; // r8
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h]
  int *v12; // [rsp+60h] [rbp-A8h]
  int *v13; // [rsp+68h] [rbp-A0h]
  int v14; // [rsp+70h] [rbp-98h] BYREF
  char v15; // [rsp+74h] [rbp-94h]
  int v16; // [rsp+98h] [rbp-70h] BYREF
  const char *v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  char v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  _BYTE v21[144]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+150h] [rbp+48h]
  __int64 v23; // [rsp+158h] [rbp+50h]
  __int64 v24; // [rsp+160h] [rbp+58h]
  __int64 v25; // [rsp+168h] [rbp+60h]
  _QWORD v26[4]; // [rsp+178h] [rbp+70h] BYREF
  int v27; // [rsp+198h] [rbp+90h]
  int *v28; // [rsp+1A0h] [rbp+98h]
  int *v29; // [rsp+1A8h] [rbp+A0h]
  int v30; // [rsp+1B0h] [rbp+A8h] BYREF
  char v31; // [rsp+1B4h] [rbp+ACh]
  int v32; // [rsp+1D8h] [rbp+D0h] BYREF
  const char *v33; // [rsp+1E0h] [rbp+D8h]
  __int64 v34; // [rsp+1E8h] [rbp+E0h]
  char v35; // [rsp+1F0h] [rbp+E8h]
  __int64 v36; // [rsp+1F8h] [rbp+F0h]
  _BYTE v37[144]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v38; // [rsp+290h] [rbp+188h]
  __int64 v39; // [rsp+298h] [rbp+190h]
  __int64 v40; // [rsp+2A0h] [rbp+198h]
  __int64 v41; // [rsp+2A8h] [rbp+1A0h]
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v1 = pv + 119;
  if ( !pv[119] )
  {
    v26[1] = 0LL;
    v26[2] = v26;
    v26[3] = 0LL;
    v28 = &v32;
    v27 = 0;
    v29 = &v30;
    v30 = 0;
    v31 = 0;
    v35 = 0;
    v32 = 0;
    v33 = "CortanaLauncherInvokeActivity";
    v34 = 0LL;
    v36 = 1LL;
    v38 = 0LL;
    v39 = 0LL;
    memset(v37, 0, sizeof(v37));
    v3 = pv[81];
    v40 = 0LL;
    v41 = 0LL;
    v26[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
    if ( *(_DWORD *)v3 != 1 )
    {
      v10[1] = 0LL;
      v10[2] = v10;
      v10[3] = 0LL;
      v12 = &v16;
      LODWORD(v11) = 0;
      v13 = &v14;
      v14 = 0;
      v15 = 0;
      v19 = 0;
      v16 = 0;
      v17 = "CortanaLauncherInvokeActivity";
      v18 = 0LL;
      v20 = 1LL;
      v22 = 0LL;
      v23 = 0LL;
      memset(v21, 0, sizeof(v21));
      v24 = 0LL;
      v25 = 0LL;
      v10[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::StartActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v10);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)v26, (__int64)v10, v4);
      v10[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    }
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_e5b0e77d43b437f923ed00fdd0f82a4b_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( !*v1 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x4BC,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v6);
    v7 = *v1;
    if ( *v1 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v7, &pftDueTime, 0, 0x3E8u);
    }
    if ( *v29 == 1 )
    {
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        v10,
        v26,
        0LL);
      v10[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)(pv + 75), (__int64)v10, v8);
      v10[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
      wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
    }
    v26[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
    wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
  }
}
