/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800343A4
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180034164 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _WORD *v13; // rax
  __int64 v14; // rdi
  size_t v15; // r8
  _WORD *v16; // r15
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *result; // rax

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::wstring::_Xlen();
  v9 = Src[3];
  v10 = v5 + a2;
  v11 = (v5 + a2) | 7;
  if ( v11 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFELL - (v9 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v9 )
        v6 = v12 + v9;
    }
  }
  v13 = std::_Allocate(v6 + 1, 2uLL);
  Src[2] = v10;
  v14 = v5;
  Src[3] = v6;
  v15 = 2 * v5;
  v16 = v13;
  if ( v9 < 8 )
  {
    memcpy_0(v13, Src, v15);
    memcpy_0(&v16[v14], a4, 2 * a5);
    v16[v5 + a5] = 0;
    goto LABEL_16;
  }
  v17 = (_QWORD *)*Src;
  memcpy_0(v13, (const void *)*Src, v15);
  memcpy_0(&v16[v14], a4, 2 * a5);
  v16[v5 + a5] = 0;
  if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_14;
  if ( 2 * (v9 + 1) >= 0x1000 )
  {
    if ( ((unsigned __int8)v17 & 0x1F) == 0 )
    {
      v18 = *(v17 - 1);
      if ( v18 < (unsigned __int64)v17 && (unsigned __int64)v17 - v18 - 8 <= 0x1F )
      {
        v17 = (_QWORD *)*(v17 - 1);
        goto LABEL_13;
      }
    }
LABEL_14:
    _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
    __debugbreak();
  }
LABEL_13:
  operator delete(v17);
LABEL_16:
  result = Src;
  *Src = v16;
  return result;
}
