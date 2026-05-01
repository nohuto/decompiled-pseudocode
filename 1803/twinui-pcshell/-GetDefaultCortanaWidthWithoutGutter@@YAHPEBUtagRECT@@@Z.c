/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@@Z @ 0x180185B84
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180092518 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKi.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 344;
  if ( a1->right - a1->left < 1196 )
    v3 = 320;
  v6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::ReportUsageToService(320LL, a2, a3);
  if ( (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x1D, &v6) >= 0 && (v4 = v6) != 0
    || (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x1C, &v6) >= 0 && (v4 = v6) != 0 )
  {
    v3 += v4;
  }
  return v3;
}
