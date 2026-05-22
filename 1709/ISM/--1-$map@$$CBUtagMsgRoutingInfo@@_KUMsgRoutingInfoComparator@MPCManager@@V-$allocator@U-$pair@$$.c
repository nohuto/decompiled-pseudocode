/*
 * XREFs of ??1?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAA@XZ @ 0x18005D48C
 * Callers:
 *     _MPCManager::MPCManager_::_1_::dtor$7 @ 0x1800CF479 (_MPCManager--MPCManager_--_1_--dtor$7.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@0@Z @ 0x18005E490 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@_ea_18005E490.c)
 */

void __fastcall std::map<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>>::~map<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
    a1,
    &v2);
  operator delete(*a1);
}
