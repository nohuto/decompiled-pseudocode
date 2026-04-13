/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x180083F7C
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800835F0 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800835F0 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x1800837B4 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r10
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r15
  _WORD *v18; // r11
  unsigned __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  bool j; // zf
  int v24; // ecx
  int v25; // eax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *iter; // rax
  __int64 v38[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v41; // [rsp+88h] [rbp+20h]

  v41 = a4;
  v5 = a3;
  try
  {
    v8 = a3[2];
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v9 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 2 * v8; ++i )
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ v9);
    v11 = HIDWORD(v9) ^ v9;
    v12 = v11 & *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) <= v12 )
      v12 += -1LL - (*(_QWORD *)(a1 + 40) >> 1);
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Destroy_if_not_nil(
      a1,
      v41);
    throw;
  }
  v13 = *(_QWORD **)a1;
  v14 = 2 * v12;
  v15 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v15 + 8 * v14) )
  {
    v13 = **(_QWORD ***)(v15 + 8 * v14 + 8);
    while ( v13 != *(_QWORD **)(v15 + 8 * v14) )
    {
      v13 = (_QWORD *)v13[1];
      v16 = v13 + 2;
      v17 = v13[4];
      v40 = v13[5];
      if ( v40 >= 8 )
        v16 = (_QWORD *)*v16;
      if ( v5[3] < 8uLL )
        v18 = v5;
      else
        v18 = (_WORD *)*v5;
      v19 = v17;
      if ( v8 < v17 )
        v19 = v8;
      if ( v19 )
      {
        while ( *v18 == *(_WORD *)v16 )
        {
          ++v18;
          v16 = (_QWORD *)((char *)v16 + 2);
          if ( !--v19 )
            goto LABEL_20;
        }
        LODWORD(v19) = *v18 < *(_WORD *)v16 ? -1 : 1;
      }
LABEL_20:
      v20 = v8 != v17;
      if ( v8 < v17 )
        v20 = -1;
      if ( (_DWORD)v19 )
        v20 = v19;
      if ( !v20 )
      {
        v21 = v13 + 2;
        if ( v5[3] >= 8uLL )
          v5 = (_QWORD *)*v5;
        if ( v40 >= 8 )
          v21 = (_QWORD *)*v21;
        v22 = v8;
        if ( v17 < v8 )
          v22 = v17;
        for ( j = v22 == 0; ; j = v22 == 0 )
        {
          if ( j )
          {
            v24 = 0;
            goto LABEL_39;
          }
          if ( *(_WORD *)v21 != *(_WORD *)v5 )
            break;
          v21 = (_QWORD *)((char *)v21 + 2);
          v5 = (_QWORD *)((char *)v5 + 2);
          --v22;
        }
        v24 = *(_WORD *)v21 < *(_WORD *)v5 ? -1 : 1;
LABEL_39:
        v25 = v17 != v8;
        if ( v17 < v8 )
          v25 = -1;
        if ( v24 )
          v25 = v24;
        if ( v25 )
        {
          v13 = (_QWORD *)*v13;
          break;
        }
        std::list<std::wstring>::erase((void **)a1, &v40, a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v27 = (_QWORD *)*a4;
  if ( v13 != (_QWORD *)*a4 )
  {
    *(_QWORD *)a4[1] = v27;
    *(_QWORD *)v27[1] = v13;
    *(_QWORD *)v13[1] = a4;
    v28 = v13[1];
    v13[1] = v27[1];
    v29 = a4[1];
    v27[1] = v29;
    a4[1] = v28;
  }
  v30 = *(_QWORD *)(a1 + 16);
  v31 = *(_QWORD **)(v30 + 8 * v14);
  if ( v31 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v30 + 8 * v14) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v14 + 8) = a4;
  }
  else if ( v31 == v13 )
  {
    *(_QWORD *)(v30 + 8 * v14) = a4;
  }
  else
  {
    v32 = *(_QWORD **)(v30 + 8 * v14 + 8);
    v33 = (_QWORD *)*v32;
    *(_QWORD *)(v30 + 8 * v14 + 8) = *v32;
    if ( v33 != a4 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(_QWORD *)(*(_QWORD *)(v34 + 8 * v14 + 8) + 8LL);
      *(_QWORD *)(v34 + 8 * v14 + 8) = v35;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size((__int64 **)a1);
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v36,
             &v40,
             (__int64)v41);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      (_QWORD *)a1,
      v38,
      (_QWORD *)*iter);
    throw;
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
