/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180060730
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18005ED98 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4)
{
  size_t v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v8; // rbp
  size_t v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rax
  _BYTE *v13; // r14
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *result; // rax

  v4 = Src[2];
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::wstring::_Xlen();
  v8 = Src[3];
  v9 = v4 + a2;
  v10 = (v4 + a2) | 0xF;
  if ( v10 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v5 = v10;
      if ( v10 < v11 + v8 )
        v5 = v11 + v8;
    }
  }
  v12 = std::_Allocate(v5 + 1, 1uLL);
  Src[2] = v9;
  v13 = v12;
  Src[3] = v5;
  if ( v8 < 0x10 )
  {
    memcpy_0(v12, Src, v4);
    memset(&v13[v4], 0, a4);
    v13[v4 + a4] = 0;
  }
  else
  {
    v14 = (_QWORD *)*Src;
    memcpy_0(v12, (const void *)*Src, v4);
    memset(&v13[v4], 0, a4);
    v13[v4 + a4] = 0;
    if ( v8 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v14 & 0x1F) != 0
        || (v16 = *(v14 - 1), v16 >= (unsigned __int64)v14)
        || (unsigned __int64)v14 - v16 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v15);
        __debugbreak();
      }
      v14 = (_QWORD *)*(v14 - 1);
    }
    operator delete(v14);
  }
  result = Src;
  *Src = v13;
  return result;
}
