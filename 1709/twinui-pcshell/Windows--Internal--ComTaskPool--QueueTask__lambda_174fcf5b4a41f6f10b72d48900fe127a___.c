/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_174fcf5b4a41f6f10b72d48900fe127a___ @ 0x180129774
 * Callers:
 *     _lambda_2eb1fbe1035c77226416228cd90d3016_::operator() @ 0x1801206D4 (_lambda_2eb1fbe1035c77226416228cd90d3016_--operator().c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_174fcf5b4a41f6f10b72d48900fe127a___(
        __int64 a1,
        struct IUnknownVtbl **a2)
{
  IUnknown *v3; // rdi
  IUnknown *v4; // rax
  IUnknown *v5; // rbx
  struct IUnknownVtbl **v6; // rcx
  struct IUnknownVtbl *v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx

  v3 = 0LL;
  v4 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_18020BA10;
    v5[2].lpVtbl = *a2;
    v6 = a2 + 1;
    v5[3].lpVtbl = 0LL;
    if ( &v5[3] != (IUnknown *)(a2 + 1) )
    {
      v5[3].lpVtbl = *v6;
      *v6 = 0LL;
    }
    v7 = a2[2];
    v5[4].lpVtbl = v7;
    if ( v7 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v7->QueryInterface + 1))(v7);
    v3 = v5;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  return v9;
}
