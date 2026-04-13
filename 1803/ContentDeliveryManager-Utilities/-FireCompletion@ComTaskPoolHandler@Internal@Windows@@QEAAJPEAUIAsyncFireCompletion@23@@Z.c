/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180006B28
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800226A0 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000462C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  struct Windows::Internal::IComPoolTask *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // r15
  DWORD CurrentThreadId; // eax
  int v11; // r12d
  Windows::Internal::ComTaskPoolHandler *v13; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v14; // [rsp+90h] [rbp+18h]
  __int64 v15; // [rsp+98h] [rbp+20h]

  v13 = this;
  v3 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    v14 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v13 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = 0LL;
    v15 = 0LL;
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = 0LL;
    if ( v8 )
    {
      *(_QWORD *)v8 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
      v8[3] = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v6 = v13;
      }
      *(_QWORD *)v8 = off_1800CE7A8;
      *((_QWORD *)v8 + 2) = 0LL;
      if ( v8 + 4 != (_DWORD *)&v13 )
      {
        *((_QWORD *)v8 + 2) = a2;
        v6 = 0LL;
        v13 = 0LL;
      }
      v7 = (struct Windows::Internal::IComPoolTask *)v8;
      v9 = v8;
    }
    CurrentThreadId = GetCurrentThreadId();
    v11 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v7, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
    v5 = v11 >= 0;
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
