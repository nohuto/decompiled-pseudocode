/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800D25A4
 * Callers:
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800D2434 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$emplace_back@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAXAEBE@Z @ 0x1800D2608 (--$emplace_back@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAXAEBE@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18013E930 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180208720 (--$_Insert_range@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@@-$vector@EV-$allocat.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1802097B8 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, *(_QWORD *)(a1 + 16) - (_QWORD)v6, 1uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + a3;
  result = a2 + a4;
  *(_QWORD *)(a1 + 16) = a2 + a4;
  return result;
}
