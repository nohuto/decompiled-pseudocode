/*
 * XREFs of ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801C1188
 * Callers:
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1801C09C0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801C0D3C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 * Callees:
 *     <none>
 */

char __fastcall IsNaNOrIsEqualTo(float a1, float a2)
{
  int v2; // eax
  char v3; // cl

  if ( a1 == a2 )
    return 1;
  v2 = _isnan(a1);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
