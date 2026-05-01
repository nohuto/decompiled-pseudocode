/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180153FE8
 * Callers:
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180152D30 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_ @ 0x180153050 (_lambda_e5d643bc643c8a09454132ff8d011188_--__lambda_e5d643bc643c8a09454132ff8d011188_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___(
        volatile signed __int32 *a1,
        __int64 *a2)
{
  __int64 v4; // r14
  struct IUnknownVtbl *v5; // r12
  volatile signed __int32 *v6; // r15
  IUnknown *v7; // rbx
  IUnknown *v8; // rax
  IUnknown *v9; // rdi
  int v10; // edi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  struct IUnknownVtbl *v13; // [rsp+48h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  v4 = *a2;
  v12 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 52));
    v4 = v12;
  }
  v5 = (struct IUnknownVtbl *)a2[1];
  v13 = v5;
  if ( v5 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 1))(v5);
  v6 = a1;
  v14 = a1;
  if ( a1 )
  {
    _InterlockedIncrement(a1 + 11);
    v6 = v14;
    v5 = v13;
    v4 = v12;
  }
  v7 = 0LL;
  v8 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_1802B3620;
    v9[2].lpVtbl = 0LL;
    if ( &v9[2] != (IUnknown *)&v12 )
    {
      v9[2].lpVtbl = (struct IUnknownVtbl *)v4;
      v12 = 0LL;
    }
    v9[3].lpVtbl = 0LL;
    if ( &v9[3] != (IUnknown *)&v13 )
    {
      v9[3].lpVtbl = v5;
      v13 = 0LL;
    }
    v9[4].lpVtbl = 0LL;
    if ( &v9[4] != (IUnknown *)&v14 )
    {
      v9[4].lpVtbl = (struct IUnknownVtbl *)a1;
      v6 = 0LL;
      v14 = 0LL;
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
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v10);
  if ( v6 )
  {
    v14 = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)&v12);
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
  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)a2);
  return (unsigned int)v10;
}
