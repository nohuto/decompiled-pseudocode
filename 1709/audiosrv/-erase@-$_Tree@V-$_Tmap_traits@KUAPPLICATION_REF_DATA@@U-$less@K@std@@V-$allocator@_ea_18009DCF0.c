/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@@Z @ 0x18009DCF0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@0@Z @ 0x18009DC20 (-erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBK.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180095404 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x18009DBD4 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // r11
  __int64 v7; // rax
  __int64 i; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  char v16; // cl
  __int64 v17; // rbp
  __int64 v18; // r14
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *result; // rax

  v3 = a3;
  v6 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v7 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
      v3 = i;
    }
    else
    {
      do
      {
        v3 = v7;
        v7 = *(_QWORD *)v7;
      }
      while ( !*(_BYTE *)(v7 + 25) );
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
  {
    v9 = *(_QWORD *)(a3 + 16);
LABEL_15:
    v10 = *(_QWORD *)(a3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(_QWORD *)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( *(_QWORD *)v10 == a3 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    if ( *(_QWORD *)*a1 == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v11 = v10;
      }
      else
      {
        v12 = *(_QWORD *)v9;
        v11 = v9;
        while ( !*(_BYTE *)(v12 + 25) )
        {
          v11 = v12;
          v12 = *(_QWORD *)v12;
        }
      }
      *(_QWORD *)*a1 = v11;
    }
    if ( *(_QWORD *)(*a1 + 16LL) == a3 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = v10;
      }
      else
      {
        v14 = *(_QWORD *)(v9 + 16);
        v13 = v9;
        while ( !*(_BYTE *)(v14 + 25) )
        {
          v13 = v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v13;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
  {
    v9 = *(_QWORD *)a3;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)(v3 + 16);
  if ( v3 == a3 )
    goto LABEL_15;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = v3;
  *(_QWORD *)v3 = *(_QWORD *)a3;
  if ( v3 == *(_QWORD *)(a3 + 16) )
  {
    v10 = v3;
  }
  else
  {
    v10 = *(_QWORD *)(v3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v3;
  }
  if ( *(_QWORD *)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v15 = *(__int64 **)(a3 + 8);
    if ( *v15 == a3 )
      *v15 = v3;
    else
      v15[2] = v3;
  }
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a3 + 8);
  v16 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v16;
LABEL_47:
  if ( *(_BYTE *)(a3 + 24) == 1 )
  {
    if ( v9 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v17 = v10;
        v18 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        v19 = *(_BYTE **)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          v19 = *(_BYTE **)(v10 + 16);
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            v19 = *(_BYTE **)(v10 + 16);
          }
          if ( v19[25] )
            goto LABEL_65;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
                (__int64)a1,
                v19);
              v19 = *(_BYTE **)(v10 + 16);
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !v19[24] )
          {
            v19[24] = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            v19 = *(_BYTE **)v10;
          }
          if ( v19[25] )
            goto LABEL_65;
          v20 = *((_QWORD *)v19 + 2);
          if ( *(_BYTE *)(v20 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
            {
              *(_BYTE *)(v20 + 24) = 1;
              v19[24] = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
                (__int64)a1,
                (__int64)v19);
              v19 = *(_BYTE **)v10;
            }
            v19[24] = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            break;
          }
        }
        v19[24] = 0;
LABEL_65:
        v9 = v18;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v17 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  std::_Deallocate(v6, 1uLL, 0x28uLL);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
