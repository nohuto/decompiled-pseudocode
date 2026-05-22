/*
 * XREFs of wil::details::ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___::_ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___ @ 0x1800B9038
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$1 @ 0x1800D1C6A (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 */

__int64 **__fastcall wil::details::ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___::_ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___(
        __int64 **a1)
{
  __int64 v1; // r8
  __int64 **result; // rax
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v1 = **a1;
    result = (__int64 **)(unsigned int)(*(_DWORD *)(v1 + 44) + *(_DWORD *)(v1 + 48));
    if ( !(_DWORD)result )
      return std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
               a1[1] + 20,
               &v3,
               (__int64 *)v1);
  }
  return result;
}
