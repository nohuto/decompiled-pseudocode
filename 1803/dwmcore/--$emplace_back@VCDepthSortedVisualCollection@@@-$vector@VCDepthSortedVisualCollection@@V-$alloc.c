/*
 * XREFs of ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAX$$QEAVCDepthSortedVisualCollection@@@Z @ 0x180212190
 * Callers:
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1802124C0 (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x18021250C (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::emplace_back<CDepthSortedVisualCollection>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r11
  _QWORD *v14; // r9
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 56;
    if ( v7 == 0x492492492492492LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = (v4 - *a1) / 56;
    v9 = v8 >> 1;
    if ( v8 <= 0x492492492492492LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x38uLL);
    v12 = 56 * v7;
    *(_QWORD *)(v12 + v11) = 0LL;
    *(_QWORD *)(v12 + v11 + 8) = 0LL;
    *(_QWORD *)(v12 + v11 + 16) = 0LL;
    *(_QWORD *)(v12 + v11) = *(_QWORD *)a2;
    *(_QWORD *)(v12 + v11 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v12 + v11 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v12 + v11 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)(v12 + v11 + 32) = 0LL;
    *(_QWORD *)(v12 + v11 + 40) = 0LL;
    *(_QWORD *)(v12 + v11 + 48) = 0LL;
    *(_QWORD *)(v12 + v11 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v12 + v11 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v12 + v11 + 48) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    v13 = (_QWORD *)a1[1];
    v14 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != v13 )
    {
      v15 = v14 + 6;
      v16 = (_QWORD *)(v11 + 48);
      do
      {
        *(v16 - 6) = 0LL;
        *(v16 - 5) = 0LL;
        *(v16 - 4) = 0LL;
        *(v16 - 6) = *v14;
        *(v16 - 5) = *(v15 - 5);
        *(v16 - 4) = *(v15 - 4);
        *v14 = 0LL;
        v14 += 7;
        *(v15 - 5) = 0LL;
        *(v15 - 4) = 0LL;
        *((_DWORD *)v16 - 6) = *((_DWORD *)v15 - 6);
        *(v16 - 2) = 0LL;
        *(v16 - 1) = 0LL;
        *v16 = 0LL;
        *(v16 - 2) = *(v15 - 2);
        *(v16 - 1) = *(v15 - 1);
        *v16 = *v15;
        v16 += 7;
        *(v15 - 2) = 0LL;
        *(v15 - 1) = 0LL;
        *v15 = 0LL;
        v15 += 7;
      }
      while ( v14 != v13 );
    }
    return std::vector<CDepthSortedVisualCollection>::_Change_array(a1, v11, v7 + 1, v10);
  }
  else
  {
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(a2 + 40);
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(v5 + 48) = result;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    a1[1] += 56LL;
  }
  return result;
}
