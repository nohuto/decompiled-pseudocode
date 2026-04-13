/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800790EC
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800788F4 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180078124 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800788F4 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x180078AB8 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r15
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *iter; // rax
  _QWORD v29[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v31; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v5 = a3;
  try
  {
    v8 = a3[2];
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v9 = 0xCBF29CE484222325uLL;
    v10 = 0LL;
    v11 = 2 * v8;
    if ( v11 )
    {
      do
        v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v10++) ^ v9);
      while ( v10 < v11 );
    }
    v12 = (HIDWORD(v9) ^ v9) & *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 48) <= v12 )
      v12 += -1LL - (*(_QWORD *)(a1 + 40) >> 1);
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Destroy_if_not_nil(
      a1,
      v32);
    throw;
  }
  v13 = *(_QWORD **)a1;
  v14 = 2 * v12;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD **)(v15 + 8 * v14);
  if ( *(_QWORD **)a1 != v16 )
  {
    v13 = **(_QWORD ***)(v15 + 8 * v14 + 8);
    if ( v13 != v16 )
    {
      while ( 1 )
      {
        v13 = (_QWORD *)v13[1];
        if ( std::operator==<wchar_t>(v5, v13 + 2) )
          break;
        if ( v13 == *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8 * v14) )
          goto LABEL_16;
      }
      if ( std::operator==<wchar_t>(v13 + 2, v5) )
      {
        std::list<std::wstring>::erase((void **)a1, &v31, a4);
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      v13 = (_QWORD *)*v13;
    }
  }
LABEL_16:
  v18 = (_QWORD *)*a4;
  if ( v13 != (_QWORD *)*a4 )
  {
    *(_QWORD *)a4[1] = v18;
    *(_QWORD *)v18[1] = v13;
    *(_QWORD *)v13[1] = a4;
    v19 = v13[1];
    v13[1] = v18[1];
    v20 = a4[1];
    v18[1] = v20;
    a4[1] = v19;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *(_QWORD **)(v21 + 8 * v14);
  if ( v22 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v21 + 8 * v14) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v14 + 8) = a4;
  }
  else if ( v22 == v13 )
  {
    *(_QWORD *)(v21 + 8 * v14) = a4;
  }
  else
  {
    v23 = *(_QWORD **)(v21 + 8 * v14 + 8);
    v24 = (_QWORD *)*v23;
    *(_QWORD *)(v21 + 8 * v14 + 8) = *v23;
    if ( v24 != a4 )
    {
      v25 = *(_QWORD *)(a1 + 16);
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8 * v14 + 8) + 8LL);
      *(_QWORD *)(v25 + 8 * v14 + 8) = v26;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size((__int64 **)a1);
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v27,
             &v31,
             (__int64)v32);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      (_QWORD *)a1,
      v29,
      (_QWORD *)*iter);
    throw;
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
