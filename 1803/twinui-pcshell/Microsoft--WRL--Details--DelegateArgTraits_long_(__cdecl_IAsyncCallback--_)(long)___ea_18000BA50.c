/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c__&___ptr64__1_long_::Invoke @ 0x18000BA50
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator() @ 0x1800083A0 (CDelayIAMOperations--CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_36d102d826199c3e9cf570def3c6f414___1_long_::Invoke @ 0x18000BAF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18000BAF0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c______ptr64__1_long_::Invoke(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD); // rax
  int v4; // eax
  int v5; // ebx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL);
  if ( v3 == Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_36d102d826199c3e9cf570def3c6f414___1_long_::Invoke )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_36d102d826199c3e9cf570def3c6f414___1_long_::Invoke(
           v2,
           0LL);
  else
    v4 = v3(v2, 0LL);
  **(_DWORD **)(a1 + 32) = v4;
  SetEvent(*(HANDLE *)(a1 + 24));
  v5 = **(_DWORD **)(a1 + 32);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
