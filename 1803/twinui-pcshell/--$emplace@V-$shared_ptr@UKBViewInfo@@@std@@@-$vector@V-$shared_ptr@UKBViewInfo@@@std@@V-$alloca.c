/*
 * XREFs of ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18023B5B4
 * Callers:
 *     _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC (_lambda_271dd6204b0ad146775bb9f0699c6aeb_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FA3E8 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180194EF0 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801C528C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801C5350 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4)
{
  _QWORD *v6; // r13
  __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rax
  char *v11; // r13
  char *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r12
  __int64 *v16; // r14
  unsigned __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  char *v20; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  _QWORD *v23; // [rsp+90h] [rbp+8h]
  char *v25; // [rsp+A0h] [rbp+18h]

  v22 = -2LL;
  v6 = a2;
  v8 = ((__int64)a3 - *a1) >> 4;
  v9 = (__int64 *)a1[1];
  if ( (__int64 *)a1[2] == v9 )
  {
    v10 = ((__int64)v9 - *a1) >> 4;
    if ( v10 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v19 = v10 + 1;
    v18 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v10 + 1);
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v18, 0x10uLL);
    v20 = v11;
    v12 = &v11[16 * v8];
    v23 = v12 + 16;
    try
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *(_QWORD *)v12 = *(_QWORD *)a4;
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a4 + 8);
      *(_QWORD *)a4 = 0LL;
      *(_QWORD *)(a4 + 8) = 0LL;
      v25 = &v11[16 * v8];
      v13 = (_QWORD *)*a1;
      if ( a3 == v9 )
      {
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          v13,
          (_QWORD *)a1[1],
          v11);
      }
      else
      {
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          v13,
          a3,
          v11);
        v25 = v11;
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          a3,
          (_QWORD *)a1[1],
          v23);
      }
    }
    catch ( ... )
    {
      std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(v14, v25, v23);
      std::_Deallocate(v20, v18, 0x10uLL);
      throw;
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, (__int64)v11, v19, v18);
    v6 = a2;
  }
  else if ( a3 == v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *v9 = *(_QWORD *)a4;
    v9[1] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    a1[1] += 16LL;
  }
  else
  {
    v20 = *(char **)a4;
    v21 = *(std::_Ref_count_base **)(a4 + 8);
    *(_QWORD *)a4 = 0LL;
    *(_QWORD *)(a4 + 8) = 0LL;
    v15 = (_QWORD *)a1[1];
    *v15 = 0LL;
    v15[1] = 0LL;
    v16 = v15 - 2;
    *v15 = *(v15 - 2);
    v15[1] = *(v15 - 1);
    *v16 = 0LL;
    v16[1] = 0LL;
    a1[1] += 16LL;
    if ( a3 != v15 - 2 )
    {
      do
      {
        v16 -= 2;
        std::shared_ptr<KBViewInfo>::operator=(v16 + 2, v16);
      }
      while ( v16 != a3 );
    }
    std::shared_ptr<KBViewInfo>::operator=(a3, (__int64 *)&v20);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
  }
  *v6 = *a1 + 16 * v8;
  return v6;
}
