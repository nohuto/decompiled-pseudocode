/*
 * XREFs of ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::SwitchViews(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  CAppViewManager *v8; // rbx
  struct IAsyncCallback *v9; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // edi

  v8 = (CAppViewManager *)(a1 - 40);
  if ( a1 != 40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 40);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v9 = 0LL;
  v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v11 + 2) = v8;
    if ( v8 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v11 + 3) = a2;
    *((_QWORD *)v11 + 4) = a3;
    v11[10] = a4;
    *((_QWORD *)v11 + 6) = a5;
    if ( a5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    *(_QWORD *)v11 = off_1801FC518;
    v9 = (struct IAsyncCallback *)v11;
  }
  v12 = CAppViewManager::_QueueOperation(v8, v9);
  if ( v9 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 16LL))(v8);
  return v12;
}
