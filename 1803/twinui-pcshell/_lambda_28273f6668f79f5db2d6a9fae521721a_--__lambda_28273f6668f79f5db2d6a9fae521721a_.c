/*
 * XREFs of _lambda_28273f6668f79f5db2d6a9fae521721a_::__lambda_28273f6668f79f5db2d6a9fae521721a_ @ 0x18018D17C
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____::_1_::dtor$2 @ 0x18018CE73 (_CreationThreadDispatcher--RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_28273f6668f79f5db2d6a9fae521721a_::__lambda_28273f6668f79f5db2d6a9fae521721a_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 24);
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
