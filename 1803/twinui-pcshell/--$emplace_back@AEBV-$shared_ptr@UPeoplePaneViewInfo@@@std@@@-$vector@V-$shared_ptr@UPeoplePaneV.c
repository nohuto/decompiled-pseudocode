/*
 * XREFs of ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1801BFCC0
 * Callers:
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x1801C1C2C (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180194EF0 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801C528C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801C5350 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo> const &>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h]
  char *v16; // [rsp+80h] [rbp+18h]

  v4 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD **)(a1 + 16) == v4 )
  {
    v7 = ((__int64)v4 - *(_QWORD *)a1) >> 4;
    v15 = v7;
    if ( v7 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = v7 + 1;
    v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
    v10 = std::_Allocate<std::_Default_allocate_traits<1>>(v9, 0x10uLL);
    v11 = v10;
    v16 = (char *)v10;
    try
    {
      v12 = 2 * v7;
      v10[v12] = 0LL;
      v10[v12 + 1] = 0LL;
      v13 = a2[1];
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v11[v12] = *a2;
      v11[v12 + 1] = a2[1];
      std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        *(_QWORD **)a1,
        *(_QWORD **)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      v14 = *(std::_Ref_count_base **)&v16[16 * v15 + 8];
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      std::_Deallocate(v16, v9, 0x10uLL);
      throw;
    }
    return std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v11, v8, v9);
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *v4 = *a2;
    result = a2[1];
    v4[1] = result;
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  return result;
}
