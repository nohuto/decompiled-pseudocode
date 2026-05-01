/*
 * XREFs of ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_K_K@Z @ 0x18008C82C
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008C784 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x180175258 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18017535C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18017535C.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x180175420 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_180175420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // r8

  v2 = a2 | 7;
  result = 0x7FFFFFFFFFFFFFFELL;
  if ( v2 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 > 0x7FFFFFFFFFFFFFFELL - (v4 >> 1) )
    {
      return 0x7FFFFFFFFFFFFFFELL;
    }
    else
    {
      if ( v2 < v4 + (v4 >> 1) )
        return v4 + (v4 >> 1);
      return v2;
    }
  }
  return result;
}
