/*
 * XREFs of wil::details::ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___::_ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___ @ 0x18011D8C8
 * Callers:
 *     __lambda_cc443415f5ecfa248de51aa242c4a017_::operator()_::_1_::dtor$7 @ 0x1800B0A88 (__lambda_cc443415f5ecfa248de51aa242c4a017_--operator()_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_55ad7508b1af255be614343213bead73_::operator() @ 0x18011DEDC (_lambda_55ad7508b1af255be614343213bead73_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___::_ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_55ad7508b1af255be614343213bead73_::operator()(a1);
  }
  return result;
}
