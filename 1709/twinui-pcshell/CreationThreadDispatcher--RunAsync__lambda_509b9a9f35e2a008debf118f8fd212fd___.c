/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___ @ 0x18017AD10
 * Callers:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x18017A968 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_ @ 0x18017AF20 (_lambda_41fef8c72f572c123401c5ddda9f27d3_--__lambda_41fef8c72f572c123401c5ddda9f27d3_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___(
        volatile signed __int32 *a1,
        struct IUnknownVtbl **a2)
{
  struct IUnknownVtbl *v4; // r14
  struct IUnknownVtbl *v5; // r15
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  int v9; // ebx
  struct IUnknownVtbl *v10; // rcx
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  v4 = *a2;
  if ( *a2 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 1))(*a2);
  v12[0] = v4;
  v5 = a2[1];
  if ( v5 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 1))(a2[1]);
  v12[1] = v5;
  v13 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 11);
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
    v8->lpVtbl = (struct IUnknownVtbl *)off_1802B6E58;
    if ( v4 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 1))(v4);
    v8[2].lpVtbl = v4;
    if ( v5 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 1))(v5);
    v8[3].lpVtbl = v5;
    v8[4].lpVtbl = 0LL;
    if ( &v8[4] != (IUnknown *)&v13 )
    {
      v8[4].lpVtbl = (struct IUnknownVtbl *)a1;
      v13 = 0LL;
    }
    v6 = v8;
  }
  v9 = Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, v6, 0LL);
  if ( v6 )
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v9);
  lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_(v12);
  if ( a1 )
  {
    if ( _InterlockedExchangeAdd(a1 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v10 = a2[1];
  if ( v10 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 2))(v10);
  if ( *a2 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))(*a2)->QueryInterface + 2))(*a2);
  return (unsigned int)v9;
}
