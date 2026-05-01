/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_ @ 0x1800C05DC
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1800BEE28 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027850 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_b70241e9b5ebaad244db3e52d52cab17__unsigned___int64_unsigned_short_(
        _QWORD *Src)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _WORD *v8; // rax
  __int64 v9; // rbx
  size_t v10; // r8
  _WORD *v11; // r14
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *result; // rax

  v1 = Src[2];
  v2 = 0x7FFFFFFFFFFFFFFELL;
  if ( v1 == 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v4 = Src[3];
  v5 = v1 + 1;
  v6 = (v1 + 1) | 7;
  if ( v6 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = v4 >> 1;
    if ( v4 <= 0x7FFFFFFFFFFFFFFELL - (v4 >> 1) )
    {
      v2 = (v1 + 1) | 7;
      if ( v6 < v7 + v4 )
        v2 = v7 + v4;
    }
  }
  v8 = std::_Allocate(v2 + 1, 2uLL);
  Src[3] = v2;
  v9 = v1;
  Src[2] = v5;
  v10 = 2 * v1;
  v11 = v8;
  if ( v4 < 8 )
  {
    memcpy_0(v8, Src, v10);
    v11[v9] = 32;
    v11[v5] = 0;
    goto LABEL_16;
  }
  v12 = (_QWORD *)*Src;
  memcpy_0(v8, (const void *)*Src, v10);
  v11[v9] = 32;
  v11[v5] = 0;
  if ( v4 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_14;
  if ( 2 * (v4 + 1) >= 0x1000 )
  {
    if ( ((unsigned __int8)v12 & 0x1F) == 0 )
    {
      v13 = *(v12 - 1);
      if ( v13 < (unsigned __int64)v12 && (unsigned __int64)v12 - v13 - 8 <= 0x1F )
      {
        v12 = (_QWORD *)*(v12 - 1);
        goto LABEL_13;
      }
    }
LABEL_14:
    _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
    __debugbreak();
  }
LABEL_13:
  operator delete(v12);
LABEL_16:
  result = Src;
  *Src = v11;
  return result;
}
