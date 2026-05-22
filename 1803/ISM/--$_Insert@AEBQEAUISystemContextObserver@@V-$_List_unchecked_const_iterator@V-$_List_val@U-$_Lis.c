/*
 * XREFs of ??$_Insert@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x18003A6B8
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003A608 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003A608 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert<ISystemContextObserver * const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD **a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *iter; // rax
  __int64 v25; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-18h] BYREF

  try
  {
    v8 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 8; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::_Destroy_if_node(
      a1,
      a4);
    throw;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 2 * (v8 & *(_QWORD *)(a1 + 48));
  v12 = *(_QWORD *)(a1 + 24);
  if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)))
    || (v10 = **(_QWORD **)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8),
        v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)))) )
  {
LABEL_10:
    v14 = *a4;
    if ( (_QWORD *)v10 != *a4 )
    {
      *a4[1] = v14;
      *(_QWORD *)v14[1] = v10;
      **(_QWORD **)(v10 + 8) = a4;
      v15 = *(_QWORD **)(v10 + 8);
      *(_QWORD *)(v10 + 8) = v14[1];
      v16 = a4[1];
      v14[1] = v16;
      a4[1] = v15;
    }
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(_QWORD *)(v17 + 8 * v11);
    if ( v18 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v17 + 8 * v11) = a4;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v11 + 8) = a4;
    }
    else if ( v18 == v10 )
    {
      *(_QWORD *)(v17 + 8 * v11) = a4;
    }
    else
    {
      v19 = *(_QWORD **)(v17 + 8 * v11 + 8);
      v20 = (_QWORD **)*v19;
      *(_QWORD *)(v17 + 8 * v11 + 8) = *v19;
      if ( v20 != a4 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 8 * v11 + 8) + 8LL);
        *(_QWORD *)(v21 + 8 * v11 + 8) = v22;
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Check_size((float *)a1);
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Make_iter(
               v23,
               &v25,
               (__int64)a4);
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        (_QWORD *)a1,
        v26,
        (_QWORD *)*iter);
      throw;
    }
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( *a3 == *(_QWORD *)(v10 + 16) )
        break;
      if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48))) )
        goto LABEL_10;
    }
    *a4[1] = *a4;
    (*a4)[1] = a4[1];
    --*(_QWORD *)(a1 + 16);
    operator delete(a4);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
}
