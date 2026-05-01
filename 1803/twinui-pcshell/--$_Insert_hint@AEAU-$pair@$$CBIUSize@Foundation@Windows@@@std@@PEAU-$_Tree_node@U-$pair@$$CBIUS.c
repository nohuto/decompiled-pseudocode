/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x180250FC8
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18025151C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@1@Z @ 0x180250BAC (--$_Insert_at@AEAU-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSiz.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1802513B0 (--$_Insert_nohint@AEAU-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 */

// Hidden C++ exception states: #try_helpers=1
char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_hint<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        _QWORD *a1,
        char **a2,
        __int64 a3,
        unsigned int *a4,
        char *a5)
{
  _QWORD *v7; // r11
  __int64 v8; // r10
  __int64 v10; // r9
  unsigned int v11; // edi
  bool v12; // cf
  char *v13; // rax
  char *v14; // r9
  __int64 j; // rax
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 k; // rcx
  int v20; // [rsp+20h] [rbp-38h]

  v7 = a1;
  v8 = *a1;
  if ( !a1[1] )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
      a1,
      a2,
      1,
      (char **)v8,
      v20,
      a5);
    return a2;
  }
  if ( a3 == *(_QWORD *)v8 )
  {
    if ( *a4 < *(_DWORD *)(a3 + 28) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        a1,
        a2,
        1,
        (char **)a3,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    if ( *(_DWORD *)(v10 + 28) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        a1,
        a2,
        0,
        (char **)v10,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  v11 = *a4;
  v12 = *(_DWORD *)(a3 + 28) < *a4;
  if ( *(_DWORD *)(a3 + 28) > *a4 )
  {
    v13 = (char *)a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v14 = *(char **)(a3 + 16);
    }
    else
    {
      v14 = *(char **)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(char **)i; i = *(_QWORD *)(i + 8) )
          v13 = (char *)i;
        v14 = v13;
        if ( !v13[25] )
          v14 = (char *)i;
      }
      else
      {
        for ( j = *((_QWORD *)v14 + 2); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v14 = (char *)j;
      }
    }
    if ( *((_DWORD *)v14 + 7) < v11 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 25LL) )
        std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
          v7,
          a2,
          0,
          (char **)v14,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
          v7,
          a2,
          1,
          (char **)a3,
          v20,
          a5);
      return a2;
    }
    v12 = *(_DWORD *)(a3 + 28) < v11;
  }
  if ( !v12 )
    goto LABEL_44;
  v17 = a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v18 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v18 + 25) )
    {
      for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v17 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
        v17 = k;
      v17 = k;
    }
    else
    {
      v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min(v18, a2, a3);
    }
  }
  if ( v17 != v8 && v11 >= *(_DWORD *)(v17 + 28) )
  {
LABEL_44:
    *a2 = *(char **)std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_nohint<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
                      (int)v7,
                      a5);
    return a2;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
      v7,
      a2,
      0,
      (char **)a3,
      v20,
      a5);
  else
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
      v7,
      a2,
      1,
      (char **)v17,
      v20,
      a5);
  return a2;
}
