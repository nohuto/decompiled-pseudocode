/*
 * XREFs of ?SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z @ 0x1801479BC
 * Callers:
 *     ?SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014AA20 (-SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180192594 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHost::SubscribeToServices(RTL_SRWLOCK *a1, __int64 *a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rax
  int v11; // eax
  RTL_SRWLOCK *v12; // rdi
  PVOID Ptr; // rcx
  int Instance; // eax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 *v17; // rax
  int v18; // eax
  PVOID v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  PVOID v22; // rdx
  struct IImmersiveShellHookService *v23; // rcx
  struct IApplicationViewIconLoader *v24; // rcx
  struct IApplicationViewCollection *v25; // rcx
  _QWORD v26[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 (__fastcall ***v28)(_QWORD, void *, _QWORD *); // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveShellHookService *v29; // [rsp+88h] [rbp+38h] BYREF
  struct IApplicationViewIconLoader *v30; // [rsp+90h] [rbp+40h] BYREF
  struct IApplicationViewCollection *v31; // [rsp+98h] [rbp+48h] BYREF

  v26[1] = -2LL;
  v4 = a1 + 11;
  AcquireSRWLockExclusive(a1 + 11);
  v26[2] = v4;
  v31 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v31);
  v7 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v5 + 24))(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v30 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, struct IApplicationViewIconLoader **))(*a2 + 24))(
         a2,
         &SID_ApplicationViewIconLoaderService,
         &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
         &v30);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v29 = 0LL;
  v9 = *a2;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v29);
  v11 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v9 + 24))(
          a2,
          &SID_ImmersiveShellHookService,
          &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
          v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = a1 + 7;
  Ptr = a1[7].Ptr;
  if ( Ptr )
  {
    v12->Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  Instance = AppViewDataSourceAdapter_CreateInstance(v31, v30, v29, 0LL, (struct IAppViewDataSourceAdapter **)&a1[7]);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  v28 = 0LL;
  v15 = (__int64 *)v12->Ptr;
  v16 = *v15;
  v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
  v18 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v16 + 24))(
          v15,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          v17);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = 0LL;
  v26[0] = 0LL;
  v20 = (__int64)v28;
  if ( v28 )
  {
    v21 = (**v28)(v28, &_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__, v26);
    if ( v21 < 0 )
      __abi_WinRTraiseException(v21);
    v20 = (__int64)v28;
    v19 = (PVOID)v26[0];
  }
  v26[3] = v19;
  if ( v19 != a1[8].Ptr )
  {
    if ( v19 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 8LL))(v19);
      v20 = (__int64)v28;
    }
    v22 = a1[8].Ptr;
    if ( v22 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v22 + 16LL))(a1[8].Ptr);
      v20 = (__int64)v28;
    }
    a1[8].Ptr = v19;
  }
  if ( v19 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = (__int64)v28;
  }
  if ( v20 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v23 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveShellHookService *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewIconLoader *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
