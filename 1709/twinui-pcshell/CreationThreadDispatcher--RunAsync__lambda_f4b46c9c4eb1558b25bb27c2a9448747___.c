/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AB08
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18017A7D8 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017977C (_lambda_f4b46c9c4eb1558b25bb27c2a9448747_--_lambda_f4b46c9c4eb1558b25bb27c2a9448747_.c)
 *     _lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_ @ 0x180179A04 (_lambda_6d9923a1ae258a03f662b6b89cb315c5_--__lambda_6d9923a1ae258a03f662b6b89cb315c5_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___(
        volatile signed __int32 *a1,
        __int64 *a2)
{
  IUnknown *v4; // rdi
  IUnknown *v5; // rax
  IUnknown *v6; // rbx
  struct IUnknownVtbl *v7; // rdi
  struct IUnknownVtbl *v8; // rdi
  struct IUnknownVtbl *v9; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct IUnknownVtbl *v14; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknownVtbl *v15; // [rsp+48h] [rbp-18h]
  struct IUnknownVtbl *v16; // [rsp+50h] [rbp-10h]
  volatile signed __int32 *v17; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  lambda_f4b46c9c4eb1558b25bb27c2a9448747_::_lambda_f4b46c9c4eb1558b25bb27c2a9448747_(&v14, a2);
  v17 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  v4 = 0LL;
  v5 = (IUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v5[1].lpVtbl) = 1;
    v5->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6->lpVtbl = (struct IUnknownVtbl *)off_1802B6F60;
    v7 = v14;
    if ( v14 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v14->QueryInterface + 1))(v14);
    v6[2].lpVtbl = v7;
    v8 = v15;
    if ( v15 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v15->QueryInterface + 1))(v15);
    v6[3].lpVtbl = v8;
    v9 = v16;
    if ( v16 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v16->QueryInterface + 1))(v16);
    v6[4].lpVtbl = v9;
    v6[5].lpVtbl = 0LL;
    if ( &v6[5] != (IUnknown *)&v17 )
    {
      v6[5].lpVtbl = (struct IUnknownVtbl *)a1;
      v17 = 0LL;
    }
    v4 = v6;
  }
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, 0, 0, v4, 0LL);
  if ( v4 )
    ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v10);
  lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_(&v14);
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
  v11 = a2[2];
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = a2[1];
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return (unsigned int)v10;
}
