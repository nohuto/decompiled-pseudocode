/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180044B1C
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180044C48 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
        __int64 a1,
        size_t a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  _QWORD *v12; // rsi
  void *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a2 | 0xF;
  if ( (a2 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = v4 + 1;
  if ( v4 == -1 )
  {
    v12 = 0LL;
  }
  else if ( v11 < 0x1000 )
  {
    v12 = operator new(v11);
  }
  else
  {
    if ( v4 + 40 < (unsigned __int64)(v4 + 1) )
      std::_Default_allocate_traits<1>::_Fail();
    v13 = operator new(v4 + 40);
    v12 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v12 - 1) = v13;
  }
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v4;
  memcpy_0(v12, a4, a2);
  *((_BYTE *)v12 + a2) = 0;
  if ( v8 >= 0x10 )
  {
    v15 = *(_QWORD **)a1;
    v16 = v8 + 1;
    if ( v8 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v15 & 0x1F) != 0
        || (v16 = *(v15 - 1), v16 >= (unsigned __int64)v15)
        || (unsigned __int64)v15 - v16 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v16, v14);
        __debugbreak();
      }
      v15 = (_QWORD *)*(v15 - 1);
    }
    operator delete(v15);
  }
  *(_QWORD *)a1 = v12;
  return a1;
}
