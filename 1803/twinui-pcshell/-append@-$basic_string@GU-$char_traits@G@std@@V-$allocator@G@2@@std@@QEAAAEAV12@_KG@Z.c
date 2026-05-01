/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180178A7C
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18017664C (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x180175420 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180175420.c)
 */

char **__fastcall std::wstring::append(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  char *v7; // r9
  char *v8; // rdi
  unsigned __int64 i; // rcx
  __int16 v11; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > *(_QWORD *)(a1 + 24) - v4 )
  {
    v11 = a3;
    LOBYTE(a3) = 0;
    return std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
             (char **)a1,
             a2,
             a3,
             a2,
             v11);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24) < 8uLL;
    v6 = v4 + a2;
    *(_QWORD *)(a1 + 16) = v4 + a2;
    v7 = (char *)a1;
    if ( !v5 )
      v7 = *(char **)a1;
    v8 = &v7[2 * v4];
    if ( a2 )
    {
      for ( i = a2; i; --i )
      {
        *(_WORD *)v8 = a3;
        v8 += 2;
      }
    }
    *(_WORD *)&v7[2 * v6] = 0;
    return (char **)a1;
  }
}
