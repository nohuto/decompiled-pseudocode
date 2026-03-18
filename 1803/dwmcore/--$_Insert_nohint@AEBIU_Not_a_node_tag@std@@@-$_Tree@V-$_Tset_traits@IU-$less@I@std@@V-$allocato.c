/*
 * XREFs of ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x180023D98
 * Callers:
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180022760 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18017EFE4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x180023BF4 (--$_Insert_at@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 **v6; // rdi
  __int64 *v7; // r9
  char v8; // r10
  __int64 v9; // rax
  __int64 *v10; // rax
  char v11; // r8
  __int64 *v12; // rax
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v7 = *a1;
  v8 = 1;
  v9 = (*a1)[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v7 = (__int64 *)v9;
    if ( *a4 < *(_DWORD *)(v9 + 28) )
    {
      v9 = *(_QWORD *)v9;
      v8 = 1;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
      v8 = 0;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == (__int64 *)**a1 )
    {
      v11 = 1;
      goto LABEL_8;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (__int64 *)v7[2];
    }
    else
    {
      v14 = *v7;
      if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v10 == *(__int64 **)i; i = *(_QWORD *)(i + 8) )
          v10 = (__int64 *)i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = (__int64 *)i;
      }
      else
      {
        do
        {
          v10 = (__int64 *)v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
  }
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v8;
  a1 = v6;
LABEL_8:
  v12 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
          a1,
          &v16,
          v11,
          v7,
          a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
