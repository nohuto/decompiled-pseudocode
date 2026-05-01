/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180025E80
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001FCC0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180025BB0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  bool v5; // di
  struct Windows::Internal::IAsyncFireCompletion *v6; // rbx
  IUnknown *v7; // rdi
  IUnknown *v8; // rax
  IUnknown *v9; // r15
  DWORD CurrentThreadId; // eax
  __int64 v11; // r9
  int v12; // r12d
  Windows::Internal::ComTaskPoolHandler *v14; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v15; // [rsp+90h] [rbp+18h]
  __int64 v16; // [rsp+98h] [rbp+20h]

  v14 = this;
  v3 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    v15 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v14 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = 0LL;
    v16 = 0LL;
    v8 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = 0LL;
    if ( v8 )
    {
      v8->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
      HIDWORD(v8[1].lpVtbl) = 1;
      v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v6 = v14;
      }
      v8->lpVtbl = (struct IUnknownVtbl *)off_180048720;
      v8[2].lpVtbl = 0LL;
      if ( &v8[2] != (IUnknown *)&v14 )
      {
        v8[2].lpVtbl = (struct IUnknownVtbl *)a2;
        v6 = 0LL;
        v14 = 0LL;
      }
      v7 = v8;
      v9 = v8;
    }
    CurrentThreadId = GetCurrentThreadId();
    v12 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v11, v7);
    if ( v9 )
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
    v5 = v12 >= 0;
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  if ( !v5 )
  {
    ++*(_DWORD *)(v4 + 8);
    v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 24LL))(a2);
    --*(_DWORD *)(v4 + 8);
  }
  return v3;
}
