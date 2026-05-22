/*
 * XREFs of _lambda_b4e39e6c596c6c16e4eb60f4733859c1_::_lambda_invoker_cdecl_ @ 0x1800AAB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_b4e39e6c596c6c16e4eb60f4733859c1_::_lambda_invoker_cdecl_(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 828) != (*(_BYTE *)(a1 + 820) != 0) || *(_DWORD *)(a1 + 832) != *(_DWORD *)(a1 + 824) )
  {
    *(_BYTE *)(a1 + 828) = *(_BYTE *)(a1 + 820) != 0;
    *(_DWORD *)(a1 + 832) = *(_DWORD *)(a1 + 824);
    MPCInputRouter::Update3DFocusWNF((MPCInputRouter *)a1);
  }
  return 0LL;
}
