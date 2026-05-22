/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call @ 0x1800CECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 */

__int64 **__fastcall std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call(__int64 a1)
{
  __int64 *v2; // [rsp+30h] [rbp+8h] BYREF

  return std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
           (_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL),
           &v2,
           **(__int64 ***)(a1 + 16));
}
