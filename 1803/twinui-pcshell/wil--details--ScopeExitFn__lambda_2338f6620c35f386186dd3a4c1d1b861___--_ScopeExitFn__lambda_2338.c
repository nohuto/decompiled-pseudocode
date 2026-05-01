/*
 * XREFs of wil::details::ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___::_ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___ @ 0x1801C84E4
 * Callers:
 *     __lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator()_::_1_::dtor$0 @ 0x1801C93C2 (__lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_2338f6620c35f386186dd3a4c1d1b861_::operator() @ 0x1801C8D7C (_lambda_2338f6620c35f386186dd3a4c1d1b861_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___::_ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_2338f6620c35f386186dd3a4c1d1b861_::operator()();
  }
  return result;
}
