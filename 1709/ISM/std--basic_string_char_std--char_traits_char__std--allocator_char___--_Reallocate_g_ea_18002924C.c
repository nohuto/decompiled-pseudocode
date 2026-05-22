/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___ @ 0x18002924C
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180028D98 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___(
        _QWORD *Src,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  void *v9; // rax
  void *v10; // rsi
  size_t v11; // r8
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *result; // rax

  v2 = Src[2];
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v2 < a2 )
    std::wstring::_Xlen();
  v5 = Src[3];
  v6 = v2 + a2;
  v7 = (v2 + a2) | 0xF;
  if ( v7 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = v5 >> 1;
    if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
    {
      v3 = v7;
      if ( v7 < v8 + v5 )
        v3 = v8 + v5;
    }
  }
  v9 = std::_Allocate(v3 + 1, 1uLL);
  Src[2] = v6;
  v10 = v9;
  Src[3] = v3;
  v11 = v2 + 1;
  if ( v5 < 0x10 )
  {
    memcpy_0(v9, Src, v11);
  }
  else
  {
    v12 = (_QWORD *)*Src;
    memcpy_0(v9, (const void *)*Src, v11);
    if ( v5 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v12 & 0x1F) != 0
        || (v13 = *(v12 - 1), v13 >= (unsigned __int64)v12)
        || (unsigned __int64)v12 - v13 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5 + 1);
        __debugbreak();
      }
      v12 = (_QWORD *)*(v12 - 1);
    }
    operator delete(v12);
  }
  result = Src;
  *Src = v10;
  return result;
}
