/*
 * XREFs of ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180023A30
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180023A30 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@st.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x180023AE8 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@@-$.c)
 * Callees:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180023A30 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@st.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9

  v5 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v8 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 32LL);
    LOBYTE(v9) = a4;
    *(_QWORD *)v8 = *a1;
    *(_QWORD *)(v8 + 8) = *a1;
    *(_QWORD *)(v8 + 16) = *a1;
    *(_WORD *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 28) = *(_DWORD *)(a2 + 28);
    *(_QWORD *)(v8 + 8) = a3;
    *(_BYTE *)(v8 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v5 + 25) )
      v5 = v8;
    v10 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
            a1,
            *(_QWORD *)a2,
            v8,
            v9);
    LOBYTE(v11) = a4;
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v8 + 16) = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(a2 + 16),
                             v8,
                             v11);
  }
  return v5;
}
