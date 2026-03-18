/*
 * XREFs of _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800C2130
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1800C7690 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180009CC8 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(__int64 a1)
{
  void **v1; // rbx
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)(a1 + 424);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    (__int64 **)(a1 + 424),
    &v3,
    **(__int64 ***)(a1 + 424),
    *(__int64 **)(a1 + 424));
  WPF::ProcessHeapImpl::Free(*v1);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    (__int64 **)(a1 + 408),
    &v3,
    **(__int64 ***)(a1 + 408),
    *(__int64 **)(a1 + 408));
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 408));
}
