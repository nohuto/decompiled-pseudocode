/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z @ 0x1800B5998
 * Callers:
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800B5FFC (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x1800B800C (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x18016D014 (--$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPE.c)
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x1801A674C (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B2F0C (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@@Z @ 0x1800C3CD0 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@@@YAJPEAVCResource@.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,47>>(a2, a2, &v8);
  v6 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TypeSpecific, 0x68u);
  }
  else if ( v8 )
  {
    a1 = *(double *)(v8 + 56);
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xAAu);
  else
    *a3 = fmin(1.0, fmax(a1, 0.0));
  return (unsigned int)v6;
}
