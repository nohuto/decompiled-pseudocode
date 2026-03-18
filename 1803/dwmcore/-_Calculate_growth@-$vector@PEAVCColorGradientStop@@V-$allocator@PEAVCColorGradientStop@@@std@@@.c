/*
 * XREFs of ?_Calculate_growth@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEBA_K_K@Z @ 0x1800209D0
 * Callers:
 *     ??$_Insert_range@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1Uforward_iterator_tag@1@@Z @ 0x180012BE0 (--$_Insert_range@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@@-.c)
 *     ??$emplace_back@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAX$$QEAPEAVCColorGradientStop@@@Z @ 0x180012DB4 (--$emplace_back@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColo.c)
 *     ??$emplace@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@@1@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x180020890 (--$emplace@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEAUProcessAttr.c)
 *     ??$emplace_back@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAXAEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x180145C64 (--$emplace_back@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEAUProces.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CColorGradientStop *>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 3;
  v3 = v2 >> 1;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
