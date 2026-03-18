/*
 * XREFs of ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021FA18
 * Callers:
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x18018AF1C (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x18018B07C (--$_Insert_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 *     ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700 (--$emplace_back@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDat.c)
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18021F2A8 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<CContent::LayoutData>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v3 = (a1[2] - *a1) / 40LL;
  v4 = v3 >> 1;
  if ( v3 > 0x666666666666666LL - (v3 >> 1) )
    return a2;
  result = v4 + v3;
  if ( v4 + v3 < a2 )
    return a2;
  return result;
}
