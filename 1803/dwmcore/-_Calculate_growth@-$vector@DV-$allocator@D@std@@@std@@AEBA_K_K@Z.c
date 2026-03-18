/*
 * XREFs of ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18000FF4C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800D2434 (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$emplace_back@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAXAEBE@Z @ 0x1800D2608 (--$emplace_back@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAXAEBE@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x18013E930 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??$_Insert_range@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180208720 (--$_Insert_range@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@@-$vector@EV-$allocat.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<char>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = a1[2] - *a1;
  v3 = v2 >> 1;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
