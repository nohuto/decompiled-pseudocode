/*
 * XREFs of ??$emplace_back@PEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAX$$QEAPEAUDepthGraphNode@@@Z @ 0x18021FCC0
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18021FF24 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001F26C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@AEBA_K_K@Z @ 0x1801FCF38 (-_Calculate_growth@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthGraphNode@@@std@@@std@@AEB.c)
 */

__int64 __fastcall std::vector<DepthGraphNode *>::emplace_back<DepthGraphNode *>(const void **a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rbx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)a1[1];
  if ( a1[2] == v2 )
  {
    v6 = ((char *)v2 - (_BYTE *)*a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = std::vector<DepthGraphNode *>::_Calculate_growth(a1, v6 + 1);
    v8 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v7, 8uLL);
    v8[v6] = *a2;
    memmove(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    return std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v8, v6 + 1, v7);
  }
  else
  {
    result = *a2;
    *v2 = *a2;
    a1[1] = (char *)a1[1] + 8;
  }
  return result;
}
