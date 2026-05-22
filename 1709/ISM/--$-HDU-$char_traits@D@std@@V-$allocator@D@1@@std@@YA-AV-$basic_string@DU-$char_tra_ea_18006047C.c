/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18006047C
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18005EED8 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180060870 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060870.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall std::operator+<char>(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  size_t v3; // rbx
  unsigned __int64 v5; // rcx
  _OWORD *v6; // rsi
  unsigned __int64 v7; // r15
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  _BYTE *v10; // r12
  size_t v11; // r13
  _QWORD *v12; // rax
  char *v13; // rbx

  v3 = a2[2];
  v5 = a2[3];
  v6 = a3;
  v7 = a3[2];
  v8 = a2;
  if ( v7 <= v5 - v3 || (v9 = a3[3] - v7, v9 < v3) )
  {
    if ( a3[3] >= 0x10uLL )
      v6 = (_OWORD *)*a3;
    if ( v7 > v5 - v3 )
    {
      v8 = std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
             a2,
             v7,
             (__int64)a3,
             v6,
             a3[2]);
    }
    else
    {
      a2[2] = v3 + v7;
      v12 = a2;
      if ( a2[3] >= 0x10uLL )
        v12 = (_QWORD *)*a2;
      v13 = (char *)v12 + v3;
      memmove(v13, v6, v7);
      v13[v7] = 0;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)v8;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v8 + 1);
    v8[2] = 0LL;
    v8[3] = 15LL;
    *(_BYTE *)v8 = 0;
  }
  else
  {
    if ( v5 >= 0x10 )
      v8 = (_QWORD *)*a2;
    if ( v3 > v9 )
    {
      v6 = (_OWORD *)std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_(
                       a3,
                       v8,
                       a2[2]);
    }
    else
    {
      v10 = a3;
      a3[2] = v7 + v3;
      if ( a3[3] >= 0x10uLL )
        v10 = (_BYTE *)*a3;
      if ( (char *)v8 + v3 <= v10 || v8 > (_QWORD *)&v10[v7] )
      {
        v11 = v3;
      }
      else if ( v10 > (_BYTE *)v8 )
      {
        v11 = v10 - (_BYTE *)v8;
      }
      else
      {
        v11 = 0LL;
      }
      memmove(&v10[v3], v10, v7 + 1);
      memcpy_0(v10, v8, v11);
      memcpy_0(&v10[v11], (char *)v8 + v3 + v11, v3 - v11);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_OWORD *)a1 = *v6;
    *(_OWORD *)(a1 + 16) = v6[1];
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 15LL;
    *(_BYTE *)v6 = 0;
  }
  return a1;
}
