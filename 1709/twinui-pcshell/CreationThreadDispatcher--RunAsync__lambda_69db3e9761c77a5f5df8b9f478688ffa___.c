/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x1801750C8
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x1801719EC (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_::__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_ @ 0x180176110 (_lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_--__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(
        volatile signed __int32 *a1,
        struct IUnknownVtbl **a2)
{
  struct IUnknownVtbl *v4; // r14
  struct IUnknownVtbl *v5; // r12
  int v6; // r13d
  IUnknown *v7; // rdi
  IUnknown *v8; // rax
  IUnknown *v9; // rbx
  int v10; // ebx
  struct IUnknownVtbl *v11; // rcx
  _QWORD v13[2]; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  struct IUnknownVtbl *v15; // [rsp+60h] [rbp-18h]
  volatile signed __int32 *v16; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  struct IUnknownVtbl *v18; // [rsp+C0h] [rbp+48h]

  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  v4 = *a2;
  if ( *a2 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 1))(*a2);
  v13[0] = v4;
  v5 = a2[1];
  if ( v5 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 1))(a2[1]);
  v13[1] = v5;
  v6 = *((_DWORD *)a2 + 4);
  v14 = v6;
  v18 = a2[3];
  v15 = v18;
  v16 = a1;
  if ( a1 )
  {
    _InterlockedIncrement(a1 + 11);
    v18 = v15;
    v6 = v14;
  }
  v7 = 0LL;
  v8 = (IUnknown *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_1802B5BA0;
    if ( v4 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 1))(v4);
    v9[2].lpVtbl = v4;
    if ( v5 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 1))(v5);
    v9[3].lpVtbl = v5;
    LODWORD(v9[4].lpVtbl) = v6;
    v9[5].lpVtbl = v18;
    v9[6].lpVtbl = 0LL;
    if ( &v9[6] != (IUnknown *)&v16 )
    {
      v9[6].lpVtbl = (struct IUnknownVtbl *)a1;
      v16 = 0LL;
    }
    v7 = v9;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, v7, 0LL);
  if ( v7 )
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v10);
  lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_::__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd_(v13);
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
  v11 = a2[1];
  if ( v11 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v11->QueryInterface + 2))(v11);
  if ( *a2 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))(*a2)->QueryInterface + 2))(*a2);
  return (unsigned int)v10;
}
