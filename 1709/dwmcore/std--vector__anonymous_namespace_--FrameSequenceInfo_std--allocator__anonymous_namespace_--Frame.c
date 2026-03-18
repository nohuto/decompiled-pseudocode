/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reallocate @ 0x180008874
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve @ 0x1800089A8 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800089A8.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180008F38 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180009CC8 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reallocate(
        char **a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  char *v5; // r15
  char *v6; // r14
  char *i; // rbx
  char *v8; // r15
  char *v9; // r12
  __int64 v10; // r14
  char *result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v13; // [rsp+68h] [rbp+10h] BYREF
  char v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x8FB823EE08FB82LL || (v2 = (char *)operator new(456 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v5 = a1[1];
  v6 = v2;
  for ( i = *a1; i != v5; i += 456 )
  {
    if ( v6 )
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v6, i);
    v6 += 456;
  }
  v8 = *a1;
  v9 = a1[1];
  v10 = (v9 - *a1) / 456;
  if ( *a1 )
  {
    while ( v8 != v9 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        v8 + 424,
        &v13,
        **((_QWORD **)v8 + 53),
        *((_QWORD *)v8 + 53));
      WPF::ProcessHeapImpl::Free(*((void **)v8 + 53));
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        v8 + 408,
        &v14,
        **((_QWORD **)v8 + 51),
        *((_QWORD *)v8 + 51));
      WPF::ProcessHeapImpl::Free(*((void **)v8 + 51));
      v8 += 456;
    }
    WPF::ProcessHeapImpl::Free(*a1);
  }
  *a1 = v2;
  a1[2] = &v2[456 * a2];
  result = &v2[456 * v10];
  a1[1] = result;
  return result;
}
