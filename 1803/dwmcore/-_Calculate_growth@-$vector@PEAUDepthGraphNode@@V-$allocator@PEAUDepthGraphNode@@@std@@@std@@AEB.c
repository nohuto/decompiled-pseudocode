/*
 * XREFs of ?_Calculate_growth@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@AEBA_K_K@Z @ 0x1801FCF38
 * Callers:
 *     ??$emplace_back@PEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAX$$QEAPEAUDepthGraphNode@@@Z @ 0x18021FCC0 (--$emplace_back@PEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthGraphNod.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<DepthGraphNode *>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
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
