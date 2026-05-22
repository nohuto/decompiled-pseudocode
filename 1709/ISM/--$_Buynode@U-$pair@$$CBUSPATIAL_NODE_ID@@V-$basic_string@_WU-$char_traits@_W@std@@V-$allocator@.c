/*
 * XREFs of ??$_Buynode@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x1800BE22C
 * Callers:
 *     ??$_Insert_at@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Nil@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Nil@1@@Z @ 0x1800BD9BC (--$_Insert_at@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@XZ @ 0x180029908 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Buynode<std::pair<SPATIAL_NODE_ID const,std::wstring>>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _OWORD *v4; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    v4 = result + 4;
    if ( result != (_QWORD *)-32LL )
    {
      *v4 = *(_OWORD *)a2;
      result[8] = 0LL;
      result[9] = 0LL;
      *((_OWORD *)result + 3) = *(_OWORD *)(a2 + 16);
      *((_OWORD *)result + 4) = *(_OWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 40) = 7LL;
      *(_WORD *)(a2 + 16) = 0;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v4,
      result);
    throw;
  }
  return result;
}
