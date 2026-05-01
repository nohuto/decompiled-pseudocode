/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  CAppViewManager *v3; // rbx
  struct IAsyncCallback *v4; // rsi
  struct IAsyncCallback *v5; // rax
  struct IAsyncCallback *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx

  v3 = (CAppViewManager *)((char *)this - 40);
  if ( this != (CAppViewManager *)40 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))((char *)this - 40);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = 0LL;
  v5 = (struct IAsyncCallback *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v6 + 2) = v3;
    if ( v3 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)v6 + 3) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)v6 = off_1801FC5B8;
    v4 = v6;
  }
  v7 = CAppViewManager::_QueueOperation(v3, v4);
  v8 = (unsigned int)v7;
  if ( v7 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v7);
  if ( v4 )
    (*(void (__fastcall **)(struct IAsyncCallback *, __int64))(*(_QWORD *)v4 + 16LL))(v4, v8);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v8);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v8);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v8);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v8);
}
