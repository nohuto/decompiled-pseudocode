/*
 * XREFs of _lambda_b9dfef47cb72abb824d2e234dc99521a_::operator() @ 0x180194A0C
 * Callers:
 *     _lambda_b9dfef47cb72abb824d2e234dc99521a_::_lambda_invoker_cdecl_ @ 0x180194A80 (_lambda_b9dfef47cb72abb824d2e234dc99521a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b9dfef47cb72abb824d2e234dc99521a_::operator()(__int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // r9
  __int64 *v5; // rax

  try
  {
    v3 = *a3;
    v4 = (__int64 *)(*a3)[1];
    v5 = *a3;
    while ( !*((_BYTE *)v4 + 25) )
    {
      if ( v4[4] >= a2 )
      {
        v5 = v4;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
      }
    }
    if ( v5 == v3 || a2 < v5[4] )
      v5 = *a3;
    if ( v5 != v3 )
      (*(void (__fastcall **)(__int64 *, __int64))(*a3[2] + 104))(a3[2], v5[5]);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return 1LL;
}
