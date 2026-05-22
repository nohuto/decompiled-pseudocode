/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x18002D214
 * Callers:
 *     ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18002CD54 (--A-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x18002D214 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x18002D214 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
        float *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v6; // r9
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  float v23; // xmm0_4
  float v24; // xmm2_4
  _QWORD *v25; // rax
  __int64 v26; // rdi
  _QWORD *iter; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v30[48]; // [rsp+38h] [rbp-30h] BYREF

  v29[1] = -2LL;
  v6 = a2;
  try
  {
    v8 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Destroy_if_node(
      (__int64)a1,
      (_QWORD **)a4);
    throw;
  }
  v10 = *((_QWORD *)a1 + 1);
  v11 = 2 * (v8 & *((_QWORD *)a1 + 6));
  v12 = *((_QWORD *)a1 + 3);
  if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))
    || (v10 = **(_QWORD **)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8),
        v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))) )
  {
LABEL_13:
    v29[0] = a4;
    v15 = *(_QWORD **)a4;
    if ( v10 != *(_QWORD *)a4 )
    {
      **(_QWORD **)(a4 + 8) = v15;
      *(_QWORD *)v15[1] = v10;
      **(_QWORD **)(v10 + 8) = a4;
      v16 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 + 8) = v15[1];
      v8 = *(_QWORD *)(a4 + 8);
      v15[1] = v8;
      *(_QWORD *)(a4 + 8) = v16;
    }
    v17 = *((_QWORD *)a1 + 3);
    v18 = *(_QWORD *)(v17 + 8 * v11);
    if ( v18 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v17 + 8 * v11) = a4;
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v11 + 8) = a4;
    }
    else if ( v18 == v10 )
    {
      *(_QWORD *)(v17 + 8 * v11) = a4;
    }
    else
    {
      v19 = *(__int64 **)(v17 + 8 * v11 + 8);
      v8 = *v19;
      *(_QWORD *)(v17 + 8 * v11 + 8) = *v19;
      if ( v8 != a4 )
      {
        v20 = *((_QWORD *)a1 + 3);
        v8 = *(_QWORD *)(*(_QWORD *)(v20 + 8 * v11 + 8) + 8LL);
        *(_QWORD *)(v20 + 8 * v11 + 8) = v8;
      }
    }
    try
    {
      v21 = *((_QWORD *)a1 + 2);
      v22 = *((_QWORD *)a1 + 7);
      v23 = (float)(int)v21;
      if ( v21 < 0 )
        v23 = v23 + 1.8446744e19;
      v24 = (float)(int)v22;
      if ( v22 < 0 )
        v24 = v24 + 1.8446744e19;
      if ( (float)(v23 / v24) > *a1 )
      {
        if ( (unsigned __int64)v22 >= 0x200 )
        {
          if ( (unsigned __int64)v22 < 0xFFFFFFFFFFFFFFFLL )
            v22 *= 2LL;
        }
        else
        {
          v22 *= 8LL;
        }
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
          a1,
          v22);
        v25 = (_QWORD *)*((_QWORD *)a1 + 1);
        if ( (_QWORD *)*v25 != v25 )
        {
          v28 = v25[1];
          do
          {
            v26 = **((_QWORD **)a1 + 1);
            std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
              a1,
              v30,
              v26 + 16);
          }
          while ( v26 != v28 );
        }
        v6 = a2;
      }
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
               v8,
               v29,
               v29[0]);
      std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>,void>(
        a1,
        &v28,
        *iter);
      throw;
    }
    *(_QWORD *)v6 = a4;
    *(_BYTE *)(v6 + 8) = 1;
    return v6;
  }
  else
  {
    v8 = *a3;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( (_DWORD)v8 == *(_DWORD *)(v10 + 16) )
        break;
      if ( v10 == *(_QWORD *)(v12 + 8 * v11) )
        goto LABEL_13;
    }
    **(_QWORD **)(a4 + 8) = *(_QWORD *)a4;
    *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *(_QWORD *)(a4 + 8);
    --*((_QWORD *)a1 + 2);
    v13 = *(_QWORD *)(a4 + 24);
    if ( v13 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    operator delete((void *)a4);
    result = a2;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return result;
}
