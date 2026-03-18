/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180024004
 * Callers:
 *     ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x180023BF4 (--$_Insert_at@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buynode0(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 32LL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
