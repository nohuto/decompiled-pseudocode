/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&___ptr64__1_long_::Invoke @ 0x180139210
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390______ptr64__1_long_::Invoke(
        __int64 a1,
        int a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(a1 + 16) + 192LL))(
    *(_QWORD *)(a1 + 16),
    *(unsigned int *)(a1 + 24),
    *(unsigned int *)(a1 + 28),
    0LL,
    a2);
  if ( a2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)a2);
  return (unsigned int)a2;
}
