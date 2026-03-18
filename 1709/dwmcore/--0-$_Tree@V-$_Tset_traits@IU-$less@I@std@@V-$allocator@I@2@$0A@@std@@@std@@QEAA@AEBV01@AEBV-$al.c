/*
 * XREFs of ??0?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@I@1@@Z @ 0x1800098F4
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x18000940C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 * Callees:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18000985C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allo.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@SAPEAU?$_Tree_node@IPEAX@2@PEAU32@@Z @ 0x180009DF4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@SAPEAU-$_Tree_node@IPEAX@2@PEAU32@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // rdx
  __int64 **v8; // rcx
  __int64 *i; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = v5 + 1;
  *v5 = v5;
  if ( v5 != (_QWORD *)-8LL )
    *v6 = (__int64)v5;
  if ( v5 != (_QWORD *)-16LL )
    v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *a1 = (__int64)v5;
  *v6 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(
          a1,
          *(_QWORD *)(*a2 + 8LL),
          (__int64)v5,
          a3);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = (__int64 **)v7[1];
  if ( *((_BYTE *)v8 + 25) )
  {
    *v7 = v7;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    for ( i = *v8; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v8 = (__int64 **)i;
    *v7 = v8;
    v10 = std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Max(*(_QWORD *)(*a1 + 8));
    *(_QWORD *)(v11 + 16) = v10;
  }
  return a1;
}
