/*
 * XREFs of ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAX$$QEAVCDepthSortingLayer@@@Z @ 0x18021F2A8
 * Callers:
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x18021F6B4 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021FA18 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x18021FA68 (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  int v15; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( a1[2] == v2 )
  {
    v6 = v2 - *a1;
    v7 = v6 / 40;
    if ( v6 / 40 == 0x666666666666666LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v8 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v7 + 1, v6);
    v9 = std::_Allocate<std::_Default_allocate_traits<1>>(v8, 0x28uLL);
    v10 = 5 * v7;
    v11 = v9;
    *(_QWORD *)(v9 + 8 * v10) = 0LL;
    *(_QWORD *)(v9 + 8 * v10 + 8) = 0LL;
    *(_QWORD *)(v9 + 8 * v10 + 16) = 0LL;
    *(_QWORD *)(v9 + 8 * v10) = *(_QWORD *)a2;
    *(_QWORD *)(v9 + 8 * v10 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v9 + 8 * v10 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v9 + 8 * v10 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v9 + 8 * v10 + 28) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(v9 + 8 * v10 + 32) = *(_DWORD *)(a2 + 32);
    v12 = a1[1];
    v13 = *a1;
    if ( *a1 != v12 )
    {
      v14 = (_QWORD *)(v9 + 16);
      do
      {
        *(v14 - 2) = 0LL;
        *(v14 - 1) = 0LL;
        *v14 = 0LL;
        *(v14 - 2) = *(_QWORD *)v13;
        *(v14 - 1) = *(_QWORD *)(v13 + 8);
        *v14 = *(_QWORD *)(v13 + 16);
        v14 += 5;
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *((_DWORD *)v14 - 8) = *(_DWORD *)(v13 + 24);
        *((_DWORD *)v14 - 7) = *(_DWORD *)(v13 + 28);
        v15 = *(_DWORD *)(v13 + 32);
        v13 += 40LL;
        *((_DWORD *)v14 - 6) = v15;
      }
      while ( v13 != v12 );
    }
    return std::vector<CDepthSortingLayer>::_Change_array(a1, v11, v7 + 1, v8);
  }
  else
  {
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)v2 = *(_QWORD *)a2;
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v2 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v2 + 28) = *(_DWORD *)(a2 + 28);
    result = *(unsigned int *)(a2 + 32);
    *(_DWORD *)(v2 + 32) = result;
    a1[1] += 40LL;
  }
  return result;
}
