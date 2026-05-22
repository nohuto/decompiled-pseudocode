/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x18004A6C0
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18004A828 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  char *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v9; // rbp
  char *v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t v13; // rcx
  _QWORD *v14; // rdi
  void *v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax

  v6 = (char *)Src[2];
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    std::wstring::_Xlen();
  v9 = (unsigned __int64)Src[3];
  v10 = &v6[a2];
  v11 = (unsigned __int64)&v6[a2] | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v7 = v11;
      if ( v11 < v12 + v9 )
        v7 = v12 + v9;
    }
  }
  v13 = v7 + 1;
  v14 = 0LL;
  if ( v7 != -1 )
  {
    if ( v13 < 0x1000 )
    {
      v14 = operator new(v13);
    }
    else
    {
      if ( v7 + 40 < (unsigned __int64)(v7 + 1) )
        std::_Default_allocate_traits<1>::_Fail();
      v15 = operator new(v7 + 40);
      v14 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v14 - 1) = v15;
    }
  }
  Src[2] = v10;
  Src[3] = (void *)v7;
  if ( v9 < 0x10 )
  {
    memcpy_0(v14, Srca, Size);
    memcpy_0((char *)v14 + Size, Src, (size_t)(v6 + 1));
  }
  else
  {
    v16 = *Src;
    memcpy_0(v14, Srca, Size);
    memcpy_0((char *)v14 + Size, v16, (size_t)(v6 + 1));
    if ( v9 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v16 & 0x1F) != 0
        || (v19 = *((_QWORD *)v16 - 1), v19 >= (unsigned __int64)v16)
        || (unsigned __int64)v16 - v19 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v18, v17);
        __debugbreak();
      }
      v16 = (void *)*((_QWORD *)v16 - 1);
    }
    operator delete(v16);
  }
  *Src = v14;
  return Src;
}
