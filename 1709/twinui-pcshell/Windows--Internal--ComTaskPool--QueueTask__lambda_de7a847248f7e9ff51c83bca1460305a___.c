/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___ @ 0x180061A28
 * Callers:
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x180061BAC (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___(
        __int64 a1,
        __int64 a2,
        int a3,
        struct IUnknownVtbl **a4)
{
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  struct IUnknownVtbl *v9; // rcx
  struct IUnknownVtbl *v10; // rdx
  signed __int64 Release; // rax
  signed __int64 v12; // rtt
  unsigned int v13; // ebx

  v6 = 0LL;
  v7 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1801FE500;
    v8[2].lpVtbl = *a4;
    v9 = a4[1];
    v8[3].lpVtbl = v9;
    if ( v9 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v9->QueryInterface + 1))(v9);
    v10 = a4[2];
    v8[4].lpVtbl = v10;
    if ( v10 )
    {
      Release = (signed __int64)v10[2].Release;
      while ( Release >= 0 )
      {
        v12 = Release;
        Release = _InterlockedCompareExchange64((volatile signed __int64 *)&v10[2].Release, Release + 1, Release);
        if ( v12 == Release )
          goto LABEL_11;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * Release + 16));
    }
LABEL_11:
    v6 = v8;
  }
  v13 = Windows::Internal::ComTaskPool::RunTask(3, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v13;
}
