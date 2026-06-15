/*
 * XREFs of ?ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x1800CCC74
 * Callers:
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x1800CC9B0 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 * Callees:
 *     sinf_0 @ 0x180057F88 (sinf_0.c)
 *     ?ComputeSideFromSideAngleOfOpposititeAngle@@YAMMM@Z @ 0x1800CCFD8 (-ComputeSideFromSideAngleOfOpposititeAngle@@YAMMM@Z.c)
 */

void __fastcall SpatialAudioPositionCalc::ComputeCubicProjectOffsets(
        SpatialAudioPositionCalc *this,
        struct SpatialAudioProjectionOffsets *a2,
        struct StaticObjectProjectionData *a3)
{
  float v5; // xmm6_4
  float v6; // xmm9_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm11_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm6_4

  v5 = *(float *)a3 * 0.5;
  v6 = *((float *)a3 + 1) * 0.5;
  v7 = *((float *)a3 + 2) * 0.5;
  v8 = ComputeSideFromSideAngleOfOpposititeAngle(*((float *)a3 + 9), v5);
  *(float *)a2 = v7;
  v9 = v8;
  v10 = *((float *)a3 + 6);
  *((_DWORD *)a2 + 3) = LODWORD(v7) ^ _xmm;
  *((float *)a2 + 1) = v9;
  *((float *)a2 + 4) = v6;
  *((float *)a2 + 7) = v7;
  *((float *)a2 + 8) = v5;
  *((float *)a2 + 2) = ComputeSideFromSideAngleOfOpposititeAngle(v10, v6);
  *((float *)a2 + 5) = ComputeSideFromSideAngleOfOpposititeAngle(90.0 - *((float *)a3 + 7), v7);
  *((float *)a2 + 6) = ComputeSideFromSideAngleOfOpposititeAngle(180.0 - *((float *)a3 + 8), v6);
  *((float *)a2 + 9) = sinf_0(*((float *)a3 + 10) * 0.017453292) * v9;
  v11 = sinf_0((float)(90.0 - *((float *)a3 + 10)) * 0.017453292);
  v12 = *((float *)a3 + 11);
  *((float *)a2 + 10) = v11 * v9;
  *((float *)a2 + 11) = sinf_0((float)(180.0 - v12) * 0.017453292) * v9;
  *((float *)a2 + 12) = sinf_0((float)(v12 - 90.0) * 0.017453292) * v9;
}
