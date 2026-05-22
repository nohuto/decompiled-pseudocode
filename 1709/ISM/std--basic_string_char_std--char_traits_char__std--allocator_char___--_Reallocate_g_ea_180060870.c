/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180060870
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18006047C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18006047C.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  char *v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v9; // rbp
  char *v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rax
  char *v14; // r14
  void *v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  void **result; // rax

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
  v13 = (char *)std::_Allocate(v7 + 1, 1uLL);
  v14 = v13;
  Src[3] = (void *)v7;
  Src[2] = v10;
  if ( v9 < 0x10 )
  {
    memcpy_0(v13, Srca, Size);
    memcpy_0(&v14[Size], Src, (size_t)(v6 + 1));
  }
  else
  {
    v15 = *Src;
    memcpy_0(v13, Srca, Size);
    memcpy_0(&v14[Size], v15, (size_t)(v6 + 1));
    if ( v9 + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v15 & 0x1F) != 0
        || (v17 = *((_QWORD *)v15 - 1), v17 >= (unsigned __int64)v15)
        || (unsigned __int64)v15 - v17 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v16);
        __debugbreak();
      }
      v15 = (void *)*((_QWORD *)v15 - 1);
    }
    operator delete(v15);
  }
  result = Src;
  *Src = v14;
  return result;
}
