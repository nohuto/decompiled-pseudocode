/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800D48DC
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800D4694 (--$_Insert_hint@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPL.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x180099614 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_nohint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 *v9; // r9
  char v10; // r10
  __int64 *v11; // rbx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v8 = (__int64 *)(*a1)[1];
    v9 = *a1;
    v10 = 1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8;
      if ( *a4 >= *((_DWORD *)v8 + 7) )
      {
        v10 = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v10 = 1;
        v8 = (__int64 *)*v8;
      }
    }
    v11 = v9;
    if ( v10 )
    {
      if ( v9 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                           a1,
                           &v17,
                           1,
                           v9,
                           v16,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v11 = (__int64 *)v9[2];
      }
      else
      {
        v13 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v14 = (__int64 *)v9[1];
          if ( !*((_BYTE *)v14 + 25) )
          {
            v15 = v9;
            do
            {
              if ( v15 != (__int64 *)*v14 )
                break;
              v11 = v14;
              v14 = (__int64 *)v14[1];
              v15 = v11;
            }
            while ( !*((_BYTE *)v14 + 25) );
          }
          if ( !*((_BYTE *)v11 + 25) )
            v11 = v14;
        }
        else
        {
          do
          {
            v11 = v13;
            v13 = (__int64 *)v13[2];
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v11 + 7) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x28uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                         a1,
                         &v17,
                         v10,
                         v9,
                         v16,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate(a5, 1uLL, 0x28uLL);
    throw;
  }
  return result;
}
