/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1801CFDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180149804 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj<ConnectedStandbyHelper>::_Destroy(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
