/*
 * XREFs of _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938
 * Callers:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180022B60 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for___currentSequence__ @ 0x1800DEA90 (_anonymous_namespace_--_dynamic_atexit_destructor_for___currentSequence__.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180023F08 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear @ 0x180024034 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 440;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear(a1 + 440);
  std::_Deallocate(*(void **)(v1 + 8), 1uLL, 0x30uLL);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    a1 + 424,
    &v3,
    **(_QWORD **)(a1 + 424),
    *(_QWORD *)(a1 + 424));
  std::_Deallocate(*(void **)(a1 + 424), 1uLL, 0x20uLL);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    a1 + 408,
    &v3,
    **(_QWORD **)(a1 + 408),
    *(_QWORD *)(a1 + 408));
  std::_Deallocate(*(void **)(a1 + 408), 1uLL, 0x20uLL);
}
