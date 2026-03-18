/*
 * XREFs of ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x180016FFC
 * Callers:
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x180017030 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$emplace_back@I@?$vector@IV?$allocator@I@std@@@std@@QEAAX$$QEAI@Z @ 0x18021FC04 (--$emplace_back@I@-$vector@IV-$allocator@I@std@@@std@@QEAAX$$QEAI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<unsigned int>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax

  v2 = (__int64)(a1[2] - *a1) >> 2;
  v3 = v2 >> 1;
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL - (v2 >> 1) )
    return a2;
  result = v3 + v2;
  if ( v3 + v2 < a2 )
    return a2;
  return result;
}
