/*
 * XREFs of ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x180017030
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CHWCallbackRenderer@@QEAAXPEAVCHwLightCollectionBuffer@@I@Z @ 0x18013DCAC (-SetLightingCollection@CHWCallbackRenderer@@QEAAXPEAVCHwLightCollectionBuffer@@I@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x18021FE88 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180016F94 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x180016FFC (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<unsigned int>::emplace_back<unsigned int const &>(const void **a1, _DWORD *a2)
{
  char *v2; // r14
  __int64 result; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  _DWORD *v8; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)a1[1];
  if ( a1[2] == v2 )
  {
    v6 = (v2 - (_BYTE *)*a1) >> 2;
    if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = std::vector<unsigned int>::_Calculate_growth(a1, v6 + 1);
    v8 = (_DWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v7, 4LL);
    v8[v6] = *a2;
    memmove(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    return std::vector<unsigned int>::_Change_array((__int64)a1, (__int64)v8, v6 + 1, v7);
  }
  else
  {
    result = (unsigned int)*a2;
    *(_DWORD *)v2 = result;
    a1[1] = (char *)a1[1] + 4;
  }
  return result;
}
