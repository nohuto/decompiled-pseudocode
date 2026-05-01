/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__&___ptr64__1_long_::Invoke @ 0x1800469D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b______ptr64__1_long_::Invoke(
        __int64 a1)
{
  int v2; // ebx

  **(_DWORD **)(a1 + 32) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                             *(_QWORD *)(a1 + 16),
                             0LL);
  SetEvent(*(HANDLE *)(a1 + 24));
  v2 = **(_DWORD **)(a1 + 32);
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return (unsigned int)v2;
}
