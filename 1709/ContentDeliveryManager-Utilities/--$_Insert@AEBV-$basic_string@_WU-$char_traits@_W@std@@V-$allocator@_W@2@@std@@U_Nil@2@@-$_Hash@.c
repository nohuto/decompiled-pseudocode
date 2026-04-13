/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x180086964
 * Callers:
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800852EC (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180078124 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800788F4 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180086E74 (--$_Buynode@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_List_buy@V-$.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800975B8 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rdx
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *iter; // rax
  __int64 v31[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v33; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  try
  {
    v6 = a3[2];
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v7 = 0xCBF29CE484222325uLL;
    v8 = 0LL;
    v9 = 2 * v6;
    if ( v9 )
    {
      do
        v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ v7);
      while ( v8 < v9 );
    }
    v10 = (HIDWORD(v7) ^ v7) & (unsigned __int64)a1[5];
    if ( (unsigned __int64)a1[6] <= v10 )
      v10 += -1LL - ((unsigned __int64)a1[5] >> 1);
  }
  catch ( ... )
  {
    throw;
  }
  v11 = *a1;
  v12 = 2 * v10;
  v13 = a1[2];
  v14 = (__int64 *)v13[v12];
  if ( *a1 != v14 )
  {
    v11 = *(__int64 **)v13[v12 + 1];
    if ( v11 != v14 )
    {
      while ( 1 )
      {
        v11 = (__int64 *)v11[1];
        if ( std::operator==<wchar_t>(v3, v11 + 2) )
          break;
        if ( v11 == (__int64 *)a1[2][v12] )
          goto LABEL_16;
      }
      if ( std::operator==<wchar_t>(v11 + 2, v3) )
      {
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      v11 = (__int64 *)*v11;
    }
  }
LABEL_16:
  v16 = **a1;
  v17 = std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(v14, v16, *(_QWORD *)(v16 + 8), v3, -2LL);
  v18 = a1[1];
  if ( v18 == (__int64 *)0x555555555555554LL )
    std::_Xlength_error("list<T> too long");
  a1[1] = (__int64 *)((char *)v18 + 1);
  *(_QWORD *)(v16 + 8) = v17;
  **(_QWORD **)(v17 + 8) = v17;
  v19 = **a1;
  v33 = v19;
  v20 = *(_QWORD *)v19;
  if ( v11 != *(__int64 **)v19 )
  {
    **(_QWORD **)(v19 + 8) = v20;
    **(_QWORD **)(v20 + 8) = v11;
    *(_QWORD *)v11[1] = v19;
    v21 = v11[1];
    v11[1] = *(_QWORD *)(v20 + 8);
    v22 = *(_QWORD *)(v19 + 8);
    *(_QWORD *)(v20 + 8) = v22;
    *(_QWORD *)(v19 + 8) = v21;
  }
  v23 = a1[2];
  v24 = (__int64 *)v23[v12];
  if ( v24 == *a1 )
  {
    v23[v12] = v19;
    a1[2][v12 + 1] = v19;
  }
  else if ( v24 == v11 )
  {
    v23[v12] = v19;
  }
  else
  {
    v25 = (__int64 *)v23[v12 + 1];
    v26 = *v25;
    v23[v12 + 1] = *v25;
    if ( v26 != v19 )
    {
      v27 = a1[2];
      v28 = *(_QWORD *)(v27[v12 + 1] + 8);
      v27[v12 + 1] = v28;
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size(a1);
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v29,
             &v33,
             v33);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      a1,
      v31,
      (_QWORD *)*iter);
    throw;
  }
  *(_QWORD *)a2 = v19;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
