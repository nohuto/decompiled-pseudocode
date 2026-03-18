/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C
 * Callers:
 *     _anonymous_namespace_::SendFramesReports @ 0x1800079D0 (_anonymous_namespace_--SendFramesReports.c)
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::State::State @ 0x180124788 (_anonymous_namespace_--State--State.c)
 *     _anonymous_namespace_::State::_State @ 0x18012492C (_anonymous_namespace_--State--_State.c)
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy @ 0x180124E8C (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__ea_180124E8C.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180009CC8 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(
        void **a1)
{
  char *v1; // rsi
  char *v3; // rbp
  char v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        v1 + 424,
        &v4,
        **((_QWORD **)v1 + 53),
        *((_QWORD *)v1 + 53));
      WPF::ProcessHeapImpl::Free(*((void **)v1 + 53));
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        v1 + 408,
        &v5,
        **((_QWORD **)v1 + 51),
        *((_QWORD *)v1 + 51));
      WPF::ProcessHeapImpl::Free(*((void **)v1 + 51));
      v1 += 456;
    }
    WPF::ProcessHeapImpl::Free(*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
