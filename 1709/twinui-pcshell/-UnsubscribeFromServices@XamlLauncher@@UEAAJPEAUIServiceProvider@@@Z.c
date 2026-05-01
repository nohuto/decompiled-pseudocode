/*
 * XREFs of ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ @ 0x18017E93C (-StartActivity@UnsubscribeFromServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x180181174 (-UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x180181FD0 (-UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180186280 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::UnsubscribeFromServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  IUnknown *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  ImmersiveMonitorHelper *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v20[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v21[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  int *v23; // [rsp+70h] [rbp-98h]
  int *v24; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h] BYREF
  char v26; // [rsp+84h] [rbp-84h]
  int v27; // [rsp+A8h] [rbp-60h] BYREF
  const char *v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  char v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h]
  _BYTE v32[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+160h] [rbp+58h]
  __int64 v34; // [rsp+168h] [rbp+60h]
  __int64 v35; // [rsp+170h] [rbp+68h]
  __int64 v36; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v20[1] = -2LL;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  LODWORD(v22) = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "UnsubscribeFromServices";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  StartWindowTelemetry::UnsubscribeFromServices::StartActivity((StartWindowTelemetry::UnsubscribeFromServices *)v21);
  if ( *((_DWORD *)this + 21) )
  {
    v20[0] = 0LL;
    v3 = (IUnknown *)*((_QWORD *)this - 5);
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v20);
    if ( IUnknown_QueryService(
           v3,
           (const GUID *const)&SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           (void **)v4) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20[0] + 32LL))(v20[0], *((unsigned int *)this + 21));
      *((_DWORD *)this + 21) = 0;
    }
    v5 = v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  XamlLauncher::UninitializeStartExperienceManager((XamlLauncher *)((char *)this - 56));
  XamlLauncher::UninitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56));
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = ImmersiveMonitorHelper::SetSite(v7, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 541LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_30;
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)this + 9);
    if ( v11 )
    {
      *((_QWORD *)this + 9) = 0LL;
      if ( _InterlockedExchangeAdd(v11 + 15, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 40LL))(v11, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v12 = *((_QWORD *)this + 24);
  if ( !v12 )
  {
LABEL_29:
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    v9 = 0;
    goto LABEL_30;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 547LL;
    goto LABEL_18;
  }
  *(_QWORD *)v19 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))this + 24))(
          *((_QWORD *)this + 24),
          &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
          v19);
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = 549LL;
    goto LABEL_23;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v19 + 24LL))(*(_QWORD *)v19, 0LL);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v16 = *((_QWORD *)this + 24);
    if ( v16 )
    {
      *((_QWORD *)this + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_29;
  }
  v14 = 550LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v13);
  v15 = *(_QWORD *)v19;
  if ( *(_QWORD *)v19 )
  {
    *(_QWORD *)v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_30:
  v21[0] = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return v9;
}
