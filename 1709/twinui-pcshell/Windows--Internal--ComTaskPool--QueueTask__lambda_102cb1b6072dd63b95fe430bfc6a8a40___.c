/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___ @ 0x18005DFCC
 * Callers:
 *     ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180059434 (-_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_C.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___(
        __int64 a1,
        __int64 a2,
        int a3,
        struct IUnknownVtbl **a4)
{
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  struct IUnknownVtbl *v9; // rcx
  struct IUnknownVtbl *v10; // rcx
  unsigned int v11; // ebx

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
    v8->lpVtbl = (struct IUnknownVtbl *)off_1801FDA10;
    v9 = *a4;
    v8[2].lpVtbl = *a4;
    if ( v9 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v9->QueryInterface + 1))(v9);
    v10 = a4[1];
    v8[3].lpVtbl = v10;
    if ( v10 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 1))(v10);
    LODWORD(v8[4].lpVtbl) = *((_DWORD *)a4 + 4);
    v6 = v8;
  }
  v11 = Windows::Internal::ComTaskPool::RunTask(3, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v11;
}
