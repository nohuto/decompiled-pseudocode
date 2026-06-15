/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800A788C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1800A77BC (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800A76BC (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x1800A7770 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::erase(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  __int64 *v7; // rax
  __int64 i; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // cl
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *result; // rax

  v3 = a3;
  v4 = (_QWORD *)a2;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v7 = (__int64 *)a3[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = a3[1]; !*(_BYTE *)(i + 25) && v3 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v3 = (_QWORD *)i;
      v3 = (_QWORD *)i;
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
  if ( *(_BYTE *)(*a3 + 25LL) )
  {
    v9 = a3[2];
LABEL_15:
    v10 = a3[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(_QWORD **)(*a1 + 8) == a3 )
    {
      *(_QWORD *)(*a1 + 8) = v9;
    }
    else if ( *(_QWORD **)v10 == a3 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    if ( *(_QWORD **)*a1 == a3 )
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
    a2 = *a1;
    if ( *(_QWORD **)(*a1 + 16) == a3 )
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
      *(_QWORD *)(a2 + 16) = v13;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(a3[2] + 25LL) )
  {
    v9 = *a3;
    goto LABEL_15;
  }
  v9 = v3[2];
  if ( v3 == a3 )
    goto LABEL_15;
  *(_QWORD *)(*a3 + 8LL) = v3;
  *v3 = *a3;
  if ( v3 == (_QWORD *)a3[2] )
  {
    v10 = (__int64)v3;
  }
  else
  {
    v10 = v3[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    v3[2] = a3[2];
    *(_QWORD *)(a3[2] + 8LL) = v3;
  }
  if ( *(_QWORD **)(*a1 + 8) == a3 )
  {
    *(_QWORD *)(*a1 + 8) = v3;
  }
  else
  {
    v15 = (_QWORD *)a3[1];
    if ( (_QWORD *)*v15 == a3 )
      *v15 = v3;
    else
      v15[2] = v3;
  }
  v3[1] = a3[1];
  v16 = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = v16;
LABEL_47:
  if ( *((_BYTE *)a3 + 24) == 1 )
  {
    if ( v9 != *(_QWORD *)(*a1 + 8) )
    {
      do
      {
        v17 = v10;
        v18 = v10;
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
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
              (__int64)a1,
              v10);
            a2 = *(_QWORD *)(v10 + 16);
          }
          if ( *(_BYTE *)(a2 + 25) )
            goto LABEL_65;
          if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
              *(_BYTE *)(a2 + 24) = 0;
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                (__int64)a1,
                (_QWORD *)a2);
              a2 = *(_QWORD *)(v10 + 16);
            }
            *(_BYTE *)(a2 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
              (__int64)a1,
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
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            a2 = *(_QWORD *)v10;
          }
          if ( *(_BYTE *)(a2 + 25) )
            goto LABEL_65;
          if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)a2 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)a2 + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)(a2 + 16) + 24LL) = 1;
              *(_BYTE *)(a2 + 24) = 0;
              std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
                (__int64)a1,
                a2);
              a2 = *(_QWORD *)v10;
            }
            *(_BYTE *)(a2 + 24) = *(_BYTE *)(v10 + 24);
            *(_BYTE *)(v10 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)a2 + 24LL) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v10);
            break;
          }
        }
        *(_BYTE *)(a2 + 24) = 0;
LABEL_65:
        v9 = v18;
        v10 = *(_QWORD *)(v10 + 8);
      }
      while ( v17 != *(_QWORD *)(*a1 + 8) );
    }
    *(_BYTE *)(v9 + 24) = 1;
  }
  v19 = a3[8];
  if ( v19 )
  {
    a3[8] = 0LL;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v19 + 16LL))(v19, a2, a3, v10);
  }
  v20 = a3[7];
  if ( v20 >= 8 )
    std::_Deallocate((_QWORD *)a3[4], v20 + 1, 2uLL);
  std::_Deallocate(a3, 1uLL, 0x48uLL);
  v21 = a1[1];
  if ( v21 )
    a1[1] = v21 - 1;
  result = v4;
  *v4 = v3;
  return result;
}
