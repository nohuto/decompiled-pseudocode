/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180028D98 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800603CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800603CC.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18006047C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18006047C.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  size_t v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rax
  char *v14; // r15
  _QWORD *v15; // rsi
  char *v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  char *v19; // rdi
  _QWORD *result; // rax

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::wstring::_Xlen();
  v9 = Src[3];
  v10 = v5 + a2;
  v11 = (v5 + a2) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v9 )
        v6 = v12 + v9;
    }
  }
  v13 = (char *)std::_Allocate(v6 + 1, 1uLL);
  Src[2] = v10;
  v14 = v13;
  Src[3] = v6;
  if ( v9 < 0x10 )
  {
    memcpy_0(v13, Src, v5);
    v19 = &v14[v5];
    memcpy_0(v19, a4, Size);
    v19[Size] = 0;
  }
  else
  {
    v15 = (_QWORD *)*Src;
    memcpy_0(v13, (const void *)*Src, v5);
    v16 = &v14[v5];
    memcpy_0(v16, a4, Size);
    v16[Size] = 0;
    if ( v9 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v15 & 0x1F) != 0
        || (v18 = *(v15 - 1), v18 >= (unsigned __int64)v15)
        || (unsigned __int64)v15 - v18 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v17);
        __debugbreak();
      }
      v15 = (_QWORD *)*(v15 - 1);
    }
    operator delete(v15);
  }
  result = Src;
  *Src = v14;
  return result;
}
