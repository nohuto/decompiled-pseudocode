/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x18004AD2C
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x18004AE9C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
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
  size_t v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  _QWORD *v13; // rsi
  void *v14; // rax
  char *v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax

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
  v12 = v5 + 1;
  if ( v5 == -1 )
  {
    v13 = 0LL;
  }
  else if ( v12 < 0x1000 )
  {
    v13 = operator new(v12);
  }
  else
  {
    if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
      std::_Default_allocate_traits<1>::_Fail();
    v14 = operator new(v5 + 40);
    v13 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v13 - 1) = v14;
  }
  Src[2] = v9;
  v15 = (char *)v13 + v4;
  Src[3] = v5;
  if ( v8 < 0x10 )
  {
    memcpy_0(v13, Src, v4);
    memset_0((char *)v13 + v4, 0, a4);
    v15[a4] = 0;
  }
  else
  {
    v16 = (_QWORD *)*Src;
    memcpy_0(v13, (const void *)*Src, v4);
    memset_0((char *)v13 + v4, 0, a4);
    v15[a4] = 0;
    if ( v8 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v16 & 0x1F) != 0
        || (v19 = *(v16 - 1), v19 >= (unsigned __int64)v16)
        || (unsigned __int64)v16 - v19 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v18, v17);
        __debugbreak();
      }
      v16 = (_QWORD *)*(v16 - 1);
    }
    operator delete(v16);
  }
  *Src = v13;
  return Src;
}
