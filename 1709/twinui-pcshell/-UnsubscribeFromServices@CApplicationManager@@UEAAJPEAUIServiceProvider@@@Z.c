/*
 * XREFs of ?UnsubscribeFromServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000B640
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v20[1] = -2LL;
  v20[0] = 0LL;
  if ( *((_DWORD *)this + 176) )
  {
    lpVtbl = a2->lpVtbl;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v20);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))lpVtbl->QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           v5) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v20[0] + 32LL))(v20[0], *((unsigned int *)this + 176));
  }
  v6 = *((_QWORD *)this + 62);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 176LL))(v6, *((unsigned int *)this + 181));
  if ( *((_DWORD *)this + 183) )
  {
    v21 = 0LL;
    v7 = a2->lpVtbl;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64))v7->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           v8) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, *((unsigned int *)this + 183));
      *((_DWORD *)this + 183) = 0;
    }
    v9 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( *((_QWORD *)this + 92) )
  {
    v22 = 0LL;
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           &v22) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, *((_QWORD *)this + 92));
    v10 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v23 = 0LL;
  if ( *((_DWORD *)this + 182) )
  {
    v11 = a2->lpVtbl;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64))v11->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 40LL))(v23, *((unsigned int *)this + 182));
      *((_DWORD *)this + 182) = 0;
    }
  }
  v13 = *((_QWORD *)this + 58);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 55) + 32LL))(
      *((_QWORD *)this + 55),
      *((_QWORD *)this + 59));
  }
  v14 = *((_QWORD *)this + 57);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v15 = *((_QWORD *)this + 64);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = *((_QWORD *)this + 87);
  *((_QWORD *)this + 87) = 0LL;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0LL;
}
