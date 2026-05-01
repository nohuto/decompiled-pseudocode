/*
 * XREFs of _lambda_b9dfef47cb72abb824d2e234dc99521a_::operator() @ 0x1802398B0
 * Callers:
 *     _lambda_b9dfef47cb72abb824d2e234dc99521a_::_lambda_invoker_cdecl_ @ 0x180238B20 (_lambda_b9dfef47cb72abb824d2e234dc99521a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b9dfef47cb72abb824d2e234dc99521a_::operator()(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // r11
  unsigned __int64 v8; // r10

  try
  {
    v4 = (__int64 *)*a3;
    v5 = *(__int64 **)(*a3 + 8);
    v6 = (__int64 *)*a3;
    if ( *((_BYTE *)v5 + 25) )
      goto LABEL_11;
    do
    {
      v7 = v5;
      v8 = v5[4];
      if ( v8 >= a2 )
        v5 = (__int64 *)*v5;
      else
        v5 = (__int64 *)v5[2];
      if ( v8 >= a2 )
        v6 = v7;
    }
    while ( !*((_BYTE *)v5 + 25) );
    if ( v6 == v4 || a2 < v6[4] )
LABEL_11:
      v6 = (__int64 *)*a3;
    if ( v6 != v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a3[2] + 104LL))(a3[2], v6[5]);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return 1LL;
}
