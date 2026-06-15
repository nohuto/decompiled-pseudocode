/*
 * XREFs of ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002C754
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002C99C (--$_Uninitialized_move_al_unchecked1@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WR.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // [rsp+80h] [rbp+18h]

  result = (__int64)a1[2];
  v5 = a1[1];
  if ( (__int64 *)result == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (result - (__int64)*a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = std::_Allocate(v10, 8uLL);
    v12 = v11;
    v20 = v11;
    try
    {
      v13 = &v11[v6];
      if ( v13 )
      {
        v14 = *a2;
        *v13 = *a2;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v17 = v20[v6];
      if ( v17 )
      {
        v20[v6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      std::_Deallocate(v20, v10, 8uLL);
      throw;
    }
    v15 = *a1;
    if ( *a1 )
    {
      v16 = a1[1];
      while ( v15 != v16 )
      {
        v19 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        ++v15;
      }
      std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    }
    *a1 = v12;
    a1[1] = &v12[v7];
    result = (__int64)&v12[v10];
    a1[2] = (__int64 *)result;
  }
  else
  {
    if ( v5 )
    {
      v18 = *a2;
      *v5 = *a2;
      if ( v18 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    ++a1[1];
  }
  return result;
}
