/*
 * XREFs of _FDtento @ 0x18009F694
 * Callers:
 *     _Stofx @ 0x180097BD0 (_Stofx.c)
 * Callees:
 *     _FXp_getw @ 0x18009F1D4 (_FXp_getw.c)
 *     _FXp_movx @ 0x18009F258 (_FXp_movx.c)
 *     _FXp_mulx @ 0x18009F460 (_FXp_mulx.c)
 *     _FXp_setw @ 0x18009F5E4 (_FXp_setw.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

float __fastcall FDtento(float *a1, int a2, _DWORD *a3)
{
  int v4; // ebx
  float result; // xmm0_4
  float v7[4]; // [rsp+30h] [rbp-68h] BYREF
  float v8[4]; // [rsp+40h] [rbp-58h] BYREF
  char Src[24]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2;
  if ( !a2 || *a1 == 0.0 )
    return FXp_getw(a1, 3);
  if ( a2 <= 0 )
  {
    v4 = -a2;
    FXp_movx(v7, 3, &unk_1800DFB60);
  }
  else
  {
    FXp_setw((__int64)v7, 3, 10.0);
  }
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      FXp_mulx(a1, 3, v7, 3, Src);
    v4 >>= 1;
    if ( !v4 )
      break;
    FXp_movx(v8, 3, v7);
    FXp_mulx(v7, 3, v8, 3, Src);
  }
  result = FXp_getw(a1, 3);
  if ( result == 0.0 || result == FInf._Float || result == COERCE_FLOAT(LODWORD(FInf._Float) ^ _xmm) )
  {
    *_errno() = 34;
    if ( a3 )
      *a3 |= 1u;
  }
  return result;
}
