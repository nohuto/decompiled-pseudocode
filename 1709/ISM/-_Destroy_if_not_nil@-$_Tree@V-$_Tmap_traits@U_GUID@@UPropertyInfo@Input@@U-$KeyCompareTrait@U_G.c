/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@Z @ 0x1800348CC
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@1@Z @ 0x1800348EC (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_G.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Insert_hint_std::pair__GUID_const__Input::PropertyTypeInfo__&___ptr64_std::_Tree_node_std::pair__GUID_const__Input::PropertyTypeInfo__void_____ptr64______ptr64__::_1_::catch$117 @ 0x1800CE3C8 (_std--_Tree_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCompareTrait__GUID__std--a.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Insert_nohint_std::pair__GUID_const__Input::PropertyTypeInfo__&___ptr64_std::_Tree_node_std::pair__GUID_const__Input::PropertyTypeInfo__void_____ptr64______ptr64__::_1_::catch$57 @ 0x1800CE42B (_std--_Tree_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCompareTrait__ea_1800CE42B.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        unsigned __int64 *a2)
{
  std::wstring::_Tidy_deallocate(a2 + 8);
  operator delete(a2);
}
