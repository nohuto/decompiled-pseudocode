/*
 * XREFs of ??$_Insert_at@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Nil@1@@Z @ 0x1800099CC
 * Callers:
 *     ??$_Insert_nohint@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Nil@1@@Z @ 0x180009B5C (--$_Insert_nohint@AEBIU_Nil@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180009C2C (-_Lrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Rrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180009C78 (-_Rrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Buynode0@?$_Tree_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180009D9C (-_Buynode0@-$_Tree_buy@IV-$allocator@I@std@@@std@@QEAAPEAU-$_Tree_node@IPEAX@2@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Nil>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // r10
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *result; // rax
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] >= 0x7FFFFFFFFFFFFFEuLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Tree_buy<unsigned int>::_Buynode0();
  v11 = 0;
  v12 = v9;
  *(_WORD *)(v9 + 24) = 0;
  v13 = (_DWORD *)(v9 + 28);
  if ( v13 )
    *v13 = *a5;
  ++a1[1];
  *(_QWORD *)(v12 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v12;
    *(_QWORD *)*a1 = v12;
    v14 = *a1;
LABEL_9:
    *(_QWORD *)(v14 + 16) = v12;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v12;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v12;
    goto LABEL_10;
  }
  a4[2] = v12;
  v14 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v15 = *(_QWORD *)(v12 + 8);
  v16 = v12;
  while ( *(_BYTE *)(v15 + 24) == v11 )
  {
    v19 = *(_QWORD *)(v16 + 8);
    v20 = *(__int64 **)(v19 + 8);
    v21 = *v20;
    if ( v19 == *v20 )
    {
      v21 = v20[2];
      if ( *(_BYTE *)(v21 + 24) == v11 )
      {
LABEL_22:
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(v21 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
        goto LABEL_18;
      }
      if ( v16 == *(_QWORD *)(v19 + 16) )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(
          a1,
          *(_QWORD *)(v16 + 8),
          v10,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v21 + 24) == v11 )
        goto LABEL_22;
      if ( v16 == *(_QWORD *)v19 )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
          a1,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v10,
        v16);
    }
LABEL_18:
    v15 = *(_QWORD *)(v16 + 8);
  }
  v17 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
