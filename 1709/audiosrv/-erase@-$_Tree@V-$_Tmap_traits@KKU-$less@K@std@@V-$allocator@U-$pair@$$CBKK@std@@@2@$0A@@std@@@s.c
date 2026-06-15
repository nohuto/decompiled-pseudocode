/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000EFB8
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180095404 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x18009DBD4 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 *v7; // rax
  __int64 i; // rax
  __int64 **v9; // r10
  __int64 *v10; // r9
  _QWORD *v11; // rax
  __int64 **v12; // rax
  HANDLE ProcessHeap; // rax
  __int64 v14; // rax
  __int64 **result; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rcx
  void **v18; // rax
  char v19; // cl
  __int64 *v20; // rbp
  __int64 **v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (__int64 *)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (__int64 *)i;
      v3 = (__int64 *)i;
    }
    else
    {
      do
      {
        v3 = v7;
        v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
  }
  if ( *(_BYTE *)(*a3 + 25) )
  {
    v9 = (__int64 **)a3[2];
LABEL_8:
    v10 = (__int64 *)a3[1];
    if ( !*((_BYTE *)v9 + 25) )
      v9[1] = v10;
    if ( *(__int64 **)(*a1 + 8LL) == a3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( (__int64 *)*v10 == a3 )
    {
      *v10 = (__int64)v9;
    }
    else
    {
      v10[2] = (__int64)v9;
    }
    if ( *(__int64 **)*a1 == a3 )
    {
      if ( *((_BYTE *)v9 + 25) )
      {
        v11 = v10;
      }
      else
      {
        v16 = *v9;
        v11 = v9;
        while ( !*((_BYTE *)v16 + 25) )
        {
          v11 = v16;
          v16 = (__int64 *)*v16;
        }
      }
      *(_QWORD *)*a1 = v11;
    }
    if ( *(__int64 **)(*a1 + 16LL) == a3 )
    {
      if ( *((_BYTE *)v9 + 25) )
      {
        v12 = (__int64 **)v10;
      }
      else
      {
        v17 = v9[2];
        v12 = v9;
        while ( !*((_BYTE *)v17 + 25) )
        {
          v12 = (__int64 **)v17;
          v17 = (__int64 *)v17[2];
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v12;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    v9 = (__int64 **)*a3;
    goto LABEL_8;
  }
  v9 = (__int64 **)v3[2];
  if ( v3 == a3 )
    goto LABEL_8;
  *(_QWORD *)(*a3 + 8) = v3;
  *v3 = *a3;
  if ( v3 == (__int64 *)a3[2] )
  {
    v10 = v3;
  }
  else
  {
    v10 = (__int64 *)v3[1];
    if ( !*((_BYTE *)v9 + 25) )
      v9[1] = v10;
    *v10 = (__int64)v9;
    v3[2] = a3[2];
    *(_QWORD *)(a3[2] + 8) = v3;
  }
  if ( *(__int64 **)(*a1 + 8LL) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v3;
  }
  else
  {
    v18 = (void **)a3[1];
    if ( *v18 == a3 )
      *v18 = v3;
    else
      v18[2] = v3;
  }
  v3[1] = a3[1];
  v19 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v19;
LABEL_20:
  if ( *((_BYTE *)a3 + 24) != 1 )
    goto LABEL_23;
  if ( v9 != *(__int64 ***)(*a1 + 8LL) )
  {
    do
    {
      v20 = v10;
      v21 = (__int64 **)v10;
      if ( *((_BYTE *)v9 + 24) != 1 )
        break;
      v22 = *v10;
      if ( v9 == (__int64 **)*v10 )
      {
        v22 = v10[2];
        if ( !*(_BYTE *)(v22 + 24) )
        {
          *(_BYTE *)(v22 + 24) = 1;
          *((_BYTE *)v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(a1);
          v22 = v10[2];
        }
        if ( *(_BYTE *)(v22 + 25) )
          goto LABEL_71;
        if ( *(_BYTE *)(*(_QWORD *)v22 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v22 + 24LL) = 1;
            *(_BYTE *)(v22 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              a1,
              v22);
            v22 = v10[2];
          }
          *(_BYTE *)(v22 + 24) = *((_BYTE *)v10 + 24);
          *((_BYTE *)v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v22 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v22 + 24) )
        {
          *(_BYTE *)(v22 + 24) = 1;
          *((_BYTE *)v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
            a1,
            v10);
          v22 = *v10;
        }
        if ( *(_BYTE *)(v22 + 25) )
          goto LABEL_71;
        v23 = *(_QWORD *)(v22 + 16);
        if ( *(_BYTE *)(v23 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v22 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v22 + 24LL) == 1 )
          {
            *(_BYTE *)(v23 + 24) = 1;
            *(_BYTE *)(v22 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(a1);
            v22 = *v10;
          }
          *(_BYTE *)(v22 + 24) = *((_BYTE *)v10 + 24);
          *((_BYTE *)v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v22 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
            a1,
            v10);
          break;
        }
      }
      *(_BYTE *)(v22 + 24) = 0;
LABEL_71:
      v9 = v21;
      v10 = (__int64 *)v10[1];
    }
    while ( v20 != *(__int64 **)(*a1 + 8LL) );
  }
  *((_BYTE *)v9 + 24) = 1;
LABEL_23:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a3);
  v14 = a1[1];
  if ( v14 )
    a1[1] = v14 - 1;
  result = a2;
  *a2 = v3;
  return result;
}
