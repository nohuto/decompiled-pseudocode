/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___ @ 0x1801752FC
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180171BC4 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AA.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___(
        volatile signed __int32 *a1,
        struct IUnknownVtbl **a2)
{
  struct IUnknownVtbl *v4; // r14
  volatile signed __int32 *v5; // r15
  IUnknown *v6; // rdi
  IUnknown *v7; // rax
  IUnknown *v8; // rbx
  int v9; // ebx
  struct IUnknownVtbl *v10; // rcx
  struct IUnknownVtbl *v12; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v13; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  if ( a1 )
    _InterlockedIncrement(a1 + 11);
  v4 = *a2;
  v12 = *a2;
  if ( *a2 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 1))(v4);
  v5 = a1;
  v13 = a1;
  if ( a1 )
  {
    _InterlockedIncrement(a1 + 11);
    v5 = v13;
    v4 = v12;
  }
  v6 = 0LL;
  v7 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v7[1].lpVtbl) = 1;
    v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8->lpVtbl = (struct IUnknownVtbl *)off_1802B5BC8;
    v8[2].lpVtbl = v4;
    v4 = 0LL;
    v12 = 0LL;
    v8[3].lpVtbl = 0LL;
    if ( &v8[3] != (IUnknown *)&v13 )
    {
      v8[3].lpVtbl = (struct IUnknownVtbl *)a1;
      v5 = 0LL;
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
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v4 = v12;
  }
  if ( v4 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v4->QueryInterface + 2))(v4);
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
  v10 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 2))(v10);
  }
  return (unsigned int)v9;
}
