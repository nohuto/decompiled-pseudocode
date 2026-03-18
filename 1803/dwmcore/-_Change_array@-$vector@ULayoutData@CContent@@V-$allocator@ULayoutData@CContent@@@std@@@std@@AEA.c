/*
 * XREFs of ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x18018B684
 * Callers:
 *     ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x18018B07C (--$_Insert_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700 (--$emplace_back@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDat.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 40LL, 0x28uLL);
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
