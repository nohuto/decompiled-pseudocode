/*
 * XREFs of ??$emplace_back@M@?$vector@MV?$allocator@M@std@@@std@@QEAAX$$QEAM@Z @ 0x1801A44C8
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4B54 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180016F94 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801A5378 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 */

__int64 __fastcall std::vector<float>::emplace_back<float>(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_DWORD **)(a1 + 8);
  if ( *(_DWORD **)(a1 + 16) == v2 )
  {
    v6 = ((__int64)v2 - *(_QWORD *)a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = std::vector<float>::_Calculate_growth(a1, v6 + 1);
    v8 = (_DWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v7, 4uLL);
    v8[v6] = *a2;
    memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<unsigned int>::_Change_array(a1, (__int64)v8, v6 + 1, v7);
  }
  else
  {
    result = (unsigned int)*a2;
    *(_QWORD *)(a1 + 8) += 4LL;
    *v2 = result;
  }
  return result;
}
