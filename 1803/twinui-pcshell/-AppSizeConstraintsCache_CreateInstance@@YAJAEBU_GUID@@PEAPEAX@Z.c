/*
 * XREFs of ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800739B4
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180073B20 (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall AppSizeConstraintsCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  void (*v7)(void); // rax
  _DWORD *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v14);
  v14 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v15);
    v5 = 110LL;
    v6 = -2147024882;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v6,
      v12);
    goto LABEL_15;
  }
  *((_DWORD *)v3 + 3) = 1;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppSizeConstraintsCache>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v7 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v7();
  }
  v16 = v4;
  *v4 = &AppSizeConstraintsCache::`vftable';
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v4);
  v14 = v4;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v16);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_0ef8c099_d96f_4be1_94ed_cd8beb90775b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a2 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v14;
    v6 = 0;
    *a2 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v5 = 111LL;
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v14);
  return (unsigned int)v6;
}
