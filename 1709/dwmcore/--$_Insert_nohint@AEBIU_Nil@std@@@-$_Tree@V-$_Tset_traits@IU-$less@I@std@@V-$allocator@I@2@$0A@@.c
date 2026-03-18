/*
 * XREFs of ??$_Insert_nohint@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Nil@1@@Z @ 0x180009B5C
 * Callers:
 *     _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180008240 (_lambda_bc2aba7ba829d575f491599aa9d39211_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Insert_at@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Nil@1@@Z @ 0x1800099CC (--$_Insert_at@AEBIU_Nil@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@SAPEAU?$_Tree_node@IPEAX@2@PEAU32@@Z @ 0x180009DF4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@SAPEAU-$_Tree_node@IPEAX@2@PEAU32@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Nil>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  _DWORD *v4; // r11
  __int64 **v6; // rdi
  __int64 *v7; // r9
  char v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 *v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  v6 = a1;
  v7 = *a1;
  v8 = 1;
  v9 = (*a1)[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v7 = (__int64 *)v9;
    if ( *v4 < *(_DWORD *)(v9 + 28) )
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
  v10 = (__int64)v7;
  if ( v8 )
  {
    if ( v7 == (__int64 *)**a1 )
    {
      v8 = 1;
      goto LABEL_17;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = v7[2];
    }
    else if ( *(_BYTE *)(*v7 + 25) )
    {
      for ( i = v7[1]; !*(_BYTE *)(i + 25) && v10 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
        v10 = i;
      if ( !*(_BYTE *)(v10 + 25) )
        v10 = i;
    }
    else
    {
      v10 = std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Max(*v7);
    }
  }
  if ( *(_DWORD *)(v10 + 28) >= *v4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  a1 = v6;
LABEL_17:
  v12 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Nil>(
          a1,
          &v14,
          v8,
          v7,
          v4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
