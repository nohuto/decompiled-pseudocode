/*
 * XREFs of _AreStartTilesTooBigAtScaleFactor @ 0x1800352D4
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180035188 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     MulDiv_0 @ 0x180045B15 (MulDiv_0.c)
 */

bool __fastcall AreStartTilesTooBigAtScaleFactor(int *a1)
{
  int v2; // edi
  bool result; // al
  float v4; // xmm1_4
  float v5; // xmm0_4

  v2 = (a1[10] + a1[11]) / 2;
  result = 1;
  if ( v2 )
  {
    v4 = (float)MulDiv_0(150, a1[1], 100) / (float)v2;
    if ( (float)((float)a1[16] / 10.0) >= 28.0 )
      v5 = FLOAT_1_259843;
    else
      v5 = FLOAT_1_1538;
    return v4 > v5;
  }
  return result;
}
