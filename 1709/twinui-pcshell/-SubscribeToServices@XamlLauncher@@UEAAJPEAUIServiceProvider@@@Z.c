/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x18017DEBC (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@@012@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x1801842C4 (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180186280 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v18[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+88h] [rbp-80h]
  int *v20; // [rsp+90h] [rbp-78h]
  int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h] BYREF
  char v23; // [rsp+A4h] [rbp-64h]
  int v24; // [rsp+C8h] [rbp-40h] BYREF
  const char *v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  char v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-20h]
  _BYTE v29[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v30; // [rsp+180h] [rbp+78h]
  __int64 v31; // [rsp+188h] [rbp+80h]
  __int64 v32; // [rsp+190h] [rbp+88h]
  __int64 v33; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v17[1] = -2LL;
  v17[0] = a2;
  v18[1] = 0LL;
  v18[2] = v18;
  v18[3] = 0LL;
  v19 = 0;
  v20 = &v24;
  v21 = &v22;
  v22 = 0;
  v23 = 0;
  v27 = 0;
  v24 = 0;
  v25 = "SubscribeToServices";
  v26 = 0LL;
  v28 = 1LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v29, 0, sizeof(v29));
  v32 = 0LL;
  v33 = 0LL;
  v18[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  StartWindowTelemetry::SubscribeToServices::StartActivity((StartWindowTelemetry::SubscribeToServices *)v18);
  v15 = 0LL;
  lpVtbl = a2->lpVtbl;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 364LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v15 + 24LL))(
         v15,
         &unk_18022FFD0,
         1LL,
         ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56),
         (char *)this + 84);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 367LL;
    goto LABEL_9;
  }
  v16 = *((_QWORD *)this + 24);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
         (char *)this + 72,
         v17,
         &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 369LL;
    goto LABEL_9;
  }
  v6 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 9), (struct IUnknown *)this - 7);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 370LL;
    goto LABEL_9;
  }
  v14 = 0LL;
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 24))(
         *((_QWORD *)this + 24),
         &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
         &v14);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 372LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v14 + 24LL))(v14, a2);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 373LL;
    goto LABEL_14;
  }
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  v7 = 0;
LABEL_16:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_18:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v18[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return v7;
}
