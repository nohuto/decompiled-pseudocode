/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___ @ 0x180116BF4
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800B0388 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_1800B0388.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  IUnknown *v6; // rbx
  IUnknown *v7; // rax
  IUnknown *v8; // rdi
  struct IUnknownVtbl *v9; // rax
  struct IUnknownVtbl *v10; // rax
  unsigned int v11; // edi

  v6 = 0LL;
  v7 = (IUnknown *)operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1802099B0;
    v8[2].lpVtbl = *(struct IUnknownVtbl **)a4;
    v8[4].lpVtbl = *(struct IUnknownVtbl **)(a4 + 16);
    v8[5].lpVtbl = *(struct IUnknownVtbl **)(a4 + 24);
    v9 = *(struct IUnknownVtbl **)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 16) = 0LL;
    v8[3].lpVtbl = v9;
    LOBYTE(v8[6].lpVtbl) = 0;
    *(_BYTE *)(a4 + 32) = 1;
    v8[8].lpVtbl = *(struct IUnknownVtbl **)(a4 + 48);
    v8[9].lpVtbl = *(struct IUnknownVtbl **)(a4 + 56);
    v10 = *(struct IUnknownVtbl **)(a4 + 40);
    *(_QWORD *)(a4 + 40) = 0LL;
    *(_QWORD *)(a4 + 56) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
    v8[7].lpVtbl = v10;
    LOBYTE(v8[10].lpVtbl) = 0;
    *(_BYTE *)(a4 + 64) = 1;
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v8[11],
      a4 + 72,
      *(_DWORD *)(a4 + 104) != 0);
    v8[11].lpVtbl = (struct IUnknownVtbl *)&CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
    v6 = v8;
  }
  v11 = Windows::Internal::ComTaskPool::RunTask(0, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v11;
}
