/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800725EC
 * Callers:
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  size_t v14; // rcx
  void *v15; // rax
  _QWORD *v16; // rdi
  size_t v17; // r8
  __int64 v18; // r14
  char *v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::wstring::_Xlen();
  v8 = Src[3];
  v9 = v5 + a2;
  v10 = (v5 + a2) | 7;
  if ( v10 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v6 = v10;
      if ( v10 < v11 + v8 )
        v6 = v11 + v8;
    }
  }
  v12 = v6 + 1;
  v13 = 0LL;
  if ( v6 == -1 )
    goto LABEL_12;
  if ( v12 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Default_allocate_traits<1>::_Fail();
  v14 = 2 * v12;
  if ( v14 < 0x1000 )
  {
    v13 = operator new(v14);
LABEL_12:
    v16 = v13;
    goto LABEL_13;
  }
  if ( v14 + 39 < v14 )
    std::_Default_allocate_traits<1>::_Fail();
  v15 = operator new(v14 + 39);
  v16 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v16 - 1) = v15;
LABEL_13:
  v17 = 2 * v5;
  Src[2] = v9;
  v18 = a5 + v5;
  Src[3] = v6;
  v19 = (char *)v16 + v17;
  if ( v8 < 8 )
  {
    memcpy_0(v16, Src, v17);
    memcpy_0(v19, L"\\Temp\\HolographicInput.etl", 2 * a5);
    *((_WORD *)v16 + v18) = 0;
    goto LABEL_23;
  }
  v20 = (_QWORD *)*Src;
  memcpy_0(v16, (const void *)*Src, v17);
  memcpy_0(v19, L"\\Temp\\HolographicInput.etl", 2 * a5);
  *((_WORD *)v16 + v18) = 0;
  if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_21;
  if ( 2 * (v8 + 1) >= 0x1000 )
  {
    if ( ((unsigned __int8)v20 & 0x1F) == 0 )
    {
      v22 = *(v20 - 1);
      if ( v22 < (unsigned __int64)v20 && (unsigned __int64)v20 - v22 - 8 <= 0x1F )
      {
        v20 = (_QWORD *)*(v20 - 1);
        goto LABEL_20;
      }
    }
LABEL_21:
    _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL, v21);
    __debugbreak();
  }
LABEL_20:
  operator delete(v20);
LABEL_23:
  *Src = v16;
  return Src;
}
