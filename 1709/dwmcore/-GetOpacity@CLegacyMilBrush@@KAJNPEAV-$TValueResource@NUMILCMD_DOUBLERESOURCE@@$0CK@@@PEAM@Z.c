/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@PEAM@Z @ 0x18007D6CC
 * Callers:
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18007CD40 (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x18007D48C (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x18014588C (--$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPE.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x18018182C (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@@Z @ 0x1800BDD48 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CK@@@@@YAJPEAVCResource@.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  signed int TypeSpecific; // eax
  signed int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,42>>(a2, a2, &v8);
  v6 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TypeSpecific, 0x68u);
  }
  else if ( v8 )
  {
    a1 = *(double *)(v8 + 56);
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xAAu);
  else
    *a3 = fmin(1.0, fmax(a1, 0.0));
  return (unsigned int)v6;
}
