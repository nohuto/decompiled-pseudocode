/*
 * XREFs of ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1801BFF64
 * Callers:
 *     _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC (_lambda_271dd6204b0ad146775bb9f0699c6aeb_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801C34A0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1801C3CA0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180194EF0 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801C528C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801C5350 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  char *v9; // rax
  char *v10; // r14
  __int64 v11; // rbx
  std::_Ref_count_base *v12; // rcx
  __int64 v13; // [rsp+70h] [rbp+8h]
  char *v14; // [rsp+80h] [rbp+18h]

  v4 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD **)(a1 + 16) == v4 )
  {
    v6 = ((__int64)v4 - *(_QWORD *)a1) >> 4;
    v13 = v6;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v6 + 1);
    v9 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v8, 0x10uLL);
    v10 = v9;
    v14 = v9;
    try
    {
      v11 = 2 * v6;
      *(_QWORD *)&v9[8 * v11] = 0LL;
      *(_QWORD *)&v9[8 * v11 + 8] = 0LL;
      *(_QWORD *)&v9[8 * v11] = *a2;
      *(_QWORD *)&v9[8 * v11 + 8] = a2[1];
      *a2 = 0LL;
      a2[1] = 0LL;
      std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        *(_QWORD **)a1,
        *(_QWORD **)(a1 + 8),
        v9);
    }
    catch ( ... )
    {
      v12 = *(std::_Ref_count_base **)&v14[16 * v13 + 8];
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      std::_Deallocate(v14, v8, 0x10uLL);
      throw;
    }
    return std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v10, v7, v8);
  }
  else
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *v4 = *a2;
    result = a2[1];
    v4[1] = result;
    *a2 = 0LL;
    a2[1] = 0LL;
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  return result;
}
