/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D3740
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x1800D3610 (--$_Insert_at@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x180146AE4 (--$_Insert_nohint@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 *a1,
        char **a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int **a5)
{
  __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // r8
  unsigned int v11; // eax
  _QWORD *v12; // r11
  __int64 v13; // r9
  char v14; // r8
  char **v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v18; // rax
  __int64 j; // rax
  __int64 i; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 k; // rcx
  int v24; // [rsp+20h] [rbp-38h]
  char *lpMem; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h] BYREF

  v9 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x28uLL);
  *v9 = *a1;
  v9[1] = *a1;
  v10 = *a1;
  v9[2] = *a1;
  *((_WORD *)v9 + 12) = 0;
  v11 = **a5;
  *(_QWORD *)((char *)v9 + 28) = v11;
  v12 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    v13 = *a1;
    goto LABEL_10;
  }
  if ( a3 == (_QWORD *)*v12 )
  {
    if ( v11 >= *((_DWORD *)a3 + 7) )
      goto LABEL_46;
    v13 = (__int64)a3;
LABEL_10:
    v14 = 1;
    goto LABEL_6;
  }
  if ( a3 != v12 )
  {
    v10 = v11;
    if ( v11 >= *((_DWORD *)a3 + 7) )
      goto LABEL_43;
    v18 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v13 = a3[2];
    }
    else
    {
      v13 = *a3;
      if ( *(_BYTE *)(*a3 + 25LL) )
      {
        for ( i = a3[1]; !*(_BYTE *)(i + 25) && v18 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v18 = (_QWORD *)i;
        v13 = (__int64)v18;
        if ( !*((_BYTE *)v18 + 25) )
          v13 = i;
      }
      else
      {
        for ( j = *(_QWORD *)(v13 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v13 = j;
      }
    }
    if ( *(_DWORD *)(v13 + 28) >= (unsigned int)v10 )
    {
LABEL_43:
      if ( *((_DWORD *)a3 + 7) >= (unsigned int)v10 )
        goto LABEL_46;
      v21 = (__int64)a3;
      if ( !*((_BYTE *)a3 + 25) )
      {
        v22 = a3[2];
        if ( *(_BYTE *)(v22 + 25) )
        {
          for ( k = a3[1]; !*(_BYTE *)(k + 25) && v21 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
            v21 = k;
          v21 = k;
        }
        else
        {
          v21 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min(
                  v22,
                  v8,
                  v10);
        }
      }
      if ( (_QWORD *)v21 != v12 && (unsigned int)v10 >= *(_DWORD *)(v21 + 28) )
        goto LABEL_46;
      v15 = a2;
      lpMem = (char *)v9;
      v16 = a1;
      if ( !*(_BYTE *)(a3[2] + 25LL) )
      {
        v13 = v21;
        goto LABEL_32;
      }
      v13 = (__int64)a3;
    }
    else
    {
      v15 = a2;
      lpMem = (char *)v9;
      v16 = a1;
      if ( !*(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
      {
        v13 = (__int64)a3;
LABEL_32:
        v14 = 1;
        goto LABEL_7;
      }
    }
    v14 = 0;
    goto LABEL_7;
  }
  v13 = v12[2];
  if ( *(_DWORD *)(v13 + 28) >= v11 )
  {
LABEL_46:
    *a2 = *(char **)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
                      (int)a1,
                      (int)&v26,
                      v10,
                      (int)v9 + 28,
                      v9);
    return a2;
  }
  v14 = 0;
LABEL_6:
  lpMem = (char *)v9;
  v15 = a2;
  v16 = a1;
LABEL_7:
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
    v16,
    v15,
    v14,
    (char **)v13,
    v24,
    lpMem);
  return a2;
}
