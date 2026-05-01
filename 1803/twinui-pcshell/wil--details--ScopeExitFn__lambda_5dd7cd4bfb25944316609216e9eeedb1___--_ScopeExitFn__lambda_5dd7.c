/*
 * XREFs of wil::details::ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___::_ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___ @ 0x1801E2D7C
 * Callers:
 *     __lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()_::_1_::dtor$0 @ 0x1801E3103 (__lambda_5eeb3274d8dd6409222f94091fb661d1_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator() @ 0x1801E2DC0 (_lambda_5dd7cd4bfb25944316609216e9eeedb1_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___::_ScopeExitFn__lambda_5dd7cd4bfb25944316609216e9eeedb1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator()();
  }
  return result;
}
