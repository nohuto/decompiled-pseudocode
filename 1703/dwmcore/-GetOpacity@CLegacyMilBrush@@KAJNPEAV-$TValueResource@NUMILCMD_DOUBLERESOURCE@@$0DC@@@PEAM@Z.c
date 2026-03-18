/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z @ 0x18007D3BC
 * Callers:
 *     ?GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004BBC0 (-GetBrushRealizationInternal@CSolidColorLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVC.c)
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18007C8D8 (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 *     ??$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPEBVCLinearGradientLegacyMilBrush@@@Z @ 0x180152DF8 (--$IsConstantOpaqueInternal@$$CBVCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KA_NPE.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x18017B5B0 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$GetTypeSpecificResource@V?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@@@YAJPEAVCResource@@W4MIL_RESOURCE_TYPE@@PEAPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@@Z @ 0x1800C6158 (--$GetTypeSpecificResource@V-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@@@YAJPEAVCResource@.c)
 */

__int64 __fastcall CLegacyMilBrush::GetOpacity(double a1, __int64 a2, float *a3)
{
  int TypeSpecific; // eax
  int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  TypeSpecific = GetTypeSpecificResource<TValueResource<double,MILCMD_DOUBLERESOURCE,50>>(a2, a2, &v8);
  v6 = TypeSpecific;
  if ( TypeSpecific < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TypeSpecific, 0x68u);
  }
  else if ( v8 )
  {
    a1 = *(double *)(v8 + 56);
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xAAu);
  else
    *a3 = fmin(1.0, fmax(a1, 0.0));
  return (unsigned int)v6;
}
