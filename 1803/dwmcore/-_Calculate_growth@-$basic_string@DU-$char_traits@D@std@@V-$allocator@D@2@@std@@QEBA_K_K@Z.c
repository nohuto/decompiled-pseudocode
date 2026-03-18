/*
 * XREFs of ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_K_K@Z @ 0x1800D355C
 * Callers:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_319d5e083f45f90dcdce5dce53cbb275__char_ @ 0x1800D3484 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::_Calculate_growth(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // r8

  v2 = a2 | 0xF;
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( v2 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 > 0x7FFFFFFFFFFFFFFFLL - (v4 >> 1) )
    {
      return 0x7FFFFFFFFFFFFFFFLL;
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
