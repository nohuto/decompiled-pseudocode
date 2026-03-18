/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18013E930
 * Callers:
 *     _anonymous_namespace_::Compressor::Compress @ 0x18014ADAC (_anonymous_namespace_--Compressor--Compress.c)
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ @ 0x18017C820 (-ConsumeTipPoints@CSuperWetInkScribble@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800D25A4 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        __int64 a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // rbp
  char *result; // rax
  unsigned __int64 v7; // rdi
  char *v8; // rbx
  char *v9; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(char **)a1;
  v5 = *(_QWORD *)(a1 + 8) - (_QWORD)v4;
  result = (char *)(*(_QWORD *)(a1 + 16) - (_QWORD)v4);
  if ( a2 <= (unsigned __int64)result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        result = &v4[a2];
        *(_QWORD *)(a1 + 8) = &v4[a2];
      }
    }
    else
    {
      v9 = &v4[a2];
      result = (char *)memset_0(*(void **)(a1 + 8), 0, (size_t)&v4[a2 - *(_QWORD *)(a1 + 8)]);
      *(_QWORD *)(a1 + 8) = v9;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = std::vector<char>::_Calculate_growth((_QWORD *)a1, a2);
    v8 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v7, 1uLL);
    memset_0(&v8[v5], 0, a2 - v5);
    memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return (char *)std::vector<unsigned char>::_Change_array(a1, (__int64)v8, a2, v7);
  }
  return result;
}
