/*
 * XREFs of ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180016F94
 * Callers:
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x180017030 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$emplace_back@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAXAEBK@Z @ 0x180147FB4 (--$emplace_back@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAXAEBK@Z.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x1801A4250 (--$_Insert_range@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@@-$vector@MV-$allocat.c)
 *     ??$emplace_back@M@?$vector@MV?$allocator@M@std@@@std@@QEAAX$$QEAM@Z @ 0x1801A44C8 (--$emplace_back@M@-$vector@MV-$allocator@M@std@@@std@@QEAAX$$QEAM@Z.c)
 *     ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x1801A53AC (-_Reallocate_exactly@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 *     ??$emplace_back@I@?$vector@IV?$allocator@I@std@@@std@@QEAAX$$QEAI@Z @ 0x18021FC04 (--$emplace_back@I@-$vector@IV-$allocator@I@std@@@std@@QEAAX$$QEAI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2, 4uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
