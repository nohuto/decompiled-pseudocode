/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x18009CE00
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18009D3EC (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x18005C3A0 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x18009D06C (--$_Insert_nohint@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAP.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_hint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 **v9; // rcx
  __int64 *v10; // r9
  unsigned int v11; // r11d
  bool v12; // cf
  __int64 *v13; // rax
  __int64 *v14; // r9
  __int64 *j; // rax
  __int64 *i; // rdx
  __int64 *v17; // r9
  __int64 *v18; // rax
  __int64 *k; // rax
  int v20; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+38h] [rbp-20h] BYREF

  if ( !a1[1] )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
      a1,
      a2,
      1,
      (_QWORD *)*a1,
      v20,
      a5);
    return a2;
  }
  v9 = (__int64 **)*a1;
  if ( a3 == *v9 )
  {
    if ( *a4 < *((_DWORD *)a3 + 7) )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v20,
        a5);
      return a2;
    }
    goto LABEL_45;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v10 = v9[2];
    if ( *((_DWORD *)v10 + 7) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        a1,
        a2,
        0,
        v10,
        v20,
        a5);
      return a2;
    }
    goto LABEL_45;
  }
  v11 = *a4;
  v12 = *((_DWORD *)a3 + 7) < *a4;
  if ( *((_DWORD *)a3 + 7) > *a4 )
  {
    v13 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v14 = (__int64 *)a3[2];
    }
    else
    {
      v14 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
          v13 = i;
        v14 = v13;
        if ( !*((_BYTE *)v13 + 25) )
          v14 = i;
      }
      else
      {
        for ( j = (__int64 *)v14[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          v14 = j;
      }
    }
    if ( *((_DWORD *)v14 + 7) < v11 )
    {
      if ( *(_BYTE *)(v14[2] + 25) )
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          a1,
          a2,
          0,
          v14,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v20,
          a5);
      return a2;
    }
    v12 = *((_DWORD *)a3 + 7) < v11;
  }
  if ( !v12 )
    goto LABEL_45;
  v17 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v18 = (__int64 *)a3[2];
    if ( *((_BYTE *)v18 + 25) )
    {
      for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v17 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v17 = k;
      v17 = k;
    }
    else
    {
      do
      {
        v17 = v18;
        v18 = (__int64 *)*v18;
      }
      while ( !*((_BYTE *)v18 + 25) );
    }
  }
  if ( v17 != (__int64 *)v9 && v11 >= *((_DWORD *)v17 + 7) )
  {
LABEL_45:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_nohint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                       (int)a1,
                       (int)&v21,
                       (int)a3,
                       (int)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
    std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
      a1,
      a2,
      0,
      a3,
      v20,
      a5);
  else
    std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
      a1,
      a2,
      1,
      v17,
      v20,
      a5);
  return a2;
}
