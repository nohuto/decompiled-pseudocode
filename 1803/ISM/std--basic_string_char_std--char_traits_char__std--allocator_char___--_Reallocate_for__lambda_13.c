/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x18004AC00
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18004AE9C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
        __int64 a1,
        size_t a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t v8; // rcx
  _QWORD *v9; // rsi
  void *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2 | 0xF;
  if ( (a2 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = v5 >> 1;
    if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
    {
      v2 = v6;
      if ( v6 < v7 + v5 )
        v2 = v7 + v5;
    }
  }
  v8 = v2 + 1;
  if ( v2 == -1 )
  {
    v9 = 0LL;
  }
  else if ( v8 < 0x1000 )
  {
    v9 = operator new(v8);
  }
  else
  {
    if ( v2 + 40 < (unsigned __int64)(v2 + 1) )
      std::_Default_allocate_traits<1>::_Fail();
    v10 = operator new(v2 + 40);
    v9 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v9 - 1) = v10;
  }
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v2;
  memset_0(v9, 0, a2);
  *((_BYTE *)v9 + a2) = 0;
  if ( v5 >= 0x10 )
  {
    v12 = *(_QWORD **)a1;
    v13 = v5 + 1;
    if ( v5 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v12 & 0x1F) != 0
        || (v13 = *(v12 - 1), v13 >= (unsigned __int64)v12)
        || (unsigned __int64)v12 - v13 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v13, v11);
        __debugbreak();
      }
      v12 = (_QWORD *)*(v12 - 1);
    }
    operator delete(v12);
  }
  *(_QWORD *)a1 = v9;
  return a1;
}
