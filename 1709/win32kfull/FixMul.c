/*
 * XREFs of FixMul @ 0x1C02B6FFC
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C022F1B0 (lQueryDEVICEMETRICS.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0230FA0 (vFillGLYPHDATA_ErrRecover.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0231434 (vGetNotionalGlyphMetrics.c)
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 *     bSetXform @ 0x1C02321CC (bSetXform.c)
 *     vCheckForSingularXform @ 0x1C0232CF0 (vCheckForSingularXform.c)
 *     vCalcXformVertical @ 0x1C0233898 (vCalcXformVertical.c)
 *     vQuantizeXform @ 0x1C0233DF8 (vQuantizeXform.c)
 *     mth_FixXYMul @ 0x1C02B7548 (mth_FixXYMul.c)
 *     mth_FoldPointSizeResolution @ 0x1C02B7630 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02B76D8 (mth_IntelMul.c)
 *     mth_MxConcat2x2 @ 0x1C02B78A0 (mth_MxConcat2x2.c)
 *     mth_Non90DegreeTransformation @ 0x1C02B7950 (mth_Non90DegreeTransformation.c)
 *     InvokeGlobalGSScale @ 0x1C02B7B40 (InvokeGlobalGSScale.c)
 *     scl_CalcComponentOffset @ 0x1C02B7E88 (scl_CalcComponentOffset.c)
 *     scl_InitializeScaling @ 0x1C02B8724 (scl_InitializeScaling.c)
 *     scl_Scale @ 0x1C02B90AC (scl_Scale.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02B917C (scl_ScaleAdvanceWidth.c)
 *     scl_ScaleFromFixedFUnits @ 0x1C02B9704 (scl_ScaleFromFixedFUnits.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C02B99B0 (scl_ScaleUpToSubPixelOverscale.c)
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 *     InvokeGetCVTEntry @ 0x1C02C92E0 (InvokeGetCVTEntry.c)
 *     itrp_CheckSingleWidth @ 0x1C02CA66C (itrp_CheckSingleWidth.c)
 *     itrp_DeltaEngine @ 0x1C02CAB5C (itrp_DeltaEngine.c)
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 *     itrp_IUP @ 0x1C02CDBA0 (itrp_IUP.c)
 *     itrp_MPPEM @ 0x1C02D0490 (itrp_MPPEM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixMul(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  bool v4; // sf
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // edx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  v3 = 1;
  v4 = a1 < 0;
  if ( a1 > 0 )
  {
    if ( a2 < 0 )
    {
LABEL_8:
      v2 = 1;
      goto LABEL_9;
    }
    v4 = a1 < 0;
  }
  if ( v4 && a2 > 0 )
    goto LABEL_8;
LABEL_9:
  v5 = a2 * (__int64)a1;
  if ( (v5 & 0x8000) == 0 || (!v2 ? (v6 = 1) : (v6 = v5 & 0x7FFF), !v6) )
    v3 = 0;
  v7 = HIDWORD(v5);
  v8 = v3 + (v5 >> 16);
  if ( (v7 & 0xFFFF0000) != 0 )
  {
    v9 = 0x80000000;
    if ( (v7 & 0xFFFF0000) == 0xFFFF0000 )
    {
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return 0x80000000 - ((v7 & 0x80000000) != 0LL);
    }
  }
  else
  {
    v9 = 0x7FFFFFFF;
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  return v9;
}
