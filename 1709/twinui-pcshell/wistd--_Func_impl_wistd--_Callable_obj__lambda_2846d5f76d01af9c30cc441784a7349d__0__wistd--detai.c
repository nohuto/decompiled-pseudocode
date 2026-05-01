/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_2846d5f76d01af9c30cc441784a7349d__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801B2EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_2846d5f76d01af9c30cc441784a7349d__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        int *a2)
{
  struct IUnknownVtbl *v3; // rsi
  int v4; // ebp
  IUnknown *v5; // rdi
  IUnknown *v6; // rax
  IUnknown *v7; // rbx
  struct IUnknownVtbl *v8; // rdi
  struct IUnknownVtbl *lpVtbl; // rcx
  DWORD CurrentThreadId; // eax
  int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *(struct IUnknownVtbl **)(a1 + 8);
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v3->QueryInterface + 1))(v3);
  v4 = *a2;
  v5 = 0LL;
  v6 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v6[1].lpVtbl) = 1;
    v6->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7->lpVtbl = (struct IUnknownVtbl *)off_1802111C8;
    v7[2].lpVtbl = 0LL;
    v8 = v3;
    v3 = 0LL;
    lpVtbl = v7[2].lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    v7[2].lpVtbl = v8;
    LODWORD(v7[3].lpVtbl) = v4;
    v5 = v7;
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v5, 0LL);
  if ( v5 )
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  if ( v3 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v3->QueryInterface + 2))(v3);
}
