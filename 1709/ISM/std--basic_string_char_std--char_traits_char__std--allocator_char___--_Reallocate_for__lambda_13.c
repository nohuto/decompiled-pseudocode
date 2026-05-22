/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180060638
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18005ED98 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
        __int64 a1,
        size_t a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax

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
  v8 = std::_Allocate(v2 + 1, 1uLL);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v2;
  v9 = v8;
  memset(v8, 0, a2);
  v9[a2] = 0;
  if ( v5 >= 0x10 )
  {
    v10 = *(_QWORD **)a1;
    if ( v5 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v10 & 0x1F) != 0
        || (v11 = *(v10 - 1), v11 >= (unsigned __int64)v10)
        || (unsigned __int64)v10 - v11 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5 + 1);
        __debugbreak();
      }
      v10 = (_QWORD *)*(v10 - 1);
    }
    operator delete(v10);
  }
  result = a1;
  *(_QWORD *)a1 = v9;
  return result;
}
