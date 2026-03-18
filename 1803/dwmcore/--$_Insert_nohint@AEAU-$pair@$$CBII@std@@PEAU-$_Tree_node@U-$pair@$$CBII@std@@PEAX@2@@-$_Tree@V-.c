/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x180146AE4
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D3740 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x1800D3610 (--$_Insert_at@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
        char ***a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char *lpMem)
{
  char v7; // r10
  char **v8; // r9
  char *v9; // rax
  char **v10; // rbx
  char v11; // r8
  char **v12; // rax
  char *v13; // rax
  char *i; // rax
  int v16; // [rsp+20h] [rbp-18h]
  char *v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = 1;
  v8 = *a1;
  v9 = (*a1)[1];
  while ( !v9[25] )
  {
    v8 = (char **)v9;
    if ( *a4 >= *((_DWORD *)v9 + 7) )
    {
      v9 = (char *)*((_QWORD *)v9 + 2);
      v7 = 0;
    }
    else
    {
      v9 = *(char **)v9;
      v7 = 1;
    }
  }
  v10 = v8;
  if ( v7 )
  {
    if ( v8 == (char **)**a1 )
    {
      v11 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v10 = (char **)v8[2];
    }
    else
    {
      v13 = *v8;
      if ( (*v8)[25] )
      {
        for ( i = v8[1]; !i[25] && v10 == *(char ***)i; i = (char *)*((_QWORD *)i + 1) )
          v10 = (char **)i;
        if ( !*((_BYTE *)v10 + 25) )
          v10 = (char **)i;
      }
      else
      {
        do
        {
          v10 = (char **)v13;
          v13 = (char *)*((_QWORD *)v13 + 2);
        }
        while ( !v13[25] );
      }
    }
  }
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    std::_Deallocate(lpMem, 1uLL, 0x28uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v11 = v7;
LABEL_9:
  v12 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
          a1,
          &v17,
          v11,
          v8,
          v16,
          lpMem);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
