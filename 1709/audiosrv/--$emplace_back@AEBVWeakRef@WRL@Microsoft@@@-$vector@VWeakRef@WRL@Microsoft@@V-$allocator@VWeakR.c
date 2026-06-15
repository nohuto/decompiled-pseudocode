/*
 * XREFs of ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002F834
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x18002F79C (-_Calculate_growth@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x18002F7D0 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002F990 (--$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  bool v7; // r8
  char *v8; // rax
  __int64 v9; // rsi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // [rsp+70h] [rbp+8h]

  v4 = (__int64 *)a1[1];
  if ( (__int64 *)a1[2] == v4 )
  {
    v5 = ((__int64)v4 - *a1) >> 3;
    if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v6 = std::vector<Microsoft::WRL::WeakRef>::_Calculate_growth(a1, v5 + 1);
    v8 = (char *)std::_Allocate(v6, 8uLL, v7);
    v9 = (__int64)v8;
    v14 = v8;
    try
    {
      v10 = &v8[8 * v5];
      if ( v10 )
      {
        v11 = *a2;
        *(_QWORD *)v10 = *a2;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
        *a1,
        a1[1],
        v9);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(v12, &v14[8 * v5]);
      std::_Deallocate(v14, v6, 8uLL);
      throw;
    }
    std::vector<Microsoft::WRL::WeakRef>::_Change_array((__int64)a1, v9, v5 + 1, v6);
  }
  else
  {
    if ( v4 )
    {
      v13 = *a2;
      *v4 = *a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    }
    a1[1] += 8LL;
  }
}
