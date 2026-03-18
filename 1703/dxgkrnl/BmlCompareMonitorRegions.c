/*
 * XREFs of BmlCompareMonitorRegions @ 0x1C01DEFD8
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00F406C (BmlCompareTargetModes.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000C388 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     BmlCompareModeRegions @ 0x1C00F4894 (BmlCompareModeRegions.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00F512C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareMonitorRegions(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int v9; // r9d

  if ( a1 == a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  result = BmlCompareModeRegions(a1 + 21, a2 + 21);
  if ( !(_DWORD)result )
  {
    DMMVIDEOSIGNALMODE::DivideAndRound(a2[23], a2[24]);
    v8 = DMMVIDEOSIGNALMODE::DivideAndRound(a1[23], a1[24]);
    return BmlCompareValues<unsigned int>(v8, v9);
  }
  return result;
}
