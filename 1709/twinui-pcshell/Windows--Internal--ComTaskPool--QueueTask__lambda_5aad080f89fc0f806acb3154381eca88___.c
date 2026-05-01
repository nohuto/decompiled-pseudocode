/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___ @ 0x1800C8EC4
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800C6AB8 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z @ 0x1800C3EE4 (--0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___(
        __int64 a1,
        __int64 a2,
        int a3,
        IUnknown *a4)
{
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  struct IUnknownVtbl **p_lpVtbl; // r8
  unsigned int v10; // ebx

  v6 = 0LL;
  v7 = (IUnknown *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1802046F8;
    v8[2].lpVtbl = 0LL;
    if ( &v8[2] != a4 )
    {
      v8[2].lpVtbl = a4->lpVtbl;
      a4->lpVtbl = 0LL;
    }
    p_lpVtbl = &a4[1].lpVtbl;
    v8[3].lpVtbl = 0LL;
    if ( &v8[3] != &a4[1] )
    {
      v8[3].lpVtbl = *p_lpVtbl;
      *p_lpVtbl = 0LL;
    }
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact(
      (__int64)&v8[4],
      (__int64)&a4[2]);
    v6 = v8;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v10;
}
