/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180009CC8
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reallocate @ 0x180008874 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800C2130 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800097FC (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@@Z @ 0x180124F50 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEA_ea_180124F50.c)
 */

__int64 **__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rax
  __int64 *v6; // rbx
  _QWORD *v9; // rbx
  _QWORD *i; // rdi
  __int64 *v11; // rax
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 *j; // rax
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  v6 = a3;
  if ( a3 == (__int64 *)**a1 && a4 == v4 )
  {
    v9 = (_QWORD *)v4[1];
    for ( i = v9; !*((_BYTE *)i + 25); v9 = i )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        (__int64)a1,
        (void *)i[2]);
      i = (_QWORD *)*i;
      WPF::ProcessHeapImpl::Free(v9);
    }
    (*a1)[1] = (__int64)*a1;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    v11 = *a1;
    a1[1] = 0LL;
    *a2 = (__int64 *)*v11;
  }
  else
  {
    while ( v6 != a4 )
    {
      v13 = v6;
      if ( !*((_BYTE *)v6 + 25) )
      {
        v14 = (__int64 *)v6[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( j = (__int64 *)v6[1]; !*((_BYTE *)j + 25) && v6 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v6 = j;
          v6 = j;
        }
        else
        {
          do
          {
            v6 = v14;
            v14 = (__int64 *)*v14;
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        a1,
        &v16,
        v13);
    }
    *a2 = v6;
  }
  return a2;
}
