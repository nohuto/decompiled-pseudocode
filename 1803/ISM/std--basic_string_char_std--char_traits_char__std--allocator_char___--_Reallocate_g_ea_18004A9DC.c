/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x18004A9DC
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18004A828 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18004AB50 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18004AB50.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  size_t v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t v13; // rcx
  _QWORD *v14; // rsi
  void *v15; // rax
  char *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

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
  v13 = v6 + 1;
  if ( v6 == -1 )
  {
    v14 = 0LL;
  }
  else if ( v13 < 0x1000 )
  {
    v14 = operator new(v13);
  }
  else
  {
    if ( v6 + 40 < (unsigned __int64)(v6 + 1) )
      std::_Default_allocate_traits<1>::_Fail();
    v15 = operator new(v6 + 40);
    v14 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = v15;
  }
  Src[2] = v10;
  v16 = (char *)v14 + v5;
  Src[3] = v6;
  if ( v9 < 0x10 )
  {
    memcpy_0(v14, Src, v5);
    memcpy_0((char *)v14 + v5, a4, Size);
    v16[Size] = 0;
  }
  else
  {
    v17 = (_QWORD *)*Src;
    memcpy_0(v14, (const void *)*Src, v5);
    memcpy_0((char *)v14 + v5, a4, Size);
    v16[Size] = 0;
    if ( v9 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v17 & 0x1F) != 0
        || (v20 = *(v17 - 1), v20 >= (unsigned __int64)v17)
        || (unsigned __int64)v17 - v20 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v19, v18);
        __debugbreak();
      }
      v17 = (_QWORD *)*(v17 - 1);
    }
    operator delete(v17);
  }
  *Src = v14;
  return Src;
}
