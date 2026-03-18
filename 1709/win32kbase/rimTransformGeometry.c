/*
 * XREFs of rimTransformGeometry @ 0x1C01129FC
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C01120A8 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMApplyTransforms @ 0x1C0105998 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C0110370 (rimComputeHimetricGeometry.c)
 *     RIMQuirkApplyTransforms @ 0x1C0115AB4 (RIMQuirkApplyTransforms.c)
 */

__int64 __fastcall rimTransformGeometry(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5, _DWORD *a6)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) == 7 )
  {
    result = IsApplyPTPTranslationSupported();
    if ( (int)result >= 0 )
      return ApplyPTPTranslation(a1, a4);
  }
  else
  {
    if ( a2 )
      RIMQuirkApplyTransforms(a1, a2, (_DWORD)a4, (_DWORD)a4, (__int64)a6);
    else
      RIMApplyTransforms(a1, a3, a4, a5, a6);
    return rimComputeHimetricGeometry(a1, (__int64)a4, (__int64)(a4 + 8));
  }
  return result;
}
