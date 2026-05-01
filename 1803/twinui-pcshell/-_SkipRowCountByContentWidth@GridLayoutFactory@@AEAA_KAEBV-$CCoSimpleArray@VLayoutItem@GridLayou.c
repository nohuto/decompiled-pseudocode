/*
 * XREFs of ?_SkipRowCountByContentWidth@GridLayoutFactory@@AEAA_KAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@@Z @ 0x1802A0014
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x18029F6DC (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     _o_ceil_0 @ 0x1800991A2 (_o_ceil_0.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x180282078 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1802A0378 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

unsigned __int64 __fastcall GridLayoutFactory::_SkipRowCountByContentWidth(_DWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r10
  double v7; // xmm0_8
  double v8; // xmm0_8
  unsigned __int64 v9; // rcx

  if ( !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v4 = ThumbnailHeight::GetForScreenHeight((ThumbnailHeight *)(a1 + 18), a1[129]);
  v7 = (double)(int)GridLayoutFactory::s_GetTotalWidthForHeight(
                      v6,
                      0LL,
                      (unsigned int)(a1[29] + a1[38] + a1[39] + a1[42] + a1[43] + v4),
                      v5)
     / (double)(a1[132] - a1[130]);
  o_ceil_0();
  v8 = v7 - 1.0;
  v9 = 0LL;
  if ( v8 >= 9.223372036854776e18 )
  {
    v8 = v8 - 9.223372036854776e18;
    if ( v8 < 9.223372036854776e18 )
      v9 = 0x8000000000000000uLL;
  }
  return v9 + (unsigned int)(int)v8;
}
