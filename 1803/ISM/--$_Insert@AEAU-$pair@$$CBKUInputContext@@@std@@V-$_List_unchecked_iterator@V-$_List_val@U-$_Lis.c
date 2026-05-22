/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x180081F44
 * Callers:
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x180080EDC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x180081F44 (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x180081F44 (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
        float *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 v6; // r9
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  float v24; // xmm0_4
  float v25; // xmm2_4
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *iter; // rax
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v31[48]; // [rsp+38h] [rbp-30h] BYREF

  v30[1] = -2LL;
  v6 = a2;
  try
  {
    v8 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Destroy_if_node(
      a1,
      a4);
    throw;
  }
  v10 = *((_QWORD *)a1 + 1);
  v11 = 2 * (v8 & *((_QWORD *)a1 + 6));
  v12 = *((_QWORD *)a1 + 3);
  if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))
    || (v10 = **(_QWORD **)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8),
        v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))) )
  {
LABEL_15:
    v30[0] = (__int64)a4;
    v16 = (_QWORD *)*a4;
    if ( v10 != *a4 )
    {
      *(_QWORD *)a4[1] = v16;
      *(_QWORD *)v16[1] = v10;
      **(_QWORD **)(v10 + 8) = a4;
      v17 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 + 8) = v16[1];
      v8 = a4[1];
      v16[1] = v8;
      a4[1] = v17;
    }
    v18 = *((_QWORD *)a1 + 3);
    v19 = *(_QWORD *)(v18 + 8 * v11);
    if ( v19 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v18 + 8 * v11) = a4;
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v11 + 8) = a4;
    }
    else if ( v19 == v10 )
    {
      *(_QWORD *)(v18 + 8 * v11) = a4;
    }
    else
    {
      v20 = *(__int64 **)(v18 + 8 * v11 + 8);
      v8 = *v20;
      *(_QWORD *)(v18 + 8 * v11 + 8) = *v20;
      if ( (__int64 *)v8 != a4 )
      {
        v21 = *((_QWORD *)a1 + 3);
        v8 = *(_QWORD *)(*(_QWORD *)(v21 + 8 * v11 + 8) + 8LL);
        *(_QWORD *)(v21 + 8 * v11 + 8) = v8;
      }
    }
    try
    {
      v22 = *((_QWORD *)a1 + 2);
      v23 = *((_QWORD *)a1 + 7);
      v24 = (float)(int)v22;
      if ( v22 < 0 )
        v24 = v24 + 1.8446744e19;
      v25 = (float)(int)v23;
      if ( v23 < 0 )
        v25 = v25 + 1.8446744e19;
      if ( (float)(v24 / v25) > *a1 )
      {
        if ( (unsigned __int64)v23 >= 0x200 )
        {
          if ( (unsigned __int64)v23 < 0xFFFFFFFFFFFFFFFLL )
            v23 *= 2LL;
        }
        else
        {
          v23 *= 8LL;
        }
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
          a1,
          v23);
        v26 = (_QWORD *)*((_QWORD *)a1 + 1);
        if ( (_QWORD *)*v26 != v26 )
        {
          v29 = v26[1];
          do
          {
            v27 = **((_QWORD **)a1 + 1);
            std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
              a1,
              v31,
              v27 + 16);
          }
          while ( v27 != v29 );
        }
        v6 = a2;
      }
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
               v8,
               v30,
               v30[0]);
      std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>,void>(
        a1,
        &v29,
        (_QWORD *)*iter);
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
        goto LABEL_15;
    }
    *(_QWORD *)a4[1] = *a4;
    *(_QWORD *)(*a4 + 8) = a4[1];
    --*((_QWORD *)a1 + 2);
    v13 = a4[4];
    if ( v13 )
    {
      a4[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = a4[3];
    if ( v14 )
    {
      a4[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    operator delete(a4);
    result = a2;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return result;
}
