/*
 * XREFs of ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1802A0378
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x18029F6DC (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x18029F950 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x18029FC04 (-_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z.c)
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x18029FD10 (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 *     ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x1802A0014 (-_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV-$CCoSimpleArray@VLayoutItem@GridLayou.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1802A00D8 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GridLayoutFactory::s_GetTotalWidthForHeight(__int64 a1, int a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v10; // rsi
  int v12; // eax

  v4 = *(_QWORD **)a1;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)a1 + 16 * v6;
  if ( *(_QWORD *)a1 != v10 )
  {
    do
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 72LL))(*v4, a3);
      if ( a4 > 0 && v12 >= a4 )
        v12 = a4;
      v5 += v12;
      v4 += 2;
    }
    while ( v4 != (_QWORD *)v10 );
    v6 = *(_QWORD *)(a1 + 8);
  }
  if ( v6 > 1 )
    v5 += a2 * (v6 - 1);
  return v5;
}
