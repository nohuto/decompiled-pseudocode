/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b__&___ptr64_1__1_::Invoke @ 0x180044990
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c350dc82613f10ce6b4faee88b01099b______ptr64_1__1_::Invoke(
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
