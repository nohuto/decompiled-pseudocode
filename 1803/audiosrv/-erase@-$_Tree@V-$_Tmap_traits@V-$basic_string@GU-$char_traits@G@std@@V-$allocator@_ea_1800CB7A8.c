/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800CB7A8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1800CB6DC (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CB65C (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800D51D4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::erase(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 i; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  char v15; // cl
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *result; // rax

  v3 = a3;
  v4 = (__int64 *)a2;
  v6 = a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v7 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = i;
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v7, a2, a3);
    }
    v3 = i;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
    goto LABEL_13;
  if ( *(_BYTE *)(v9 + 25) )
  {
    v9 = *(_QWORD *)a3;
LABEL_13:
    v10 = *(_QWORD *)(a3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(_QWORD *)(*a1 + 8) == v6 )
    {
      *(_QWORD *)(*a1 + 8) = v9;
    }
    else if ( *(_QWORD *)v10 == v6 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    a3 = *a1;
    v11 = *a1;
    if ( *(_QWORD *)*a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
        v12 = v10;
      else
        v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v9, a2, a3);
      *(_QWORD *)a3 = v12;
      a3 = *a1;
      v11 = *a1;
    }
    if ( *(_QWORD *)(v11 + 16) == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v13 = v10;
      }
      else
      {
        a2 = *(_QWORD *)(v9 + 16);
        v13 = v9;
        if ( !*(_BYTE *)(a2 + 25) )
        {
          do
          {
            v13 = a2;
            a2 = *(_QWORD *)(a2 + 16);
          }
          while ( !*(_BYTE *)(a2 + 25) );
          v11 = a3;
        }
      }
      *(_QWORD *)(v11 + 16) = v13;
    }
    goto LABEL_43;
  }
  v9 = *(_QWORD *)(v3 + 16);
  if ( v3 == v6 )
    goto LABEL_13;
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
  if ( *(_QWORD *)(*a1 + 8) == v6 )
  {
    *(_QWORD *)(*a1 + 8) = v3;
  }
  else
  {
    v14 = *(__int64 **)(a3 + 8);
    if ( *v14 == v6 )
      *v14 = v3;
    else
      v14[2] = v3;
  }
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a3 + 8);
  v15 = *(_BYTE *)(v3 + 24);
  *(_BYTE *)(v3 + 24) = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v15;
LABEL_43:
  if ( *(_BYTE *)(v6 + 24) == 1 )
  {
    if ( v9 != *(_QWORD *)(*a1 + 8) )
    {
      do
      {
        v16 = v10;
        if ( *(_BYTE *)(v9 + 24) != 1 )
          break;
        a2 = *(_QWORD *)v10;
        if ( v9 == *(_QWORD *)v10 )
        {
          a2 = *(_QWORD *)(v10 + 16);
          if ( !*(_BYTE *)(a2 + 24) )
          {
            *(_BYTE *)(a2 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              a1,
              v10);
            a2 = *(_QWORD *)(v10 + 16);
          }
          if ( *(_BYTE *)(a2 + 25) )
            goto LABEL_61;
          if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
              *(_BYTE *)(a2 + 24) = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
                (__int64)a1,
                (_QWORD *)a2);
              a2 = *(_QWORD *)(v10 + 16);
            }
            *(_BYTE *)(a2 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
              a1,
              v10);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(a2 + 24) )
          {
            *(_BYTE *)(a2 + 24) = 1;
            *(_BYTE *)(v10 + 24) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            a2 = *(_QWORD *)v10;
          }
          if ( *(_BYTE *)(a2 + 25) )
            goto LABEL_61;
          v17 = *(_QWORD *)(a2 + 16);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              *(_BYTE *)(a2 + 24) = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(
                a1,
                a2);
              a2 = *(_QWORD *)v10;
            }
            *(_BYTE *)(a2 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            break;
          }
        }
        *(_BYTE *)(a2 + 24) = 0;
LABEL_61:
        v9 = v16;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8) );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  v18 = *(_QWORD *)(v6 + 64);
  if ( v18 )
  {
    *(_QWORD *)(v6 + 64) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, a2, a3, v10);
  }
  v19 = *(_QWORD *)(v6 + 56);
  if ( v19 >= 8 )
    std::_Deallocate(*(_QWORD **)(v6 + 32), v19 + 1, 2uLL);
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 7LL;
  *(_WORD *)(v6 + 32) = 0;
  std::_Deallocate((_QWORD *)v6, 1uLL, 0x48uLL);
  v20 = a1[1];
  if ( v20 )
    a1[1] = v20 - 1;
  result = v4;
  *v4 = v3;
  return result;
}
