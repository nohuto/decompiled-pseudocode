/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18017535C
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18017664C (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18008C82C (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_K_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

const void **__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(
        const void **Src,
        unsigned __int64 a2)
{
  const void *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  __int64 v6; // rbx
  void *v7; // rax
  void *v8; // rbp
  size_t v9; // r8
  char *v10; // rbx
  const void **result; // rax

  v2 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v2 < a2 )
    std::_Xlength_error("string too long");
  v4 = (unsigned __int64)Src[3];
  v5 = (char *)v2 + a2;
  v6 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v2 + a2);
  v7 = std::_Allocate<std::_Default_allocate_traits<1>>(v6 + 1, 2uLL);
  Src[2] = v5;
  v8 = v7;
  Src[3] = (const void *)v6;
  v9 = 2LL * (_QWORD)v2 + 2;
  if ( v4 < 8 )
  {
    memcpy_0(v7, Src, v9);
  }
  else
  {
    v10 = (char *)*Src;
    memcpy_0(v7, *Src, v9);
    std::_Deallocate(v10, v4 + 1, 2uLL);
  }
  result = Src;
  *Src = v8;
  return result;
}
