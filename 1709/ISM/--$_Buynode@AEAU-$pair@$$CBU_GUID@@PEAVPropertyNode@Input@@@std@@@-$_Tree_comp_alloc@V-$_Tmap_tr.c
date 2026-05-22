/*
 * XREFs of ??$_Buynode@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@1@@Z @ 0x180032FDC
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180032C68 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareT.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@XZ @ 0x180032D00 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpat.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buynode<std::pair<_GUID const,Input::PropertyNode *> &>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _OWORD *v4; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    v4 = result + 4;
    if ( result != (_QWORD *)-32LL )
    {
      *v4 = *(_OWORD *)a2;
      result[6] = *(_QWORD *)(a2 + 16);
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
