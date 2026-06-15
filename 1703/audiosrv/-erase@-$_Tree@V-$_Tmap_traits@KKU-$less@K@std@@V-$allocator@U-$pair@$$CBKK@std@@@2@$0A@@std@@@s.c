/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180009140
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009600 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18007CB9C (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_18007CB9C.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800A76BC (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x1800A7770 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 **v7; // rax
  __int64 i; // rax
  __int64 **v9; // r9
  __int64 *v10; // r10
  _QWORD *k; // rcx
  __int64 **m; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rax
  __int64 *j; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rdx
  void **v19; // rax
  char v20; // cl
  __int64 *v21; // rbp
  __int64 **v22; // r15
  __int64 v23; // rdx

  v3 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (__int64 **)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
      {
        if ( v3 != *(__int64 **)(i + 16) )
          break;
        v3 = (__int64 *)i;
      }
      v3 = (__int64 *)i;
    }
    else
    {
      v3 = (__int64 *)a3[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
  if ( *(_BYTE *)(*a3 + 25) )
  {
    v9 = (__int64 **)a3[2];
LABEL_7:
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
        k = v10;
      }
      else
      {
        v17 = *v9;
        for ( k = v9; !*((_BYTE *)v17 + 25); v17 = (__int64 *)*v17 )
          k = v17;
      }
      *(_QWORD *)*a1 = k;
    }
    if ( *(__int64 **)(*a1 + 16LL) == a3 )
    {
      if ( *((_BYTE *)v9 + 25) )
      {
        m = (__int64 **)v10;
      }
      else
      {
        v18 = v9[2];
        for ( m = v9; !*((_BYTE *)v18 + 25); v18 = (__int64 *)v18[2] )
          m = (__int64 **)v18;
      }
      *(_QWORD *)(*a1 + 16LL) = m;
    }
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    v9 = (__int64 **)*a3;
    goto LABEL_7;
  }
  v9 = (__int64 **)v3[2];
  if ( v3 == a3 )
    goto LABEL_7;
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
    v19 = (void **)a3[1];
    if ( *v19 == a3 )
      *v19 = v3;
    else
      v19[2] = v3;
  }
  v3[1] = a3[1];
  v20 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v20;
LABEL_19:
  if ( *((_BYTE *)a3 + 24) != 1 )
    goto LABEL_22;
  if ( v9 != *(__int64 ***)(*a1 + 8LL) )
  {
    do
    {
      v21 = v10;
      v22 = (__int64 **)v10;
      if ( *((_BYTE *)v9 + 24) != 1 )
        break;
      v23 = *v10;
      if ( v9 == (__int64 **)*v10 )
      {
        v23 = v10[2];
        if ( !*(_BYTE *)(v23 + 24) )
        {
          *(_BYTE *)(v23 + 24) = 1;
          *((_BYTE *)v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
          v23 = v10[2];
        }
        if ( *(_BYTE *)(v23 + 25) )
          goto LABEL_71;
        if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v23 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v23 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
            *(_BYTE *)(v23 + 24) = 0;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              a1,
              v23);
            v23 = v10[2];
          }
          *(_BYTE *)(v23 + 24) = *((_BYTE *)v10 + 24);
          *((_BYTE *)v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v23 + 16) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v23 + 24) )
        {
          *(_BYTE *)(v23 + 24) = 1;
          *((_BYTE *)v10 + 24) = 0;
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
            a1,
            v10);
          v23 = *v10;
        }
        if ( *(_BYTE *)(v23 + 25) )
          goto LABEL_71;
        if ( *(_BYTE *)(*(_QWORD *)(v23 + 16) + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)v23 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v23 + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)(v23 + 16) + 24LL) = 1;
            *(_BYTE *)(v23 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
            v23 = *v10;
          }
          *(_BYTE *)(v23 + 24) = *((_BYTE *)v10 + 24);
          *((_BYTE *)v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v23 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
            a1,
            v10);
          break;
        }
      }
      *(_BYTE *)(v23 + 24) = 0;
LABEL_71:
      v9 = v22;
      v10 = (__int64 *)v10[1];
    }
    while ( v21 != *(__int64 **)(*a1 + 8LL) );
  }
  *((_BYTE *)v9 + 24) = 1;
LABEL_22:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a3);
  v14 = a1[1];
  *a2 = v3;
  if ( v14 )
    a1[1] = v14 - 1;
  return a2;
}
