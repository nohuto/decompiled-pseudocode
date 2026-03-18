/*
 * XREFs of ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x180023BF4
 * Callers:
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x180023D98 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180023E6C (-_Lrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Rrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180023EB8 (-_Rrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180024004 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@Q.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *result; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // r11
  __int64 *v22; // r9
  __int64 v23; // r11
  __int64 *v24; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] >= 0x7FFFFFFFFFFFFFEuLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buynode0();
  v10 = v9;
  *(_WORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = *a5;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    v11 = *a1;
LABEL_7:
    *(_QWORD *)(v11 + 16) = v10;
    goto LABEL_8;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
    goto LABEL_8;
  }
  a4[2] = v9;
  v11 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_7;
LABEL_8:
  v12 = *(_QWORD *)(v10 + 8);
  v13 = v10;
  while ( !*(_BYTE *)(v12 + 24) )
  {
    v16 = *(__int64 **)(v13 + 8);
    v17 = (__int64 *)v13;
    v18 = v13;
    v19 = (__int64 *)v16[1];
    v20 = (__int64 *)*v19;
    if ( v16 == (__int64 *)*v19 )
    {
      v20 = (__int64 *)v19[2];
      if ( !*((_BYTE *)v20 + 24) )
      {
LABEL_21:
        *((_BYTE *)v16 + 24) = 1;
        *((_BYTE *)v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_18;
      }
      v23 = v16[2];
      if ( v13 == v23 )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(a1);
      v24 = v16;
      if ( v18 != v23 )
        v24 = v17;
      *(_BYTE *)(v24[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v24[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
        a1,
        *(_QWORD *)(v24[1] + 8));
    }
    else
    {
      if ( !*((_BYTE *)v20 + 24) )
        goto LABEL_21;
      v21 = (__int64 *)*v16;
      if ( v13 == *v16 )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
          a1,
          v16);
      v22 = v16;
      if ( v17 != v21 )
        v22 = v17;
      *(_BYTE *)(v22[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v22[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(a1);
    }
LABEL_18:
    v12 = *(_QWORD *)(v13 + 8);
  }
  v14 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
