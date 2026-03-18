/*
 * XREFs of ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18000985C
 * Callers:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18000985C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allo.c)
 *     ??0?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@I@1@@Z @ 0x1800098F4 (--0-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV-$al.c)
 * Callees:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x18000985C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allo.c)
 *     ?_Buynode0@?$_Tree_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180009D9C (-_Buynode0@-$_Tree_buy@IV-$allocator@I@std@@@std@@QEAAPEAU-$_Tree_node@IPEAX@2@XZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9

  v5 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v8 = std::_Tree_buy<unsigned int>::_Buynode0();
    *(_WORD *)(v8 + 24) = 0;
    if ( v8 != -28 )
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(a2 + 28);
    LOBYTE(v9) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_BYTE *)(v8 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v5 + 25) )
      v5 = v8;
    v10 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(
            a1,
            *(_QWORD *)a2,
            v8,
            v9);
    LOBYTE(v11) = a4;
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v8 + 16) = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::integral_constant<bool,0>>(
                             a1,
                             *(_QWORD *)(a2 + 16),
                             v8,
                             v11);
  }
  return v5;
}
