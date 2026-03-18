/*
 * XREFs of ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800D2434
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800D25A4 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<char>::_Insert_range<char *>(__int64 a1, _BYTE *a2, const void *a3, __int64 a4)
{
  char *v4; // r12
  size_t v5; // rsi
  char v9; // r15
  __int64 v10; // rdi
  size_t v11; // r15
  char *v12; // rdi
  __int64 v13; // rdi
  size_t v14; // r13
  unsigned __int64 v15; // rax
  char *v16; // r12
  char *v17; // rdi
  const void *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]

  v4 = &a2[-*(_QWORD *)a1];
  v5 = a4 - (_QWORD)a3;
  if ( a4 - (_QWORD)a3 == 1 && a2 == *(_BYTE **)(a1 + 8) )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( !v5 )
      return;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( v5 > *(_QWORD *)(a1 + 16) - v10 )
  {
    v13 = v10 - *(_QWORD *)a1;
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL - v13 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v14 = v13 + v5;
    v22 = std::vector<char>::_Calculate_growth(a1, v13 + v5, a3, a4);
    v15 = std::_Allocate<std::_Default_allocate_traits<1>>(v22, 1uLL);
    v16 = &v4[v15];
    v17 = (char *)v15;
    memmove(v16, a3, v5);
    v18 = *(const void **)a1;
    v19 = v17;
    if ( v9 )
    {
      v20 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    }
    else
    {
      memmove(v17, v18, a2 - (_BYTE *)v18);
      v19 = &v16[v5];
      v20 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v18 = a2;
    }
    memmove(v19, v18, v20);
    std::vector<unsigned char>::_Change_array(a1, v17, v14, v22);
  }
  else
  {
    v11 = v10 - (_QWORD)a2;
    if ( v5 < v10 - (__int64)a2 )
    {
      memmove(*(void **)(a1 + 8), (const void *)(v10 - v5), a4 - (_QWORD)a3);
      *(_QWORD *)(a1 + 8) = v5 + v10;
      memmove((void *)(v10 - (v11 - v5)), a2, v11 - v5);
    }
    else
    {
      v12 = &a2[v5];
      memmove(&a2[v5], a2, v11);
      *(_QWORD *)(a1 + 8) = &v12[v11];
    }
    memmove(a2, a3, v5);
  }
}
