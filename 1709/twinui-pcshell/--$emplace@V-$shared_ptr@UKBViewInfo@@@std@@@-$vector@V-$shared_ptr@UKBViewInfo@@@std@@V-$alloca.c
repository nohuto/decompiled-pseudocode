/*
 * XREFs of ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019ECF0
 * Callers:
 *     _lambda_1195b550ee03e899c4c093f0587694a4_::operator() @ 0x18019D820 (_lambda_1195b550ee03e899c4c093f0587694a4_--operator().c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800EC498 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18019F110 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>(
        volatile signed __int32 ***a1,
        _QWORD *a2,
        volatile signed __int32 **a3,
        volatile signed __int32 **a4)
{
  __int64 v7; // r13
  volatile signed __int32 **v8; // r12
  volatile signed __int32 **v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  volatile signed __int32 **v15; // rax
  volatile signed __int32 **v16; // rdx
  volatile signed __int32 **v17; // rcx
  __int64 v18; // rcx
  volatile signed __int32 **v19; // rdi
  volatile signed __int32 **v20; // rcx
  volatile signed __int32 **v21; // rsi
  volatile signed __int32 *v22; // rcx
  volatile signed __int32 *v23; // rax
  volatile signed __int32 *v24; // r12
  volatile signed __int32 *v25; // rsi
  _QWORD *result; // rax
  __int64 v27; // rcx
  volatile signed __int32 **v28; // [rsp+30h] [rbp-58h]
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]
  volatile signed __int32 **v30; // [rsp+90h] [rbp+8h]
  volatile signed __int32 *v31; // [rsp+90h] [rbp+8h]
  volatile signed __int32 **v33; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v34; // [rsp+A0h] [rbp+18h]

  v7 = ((char *)a3 - (char *)*a1) >> 4;
  v8 = a1[1];
  v9 = a1[2];
  if ( v9 == v8 )
  {
    v10 = ((char *)v8 - (char *)*a1) >> 4;
    if ( v10 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v11 = v10 + 1;
    v29 = v11;
    v12 = ((char *)v9 - (char *)*a1) >> 4;
    v13 = v12 >> 1;
    if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
    {
      v14 = v12 + v13;
      if ( v12 + v13 < v11 )
        v14 = v11;
    }
    else
    {
      v14 = v11;
    }
    v15 = (volatile signed __int32 **)std::_Allocate(v14, 0x10uLL);
    v30 = v15;
    v16 = &v15[2 * v7];
    v33 = v16 + 2;
    try
    {
      if ( v16 )
      {
        *v16 = *a4;
        v16[1] = a4[1];
        *a4 = 0LL;
        a4[1] = 0LL;
      }
      v28 = &v15[2 * v7];
      v17 = *a1;
      if ( a3 == v8 )
      {
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          v17,
          a1[1],
          v15);
        v19 = v30;
      }
      else
      {
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          v17,
          a3,
          v15);
        v19 = v30;
        v28 = v30;
        std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
          a3,
          a1[1],
          v33);
      }
    }
    catch ( ... )
    {
      std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(v18, v28, v33);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v27, v30, v14);
      throw;
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v19, v29, v14);
  }
  else if ( a3 == v8 )
  {
    if ( v8 )
    {
      *v8 = *a4;
      v8[1] = a4[1];
      *a4 = 0LL;
      a4[1] = 0LL;
    }
    a1[1] += 2;
  }
  else
  {
    v34 = *a4;
    v31 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v20 = a1[1];
    if ( v20 )
    {
      *v20 = *(v20 - 2);
      v20[1] = *(v20 - 1);
      *(v20 - 2) = 0LL;
      *(v20 - 1) = 0LL;
    }
    a1[1] += 2;
    v21 = v20 - 2;
    while ( v21 != a3 )
    {
      v21 -= 2;
      v22 = *v21;
      v23 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      v24 = v21[3];
      v21[3] = v23;
      v21[2] = v22;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
    }
    v25 = a3[1];
    a3[1] = v31;
    *a3 = v34;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  result = a2;
  *a2 = &(*a1)[2 * v7];
  return result;
}
