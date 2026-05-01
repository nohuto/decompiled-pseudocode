/*
 * XREFs of ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x180244FCC
 * Callers:
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch$103 @ 0x18023B7C3 (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo__ea_18023B7C3.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  std::_Ref_count_base *v5; // rcx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(std::_Ref_count_base **)(v4 + 8);
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
}
