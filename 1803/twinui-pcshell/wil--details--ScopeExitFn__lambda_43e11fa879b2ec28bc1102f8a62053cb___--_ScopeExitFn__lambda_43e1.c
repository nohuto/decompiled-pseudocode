/*
 * XREFs of wil::details::ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___::_ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___ @ 0x1800A1210
 * Callers:
 *     __lambda_c3020acaf10c7144233ee4f2e713fc58_::operator()_::_1_::dtor$8 @ 0x1800A2028 (__lambda_c3020acaf10c7144233ee4f2e713fc58_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     _lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator() @ 0x1800A17AC (_lambda_43e11fa879b2ec28bc1102f8a62053cb_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___::_ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator()();
  }
  return result;
}
