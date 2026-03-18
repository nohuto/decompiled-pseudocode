/*
 * XREFs of ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x18018AF1C
 * Callers:
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18018B2FC (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ??$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18001F470 (--$_Move_unchecked@PEAPEAURecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAURecord@CPr.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x18018B614 (-_Buy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021FA18 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  char *v3; // r14
  size_t v5; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // r10
  char *v12; // rbx
  __int64 result; // rax
  char *v14; // rdi
  void *v15; // rbx
  size_t v16; // r15
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(char **)a1;
  v5 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 40;
  v9 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 40LL;
  if ( v8 > (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 40LL )
  {
    if ( v8 > 0x666666666666666LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v10 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v8, v9);
    if ( v3 )
      std::_Deallocate(v3, v11, 0x28uLL);
    std::vector<CContent::LayoutData>::_Buy(a1, v10);
    v12 = *(char **)a1;
    memmove(*(void **)a1, a2, v5);
    result = (__int64)&v12[v5];
    goto LABEL_9;
  }
  if ( v8 > v9 )
  {
    v14 = &a2[40 * v9];
    std::_Move_unchecked<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(
      a2,
      (__int64)v14,
      v3);
    v15 = *(void **)(a1 + 8);
    v16 = a3 - (_QWORD)v14;
    memmove(v15, v14, v16);
    result = (__int64)v15 + v16;
LABEL_9:
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  std::_Move_unchecked<CProcessAttributionManager::Record * *,CProcessAttributionManager::Record * *>(a2, a3, v3);
  result = 5 * v8;
  *(_QWORD *)(a1 + 8) = &v3[40 * v8];
  return result;
}
