/*
 * XREFs of _lambda_e8a35662c22ddf2d2aefcf30b0620e03_::_lambda_invoker_cdecl_ @ 0x1C0118160
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0047E18 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 */

void __fastcall lambda_e8a35662c22ddf2d2aefcf30b0620e03_::_lambda_invoker_cdecl_(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
