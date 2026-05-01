/*
 * XREFs of _lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_::__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_ @ 0x18018D1A4
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____::_1_::dtor$0 @ 0x18018CE5B (_CreationThreadDispatcher--RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_::__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
