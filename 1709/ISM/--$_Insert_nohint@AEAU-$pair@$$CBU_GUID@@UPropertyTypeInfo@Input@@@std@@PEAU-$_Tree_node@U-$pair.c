/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@1@@Z @ 0x180034B70
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x180034574 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@1@Z @ 0x1800348EC (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_G.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,Input::PropertyTypeInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyTypeInfo>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        void *Block)
{
  unsigned __int64 *v7; // r15
  __int64 **v8; // r14
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // rsi
  char i; // r13
  int v12; // eax
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 j; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v19; // [rsp+70h] [rbp+8h] BYREF
  const void *v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  try
  {
    v7 = (unsigned __int64 *)Block;
    v8 = *a1;
    v9 = (unsigned __int64 *)(*a1)[1];
    v10 = (unsigned __int64 *)*a1;
    for ( i = 1; !*((_BYTE *)v9 + 25); a4 = v20 )
    {
      v10 = v9;
      v12 = memcmp_0(a4, v9 + 4, 0x10uLL);
      i = v12 < 0;
      if ( v12 >= 0 )
        v9 = (unsigned __int64 *)v9[2];
      else
        v9 = (unsigned __int64 *)*v9;
    }
    v13 = v10;
    if ( i )
    {
      if ( v10 == (unsigned __int64 *)*v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
                           a1,
                           &v19,
                           1,
                           (unsigned __int64 **)v10,
                           v18,
                           v7);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v13 = (unsigned __int64 *)v10[2];
      }
      else
      {
        v16 = (unsigned __int64 *)*v10;
        if ( *(_BYTE *)(*v10 + 25) )
        {
          for ( j = v10[1]; !*(_BYTE *)(j + 25) && v13 == *(unsigned __int64 **)j; j = *(_QWORD *)(j + 8) )
            v13 = (unsigned __int64 *)j;
          if ( !*((_BYTE *)v13 + 25) )
            v13 = (unsigned __int64 *)j;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = (unsigned __int64 *)v16[2];
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
    }
    if ( memcmp_0(v13 + 4, a4, 0x10uLL) >= 0 )
    {
      std::wstring::_Tidy_deallocate(v7 + 8);
      operator delete(v7);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
                         a1,
                         &v19,
                         i,
                         (unsigned __int64 **)v10,
                         v18,
                         v7);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Destroy_if_not_nil(
      v14,
      (unsigned __int64 *)Block);
    throw;
  }
  return result;
}
