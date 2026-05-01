/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___ @ 0x1800CD78C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800CDF90 (wistd--_Func_impl_wistd--_Callable_obj__lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b__0__wistd--detai.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___(
        __int64 a1,
        struct IUnknownVtbl **a2)
{
  IUnknown *v3; // rdi
  IUnknown *v4; // rax
  IUnknown *v5; // rbx
  struct IUnknownVtbl *v6; // rdi
  struct IUnknownVtbl *lpVtbl; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ebx

  v3 = 0LL;
  v4 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v4[1].lpVtbl) = 1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->lpVtbl = (struct IUnknownVtbl *)off_180204B78;
    v5[2].lpVtbl = 0LL;
    v6 = *a2;
    *a2 = 0LL;
    lpVtbl = v5[2].lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    v5[2].lpVtbl = v6;
    v3 = v5;
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  return v9;
}
