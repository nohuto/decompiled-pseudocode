/*
 * XREFs of GetInverse @ 0x18020DEE0
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18020EB44 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInverse(float *a1, __int64 a2)
{
  float v2; // xmm3_4
  __int64 result; // rax

  if ( !a2 )
    return 2147942487LL;
  if ( a1 == (float *)a2 )
    return 2147942487LL;
  v2 = (float)(a1[3] * *a1) - (float)(a1[1] * a1[2]);
  if ( v2 == 0.0 )
    return 2147942487LL;
  result = 0LL;
  *(float *)a2 = a1[3] / v2;
  *(_DWORD *)(a2 + 4) = COERCE_UNSIGNED_INT(a1[1] / v2) ^ _xmm;
  *(_DWORD *)(a2 + 8) = COERCE_UNSIGNED_INT(a1[2] / v2) ^ _xmm;
  *(float *)(a2 + 12) = *a1 / v2;
  *(float *)(a2 + 16) = (float)((float)(a1[5] * a1[2]) - (float)(a1[4] * a1[3])) / v2;
  *(float *)(a2 + 20) = (float)((float)(a1[4] * a1[1]) - (float)(a1[5] * *a1)) / v2;
  return result;
}
