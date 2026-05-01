/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___ @ 0x180129928
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        struct IUnknownVtbl **a6)
{
  IUnknown *v7; // rdi
  IUnknown *v8; // rax
  IUnknown *v9; // rbx
  struct IUnknownVtbl **v10; // rcx
  unsigned int v11; // ebx

  v7 = 0LL;
  v8 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_18020BA38;
    v9[2].lpVtbl = *a6;
    v10 = a6 + 1;
    v9[3].lpVtbl = 0LL;
    if ( &v9[3] != (IUnknown *)(a6 + 1) )
    {
      v9[3].lpVtbl = *v10;
      *v10 = 0LL;
    }
    v9[4].lpVtbl = a6[2];
    v7 = v9;
  }
  v11 = Windows::Internal::ComTaskPool::RunTask(3, 0, a3, 0x3E80u, v7, 0LL);
  if ( v7 )
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  return v11;
}
