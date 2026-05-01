/*
 * XREFs of ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180151F90
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014B500 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014C190 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveMonitorHelper::SetSite(ImmersiveMonitorHelper *this, struct IUnknown *a2)
{
  IUnknown *v4; // rbx
  __int64 *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 16) )
    {
      ppvOut = 0LL;
      v4 = (IUnknown *)*((_QWORD *)this + 1);
      v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             v4,
             (const GUID *const)&SID_IImmersiveMonitorService,
             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
             (void **)v5) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 32LL))(ppvOut, *((unsigned int *)this + 16));
      *((_DWORD *)this + 16) = 0;
      v6 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    if ( *((_DWORD *)this + 17) )
    {
      ppvOut = 0LL;
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 1),
             &IID_IActiveZBandNotificationForMonitorService,
             &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 32LL))(ppvOut, *((unsigned int *)this + 17));
      *((_DWORD *)this + 17) = 0;
      v7 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    v8 = *((_QWORD *)this + 7);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( *((struct IUnknown **)this + 1) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v9 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
