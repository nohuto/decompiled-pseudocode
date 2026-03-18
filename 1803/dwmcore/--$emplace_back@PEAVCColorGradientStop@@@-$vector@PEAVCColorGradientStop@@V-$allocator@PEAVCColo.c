/*
 * XREFs of ??$emplace_back@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAX$$QEAPEAVCColorGradientStop@@@Z @ 0x180012DB4
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18001245C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B34C4 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEAAXQEAPEAVCColorGradientStop@@_K1@Z @ 0x180012D4C (-_Change_array@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@.c)
 *     ?_Calculate_growth@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@AEBA_K_K@Z @ 0x1800209D0 (-_Calculate_growth@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<CColorGradientStop *>::emplace_back<CColorGradientStop *>(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 v5; // r14
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 8);
  if ( *(__int64 **)(a1 + 16) == v2 )
  {
    v5 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = std::vector<CColorGradientStop *>::_Calculate_growth(a1, v5 + 1);
    v7 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v6, 8LL);
    v7[v5] = *a2;
    memmove(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<CColorGradientStop *>::_Change_array(a1, (__int64)v7, v5 + 1, v6);
  }
  else
  {
    result = *a2;
    *v2 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
