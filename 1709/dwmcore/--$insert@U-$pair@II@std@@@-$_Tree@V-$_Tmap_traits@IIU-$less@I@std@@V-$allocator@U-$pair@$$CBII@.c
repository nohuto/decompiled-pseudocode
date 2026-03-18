/*
 * XREFs of ??$insert@U?$pair@II@std@@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@$$QEAU?$pair@II@1@@Z @ 0x18000778C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180005B04 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEAU?$pair@$$CBII@1@1@Z @ 0x180007690 (--$_Insert_at@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBII@std@@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBII@1@PEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@@Z @ 0x1801245A8 (--$_Insert_nohint@AEAU-$pair@$$CBII@std@@PEAU-$_Tree_node@U-$pair@$$CBII@std@@PEAX@2@@-$_Tree@V-.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::insert<std::pair<unsigned int,unsigned int>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4)
{
  char *v8; // r8
  unsigned int *v9; // rdx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 *v13; // rcx
  unsigned int v15; // r11d
  bool v16; // cf
  __int64 v17; // rax
  __int64 j; // rax
  __int64 i; // rcx
  __int64 *v20; // rax
  __int64 k; // rax
  int v22; // [rsp+20h] [rbp-38h]
  char *lpMem; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (char *)operator new(0x28uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v8 = *a1;
  if ( v8 != (char *)-8LL )
    *((_QWORD *)v8 + 1) = *a1;
  if ( v8 != (char *)-16LL )
    *((_QWORD *)v8 + 2) = *a1;
  v9 = (unsigned int *)(v8 + 28);
  *((_WORD *)v8 + 12) = 0;
  if ( v8 != (char *)-28LL )
  {
    *v9 = *a4;
    *((_DWORD *)v8 + 8) = a4[1];
  }
  if ( !a1[1] )
  {
    v11 = *a1;
    goto LABEL_17;
  }
  v10 = *a1;
  if ( a3 == *(_QWORD *)*a1 )
  {
    if ( *v9 >= *(_DWORD *)(a3 + 28) )
      goto LABEL_55;
    v11 = a3;
LABEL_17:
    lpMem = v8;
    LOBYTE(v8) = 1;
    goto LABEL_13;
  }
  if ( a3 != v10 )
  {
    v15 = *v9;
    v16 = *(_DWORD *)(a3 + 28) < *v9;
    if ( *(_DWORD *)(a3 + 28) > *v9 )
    {
      v17 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v11 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        v11 = *(_QWORD *)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v17 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v17 = i;
          v11 = v17;
          if ( !*(_BYTE *)(v17 + 25) )
            v11 = i;
        }
        else
        {
          for ( j = *(_QWORD *)(v11 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            v11 = j;
        }
      }
      if ( *(_DWORD *)(v11 + 28) < v15 )
      {
        v12 = a2;
        lpMem = v8;
        v13 = a1;
        if ( !*(_BYTE *)(*(_QWORD *)(v11 + 16) + 25LL) )
        {
          v11 = a3;
          goto LABEL_38;
        }
        goto LABEL_39;
      }
      v16 = *(_DWORD *)(a3 + 28) < v15;
    }
    if ( !v16 )
      goto LABEL_55;
    v11 = a3;
    if ( !*(_BYTE *)(a3 + 25) )
    {
      v20 = *(__int64 **)(a3 + 16);
      if ( *((_BYTE *)v20 + 25) )
      {
        for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v11 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
          v11 = k;
        v11 = k;
      }
      else
      {
        do
        {
          v11 = (__int64)v20;
          v20 = (__int64 *)*v20;
        }
        while ( !*((_BYTE *)v20 + 25) );
      }
    }
    if ( v11 != v10 && v15 >= *(_DWORD *)(v11 + 28) )
      goto LABEL_55;
    v12 = a2;
    lpMem = v8;
    v13 = a1;
    if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
    {
LABEL_38:
      LOBYTE(v8) = 1;
      goto LABEL_14;
    }
    v11 = a3;
LABEL_39:
    v8 = 0LL;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( *(_DWORD *)(v11 + 28) >= *v9 )
  {
LABEL_55:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
                       (int)a1,
                       (int)&v24,
                       (int)v8,
                       (int)v8 + 28,
                       v8);
    return a2;
  }
  lpMem = v8;
  v8 = 0LL;
LABEL_13:
  v12 = a2;
  v13 = a1;
LABEL_14:
  std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned int> &,std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *> *>(
    v13,
    v12,
    (__int64)v8,
    (_QWORD *)v11,
    v22,
    lpMem);
  return a2;
}
