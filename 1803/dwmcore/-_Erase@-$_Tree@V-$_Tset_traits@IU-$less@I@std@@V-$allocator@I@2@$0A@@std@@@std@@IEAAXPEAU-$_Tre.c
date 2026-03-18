/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800239D4
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800239D4 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180023F08 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x180023FA8 (-clear@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x1800239D4 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_Tre.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v4; // rdi

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      std::_Deallocate(v2, 1uLL, 0x20uLL);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
