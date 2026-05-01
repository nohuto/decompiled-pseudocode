/*
 * XREFs of ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014C190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024BF0 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@U-$Implements@U-$.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180148064 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18014C428 (-UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18014D07C (-UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014E3C4 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014EA54 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$Start@$$V@UnsubscribeFromServices@StartWindowTelemetry@@SA?AV01@XZ @ 0x18014FAD4 (--$Start@$$V@UnsubscribeFromServices@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180151F90 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D8h]
  _QWORD v22[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v21 = -2LL;
  StartWindowTelemetry::UnsubscribeFromServices::Start<>((StartWindowTelemetry::UnsubscribeFromServices *)v22);
  if ( *((_DWORD *)this + 19) )
  {
    *(_QWORD *)v20 = 0LL;
    v3 = (IUnknown *)*((_QWORD *)this - 6);
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v20);
    if ( IUnknown_QueryService(
           v3,
           (const GUID *const)&SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           (void **)v4) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 32LL))(*(_QWORD *)v20, *((unsigned int *)this + 19));
      *((_DWORD *)this + 19) = 0;
    }
    v5 = *(_QWORD *)v20;
    if ( *(_QWORD *)v20 )
    {
      *(_QWORD *)v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  XamlLauncher::UninitializeStartExperienceManager((XamlLauncher *)((char *)this - 56));
  XamlLauncher::UninitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56));
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = ImmersiveMonitorHelper::SetSite(v7, 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 650LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_32;
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)this + 7);
    if ( v11 )
    {
      *((_QWORD *)this + 7) = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    }
  }
  if ( *((_DWORD *)this + 20) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    *((_DWORD *)this + 20) = 0;
  }
  v12 = *((_QWORD *)this + 8);
  if ( v12 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 26);
  if ( !v13 )
  {
LABEL_31:
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v9 = 0;
    goto LABEL_32;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 663LL;
    goto LABEL_20;
  }
  *(_QWORD *)v20 = 0LL;
  v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))this + 26))(
          *((_QWORD *)this + 26),
          &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
          v20);
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = 665LL;
    goto LABEL_25;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 24LL))(*(_QWORD *)v20, 0LL);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v17 = *((_QWORD *)this + 26);
    if ( v17 )
    {
      *((_QWORD *)this + 26) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = *(_QWORD *)v20;
    if ( *(_QWORD *)v20 )
    {
      *(_QWORD *)v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_31;
  }
  v15 = 666LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v14);
  v16 = *(_QWORD *)v20;
  if ( *(_QWORD *)v20 )
  {
    *(_QWORD *)v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_32:
  v22[0] = &StartWindowTelemetry::UnsubscribeFromServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
  return v9;
}
