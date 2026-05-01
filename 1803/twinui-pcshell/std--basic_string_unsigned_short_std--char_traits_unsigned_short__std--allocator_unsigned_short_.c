/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x180175258
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180178A08 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18008C82C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

const void **__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        const void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  const void *v5; // r15
  unsigned __int64 v8; // r13
  char *v9; // rdi
  __int64 v10; // rbx
  char *v11; // rax
  size_t v12; // r8
  __int64 v13; // r15
  char *v14; // r14
  char *v15; // r12
  size_t v16; // rdi
  char *v17; // rbx
  const void **result; // rax

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlength_error("string too long");
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v5 + a2);
  v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10 + 1, 2uLL);
  v12 = 2LL * (_QWORD)v5;
  v13 = (__int64)v5 + a5;
  Src[2] = v9;
  Src[3] = (const void *)v10;
  v14 = v11;
  v15 = &v11[v12];
  v16 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v11, Src, v12);
    memcpy_0(v15, a4, v16);
    *(_WORD *)&v14[2 * v13] = 0;
  }
  else
  {
    v17 = (char *)*Src;
    memcpy_0(v11, *Src, v12);
    memcpy_0(v15, a4, v16);
    *(_WORD *)&v14[2 * v13] = 0;
    std::_Deallocate(v17, v8 + 1, 2uLL);
  }
  result = Src;
  *Src = v14;
  return result;
}
