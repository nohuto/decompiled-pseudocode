/*
 * XREFs of ??$emplace_back@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEBULayoutData@CContent@@@Z @ 0x180198700
 * Callers:
 *     ?GetTextureMemoryLayoutData@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180198A40 (-GetTextureMemoryLayoutData@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18019F100 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801A58D0 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x18018B684 (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18021FA18 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 */

void __fastcall std::vector<CContent::LayoutData>::emplace_back<CContent::LayoutData const &>(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v2 )
  {
    v5 = v2 - *(_QWORD *)a1;
    v6 = v5 / 40;
    if ( v5 / 40 == 0x666666666666666LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v6 + 1, v5);
    v8 = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v7, 0x28uLL);
    v9 = 5 * v6;
    v10 = (__int64)v8;
    *(_OWORD *)&v8[v9] = *(_OWORD *)a2;
    *(_OWORD *)&v8[v9 + 2] = *(_OWORD *)(a2 + 16);
    v8[v9 + 4] = *(_QWORD *)(a2 + 32);
    memmove(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    std::vector<CContent::LayoutData>::_Change_array(a1, v10, v6 + 1, v7);
  }
  else
  {
    *(_OWORD *)v2 = *(_OWORD *)a2;
    *(_OWORD *)(v2 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 8) += 40LL;
  }
}
