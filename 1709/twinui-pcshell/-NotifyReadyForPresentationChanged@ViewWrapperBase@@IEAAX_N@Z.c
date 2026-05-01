/*
 * XREFs of ?NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z @ 0x18014159C
 * Callers:
 *     std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Do_call @ 0x180145670 (std--_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std--allocator_int__void_bool_--_Do_ca.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewWrapperBase::NotifyReadyForPresentationChanged(ViewWrapperBase *this, char a2)
{
  struct IUnknownVtbl *v4; // rsi
  int v5; // r14d
  IUnknown *v6; // rbx
  IUnknown *v7; // rax
  IUnknown *v8; // rdi
  char *v9; // rbx
  char *v10; // r14
  int v11; // r13d
  IUnknown *v12; // rsi
  IUnknown *v13; // rax
  IUnknown *v14; // rdi
  char *v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]

  if ( a2 && !*((_BYTE *)this + 509) )
  {
    *((_BYTE *)this + 509) = 1;
    v4 = (struct IUnknownVtbl *)*((_QWORD *)this + 33);
    v5 = *((_DWORD *)this + 46);
    v6 = 0LL;
    v7 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v7[1].lpVtbl) = 1;
      v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v8->lpVtbl = (struct IUnknownVtbl *)off_18020D300;
      v8[2].lpVtbl = v4;
      v6 = v8;
    }
    Windows::Internal::ComTaskPool::RunTask(0, 0, v5, 0, v6, 0LL);
    if ( v6 )
      ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  }
  v9 = (char *)this + 32;
  if ( !this )
    v9 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = v9;
  v15 = v9;
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
  v16 = a2;
  v11 = *((_DWORD *)this + 46);
  v12 = 0LL;
  v13 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    v13->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v13[1].lpVtbl) = 1;
    v13->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v14->lpVtbl = (struct IUnknownVtbl *)off_18020D220;
    v14[2].lpVtbl = (struct IUnknownVtbl *)this;
    v14[3].lpVtbl = 0LL;
    if ( &v14[3] != (IUnknown *)&v15 )
    {
      v14[3].lpVtbl = (struct IUnknownVtbl *)v9;
      v10 = 0LL;
      v15 = 0LL;
    }
    LOBYTE(v14[4].lpVtbl) = a2;
    v12 = v14;
  }
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v11, 0, v12, 0LL);
  if ( v12 )
    ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
}
