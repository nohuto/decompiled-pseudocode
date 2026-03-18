/*
 * XREFs of ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x18018B07C
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18018B28C (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x18018B684 (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021FA18 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 */

void *__fastcall std::vector<CContent::LayoutData>::_Insert_range<CContent::LayoutData *>(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v5; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  void *result; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  char *v16; // rdi
  char *v17; // rcx
  char *v18; // rdx
  size_t v19; // r8
  size_t v20; // r15
  __int64 v21; // r12
  const void *retaddr; // [rsp+58h] [rbp+0h]
  char v23; // [rsp+60h] [rbp+8h]

  v5 = a4 - (_QWORD)a3;
  v8 = (__int64)&a2[-*(_QWORD *)a1];
  v23 = 1;
  v9 = (a4 - (__int64)a3) / 40;
  result = (void *)((unsigned __int64)((unsigned __int128)(v8 * (__int128)0x6666666666666667LL) >> 64) >> 63);
  v11 = v8 / 40;
  if ( v9 == 1 && a2 == *(char **)(a1 + 8) || (v23 = 0, v9) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v9 <= (*(_QWORD *)(a1 + 16) - v12) / 40 )
    {
      v20 = v12 - (_QWORD)a2;
      v21 = 40 * v9;
      if ( v9 >= (v12 - (__int64)a2) / 40 )
      {
        memmove(&a2[v21], a2, v20);
        *(_QWORD *)(a1 + 8) = &a2[v21 + v20];
      }
      else
      {
        memmove(*(void **)(a1 + 8), (const void *)(v12 - v21), 40 * v9);
        *(_QWORD *)(a1 + 8) = v21 + v12;
        memmove(&a2[40 * v9], a2, v12 + -40LL * v9 - (_QWORD)a2);
      }
      return memmove(a2, a3, v5);
    }
    else
    {
      v13 = (v12 - *(_QWORD *)a1) / 40;
      if ( v9 > 0x666666666666666LL - v13 )
        ModuleFailFastForHRESULT(-2147483637, retaddr);
      v14 = v13 + v9;
      v15 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v13 + v9, 1LL);
      v16 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v15, 0x28uLL);
      memmove(&v16[40 * v11], a3, v5);
      v17 = v16;
      v18 = *(char **)a1;
      if ( v23 )
      {
        v19 = *(_QWORD *)(a1 + 8) - (_QWORD)v18;
      }
      else
      {
        memmove(v16, v18, (size_t)&a2[-*(_QWORD *)a1]);
        v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v17 = &v16[40 * v11 + 40 * v9];
        v18 = a2;
      }
      memmove(v17, v18, v19);
      return (void *)std::vector<CContent::LayoutData>::_Change_array(a1, v16, v14, v15);
    }
  }
  return result;
}
