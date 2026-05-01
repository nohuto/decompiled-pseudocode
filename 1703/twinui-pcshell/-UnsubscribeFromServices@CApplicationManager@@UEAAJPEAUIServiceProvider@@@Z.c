/*
 * XREFs of ?UnsubscribeFromServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000B480
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::UnsubscribeFromServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct IServiceProviderVtbl *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IServiceProviderVtbl *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v21 = 0LL;
  if ( *((_DWORD *)this + 162) )
  {
    lpVtbl = a2->lpVtbl;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))lpVtbl->QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, *((unsigned int *)this + 162));
  }
  v6 = *((_QWORD *)this + 56);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 176LL))(v6, *((unsigned int *)this + 167));
  if ( *((_DWORD *)this + 169) )
  {
    v19 = 0LL;
    v7 = a2->lpVtbl;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))v7->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           v8) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, *((unsigned int *)this + 169));
      *((_DWORD *)this + 169) = 0;
    }
    v9 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( *((_QWORD *)this + 85) )
  {
    v19 = 0LL;
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           &v19) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 56LL))(v19, *((_QWORD *)this + 85));
    v10 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v20 = 0LL;
  if ( *((_DWORD *)this + 168) )
  {
    v11 = a2->lpVtbl;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64))v11->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 40LL))(v20, *((unsigned int *)this + 168));
      *((_DWORD *)this + 168) = 0;
    }
  }
  v13 = *((_QWORD *)this + 52);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( *((_QWORD *)this + 53) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 32LL))(*((_QWORD *)this + 54));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
      *((_QWORD *)this + 49),
      *((_QWORD *)this + 53));
  }
  v14 = *((_QWORD *)this + 51);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v15 = *((_QWORD *)this + 58);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
