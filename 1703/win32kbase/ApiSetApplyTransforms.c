/*
 * XREFs of ApiSetApplyTransforms @ 0x1C0139D14
 * Callers:
 *     rimTransformGeometry @ 0x1C0113F28 (rimTransformGeometry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetApplyTransforms(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = IsApplyTransformsSupported();
  if ( (int)result >= 0 )
    return ApplyTransforms(a1, a2, a3, a4, a5);
  return result;
}
