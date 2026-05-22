/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800CF9A0
 * Callers:
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800C292C (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 *     ??A?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAAAEAV?$vector@EV?$allocator@E@std@@@1@AEBU_GUID@@@Z @ 0x1800C98F4 (--A-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Intern.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@XZ @ 0x18004296C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocato.c)
 */

__int64 *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
        __int64 *a1,
        __int64 a2,
        _OWORD **a3)
{
  __int64 *result; // rax
  _OWORD *v5; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    v5 = *a3;
    *((_OWORD *)result + 2) = **a3;
    result[6] = 0LL;
    result[7] = 0LL;
    result[8] = 0LL;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      (__int64)v5,
      result);
    throw;
  }
  return result;
}
