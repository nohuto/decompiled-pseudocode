/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180028D98
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___ @ 0x18002924C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18002924C.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::operator+<char>(_QWORD *Src, char *a2, _BYTE *a3)
{
  _QWORD *v4; // r14
  size_t *v6; // r12
  size_t Size; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  size_t v14; // rbp
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char *v20; // rbx

  v4 = a2;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v6 = (size_t *)(a2 + 16);
  Size = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  v9 = *v6 + v8;
  v10 = Src[2];
  if ( v10 <= v9 && Src[3] != v9 )
  {
    if ( Src[3] >= v9 )
    {
      if ( v9 < 0x10 && Src[3] >= 0x10uLL )
      {
        v11 = (_QWORD *)*Src;
        memcpy_0(Src, (const void *)*Src, v10 + 1);
        if ( (unsigned __int64)(Src[3] + 1LL) >= 0x1000 )
        {
          if ( ((unsigned __int8)v11 & 0x1F) != 0
            || (v13 = *(v11 - 1), v13 >= (unsigned __int64)v11)
            || (unsigned __int64)v11 - v13 - 8 > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v12);
            __debugbreak();
          }
          v11 = (_QWORD *)*(v11 - 1);
        }
        operator delete(v11);
        Src[3] = 15LL;
      }
    }
    else
    {
      std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___(Src);
      Src[2] = v10;
    }
  }
  if ( v4[3] >= 0x10uLL )
    v4 = (_QWORD *)*v4;
  v14 = *v6;
  v15 = Src[2];
  if ( *v6 > Src[3] - v15 )
  {
    std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
      Src,
      *v6);
  }
  else
  {
    Src[2] = v15 + v14;
    v16 = Src;
    if ( Src[3] >= 0x10uLL )
      v16 = (_QWORD *)*Src;
    v17 = (char *)v16 + v15;
    memmove((char *)v16 + v15, v4, v14);
    v17[v14] = 0;
  }
  do
    ++Size;
  while ( a3[Size] );
  v18 = Src[2];
  if ( Size > Src[3] - v18 )
  {
    std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
      Src,
      Size);
  }
  else
  {
    Src[2] = v18 + Size;
    v19 = Src;
    if ( Src[3] >= 0x10uLL )
      v19 = (_QWORD *)*Src;
    v20 = (char *)v19 + v18;
    memmove((char *)v19 + v18, a3, Size);
    v20[Size] = 0;
  }
  return Src;
}
