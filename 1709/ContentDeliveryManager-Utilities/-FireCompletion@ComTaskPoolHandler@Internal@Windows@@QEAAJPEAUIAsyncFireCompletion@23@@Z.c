/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x1800066F4
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001F950 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
  DWORD CurrentThreadId; // eax
  int v10; // r15d
  Windows::Internal::ComTaskPoolHandler *v12; // [rsp+80h] [rbp+8h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v13; // [rsp+90h] [rbp+18h]
  __int64 v14; // [rsp+98h] [rbp+20h]

  v12 = this;
  v3 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    v13 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = a2;
    v12 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = 0LL;
    v14 = 0LL;
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v8 )
    {
      *(_QWORD *)v8 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
      v8[3] = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v6 = v12;
      }
      *(_QWORD *)v8 = off_1800C0650;
      *((_QWORD *)v8 + 2) = 0LL;
      if ( v8 + 4 != (_DWORD *)&v12 )
      {
        *((_QWORD *)v8 + 2) = a2;
        v6 = 0LL;
        v12 = 0LL;
      }
      v7 = (struct Windows::Internal::IComPoolTask *)v8;
    }
    CurrentThreadId = GetCurrentThreadId();
    v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v7, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v7 + 16LL))(v7);
    v5 = v10 >= 0;
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
