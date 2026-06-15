/*
 * XREFs of ?ComputeSideFromSideAngleOfOpposititeAngle@@YAMMM@Z @ 0x1800CCFD8
 * Callers:
 *     ?ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x1800CCC74 (-ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PE.c)
 * Callees:
 *     sinf_0 @ 0x180057F88 (sinf_0.c)
 */

float __fastcall ComputeSideFromSideAngleOfOpposititeAngle(float a1, float a2)
{
  float v3; // xmm9_4

  v3 = sinf_0(a1 * 0.017453292) * a2;
  return v3 / sinf_0((float)(90.0 - a1) * 0.017453292);
}
