/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x180034240
 * Callers:
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x18003405C (--1-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$all.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x180034240 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@Z @ 0x180034240 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U-$KeyCompareTrait@U_GUID@@@3@V.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Erase(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 v4; // rdi

  v2 = a2;
  v4 = (unsigned __int64)a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Erase(
        a1,
        *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)v4;
      std::wstring::_Tidy_deallocate(v2 + 8);
      operator delete(v2);
      v2 = (unsigned __int64 *)v4;
    }
    while ( !*(_BYTE *)(v4 + 25) );
  }
}
