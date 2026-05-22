/*
 * XREFs of wil::details::ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___::_ScopeExitFn__lambda_2d61a06c1cfa552bad4225509e4e38a4___ @ 0x1800C89C8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$1 @ 0x1800E9B5A (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$1.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
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
      return std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
               a1[1] + 26,
               &v3,
               (__int64 *)v1);
  }
  return result;
}
