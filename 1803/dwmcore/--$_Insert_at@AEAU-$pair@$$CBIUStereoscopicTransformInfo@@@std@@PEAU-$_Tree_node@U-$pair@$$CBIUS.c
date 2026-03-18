/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@1@Z @ 0x1801FC41C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@@Z @ 0x1801FC7A8 (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@@Z @ 0x1801FCA80 (--$_Insert_nohint@AEAU-$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicTransformInfo> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicTransformInfo>,void *> *>(
        _QWORD *a1,
        char **a2,
        char a3,
        char **a4,
        int a5,
        char *lpMem)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  char *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // r9
  __int64 v13; // rdx
  char *v14; // rsi
  char *v15; // rbp
  __int64 *v16; // rcx
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // r9
  char *v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rcx
  char **result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = (__int64)a1;
  if ( v6 >= 0x111111111111110LL )
  {
    std::_Deallocate(lpMem, 1uLL, 0xF0uLL);
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  }
  v9 = lpMem;
  a1[1] = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  if ( a4 == (char **)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = lpMem;
    *(_QWORD *)*a1 = lpMem;
    v10 = *a1;
LABEL_9:
    *(_QWORD *)(v10 + 16) = lpMem;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = lpMem;
    if ( a4 == *(char ***)*a1 )
      *(_QWORD *)*a1 = lpMem;
    goto LABEL_10;
  }
  a4[2] = lpMem;
  v10 = *a1;
  if ( a4 == *(char ***)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v11 = *((_QWORD *)lpMem + 1);
  v12 = lpMem;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = *((_QWORD *)v12 + 1);
    v14 = v12;
    v15 = v12;
    v16 = *(__int64 **)(v13 + 8);
    v17 = *v16;
    if ( v13 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_19;
      v18 = *(char **)(v13 + 16);
      if ( v12 == v18 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
          v7,
          v13);
      v19 = v13;
      if ( v15 != v18 )
        v19 = (__int64)v14;
      *(_BYTE *)(*(_QWORD *)(v19 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
        v7,
        *(_QWORD **)(*(_QWORD *)(v19 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
LABEL_19:
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL) + 24LL) = 0;
        v12 = *(char **)(*((_QWORD *)v12 + 1) + 8LL);
        goto LABEL_25;
      }
      v20 = *(char **)v13;
      if ( v12 == *(char **)v13 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
          v7,
          (_QWORD *)v13);
      v21 = v13;
      if ( v14 != v20 )
        v21 = (__int64)v14;
      *(_BYTE *)(*(_QWORD *)(v21 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL));
    }
LABEL_25:
    v11 = *((_QWORD *)v12 + 1);
  }
  v22 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v22 + 24) = 1;
  return result;
}
