/*
 * XREFs of CompDiv @ 0x1C02BD158
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0230120 (bComputeMaxGlyph.c)
 *     bSetXform @ 0x1C0230C60 (bSetXform.c)
 *     fxPtSize @ 0x1C0231260 (fxPtSize.c)
 *     vCheckForSingularXform @ 0x1C0231780 (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C0232898 (vQuantizeXform.c)
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 *     fs__Contour @ 0x1C02BC2C8 (fs__Contour.c)
 *     mth_FixXYMul @ 0x1C02BD740 (mth_FixXYMul.c)
 *     mth_FoldPointSizeResolution @ 0x1C02BD834 (mth_FoldPointSizeResolution.c)
 *     mth_IntelMul @ 0x1C02BD8DC (mth_IntelMul.c)
 *     mth_ReduceMatrix @ 0x1C02BDCA8 (mth_ReduceMatrix.c)
 *     scl_ComputeScaling @ 0x1C02BE5D4 (scl_ComputeScaling.c)
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C02BF124 (scl_RoundCurrentSideBearingPnt.c)
 *     scl_ScaleAdvanceWidth @ 0x1C02BF378 (scl_ScaleAdvanceWidth.c)
 *     scl_ScaleBack @ 0x1C02BF488 (scl_ScaleBack.c)
 *     EvaluateSpline @ 0x1C02BFEA8 (EvaluateSpline.c)
 *     fsc_CheckYReversalInSpline @ 0x1C02C05A0 (fsc_CheckYReversalInSpline.c)
 *     Intersect26Dot6 @ 0x1C02C5958 (Intersect26Dot6.c)
 *     CalcHorizLineSubpix @ 0x1C02CE190 (CalcHorizLineSubpix.c)
 *     CalcVertLineSubpix @ 0x1C02CE1D0 (CalcVertLineSubpix.c)
 *     PhaseShift @ 0x1C02CF9D4 (PhaseShift.c)
 *     itrp_ChangeCvtSlow @ 0x1C02D08C4 (itrp_ChangeCvtSlow.c)
 *     itrp_IP @ 0x1C02D2CC0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02D3690 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C02D3DF0 (itrp_IUP.c)
 *     itrp_MovePoint @ 0x1C02D6CB4 (itrp_MovePoint.c)
 *     itrp_Normalize @ 0x1C02D7070 (itrp_Normalize.c)
 *     itrp_SH_Common @ 0x1C02D9A4C (itrp_SH_Common.c)
 *     itrp_WCVT @ 0x1C02DAEF0 (itrp_WCVT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompDiv(int a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // r9d
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+10h] [rbp+10h]

  v2 = a2;
  v3 = a1 ^ HIDWORD(a2);
  if ( !a1 )
    goto LABEL_2;
  v6 = HIDWORD(a2);
  v7 = abs32(a1);
  if ( a2 < 0 )
  {
    if ( (_DWORD)a2 )
      v6 = ~HIDWORD(a2);
    else
      v6 = -HIDWORD(a2);
    HIDWORD(v9) = v6;
    LODWORD(v9) = -(int)a2;
    v2 = v9;
  }
  if ( v7 > v6 && ((v8 = v2 / v7, v2 % v7 < v7 >> 1) || (LODWORD(v8) = v8 + 1, (_DWORD)v8)) )
  {
    if ( v3 < 0 )
    {
      if ( (v8 & 0x80000000) == 0LL || (_DWORD)v8 == 0x80000000 )
        return (unsigned int)-(int)v8;
      else
        return 0x80000000LL;
    }
    else
    {
      result = 0x7FFFFFFFLL;
      if ( (v8 & 0x80000000) == 0LL )
        return (unsigned int)v8;
    }
  }
  else
  {
LABEL_2:
    result = 0x7FFFFFFFLL;
    if ( v3 < 0 )
      return 0x80000000LL;
  }
  return result;
}
