/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18000F0D0
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000EF40 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x18005C3A0 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180095404 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x18009DBD4 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  _QWORD *v7; // r11
  _QWORD *v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // r9
  char v11; // r8
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  __int64 i; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 j; // rax
  int v23; // [rsp+20h] [rbp-28h]
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  try
  {
    v8 = *a1;
    v9 = (__int64 *)v8[1];
    v10 = v8;
    v11 = 1;
    while ( !*((_BYTE *)v9 + 25) )
    {
      v10 = v9;
      if ( *a4 >= *((_DWORD *)v9 + 7) )
      {
        v11 = 0;
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v11 = 1;
        v9 = (__int64 *)*v9;
      }
    }
    v12 = v10;
    if ( v11 )
    {
      if ( v10 == (_QWORD *)*v8 )
      {
        v13 = v7[1];
        if ( v13 >= 0x666666666666665LL )
        {
          std::_Deallocate(a5, 1uLL, 0x28uLL);
          std::_Xlength_error("map/set<T> too long");
        }
        v7[1] = v13 + 1;
        v14 = a5;
        *((_QWORD *)a5 + 1) = v10;
        if ( v10 == (_QWORD *)*v7 )
        {
          *(_QWORD *)(*v7 + 8LL) = v14;
          *(_QWORD *)*v7 = v14;
          *(_QWORD *)(*v7 + 16LL) = v14;
        }
        else
        {
          *v10 = v14;
          if ( v10 == *(_QWORD **)*v7 )
            *(_QWORD *)*v7 = v14;
        }
        v15 = v14;
        for ( i = v14[1]; ; i = v15[1] )
        {
          if ( *(_BYTE *)(i + 24) )
          {
            *(_BYTE *)(*(_QWORD *)(*v7 + 8LL) + 24LL) = 1;
            *(_QWORD *)a2 = v14;
            *(_BYTE *)(a2 + 8) = 1;
            return a2;
          }
          v18 = v15[1];
          v19 = *(__int64 **)(v18 + 8);
          v20 = *v19;
          if ( v18 == *v19 )
          {
            v20 = v19[2];
            if ( !*(_BYTE *)(v20 + 24) )
              goto LABEL_27;
            if ( v15 == *(_QWORD **)(v18 + 16) )
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v7);
            *(_BYTE *)(v15[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              v7,
              *(_QWORD *)(v15[1] + 8LL));
          }
          else
          {
            if ( !*(_BYTE *)(v20 + 24) )
            {
LABEL_27:
              *(_BYTE *)(v18 + 24) = 1;
              *(_BYTE *)(v20 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
              v15 = *(_QWORD **)(v15[1] + 8LL);
              continue;
            }
            if ( v15 == *(_QWORD **)v18 )
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
                v7,
                v18);
            *(_BYTE *)(v15[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v15[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v7);
          }
        }
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v12 = (_QWORD *)v10[2];
      }
      else
      {
        v21 = *v10;
        if ( *(_BYTE *)(*v10 + 25LL) )
        {
          for ( j = v10[1]; !*(_BYTE *)(j + 25) && v12 == *(_QWORD **)j; j = *(_QWORD *)(j + 8) )
            v12 = (_QWORD *)j;
          if ( !*((_BYTE *)v12 + 25) )
            v12 = (_QWORD *)j;
        }
        else
        {
          do
          {
            v12 = (_QWORD *)v21;
            v21 = *(_QWORD *)(v21 + 16);
          }
          while ( !*(_BYTE *)(v21 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v12 + 7) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x28uLL);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                                   (int)v7,
                                   (int)&v24,
                                   v11,
                                   (int)v10,
                                   v23,
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
