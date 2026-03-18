/*
 * XREFs of ?_Change_array@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXQEAPEAVCColorGradientStop@@_K1@Z @ 0x180012D4C
 * Callers:
 *     ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180012BE0 (--$_Insert_range@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@@-.c)
 *     ??$emplace_back@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAX$$QEAPEAVCColorGradientStop@@@Z @ 0x180012DB4 (--$emplace_back@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColo.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<CColorGradientStop *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3, 8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
