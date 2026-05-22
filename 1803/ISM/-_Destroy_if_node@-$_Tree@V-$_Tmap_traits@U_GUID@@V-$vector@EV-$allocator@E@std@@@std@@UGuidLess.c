/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x1800D089C
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@1@Z @ 0x1800D16E8 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_node.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_hint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&___ptr64_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_____ptr64______ptr64__::_1_::catch$123 @ 0x1800EA26E (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsigned_char____Wi.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::vector_unsigned_char_std::allocator_unsigned_char____Windows::Internal::Holographic::PropertyCache::GuidLess_std::allocator_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char________0___::_Insert_nohint_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______&___ptr64_std::_Tree_node_std::pair__GUID_const__std::vector_unsigned_char_std::allocator_unsigned_char______void_____ptr64______ptr64__::_1_::catch$86 @ 0x1800EA35C (_std--_Tree_std--_Tmap_traits__GUID_std--vector_unsigned_char_std--allocator_unsign_ea_1800EA35C.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rax

  v2 = a2[6];
  if ( v2 )
  {
    if ( a2[8] - v2 >= 0x1000 )
    {
      if ( (v2 & 0x1F) != 0 || (v4 = *(_QWORD *)(v2 - 8), v4 >= v2) || (v2 = v2 - v4 - 8, v2 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v2, a2);
        JUMPOUT(0x1800D0902LL);
      }
      v2 = v4;
    }
    operator delete((void *)v2);
    a2[6] = 0LL;
    a2[7] = 0LL;
    a2[8] = 0LL;
  }
  operator delete(a2);
}
