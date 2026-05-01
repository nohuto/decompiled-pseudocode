/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2)
{
  CAppViewManager *v3; // rbx
  CAppViewManager *v4; // r15
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v5; // rbp
  struct IAsyncCallback *v6; // rdi
  struct IAsyncCallback *v7; // rax
  struct IAsyncCallback *v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  CAppViewManager *v11; // [rsp+28h] [rbp-50h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v12; // [rsp+30h] [rbp-48h] BYREF

  v3 = (CAppViewManager *)((char *)this - 40);
  if ( this != (CAppViewManager *)40 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))((char *)this - 40);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = v3;
  v11 = v3;
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = a2;
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = 0LL;
  v7 = (struct IAsyncCallback *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v8 + 2) = 0LL;
    if ( (CAppViewManager **)((char *)v8 + 16) != &v11 )
    {
      *((_QWORD *)v8 + 2) = v3;
      v4 = 0LL;
    }
    *((_QWORD *)v8 + 3) = 0LL;
    if ( (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode **)((char *)v8 + 24) != &v12 )
    {
      *((_QWORD *)v8 + 3) = a2;
      v5 = 0LL;
    }
    *(_QWORD *)v8 = off_1801FC590;
    v6 = v8;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v4 + 16LL))(v4);
  v9 = CAppViewManager::_QueueOperation(v3, v6);
  v10 = (unsigned int)v9;
  if ( v9 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      (unsigned int)v9);
  if ( v6 )
    (*(void (__fastcall **)(struct IAsyncCallback *, __int64))(*(_QWORD *)v6 + 16LL))(v6, v10);
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 16LL))(
      a2,
      v10);
  if ( v3 )
    (*(void (__fastcall **)(CAppViewManager *, __int64))(*(_QWORD *)v3 + 16LL))(v3, v10);
}
