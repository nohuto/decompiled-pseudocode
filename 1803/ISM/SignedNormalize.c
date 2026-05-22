/*
 * XREFs of SignedNormalize @ 0x180031D4C
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall SignedNormalize(float a1, float a2, double a3)
{
  float v4; // xmm4_4
  __int128 v5; // xmm1

  if ( a1 >= 0.0 )
    v4 = FLOAT_1_0;
  else
    v4 = FLOAT_N1_0;
  v5 = 0LL;
  *(float *)&a3 = *(float *)&a3 - a2;
  *(float *)&v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  *(float *)&v5 = *(float *)&v5 - a2;
  if ( *(float *)&a3 <= fmaxf(*(float *)&v5, 0.0) )
  {
    v5 = *(_OWORD *)&a3;
  }
  else if ( *(float *)&v5 <= 0.0 )
  {
    v5 = 0LL;
  }
  *(float *)&v5 = (float)(*(float *)&v5 / *(float *)&a3) * v4;
  return (__m128)v5;
}
