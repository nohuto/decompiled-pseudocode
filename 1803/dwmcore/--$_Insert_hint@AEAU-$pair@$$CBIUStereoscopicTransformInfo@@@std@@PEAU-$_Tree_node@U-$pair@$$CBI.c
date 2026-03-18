/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@@Z @ 0x1801FC7A8
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCBEC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1801FCBEC.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@1@Z @ 0x1801FC41C (--$_Insert_at@AEAU-$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUS.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@@Z @ 0x1801FCA80 (--$_Insert_nohint@AEAU-$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicTransformInfo> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicTransformInfo>,void *> *>(
        _QWORD *a1,
        char **a2,
        __int64 a3,
        unsigned int *a4,
        char *a5)
{
  _QWORD *v5; // r11
  char **v7; // rbx
  _QWORD *v8; // r10
  _QWORD *v9; // r9
  char v10; // r8
  unsigned int v11; // edi
  bool v12; // cf
  __int64 v13; // rax
  __int64 j; // rax
  __int64 i; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 k; // rcx
  int v20; // [rsp+20h] [rbp-28h]
  char *lpMem; // [rsp+28h] [rbp-20h]
  int v22; // [rsp+30h] [rbp-18h] BYREF

  v5 = (_QWORD *)*a1;
  v7 = a2;
  v8 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v5 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 28) )
      {
        lpMem = a5;
LABEL_8:
        v9 = (_QWORD *)a3;
        goto LABEL_3;
      }
LABEL_46:
      *v7 = *(char **)std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Insert_nohint<std::pair<unsigned int const,StereoscopicTransformInfo> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicTransformInfo>,void *> *>(
                        (int)v8,
                        (int)&v22,
                        a3,
                        (int)a4,
                        a5);
      return v7;
    }
    if ( (_QWORD *)a3 == v5 )
    {
      v9 = (_QWORD *)v5[2];
      if ( *((_DWORD *)v9 + 7) >= *a4 )
        goto LABEL_46;
      lpMem = a5;
LABEL_12:
      v10 = 0;
      goto LABEL_4;
    }
    v11 = *a4;
    v12 = *(_DWORD *)(a3 + 28) < *a4;
    if ( *(_DWORD *)(a3 + 28) > *a4 )
    {
      v13 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v9 = *(_QWORD **)(a3 + 16);
      }
      else
      {
        v9 = *(_QWORD **)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v13 = i;
          v9 = (_QWORD *)v13;
          if ( !*(_BYTE *)(v13 + 25) )
            v9 = (_QWORD *)i;
        }
        else
        {
          for ( j = v9[2]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            v9 = (_QWORD *)j;
        }
      }
      if ( *((_DWORD *)v9 + 7) < v11 )
      {
        a1 = v8;
        lpMem = a5;
        if ( !*(_BYTE *)(v9[2] + 25LL) )
          goto LABEL_8;
        goto LABEL_12;
      }
      v12 = *(_DWORD *)(a3 + 28) < v11;
    }
    if ( v12 )
    {
      v16 = (_QWORD *)a3;
      if ( !*(_BYTE *)(a3 + 25) )
      {
        v17 = *(_QWORD *)(a3 + 16);
        if ( *(_BYTE *)(v17 + 25) )
        {
          for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v16 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
            v16 = (_QWORD *)k;
          v16 = (_QWORD *)k;
        }
        else
        {
          v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v17);
        }
      }
      if ( v16 == v5 || v11 < *((_DWORD *)v16 + 7) )
      {
        a2 = v7;
        if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        {
          v9 = (_QWORD *)a3;
          lpMem = a5;
          v10 = 0;
        }
        else
        {
          v9 = v16;
          lpMem = a5;
          v10 = 1;
        }
        a1 = v8;
        goto LABEL_4;
      }
    }
    goto LABEL_46;
  }
  v9 = (_QWORD *)*a1;
  lpMem = a5;
LABEL_3:
  v10 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicTransformInfo> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicTransformInfo>,void *> *>(
    a1,
    a2,
    v10,
    (char **)v9,
    v20,
    lpMem);
  return v7;
}
