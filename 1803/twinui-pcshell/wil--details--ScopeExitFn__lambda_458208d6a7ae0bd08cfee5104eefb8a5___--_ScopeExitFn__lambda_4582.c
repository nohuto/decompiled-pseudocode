/*
 * XREFs of wil::details::ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___::_ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___ @ 0x1801EDFD8
 * Callers:
 *     __lambda_4f3507863b21d28a47ffae36e7c55767_::operator()_::_1_::dtor$0 @ 0x1801EE33D (__lambda_4f3507863b21d28a47ffae36e7c55767_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator() @ 0x1801EDFF0 (_lambda_458208d6a7ae0bd08cfee5104eefb8a5_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___::_ScopeExitFn__lambda_458208d6a7ae0bd08cfee5104eefb8a5___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator()();
  }
  return result;
}
