/*
 * XREFs of ??1?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA@XZ @ 0x1800BF578
 * Callers:
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$5 @ 0x1800BF199 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$5.c)
 *     _CExclusiveModeListener::_CExclusiveModeListener_::_1_::dtor$5 @ 0x1800C5F31 (_CExclusiveModeListener--_CExclusiveModeListener_--_1_--dtor$5.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@0@Z @ 0x1800C2EE0 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

void __fastcall std::map<_GUID,HmdInfo>::~map<_GUID,HmdInfo>(_QWORD **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
    a1,
    &v2,
    **a1,
    *a1);
  std::_Deallocate(*a1, 1uLL, 0x48uLL);
}
