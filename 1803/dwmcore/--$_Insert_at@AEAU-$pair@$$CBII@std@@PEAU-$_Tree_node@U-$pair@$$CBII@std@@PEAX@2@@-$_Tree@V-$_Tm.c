/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x1800D3610
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D3740 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x180146AE4 (--$_Insert_nohint@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@Z @ 0x1800D3854 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
        _QWORD *a1,
        char **a2,
        char a3,
        char **a4,
        int a5,
        char *lpMem)
{
  unsigned __int64 v6; // rax
  _QWORD *v7; // r11
  char *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r9
  __int64 v13; // rcx
  char **result; // rax
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rbp
  __int64 *v18; // rcx
  __int64 v19; // rax
  char *v20; // rbx
  char *v21; // r9
  char *v22; // rbx
  char *v23; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x666666666666665LL )
  {
    std::_Deallocate(lpMem, 1uLL, 0x28uLL);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  v9 = lpMem;
  a1[1] = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  if ( a4 == (char **)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = lpMem;
    *(_QWORD *)*a1 = lpMem;
    v10 = *a1;
LABEL_5:
    *(_QWORD *)(v10 + 16) = lpMem;
    goto LABEL_6;
  }
  if ( a3 )
  {
    *a4 = lpMem;
    if ( a4 == *(char ***)*a1 )
      *(_QWORD *)*a1 = lpMem;
    goto LABEL_6;
  }
  a4[2] = lpMem;
  v10 = *a1;
  if ( a4 == *(char ***)(*a1 + 16LL) )
    goto LABEL_5;
LABEL_6:
  v11 = *((_QWORD *)lpMem + 1);
  v12 = lpMem;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v15 = *((_QWORD *)v12 + 1);
    v16 = v12;
    v17 = v12;
    v18 = *(__int64 **)(v15 + 8);
    v19 = *v18;
    if ( v15 == *v18 )
    {
      v19 = v18[2];
      if ( !*(_BYTE *)(v19 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL) + 24LL) = 0;
        v12 = *(char **)(*((_QWORD *)v12 + 1) + 8LL);
        goto LABEL_16;
      }
      v22 = *(char **)(v15 + 16);
      if ( v12 == v22 )
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(v7);
      v23 = (char *)v15;
      if ( v17 != v22 )
        v23 = v16;
      *(_BYTE *)(*((_QWORD *)v23 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v23 + 1) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(v7);
    }
    else
    {
      if ( !*(_BYTE *)(v19 + 24) )
        goto LABEL_17;
      v20 = *(char **)v15;
      if ( v12 == *(char **)v15 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(v7);
      v21 = (char *)v15;
      if ( v16 != v20 )
        v21 = v16;
      *(_BYTE *)(*((_QWORD *)v21 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v21 + 1) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lrotate(v7);
    }
LABEL_16:
    v11 = *((_QWORD *)v12 + 1);
  }
  v13 = *(_QWORD *)(*v7 + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v13 + 24) = 1;
  return result;
}
