/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180023F08
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68 (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800239D4 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800D3598 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@U_Iterator_b.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@@Z @ 0x180147B44 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEA_ea_180147B44.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // r10
  void **v9; // rbx
  void **v10; // r14
  _QWORD *v11; // rax
  __int64 v13; // r10
  char v14; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v4 = (_QWORD *)*a1;
  v6 = a3;
  if ( a3 == *(_QWORD **)*a1 && a4 == v4 )
  {
    v9 = (void **)v4[1];
    v10 = v9;
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
          (__int64)a1,
          v10[2]);
        v10 = (void **)*v10;
        std::_Deallocate(v9, 1uLL, 0x20uLL);
        v9 = v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
      v4 = (_QWORD *)*a1;
    }
    v4[1] = v4;
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
    v11 = (_QWORD *)*a1;
    a1[1] = 0LL;
    *a2 = *v11;
  }
  else
  {
    while ( v6 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>::operator++(&v15);
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        a1,
        &v14,
        v13);
      v6 = v15;
    }
    *a2 = v6;
  }
  return a2;
}
