/*
 * XREFs of std::_Func_impl__lambda_bb99315a2e04bb315428571541c06609__std::allocator_int__void_::_Do_call @ 0x1800BE160
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 */

__int64 **__fastcall std::_Func_impl__lambda_bb99315a2e04bb315428571541c06609__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  __int64 *v2; // [rsp+30h] [rbp+8h] BYREF

  return std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
           (_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL),
           &v2,
           **(__int64 ***)(a1 + 16));
}
