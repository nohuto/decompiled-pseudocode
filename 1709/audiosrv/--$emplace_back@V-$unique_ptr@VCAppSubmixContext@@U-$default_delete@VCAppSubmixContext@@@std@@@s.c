/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@1@@Z @ 0x18009EDE4
 * Callers:
 *     asm_GetApplicationSubmixes @ 0x1800A09B0 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18009EA54 (--$_Uninitialized_move_al_unchecked@PEAV-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCApp.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@2@_K1@Z @ 0x1800A010C (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CAppSubmixContext>>::emplace_back<std::unique_ptr<CAppSubmixContext>>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 **v10; // rax
  __int64 **v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 **v15; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (__int64 *)a1[1];
  if ( (__int64 *)result == v5 )
  {
    v6 = (__int64)((__int64)v5 - *a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = (__int64)(result - *a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = (__int64 **)std::_Allocate(v9, 8uLL);
    v11 = v10;
    v15 = v10;
    try
    {
      v12 = (__int64 *)&v10[v6];
      if ( v12 )
      {
        v13 = *a2;
        *a2 = 0LL;
        *v12 = v13;
      }
      std::_Uninitialized_move_al_unchecked<std::unique_ptr<CAppSubmixContext> *,std::unique_ptr<CAppSubmixContext> *,std::allocator<std::unique_ptr<CAppSubmixContext>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<std::unique_ptr<CAppSubmixContext>>>::destroy<std::unique_ptr<CAppSubmixContext>>(
        v14,
        &v15[v6]);
      std::_Deallocate(v15, v9, 8uLL);
      throw;
    }
    return std::vector<std::unique_ptr<CAppSubmixContext>>::_Change_array(a1, v11, v6 + 1, v9);
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *a2 = 0LL;
      *v5 = result;
    }
    a1[1] += 8LL;
  }
  return result;
}
