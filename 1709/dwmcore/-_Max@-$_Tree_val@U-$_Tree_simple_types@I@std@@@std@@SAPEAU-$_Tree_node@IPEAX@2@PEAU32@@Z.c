/*
 * XREFs of ?_Max@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@SAPEAU?$_Tree_node@IPEAX@2@PEAU32@@Z @ 0x180009DF4
 * Callers:
 *     ??0?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@I@1@@Z @ 0x1800098F4 (--0-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV-$al.c)
 *     ??$_Insert_nohint@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Nil@1@@Z @ 0x180009B5C (--$_Insert_nohint@AEBIU_Nil@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@@Z @ 0x180124F50 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEA_ea_180124F50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Max(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
    a1 = i;
  return a1;
}
