/*
 * XREFs of ?Initialize@CImmersiveApplicationTransitionHelper@@UEAAJPEAUIServiceProvider@@@Z @ 0x18003BC50
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Initialize(
        CImmersiveApplicationTransitionHelper *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  int v6; // ecx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  int v9; // ecx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveCharmsWindowManager,
         &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
         v2);
  if ( v6 >= 0 )
  {
    lpVtbl = a2->lpVtbl;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 6);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           v8);
    if ( v6 >= 0 )
    {
      v9 = RtlQueryWnfStateData(
             &v11,
             WNF_IMSN_LAUNCHERVISIBILITY,
             CImmersiveApplicationTransitionHelper::ImmersiveLauncherWNFCallback,
             (char *)this - 40,
             0LL);
      if ( v9 >= 0 )
        v9 = RtlSubscribeWnfStateChangeNotification(
               (char *)this + 56,
               WNF_IMSN_LAUNCHERVISIBILITY,
               v11,
               CImmersiveApplicationTransitionHelper::ImmersiveLauncherWNFCallback,
               (char *)this - 40,
               0LL,
               0,
               1);
      v6 = v9 | 0x10000000;
    }
  }
  *((_BYTE *)this + 16) = v6 >= 0;
  return (unsigned int)v6;
}
