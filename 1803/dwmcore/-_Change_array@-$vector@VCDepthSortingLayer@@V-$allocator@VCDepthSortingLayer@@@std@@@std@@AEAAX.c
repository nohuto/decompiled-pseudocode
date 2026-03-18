/*
 * XREFs of ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x18021FA68
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18021F2A8 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        if ( *(_QWORD *)v4 )
        {
          std::_Deallocate(*(char **)v4, (__int64)(*(_QWORD *)(v4 + 16) - *(_QWORD *)v4) >> 2, 4uLL);
          *(_QWORD *)v4 = 0LL;
          *(_QWORD *)(v4 + 8) = 0LL;
          *(_QWORD *)(v4 + 16) = 0LL;
        }
        v4 += 40LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate((char *)v4, (a1[2] - v4) / 40, 0x28uLL);
  }
  result = 5 * a4;
  a1[1] = a2 + 40 * a3;
  *a1 = a2;
  a1[2] = a2 + 40 * a4;
  return result;
}
