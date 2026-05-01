/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e77b698a891d4465973244f93bfcc37b___1_long_::Invoke @ 0x180046AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e77b698a891d4465973244f93bfcc37b___1_long_::Invoke(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( (_DWORD)a2 == -2147023496 || (_DWORD)a2 == -2147024890 )
  {
    a2 = 2147942487LL;
  }
  else if ( (_DWORD)a2 == -2147467260 )
  {
    a2 = 0LL;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 88LL))(*(_QWORD *)(a1 + 16), a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return v3;
}
