/*
 * XREFs of ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180208720
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180208984 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800D25A4 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<unsigned char>::_Insert_range<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>>(
        __int64 a1,
        char *a2,
        __m128i *a3,
        __m128i *a4)
{
  unsigned __int64 v6; // xmm0_8
  unsigned __int64 v8; // xmm1_8
  unsigned __int64 v10; // rdi
  char *v11; // rax
  char v12; // r15
  __int64 v13; // r14
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r14
  char *v18; // r12
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  char *v21; // r9
  char *v22; // rdx
  char *v23; // rcx
  size_t v24; // r8
  __int64 v25; // r15
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  char *v28; // rbx
  char *v29; // rdi
  __m128i v30; // xmm0
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  char *v33; // rbx
  __m128i v35; // [rsp+20h] [rbp-20h]
  const void *retaddr; // [rsp+78h] [rbp+38h]
  char *v37; // [rsp+80h] [rbp+40h]
  unsigned __int64 v38; // [rsp+88h] [rbp+48h]
  __int64 v39; // [rsp+90h] [rbp+50h]

  v6 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v8 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v10 = v6 - v8;
  v11 = &a2[-*(_QWORD *)a1];
  v37 = v11;
  if ( v6 - v8 == 1 && a2 == *(char **)(a1 + 8) )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( !v10 )
      return (char)v11;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( v10 <= *(_QWORD *)(a1 + 16) - v13 )
  {
    v25 = v13 - (_QWORD)a2;
    if ( v10 >= v13 - (__int64)a2 )
    {
      v29 = &a2[v10];
      memmove(v29, a2, v13 - (_QWORD)a2);
      v30 = *a4;
      v31 = a3->m128i_i64[0];
      v32 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      *(_QWORD *)(a1 + 8) = &v29[v25];
      v33 = &a2[-v32];
      while ( 1 )
      {
        LOBYTE(v11) = __PAIR128__(v32, v31) != *(_OWORD *)&v30;
        if ( __PAIR128__(v32, v31) == *(_OWORD *)&v30 )
          break;
        v33[v32] = *(_BYTE *)(v32 + *(_QWORD *)(v31 + 8));
        ++v32;
      }
    }
    else
    {
      memmove(*(void **)(a1 + 8), (const void *)(v13 - v10), v6 - v8);
      *(_QWORD *)(a1 + 8) = v10 + v13;
      memmove((void *)(v13 - (v25 - v10)), a2, v25 - v10);
      v26 = a3->m128i_i64[0];
      v27 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      v35 = *a4;
      v28 = &a2[-v27];
      while ( 1 )
      {
        LOBYTE(v11) = __PAIR128__(v27, v26) != *(_OWORD *)&v35;
        if ( __PAIR128__(v27, v26) == *(_OWORD *)&v35 )
          break;
        v28[v27] = *(_BYTE *)(v27 + *(_QWORD *)(v26 + 8));
        ++v27;
      }
    }
  }
  else
  {
    v14 = v13 - *(_QWORD *)a1;
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL - v14 )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v39 = v14 + v10;
    v38 = std::vector<char>::_Calculate_growth((_QWORD *)a1, v14 + v10);
    v15 = std::_Allocate<std::_Default_allocate_traits<1>>(v38, 1uLL);
    v16 = *a4;
    v17 = v15;
    v18 = &v37[v15];
    v19 = a3->m128i_i64[0];
    v20 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    v21 = &v37[v15 - v20];
    while ( __PAIR128__(v20, v19) != *(_OWORD *)&v16 )
    {
      v21[v20] = *(_BYTE *)(v20 + *(_QWORD *)(v19 + 8));
      ++v20;
    }
    v22 = *(char **)a1;
    v23 = (char *)v15;
    if ( v12 )
    {
      v24 = *(_QWORD *)(a1 + 8) - (_QWORD)v22;
    }
    else
    {
      memmove((void *)v15, v22, (size_t)&a2[-*(_QWORD *)a1]);
      v23 = &v18[v10];
      v24 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v22 = a2;
    }
    memmove(v23, v22, v24);
    LOBYTE(v11) = std::vector<unsigned char>::_Change_array(a1, v17, v39, v38);
  }
  return (char)v11;
}
