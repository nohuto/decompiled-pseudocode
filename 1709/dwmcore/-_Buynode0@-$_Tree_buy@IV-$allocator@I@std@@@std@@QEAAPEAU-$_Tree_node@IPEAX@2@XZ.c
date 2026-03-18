/*
 * XREFs of ?_Buynode0@?$_Tree_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180009D9C
 * Callers:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18000985C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allo.c)
 *     ??$_Insert_at@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Nil@1@@Z @ 0x1800099CC (--$_Insert_at@AEBIU_Nil@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::_Tree_buy<unsigned int>::_Buynode0(_QWORD *a1)
{
  _QWORD *v2; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v2 = *a1;
  if ( v2 != (_QWORD *)-8LL )
    v2[1] = *a1;
  if ( v2 != (_QWORD *)-16LL )
    v2[2] = *a1;
  return v2;
}
