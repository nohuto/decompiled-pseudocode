/*
 * XREFs of PixelAligningFactor @ 0x180084668
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PixelAligningFactor(double a1, int a2, double *a3, double *a4)
{
  double v6; // xmm6_8
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v9; // xmm3_4
  double v10; // xmm2_8

  v6 = (double)a2 * a1;
  v7 = modf(v6, a3);
  v8 = v7;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 <= 0.0000011920929 )
  {
    v10 = v7;
  }
  else
  {
    if ( v7 > 0.4900000095367432 )
      *a3 = *a3 + 1.0;
    v10 = 1.0 - v7;
  }
  *a4 = v10 / v6;
}
