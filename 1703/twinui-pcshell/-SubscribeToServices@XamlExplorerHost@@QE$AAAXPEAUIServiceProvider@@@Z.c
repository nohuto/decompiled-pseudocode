/*
 * XREFs of ?SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z @ 0x18011D74C
 * Callers:
 *     ?SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801204E0 (-SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHost::SubscribeToServices(RTL_SRWLOCK *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  int v7; // eax
  struct IApplicationViewIconLoader *v8; // rbx
  struct IApplicationViewCollection *v9; // rdi
  __int64 *v10; // rax
  const struct _GUID *v11; // r9
  int Instance; // eax
  RTL_SRWLOCK *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  PVOID Ptr; // rdx
  struct IApplicationViewIconLoader *v17; // rcx
  struct IApplicationViewCollection *v18; // rcx
  PSRWLOCK SRWLock[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, RTL_SRWLOCK **); // [rsp+80h] [rbp+28h] BYREF
  struct IApplicationViewIconLoader *v22; // [rsp+88h] [rbp+30h] BYREF
  struct IApplicationViewCollection *v23; // [rsp+90h] [rbp+38h] BYREF
  RTL_SRWLOCK *v24; // [rsp+98h] [rbp+40h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::srwlock::lock_exclusive(a1 + 10, SRWLock);
  v23 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v23);
  v6 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v4 + 24))(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, struct IApplicationViewIconLoader **))(*a2 + 24))(
         a2,
         &SID_ApplicationViewIconLoaderService,
         &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
         &v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v21 = 0LL;
  v8 = v22;
  v9 = v23;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
  Instance = AppViewDataSource_CreateInstance(v9, v8, 0LL, v11, (void **)v10);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  v13 = 0LL;
  v24 = 0LL;
  v14 = (__int64)v21;
  if ( v21 )
  {
    v15 = (**v21)(v21, &GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0, &v24);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    v14 = (__int64)v21;
    v13 = v24;
  }
  SRWLock[2] = v13;
  if ( v13 != a1[7].Ptr )
  {
    if ( v13 )
    {
      (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 1))(v13);
      v14 = (__int64)v21;
    }
    Ptr = a1[7].Ptr;
    if ( Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(a1[7].Ptr);
      v14 = (__int64)v21;
    }
    a1[7].Ptr = v13;
  }
  if ( v13 )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 2))(v13);
    v14 = (__int64)v21;
  }
  if ( v14 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewIconLoader *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
