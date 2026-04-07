/*
 * XREFs of ?InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z @ 0x180098A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFinalValue@CCubicBezierInterpolator@@UEAAJPEANI@Z @ 0x180098760 (-GetFinalValue@CCubicBezierInterpolator@@UEAAJPEANI@Z.c)
 */

__int64 __fastcall CCubicBezierInterpolator::InterpolateValue(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  unsigned int v4; // edx
  float v7; // xmm3_4
  __int64 v8; // r8
  unsigned int v9; // eax
  float *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // r8
  __int64 v16; // rcx

  v4 = 0;
  v7 = a2 / *((double *)this + 1);
  if ( v7 < 1.0 )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = 1;
    v10 = (float *)(v8 + 8);
    do
    {
      if ( *v10 >= v7 )
        break;
      ++v9;
      v10 += 2;
    }
    while ( v9 < 0x64 );
    v11 = v9;
    v12 = v9 - 1;
    v13 = *(float *)(v8 + 8 * v11) - *(float *)(v8 + 8 * v12);
    v14 = *(float *)(v8 + 8 * v11 + 4);
    if ( v13 != 0.0 )
      v14 = (float)((float)((float)(v7 - *(float *)(v8 + 8 * v12)) * (float)(v14 - *(float *)(v8 + 8 * v12 + 4))) / v13)
          + *(float *)(v8 + 8 * v12 + 4);
    if ( a4 )
    {
      v15 = a4;
      v16 = 0LL;
      do
      {
        a3[v16] = v14 * *(double *)(v16 * 8 + *((_QWORD *)this + 3))
                + (float)(1.0 - v14) * *(double *)(*((_QWORD *)this + 2) + v16 * 8);
        ++v16;
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    return (unsigned int)CCubicBezierInterpolator::GetFinalValue(this, a3, a4);
  }
  return v4;
}
