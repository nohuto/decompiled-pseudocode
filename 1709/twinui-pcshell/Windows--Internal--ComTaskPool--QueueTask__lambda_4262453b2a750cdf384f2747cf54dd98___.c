/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___ @ 0x180103C9C
 * Callers:
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180100950 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  struct IUnknownVtbl **v9; // r8
  unsigned int v10; // ebx

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
    v8->lpVtbl = (struct IUnknownVtbl *)off_180208830;
    v8[2].lpVtbl = 0LL;
    if ( &v8[2] != (IUnknown *)a4 )
    {
      v8[2].lpVtbl = *(struct IUnknownVtbl **)a4;
      *(_QWORD *)a4 = 0LL;
    }
    v9 = (struct IUnknownVtbl **)(a4 + 8);
    v8[3].lpVtbl = 0LL;
    if ( &v8[3] != (IUnknown *)(a4 + 8) )
    {
      v8[3].lpVtbl = *v9;
      *v9 = 0LL;
    }
    LODWORD(v8[4].lpVtbl) = *(_DWORD *)(a4 + 16);
    v6 = v8;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(0, 2u, a3, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  return v10;
}
