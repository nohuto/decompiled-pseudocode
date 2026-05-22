/*
 * XREFs of ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A458
 * Callers:
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039C20 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090F90 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x180038754 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003A608 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rsi
  _QWORD **v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *iter; // rax
  __int64 v28[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v29[5]; // [rsp+30h] [rbp-28h] BYREF

  v28[1] = -2LL;
  try
  {
    v5 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
      v5 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v5);
    v7 = v5 & a1[6];
    v8 = (_QWORD **)a1[1];
    v9 = 2 * v7;
    v10 = a1[3];
    if ( *(_QWORD ***)(v10 + 8 * v9) == v8 )
      v11 = a1[1];
    else
      v11 = **(_QWORD **)(v10 + 8 * v9 + 8);
  }
  catch ( ... )
  {
    throw;
  }
  if ( v11 == *(_QWORD *)(v10 + 8 * v9) )
  {
LABEL_11:
    v13 = (__int64)*v8;
    v14 = (_QWORD *)(*v8)[1];
    v15 = std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(
            (__int64)v8,
            *v8,
            v14,
            a3);
    v16 = a1[2];
    if ( v16 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v16 + 1;
    *(_QWORD *)(v13 + 8) = v15;
    *v14 = v15;
    v17 = (__int64 *)a1[1];
    v18 = *v17;
    v28[0] = v18;
    v19 = *(_QWORD *)v18;
    if ( v11 != *(_QWORD *)v18 )
    {
      **(_QWORD **)(v18 + 8) = v19;
      **(_QWORD **)(v19 + 8) = v11;
      **(_QWORD **)(v11 + 8) = v18;
      v20 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(v19 + 8);
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(v18 + 8);
      *(_QWORD *)(v18 + 8) = v20;
      v17 = (__int64 *)a1[1];
    }
    v21 = a1[3];
    if ( *(__int64 **)(v21 + 8 * v9) == v17 )
    {
      *(_QWORD *)(v21 + 8 * v9) = v18;
      *(_QWORD *)(a1[3] + 8 * v9 + 8) = v18;
    }
    else if ( *(_QWORD *)(v21 + 8 * v9) == v11 )
    {
      *(_QWORD *)(v21 + 8 * v9) = v18;
    }
    else
    {
      v22 = *(__int64 **)(v21 + 8 * v9 + 8);
      v23 = *v22;
      *(_QWORD *)(v21 + 8 * v9 + 8) = *v22;
      if ( v23 != v18 )
      {
        v24 = a1[3];
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 8 * v9 + 8) + 8LL);
        *(_QWORD *)(v24 + 8 * v9 + 8) = v25;
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Check_size(a1);
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
               v26,
               v28,
               v28[0]);
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        a1,
        v29,
        (_QWORD *)*iter);
      throw;
    }
    *(_QWORD *)a2 = v18;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( *a3 == *(_QWORD *)(v11 + 16) )
        break;
      if ( v11 == *(_QWORD *)(v10 + 8 * v9) )
        goto LABEL_11;
    }
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
}
