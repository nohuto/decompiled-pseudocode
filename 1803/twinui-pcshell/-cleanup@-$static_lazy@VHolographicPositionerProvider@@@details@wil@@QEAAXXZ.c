/*
 * XREFs of ?cleanup@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAXXZ @ 0x1801B3E5C
 * Callers:
 *     _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_ @ 0x1801AA170 (_lambda_c2de52b76b02464b55ca8bf6e2d5d141_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::static_lazy<HolographicPositionerProvider>::cleanup(__int64 a1)
{
  int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`HolographicPositionerProvider::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
