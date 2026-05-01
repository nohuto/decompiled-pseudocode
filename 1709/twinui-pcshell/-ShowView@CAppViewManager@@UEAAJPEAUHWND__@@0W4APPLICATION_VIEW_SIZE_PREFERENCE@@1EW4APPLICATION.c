/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION_VIEW_MODE@@MMPEAUIAsyncCallback@@@Z @ 0x18003EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::ShowView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  CAppViewManager *v10; // rbx
  struct IAsyncCallback *v11; // rsi
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // edi

  v10 = (CAppViewManager *)(a1 - 40);
  if ( a1 != 40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(a1 - 40);
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 8LL))(a10);
  if ( v10 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 8LL))(a10);
  v11 = 0LL;
  v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v13 + 2) = v10;
    if ( v10 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v13 + 3) = a2;
    *((_QWORD *)v13 + 4) = a3;
    v13[10] = a4;
    v13[11] = a5;
    *((_BYTE *)v13 + 48) = a6;
    v13[13] = a7;
    v13[14] = a8;
    v13[15] = a9;
    *((_QWORD *)v13 + 8) = a10;
    if ( a10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 8LL))(a10);
    *(_QWORD *)v13 = off_1801FC568;
    v11 = (struct IAsyncCallback *)v13;
  }
  v14 = CAppViewManager::_QueueOperation(v10, v11);
  if ( v11 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 16LL))(a10);
  if ( v10 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 16LL))(a10);
  if ( v10 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v10 + 16LL))(v10);
  return v14;
}
