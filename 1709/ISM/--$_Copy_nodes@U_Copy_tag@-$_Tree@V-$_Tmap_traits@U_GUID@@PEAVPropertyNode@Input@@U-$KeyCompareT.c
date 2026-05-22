/*
 * XREFs of ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180032C68
 * Callers:
 *     ??4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z @ 0x1800318F0 (--4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180032C68 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareT.c)
 * Callees:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180032C68 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareT.c)
 *     ??$_Buynode@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@1@@Z @ 0x180032FDC (--$_Buynode@AEAU-$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@-$_Tree_comp_alloc@V-$_Tmap_tr.c)
 */

_BYTE *__fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_tag>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  _BYTE *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r9

  v5 = (_BYTE *)*a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v6 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buynode<std::pair<_GUID const,Input::PropertyNode *> &>(
           a1,
           a2 + 32);
    *(_QWORD *)(v6 + 8) = a3;
    *(_BYTE *)(v6 + 24) = *(_BYTE *)(a2 + 24);
    if ( v5[25] )
      v5 = (_BYTE *)v6;
    try
    {
      LOBYTE(v7) = a4;
      *(_QWORD *)v6 = std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_tag>(
                        a1,
                        *(_QWORD *)a2,
                        v6,
                        v7);
      LOBYTE(v8) = a4;
      *(_QWORD *)(v6 + 16) = std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_tag>(
                               a1,
                               *(_QWORD *)(a2 + 16),
                               v6,
                               v8);
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        (__int64)a1,
        v5);
      throw;
    }
  }
  return v5;
}
