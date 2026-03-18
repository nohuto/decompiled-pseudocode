/*
 * XREFs of ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801A4250
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801A4584 (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 * Callees:
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180016F94 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801A5378 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 */

char __fastcall std::vector<float>::_Insert_range<gsl::details::span_iterator<gsl::span<float const,-1>,0>>(
        __int64 a1,
        _DWORD *a2,
        __m128i *a3,
        __m128i *a4)
{
  _DWORD *v5; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  char v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbx
  char *v13; // rbx
  char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  const void *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  size_t v20; // r15
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 j; // r8
  char *v24; // rbx
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 i; // r8
  __m128i v29; // [rsp+20h] [rbp-20h]
  __m128i v30; // [rsp+30h] [rbp-10h]
  const void *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v32; // [rsp+80h] [rbp+40h]
  __int64 v33; // [rsp+88h] [rbp+48h]

  v5 = a2;
  v7 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v8 = ((__int64)a2 - *(_QWORD *)a1) >> 2;
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0] - v7;
  if ( v9 == 1 && a2 == *(_DWORD **)(a1 + 8) )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( !v9 )
      return v7;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v9 <= (*(_QWORD *)(a1 + 16) - v11) >> 2 )
  {
    v20 = v11 - (_QWORD)a2;
    v21 = v9;
    if ( v9 >= (v11 - (__int64)a2) >> 2 )
    {
      v24 = (char *)&a2[v21];
      memmove(&a2[v21], a2, v20);
      v25 = *a4;
      *(_QWORD *)(a1 + 8) = &v24[v20];
      v26 = a3->m128i_i64[1];
      for ( i = a3->m128i_i64[0]; ; *v5++ = *(_DWORD *)(*(_QWORD *)(i + 8) + 4 * v26++) )
      {
        LOBYTE(v7) = __PAIR128__(v26, i) != *(_OWORD *)&v25;
        if ( __PAIR128__(v26, i) == *(_OWORD *)&v25 )
          break;
      }
    }
    else
    {
      memmove(*(void **)(a1 + 8), (const void *)(v11 - v21 * 4), 4 * v9);
      *(_QWORD *)(a1 + 8) = v21 * 4 + v11;
      memmove(&v5[v9], v5, v11 + -4LL * v9 - (_QWORD)v5);
      v29 = *a4;
      v22 = a3->m128i_i64[1];
      for ( j = a3->m128i_i64[0]; ; *v5++ = *(_DWORD *)(*(_QWORD *)(j + 8) + 4 * v22++) )
      {
        LOBYTE(v7) = __PAIR128__(v22, j) != *(_OWORD *)&v29;
        if ( __PAIR128__(v22, j) == *(_OWORD *)&v29 )
          break;
      }
    }
  }
  else
  {
    v12 = (v11 - *(_QWORD *)a1) >> 2;
    if ( v9 > 0x3FFFFFFFFFFFFFFFLL - v12 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v33 = v12 + v9;
    v32 = std::vector<float>::_Calculate_growth(a1, v12 + v9);
    v13 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v32, 4uLL);
    v30 = *a4;
    v14 = &v13[4 * v8];
    v15 = a3->m128i_i64[1];
    v16 = a3->m128i_i64[0];
    while ( __PAIR128__(v15, v16) != *(_OWORD *)&v30 )
    {
      *(_DWORD *)v14 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 4 * v15);
      v14 += 4;
      ++v15;
    }
    v17 = *(const void **)a1;
    v18 = v13;
    if ( v10 )
    {
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)v17;
    }
    else
    {
      memmove(v13, v17, (size_t)v5 - *(_QWORD *)a1);
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)v5;
      v18 = &v13[4 * v8 + 4 * v9];
      v17 = v5;
    }
    memmove(v18, v17, v19);
    LOBYTE(v7) = std::vector<unsigned int>::_Change_array(a1, (__int64)v13, v33, v32);
  }
  return v7;
}
