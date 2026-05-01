/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x1801BFB60
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_std::shared_ptr_KBViewInfo______ptr64_std::shared_ptr_KBViewInfo______ptr64_std::allocator_std::shared_ptr_KBViewInfo______::_1_::catch$5 @ 0x180194F4A (_std--_Uninitialized_move_al_unchecked_std--shared_ptr_KBViewInfo______ptr64_std--shared_ptr_KBV.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
