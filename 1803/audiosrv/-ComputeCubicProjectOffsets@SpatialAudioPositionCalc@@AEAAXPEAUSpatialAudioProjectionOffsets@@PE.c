/*
 * XREFs of ?ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x18005D4DC
 * Callers:
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x18005CFA0 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 * Callees:
 *     sinf_0 @ 0x180065797 (sinf_0.c)
 */

void __fastcall SpatialAudioPositionCalc::ComputeCubicProjectOffsets(
        SpatialAudioPositionCalc *this,
        struct SpatialAudioProjectionOffsets *a2,
        struct StaticObjectProjectionData *a3)
{
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm6_4
  float v8; // xmm12_4
  float v9; // xmm12_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm6_4

  v5 = *((float *)a3 + 1) * 0.5;
  v6 = *((float *)a3 + 2) * 0.5;
  v7 = *(float *)a3 * 0.5;
  v8 = sinf_0(*((float *)a3 + 9) * 0.017453292) * v7;
  v9 = v8 / sinf_0((float)(90.0 - *((float *)a3 + 9)) * 0.017453292);
  *(float *)a2 = v6;
  *((_DWORD *)a2 + 3) = LODWORD(v6) ^ _xmm;
  v10 = *((float *)a3 + 6);
  *((float *)a2 + 1) = v9;
  *((float *)a2 + 4) = v5;
  *((float *)a2 + 7) = v6;
  *((float *)a2 + 8) = v7;
  v11 = sinf_0(v10 * 0.017453292) * v5;
  *((float *)a2 + 2) = v11 / sinf_0((float)(90.0 - *((float *)a3 + 6)) * 0.017453292);
  v12 = 90.0 - *((float *)a3 + 7);
  v13 = sinf_0(v12 * 0.017453292) * v6;
  v14 = sinf_0((float)(90.0 - v12) * 0.017453292);
  v15 = 180.0 - *((float *)a3 + 8);
  *((float *)a2 + 5) = v13 / v14;
  v16 = sinf_0(v15 * 0.017453292) * v5;
  v17 = v16 / sinf_0((float)(90.0 - v15) * 0.017453292);
  v18 = *((float *)a3 + 10) * 0.017453292;
  *((float *)a2 + 6) = v17;
  *((float *)a2 + 9) = sinf_0(v18) * v9;
  v19 = sinf_0((float)(90.0 - *((float *)a3 + 10)) * 0.017453292);
  v20 = *((float *)a3 + 11);
  *((float *)a2 + 10) = v19 * v9;
  *((float *)a2 + 11) = sinf_0((float)(180.0 - v20) * 0.017453292) * v9;
  *((float *)a2 + 12) = sinf_0((float)(v20 - 90.0) * 0.017453292) * v9;
}
