/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x180175420
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180178A7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18008C82C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator() @ 0x180175E88 (_lambda_b70241e9b5ebaad244db3e52d52cab17_--operator().c)
 */

char **__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5)
{
  char *v5; // r14
  unsigned __int64 v8; // r13
  char *v9; // rdi
  __int64 v10; // rbx
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rbp
  char *v14; // rbx
  char **result; // rax

  v5 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlength_error("string too long");
  v8 = (unsigned __int64)a1[3];
  v9 = &v5[a2];
  v10 = std::wstring::_Calculate_growth((__int64)a1, (__int64)&v5[a2]);
  v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10 + 1, 2uLL);
  a1[2] = v9;
  v13 = v11;
  a1[3] = (char *)v10;
  if ( v8 < 8 )
  {
    lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, a1, v5, a4, a5);
  }
  else
  {
    v14 = *a1;
    lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, *a1, v5, a4, a5);
    std::_Deallocate(v14, v8 + 1, 2uLL);
  }
  result = a1;
  *a1 = v13;
  return result;
}
