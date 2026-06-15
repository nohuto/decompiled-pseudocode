/*
 * XREFs of ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002C854
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B740 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B900 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Calculate_growth@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x18002C6BC (-_Calculate_growth@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x18002C6F0 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002C99C (--$_Uninitialized_move_al_unchecked1@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  _QWORD *v6; // r12
  __int64 v8; // r13
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // r12
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 *v19; // r14
  __int64 **v20; // r15
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 *v25; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp+10h]
  unsigned __int64 v27; // [rsp+A0h] [rbp+18h]

  v26 = a2;
  v6 = a2;
  v8 = a3 - *a1;
  v9 = a1[1];
  if ( a1[2] == v9 )
  {
    v12 = v9 - *a1;
    if ( v12 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v24 = v12 + 1;
    v27 = std::vector<Microsoft::WRL::WeakRef>::_Calculate_growth(a1, v12 + 1);
    v13 = std::_Allocate(v27, 8uLL);
    v14 = &v13[v8];
    try
    {
      if ( v14 )
      {
        v15 = *a4;
        *v14 = *a4;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      v25 = &v13[v8];
      v16 = *a1;
      if ( a3 == v9 )
      {
        std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v16,
          a1[1],
          v13);
      }
      else
      {
        std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          v16,
          a3,
          v13);
        v25 = v13;
        std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
          a3,
          a1[1],
          v14 + 1);
      }
    }
    catch ( ... )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Destroy(v17, v25, v14 + 1);
      std::_Deallocate(v13, v27, 8uLL);
      throw;
    }
    std::vector<Microsoft::WRL::WeakRef>::_Change_array(a1, v13, v24, v27);
    v6 = v26;
  }
  else if ( a3 == v9 )
  {
    if ( v9 )
    {
      v10 = *a4;
      *v9 = *a4;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    ++a1[1];
  }
  else
  {
    v18 = *a4;
    if ( *a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(*a4);
    v19 = a1[1];
    if ( v19 )
    {
      *v19 = 0LL;
      *v19 = *(v19 - 1);
      *(v19 - 1) = 0LL;
    }
    ++a1[1];
    v20 = (__int64 **)(v19 - 1);
    if ( a3 != v19 - 1 )
    {
      do
      {
        --v20;
        v21 = 0LL;
        if ( &v25 != v20 )
        {
          v21 = *v20;
          *v20 = 0LL;
        }
        v22 = v20[1];
        v20[1] = v21;
        if ( v22 )
          (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
      }
      while ( v20 != (__int64 **)a3 );
    }
    v23 = *a3;
    *a3 = v18;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  *v6 = &(*a1)[v8];
  return v6;
}
